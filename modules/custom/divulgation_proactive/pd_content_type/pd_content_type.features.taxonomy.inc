<?php
/**
 * @file
 * pd_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pd_content_type_taxonomy_default_vocabularies() {
  return array(
    'member' => array(
      'name' => 'Member',
      'machine_name' => 'member',
      'description' => 'Agency Members',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'organizational_component' => array(
      'name' => 'Organizational Component',
      'machine_name' => 'organizational_component',
      'description' => 'Organizational component of a position reclassification',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
