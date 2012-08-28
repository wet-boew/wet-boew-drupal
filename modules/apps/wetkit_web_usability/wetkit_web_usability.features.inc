<?php
/**
 * @file
 * wetkit_web_usability.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_web_usability_ctools_plugin_api() {
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
function wetkit_web_usability_views_api() {
  return array("version" => "3.0");
}
