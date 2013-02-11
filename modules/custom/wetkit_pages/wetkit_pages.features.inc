<?php
/**
 * @file
 * wetkit_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wetkit_pages_node_info() {
  $items = array(
    'wetkit_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('An important page to display to users on your site. This is included as the preferred standard for a panels based workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wetkit_page_other' => array(
      'name' => t('Basic Page (Deprecated)'),
      'base' => 'node_content',
      'description' => t('An deprecated important page to display to users on your site. This is included for people who are used to using blocks and regions to manage content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
