<?php
/**
 * @file
 * wetkit_widgets.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wetkit_widgets_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tabbed_interface'
  $field_bases['field_tabbed_interface'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tabbed_interface',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'wetkit_widgets',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'wetkit_tabbed_interface',
  );

  return $field_bases;
}
