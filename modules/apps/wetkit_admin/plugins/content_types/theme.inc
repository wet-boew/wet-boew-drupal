<?php

$plugin = array(
  'title' => t('Theme'),
  'description' => t('This is the current theme that is installed.'),
  'content_types' => array('theme'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_theme_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Installed Theme');
  $pane->content = drupal_get_form('wetkit_admin_theme_selection_form');
  return $pane;
}

/**
 * Theme selection form
 */
function wetkit_admin_theme_selection_form($form, &$form_state) {
 
  // Kick us off
  $form = array();
  ctools_include('modal');
  ctools_modal_add_js();

  // Get the current theme and define links
  $theme_key = variable_get('theme_default');
  $theme_data = list_themes();
  $theme_links = array();
  $theme_links[] = array(
    'title' => t('Configure'),
    'href' => 'admin/wetkit_theme/configure/nojs/' . $theme_key . '/configure',
    'attributes' => array('class' => 'ctools-use-modal'),
    'query' => array(),
  );
  $theme_links[] = array(
    'title' => t('Change theme'),
    'href' => 'admin/appearance',
    'query' => array(),
  );
  $configure = (count($theme_links)) ? theme('links__ctools_dropbutton', array('links' => $theme_links, 'attributes' => array('class' => array('links', 'inline'))))  : '';

  // Setup the theme options
  $options = array(
    $theme_key => '<div class="clearfix"><div class="admin-theme-configure">' . $configure . '</div><div class="admin-theme-image">' . theme('image', array('path' => $theme_data[$theme_key]->info['screenshot'])). '</div><div class="admin-theme-information"><strong>' . $theme_data[$theme_key]->info['name'] . '</strong><br />' . $theme_data[$theme_key]->info['description'] . '</div></div>',
  );
  $form['themes'] = array(
    '#type' =>'checkboxes',
    '#default_value' => array($theme_key),
    '#options' => $options,
    '#attributes' => array('disabled' => 'disabled'),
  );
  return $form;
}
