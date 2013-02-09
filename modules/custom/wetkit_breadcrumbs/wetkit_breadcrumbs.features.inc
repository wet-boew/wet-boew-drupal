<?php
/**
 * @file
 * wetkit_breadcrumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_breadcrumbs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wetkit_breadcrumbs_views_api() {
  return array("api" => "3.0");
}
