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
      'name' => 'WetKit Categories',
      'machine_name' => 'wetkit_categories',
      'description' => 'Default Vocabulary for the Web Experience Toolkit',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
