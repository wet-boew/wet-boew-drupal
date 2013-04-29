<?php
/**
 * @file
 * cta_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cta_facets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
