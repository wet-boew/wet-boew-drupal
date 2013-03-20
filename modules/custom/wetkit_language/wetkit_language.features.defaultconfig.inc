<?php
/**
 * @file
 * wetkit_language.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wetkit_language_defaultconfig_features() {
  return array(
    'wetkit_language' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function wetkit_language_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'bean' => 'bean',
    'node' => 0,
    'file' => 0,
    'taxonomy_term' => 0,
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  return $export;
}
