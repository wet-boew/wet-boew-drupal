<?php

/**
 * @file
 * Definition of the 'curent search' panel content type
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Current search'),
  'description' => t('The count of results for current search.'),
  'required context' => new ctools_context_required(t('Keywords'), 'string'),
  'category' => t('Search'),
  'defaults' => array(
    'type' => 'node',
    'form' => 'advanced',
    'path_type' => 'default',
    'path' => '',
    'override_prompt' => FALSE,
    'prompt' => '',
  ),
  'render last' => TRUE,
);

/**
 * Render the custom content type.
 */
function panopoly_search_search_current_content_type_render($subtype, $conf, $panel_args, $context) {

  $keys =  (empty($context) || empty($context->data)) ? '' : $context->data;

  $pane = new stdClass();
  $pane->module  = 'search';
  $pane->delta   = 'form';
  $pane->title   = '';
  $searches = search_api_current_search();
  if (isset($searches['search_api_views:panopoly_search:search_solr_results'])) {
    $count = $searches['search_api_views:panopoly_search:search_solr_results'][1]['result count'];
    $pane->content = '<h2>' . format_plural($count, '1 item', '@count items') . ' matched <em>' . check_plain($keys) . '</em>.</h2>';
    return $pane;
  } 
  elseif (isset($searches['search_api_views:panopoly_database_search:search_database_results'])) {
    $count = $searches['search_api_views:panopoly_database_search:search_database_results'][1]['result count'];
    $pane->content = '<h2>' . format_plural($count, '1 item', '@count items') . ' matched <em>' . check_plain($keys) . '</em>.</h2>';
    return $pane;
  }
}
