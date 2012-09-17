<?php

/**
 * @file
 * Content type that displays facet information for search
 */

$plugin = array(
  'title' => t('Search Facets'),
  'description' => t('The list of options available for a particular type of search facet'),
  'required context' => new ctools_context_required(t('Keywords'), 'string'),
  'category' => t('Facet API'),
  'content_types' => 'facet',
  'render last' => TRUE,
  'render callback' => 'wetkit_search_facet_content_type_render',
  'edit form' => 'wetkit_search_facet_content_type_edit_form',
);

function wetkit_search_facet_content_type_edit_form($form, &$form_state) {

  // Determine what deltas Facet API Supports
  $map = facetapi_get_delta_map();
  $deltas = array();
  $realm_name = 'block';
  foreach (facetapi_get_searcher_info() as $searcher => $info) {
    foreach (facetapi_get_delta_map_queue($searcher, $realm_name) as $facet_name) {
      if ($facet = facetapi_facet_load($facet_name, $searcher)) {
        $string = facetapi_build_delta($searcher, $realm_name, $facet_name);
        $delta = array_search($string, $map);
        $deltas[$delta] = $facet_name;
      }
    }
  }

  // Build the configuration form
  $conf = $form_state['conf'];
  $form['delta'] = array(
    '#type' => 'select',
    '#title' => t('Facet Type'),
    '#default_value' => !empty($conf['delta']) ? $conf['delta'] : '',
    '#options' => $deltas,
  );
  return $form;
}

function wetkit_search_facet_content_type_edit_form_submit($form, &$form_state) {
  $form_state['conf']['delta'] = $form_state['values']['delta'];
}

function wetkit_search_facet_content_type_render($subtype, $conf, $args, $context) {

  // Assemble some important information
  $builds = &drupal_static(__FUNCTION__, array());
  $parsed = &drupal_static('facetapi_parsed_deltas', array());
  $delta = $conf['delta'];
  facetapi_check_block_visibility($delta); /* this is needed to call to build the parsed information */
  list($searcher, $realm_name, $facet_name) = $parsed[$delta];

  // Builds and caches the entire realm per searcher / realm combination.
  $group = $searcher . ':' . $realm_name;
  if (!isset($builds[$group])) {
    $builds[$group] = facetapi_build_realm($searcher, $realm_name);
  }

  // Returns the individual pane
  if (isset($builds[$group][$facet_name])) {
    $variables = array('title' => $builds[$group][$facet_name]['#title'], 'facet' => $builds[$group][$facet_name]);
    $pane = new stdClass();
    $pane->title = theme('facetapi_title', $variables);
    $pane->content = $builds[$group][$facet_name];
    return $pane;
  }
}
