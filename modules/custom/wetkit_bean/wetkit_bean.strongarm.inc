<?php
/**
 * @file
 * wetkit_bean.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_bean_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_bean__wetkit_bean';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_bean__wetkit_bean'] = $strongarm;

  return $export;
}
