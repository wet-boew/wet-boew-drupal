<?php
/**
 * @file
 * wetkit_deployment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_deployment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_endpoints") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wetkit_deployment_views_api() {
  return array("api" => "3.0");
}
