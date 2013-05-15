<?php
/**
 * @file
 * wetkit_bean_plugins.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wetkit_bean_plugins_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bean_highlight|bean|highlight|default';
  $field_group->group_name = 'group_bean_highlight';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlight';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bean Highlight Group',
    'weight' => '1',
    'children' => array(
      0 => 'field_bean_highlight_description',
      1 => 'field_bean_highlight_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bean Highlight Group',
      'instance_settings' => array(
        'classes' => 'module',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bean_highlight|bean|highlight|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bean_highlight|bean|wetkit_highlight|default';
  $field_group->group_name = 'group_bean_highlight';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'wetkit_highlight';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Bean Highlight',
    'weight' => '1',
    'children' => array(
      0 => 'field_bean_highlight_description',
      1 => 'field_bean_highlight_link_text',
      2 => 'field_bean_highlight_link',
      3 => 'field_bean_highlight_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group Bean Highlight',
      'instance_settings' => array(
        'classes' => 'module',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bean_highlight|bean|wetkit_highlight|default'] = $field_group;

  return $export;
}
