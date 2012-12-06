<?php
/**
 * @file
 * wetkit_migrate_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_migrate_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wetkit_migrate_content_types_node_info() {
  $items = array(
    'wetkit_documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Documentation related to the Web Experience Toolkit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
