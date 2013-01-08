<?php
/**
 * @file
 * wetkit_wetboew.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function wetkit_wetboew_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'wetkit_node_view';
  $path_breadcrumb->name = 'WetKit Node View';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:title',
    ),
    'paths' => array(
      0 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'wetkit_documentation' => 'wetkit_documentation',
              'wetkit_page' => 'wetkit_page',
              'wetkit_page_other' => 'wetkit_page_other',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['wetkit_node_view'] = $path_breadcrumb;

  return $export;
}
