<?php
/**
 * @file
 * pd_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pd_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pd_content_type_node_info() {
  $items = array(
    'pd_contract' => array(
      'name' => t('PD Contract'),
      'base' => 'node_content',
      'description' => t('Proactive Disclosure Contract'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pd_hospitality' => array(
      'name' => t('PD Hospitality'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pd_reclassification' => array(
      'name' => t('PD Reclassification'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Position Title'),
      'help' => '',
    ),
    'pd_travel' => array(
      'name' => t('PD Travel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
