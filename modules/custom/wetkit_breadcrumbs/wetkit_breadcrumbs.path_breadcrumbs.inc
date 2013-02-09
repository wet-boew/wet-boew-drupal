<?php
/**
 * @file
 * wetkit_breadcrumbs.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function wetkit_breadcrumbs_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'wetkit_file_view';
  $path_breadcrumb->name = 'WetKit File View';
  $path_breadcrumb->path = 'file/%fid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Files',
      1 => '%fid:name',
    ),
    'paths' => array(
      0 => 'admin/content/file',
      1 => '%fid:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'fid' => array(
        'position' => 1,
        'argument' => 'entity_id:file',
        'settings' => array(
          'identifier' => 'File: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['wetkit_file_view'] = $path_breadcrumb;

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
    'translatable' => 1,
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

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'wetkit_node_edit_view';
  $path_breadcrumb->name = 'WetKit Node Edit View';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:title',
    ),
    'paths' => array(
      0 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
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
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['wetkit_node_edit_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'wetkit_user_view';
  $path_breadcrumb->name = 'WetKit User View';
  $path_breadcrumb->path = 'user/%uid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Users',
      1 => '%uid:name',
    ),
    'paths' => array(
      0 => 'admin/people',
      1 => '%uid:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'uid' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['wetkit_user_view'] = $path_breadcrumb;

  return $export;
}
