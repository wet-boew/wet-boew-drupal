<?php
/**
 * @file
 * cta_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cta_solr_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
