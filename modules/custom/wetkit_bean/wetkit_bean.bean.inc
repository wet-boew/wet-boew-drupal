<?php
/**
 * @file
 * wetkit_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function wetkit_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'wetkit_bean';
  $bean_type->label = 'WetKit Bean';
  $bean_type->options = '';
  $bean_type->description = 'Default bean for use with WetKit.';
  $export['wetkit_bean'] = $bean_type;

  return $export;
}
