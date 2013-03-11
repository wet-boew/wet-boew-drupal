<?php

/**
 * @file
 * Plugin to handle the 'querypath_scrape' content type which allows the
 * pane to be filled with content from an external data source using QueryPath.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Querypath Scrape'),
  'description' => t('This pane will leverage Querypath to parse data from a remote source using CSS3 Selectors.'),
  'content_types' => array('querypath_scrape'),
  'category' => t('WET-BOEW'),
  'render callback' => 'wetkit_core_querypath_scrape_content_type_render',
  'edit form' => 'wetkit_core_querypath_scrape_edit_form',
  'single' => TRUE,
);

/**
 * Output function for the 'querypath_scrape' content type.
 */
function wetkit_core_querypath_scrape_content_type_render($subtype, $conf, $panel_args) {
  $pane = new stdClass();
  $markup = '';

  try {
    // Include Querypath.
    require_once libraries_get_path('querypath', FALSE) . '/src/qp.php';

    $parser = 'html';
    if ($conf['querypath_scrape_general_settings']['querypath_parser'] == 0) {
      $parser = 'html';
    }
    else {
      $parser = 'xml';
    }

    $qp_options = array(
      'strip_low_ascii' => FALSE,
      'convert_from_encoding' => 'auto',
      'convert_to_encoding' => 'utf-8',
      'use_parser' => $parser,
    );
    $qp_scrape = htmlqp($conf['querypath_scrape_general_settings']['url'], NULL, $qp_options);

    // Remove DOM elements specified in edit form using CSS3 Selectors.
    $elements_to_remove = array();
    unset($conf['querypath_scrape_remove']['wetkit_core_qp_rm_add_button']);
    unset($conf['querypath_scrape_remove']['wetkit_core_qp_rm_remove_button']);
    foreach ($conf['querypath_scrape_remove'] as $item) {
      if (!empty($item['querypath_elements_remove'])) {
        array_push($elements_to_remove, $item['querypath_elements_remove']);
      }
    }
    if (!empty($elements_to_remove)) {
      _querypath_scrape_removeDOM($qp_scrape, $elements_to_remove);
    }

    // Retrieve DOM elements specified in edit form using CSS3 Selectors.
    $elements_to_add = array();
    unset($conf['querypath_scrape_get']['wetkit_core_qp_add_add_button']);
    unset($conf['querypath_scrape_get']['wetkit_core_qp_add_remove_button']);
    foreach ($conf['querypath_scrape_get'] as $item) {
      if (!empty($item['querypath_elements_get'])) {
        array_push($elements_to_add, $item['querypath_elements_get']);
      }
    }
    if (isset($elements_to_remove)) {
      $html = _querypath_scrape_getDOM($qp_scrape, $elements_to_add);
      $markup = $html;
    }
  }
  catch (Exception $e) {
    drupal_set_message(t('Error: @error', array('@error' => $e->getMessage())), 'status');
  }

  $pane->content = filter_xss_admin($markup);
  return $pane;
}

/**
 * Edit callback edit form for the content type.
 */
function wetkit_core_querypath_scrape_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  // Form State Variables.
  if (empty($form_state['num_querypath_add_dom'])) {
    $form_state['num_querypath_add_dom'] = 1;
  }

  if (empty($form_state['num_querypath_remove_dom'])) {
    $form_state['num_querypath_remove_dom'] = 1;
  }

  // Access the form hierarchically.
  $form['#tree'] = TRUE;

  // Create General Settings Fieldset.
  $form['querypath_scrape_general_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Querypath Scrape General Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['querypath_scrape_general_settings']['querypath_parser'] = array(
    '#type' => 'select',
    '#title' => t('Select Parser for QueryPath'),
    '#options' => array(
      0 => t('HTML'),
      1 => t('XML'),
    ),
    '#default_value' => !empty($conf['querypath_scrape_general_settings']['querypath_parser']) ? $conf['querypath_scrape_general_settings']['querypath_parser'] : 0,
    '#description' => t('Select the type of parser (XML or HTML) that Queryparth will be using.'),
  );
  $form['querypath_scrape_general_settings']['override_title'] = $form['override_title'];
  $form['querypath_scrape_general_settings']['override_title_markup'] = $form['override_title_markup'];
  $form['querypath_scrape_general_settings']['override_title_text'] = $form['override_title_text'];
  $form['querypath_scrape_general_settings']['url'] = array(
    '#type' => 'textfield',
    '#title' => t('Site URL'),
    '#size' => 60,
    '#maxlength' => 256,
    '#description' => t('URL to parse using Querypath.'),
    '#default_value' => !empty($conf['querypath_scrape_general_settings']['url']) ? $conf['querypath_scrape_general_settings']['url'] : '',
    '#required' => TRUE,
  );

  // Unset some Form Variables.
  unset($form['override_title']);
  unset($form['override_title_markup']);
  unset($form['override_title_text']);

  // Build the fieldsets indicated by $form_state['num_querypath_add_dom'].
  $form['querypath_scrape_get'] = array(
    '#type' => 'fieldset',
    '#title' => t('Querypath Parameters (GetHTML)'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  for ($i = 1; $i <= $form_state['num_querypath_add_dom']; $i++) {
    $form['querypath_scrape_get'][$i]['querypath_elements_get'] = array(
      '#type' => 'textfield',
      '#title' => t('Elements to Find'),
      '#size' => 60,
      '#maxlength' => 256,
      '#description' => t('Element(s) to retrieve with Querypath using CSS3 Selectors.'),
      '#default_value' => !empty($conf['querypath_scrape_get'][$i]['querypath_elements_get']) ? $conf['querypath_scrape_get'][$i]['querypath_elements_get'] : '',
      '#required' => FALSE,
    );
    // Adds "Add another Querypath" button.
    $form['querypath_scrape_get']['wetkit_core_qp_add_add_button'] = array(
      '#type' => 'submit',
      '#value' => t('Add Querypath GetHTML'),
      '#submit' => array('wetkit_core_qp_add_save'),
      '#weight' => 998,
    );
    // Adds "Remove Querypath Parameters" button.
    if ($form_state['num_querypath_add_dom'] > 1) {
      $form['querypath_scrape_get']['wetkit_core_qp_add_remove_button'] = array(
        '#type' => 'submit',
        '#value' => t('Remove Querypath GetHTML'),
        '#submit' => array('wetkit_core_qp_add_delete'),
        '#limit_validation_errors' => array(),
        '#weight' => 999,
      );
    }
  }

  // Build the fieldsets indicated by $form_state['num_querypath_remove_dom'].
  $form['querypath_scrape_remove'] = array(
    '#type' => 'fieldset',
    '#title' => t('Querypath Parameters (RemoveHTML)'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  for ($j = 1; $j <= $form_state['num_querypath_remove_dom']; $j++) {
    $form['querypath_scrape_remove'][$j]['querypath_elements_remove'] = array(
      '#type' => 'textfield',
      '#title' => t('Elements to Remove'),
      '#size' => 60,
      '#maxlength' => 256,
      '#description' => t('Element(s) to remove with Querypath using CSS3 Selectors.'),
      '#default_value' => !empty($conf['querypath_scrape_remove'][$j]['querypath_elements_remove']) ? $conf['querypath_scrape_remove'][$j]['querypath_elements_remove'] : '',
      '#required' => FALSE,
    );
    // Adds "Add another Querypath" button.
    $form['querypath_scrape_remove']['wetkit_core_qp_rm_add_button'] = array(
      '#type' => 'submit',
      '#value' => t('Add Querypath RemoveHTML'),
      '#submit' => array('wetkit_core_qp_rm_save'),
      '#weight' => 998,
    );
    // Adds "Remove Querypath Parameters" button.
    if ($form_state['num_querypath_remove_dom'] > 1) {
      $form['querypath_scrape_remove']['wetkit_core_qp_rm_remove_button'] = array(
        '#type' => 'submit',
        '#value' => t('Remove Querypath RemoveHTML'),
        '#submit' => array('wetkit_core_qp_rm_delete'),
        '#limit_validation_errors' => array(),
        '#weight' => 999,
      );
    }
  }

  return $form;
}

/**
 * Submit handler for "Add Querypath" button on querypath_add_parameters().
 */
function wetkit_core_qp_add_save($form, &$form_state) {
  // Everything in $form_state is persistent.
  $tmp_val = $form_state['num_querypath_add_dom']++;
  // Setting $form_state['rebuild'] = TRUE causes the form to be rebuilt again.
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for "Remove Querypath Parameters" button.
 */
function wetkit_core_qp_add_delete($form, &$form_state) {
  if ($form_state['num_querypath_add_dom'] > 1) {
    $tmp_val = $form_state['num_querypath_add_dom']--;
  }
  // Setting $form_state['rebuild'] = TRUE causes the form to be rebuilt again.
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for "Add Querypath" button on querypath_add_parameters().
 */
function wetkit_core_qp_rm_save($form, &$form_state) {
  // Everything in $form_state is persistent.
  $tmp_val = $form_state['num_querypath_remove_dom']++;
  // Setting $form_state['rebuild'] = TRUE causes the form to be rebuilt again.
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for "Remove Querypath Parameters" button.
 */
function wetkit_core_qp_rm_delete($form, &$form_state) {
  if ($form_state['num_querypath_remove_dom'] > 1) {
    $tmp_val = $form_state['num_querypath_remove_dom']--;
  }
  // Setting $form_state['rebuild'] = TRUE causes the form to be rebuilt again.
  $form_state['rebuild'] = TRUE;
}

/**
 * Edit callback submit form for the content type.
 */
function wetkit_core_querypath_scrape_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Custom function for retrieving HTML Dom elements.
 */
function _wetkit_core_qp_scrape_getDOM($qp_scrape, $elements) {
  foreach ($elements as $element) {
    if ($qp_scrape->top()->is($element)) {
      $html = $qp_scrape->top()->find($element)->innerHTML();
      $html = trim($html);
      return $html;
    }
  }
}

/**
 * Custom function for removing HTML DOM elements.
 */
function _wetkit_core_qp_scrape_removeDOM($qp_scrape, $elements) {
  foreach ($elements as $element) {
    if ($qp_scrape->top()->is($element)) {
      $qp_scrape->top()->find($element)->remove();
    }
  }
}
