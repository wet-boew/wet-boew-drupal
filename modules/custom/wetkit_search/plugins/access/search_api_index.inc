<?php

/**
 * @file
 * Plugin to provide access control based on solr status
 */

$plugin = array(
  'title' => t('Search API Index'),
  'description' => t('Is the Search API index enabled?'),
  'callback' => 'wetkit_search_search_api_index_ctools_access_check',
  'default' => array('negate' => 0),
  'settings form' => 'wetkit_search_search_api_index_ctools_access_settings',
  'summary' => 'wetkit_search_search_api_index_ctools_access_summary',
);

/**
 * Settings form for the "Search API Index Enabled" settings form.
 */
function wetkit_search_search_api_index_ctools_access_settings($form, &$form_state, $conf) {
  // No additional configuration necessary.
  return $form;
}

/**
 * Check to see if the Search API server and index are enabled.
 */
function wetkit_search_search_api_index_ctools_access_check($conf, $context) {
  $solr_index = search_api_index_load('node_index');
  return $solr_index->enabled;
}

/**
 * Provide a summary description based upon the checked terms.
 */
function wetkit_search_search_api_index_ctools_access_summary($conf, $context) {
  return t('WetKit Search index is Enabled');
}
