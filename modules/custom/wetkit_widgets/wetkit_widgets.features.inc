<?php
/**
 * @file
 * wetkit_widgets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_widgets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wetkit_widgets_views_api() {
  return array("api" => "3.0");
}
