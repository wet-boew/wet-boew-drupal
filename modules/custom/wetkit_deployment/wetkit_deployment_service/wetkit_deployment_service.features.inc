<?php
/**
 * @file
 * wetkit_deployment_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_deployment_service_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
