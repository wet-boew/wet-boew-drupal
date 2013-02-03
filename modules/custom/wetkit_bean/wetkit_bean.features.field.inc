<?php
/**
 * @file
 * wetkit_bean.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function wetkit_bean_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-wetkit_bean-field_bean_wetkit_body'.
  $fields['bean-wetkit_bean-field_bean_wetkit_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bean_wetkit_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'wetkit_bean',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_bean_wetkit_body',
      'label' => 'bean_wetkit_body',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'bean-wetkit_bean-title_field'.
  $fields['bean-wetkit_bean-title_field'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'title_field',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'wetkit_bean',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The Title of the block.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => 'h2',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'title_field',
      'label' => 'Title',
      'required' => FALSE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_label' => array(
          'entity' => FALSE,
          'page' => FALSE,
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '-5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('The Title of the block.');
  t('Title');
  t('bean_wetkit_body');

  return $fields;
}
