<?php
/**
 * @file
 * wetkit_widgets.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function wetkit_widgets_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-tabbed_interface-field_tabbed_interface'.
  $fields['fieldable_panels_pane-tabbed_interface-field_tabbed_interface'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
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
      'locked' => '0',
      'module' => 'wetkit_widgets',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'wetkit_tabbed_interface',
    ),
    'field_instance' => array(
      'bundle' => 'tabbed_interface',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'wetkit_widgets',
          'settings' => array(
            'image_style' => 'panopoly_image_spotlight',
          ),
          'type' => 'wetkit_tabbed_interface_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_tabbed_interface',
      'label' => 'Items',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'general',
        'file_extensions' => 'jpg jpeg gif png',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'wetkit_widgets',
        'settings' => array(),
        'type' => 'wetkit_tabbed_interface_form',
        'weight' => '-4',
      ),
    ),
  );

  return $fields;
}
