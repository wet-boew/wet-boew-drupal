<?php
/**
 * @file
 * wetkit_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wetkit_core_taxonomy_default_vocabularies() {
  return array(
    'wetkit_categories' => array(
      'name' => 'Categories',
      'machine_name' => 'wetkit_categories',
      'description' => 'This is a sitewide taxonomy of categories to organize the content on your site!',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
