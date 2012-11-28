<?php
/**
 * @file
 * wetkit_wetboew.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_wetboew_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wetkit_wetboew_views_api() {
  return array("api" => "3.0");
}
