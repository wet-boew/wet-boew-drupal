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

  // Exported field: 'fieldable_panels_pane-basic_file-field_basic_file_file'.
  $fields['fieldable_panels_pane-basic_file-field_basic_file_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_file_file',
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
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'basic_file',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_file_file',
      'label' => 'File',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'general',
        'file_extensions' => 'pdf txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-basic_file-field_basic_file_text'.
  $fields['fieldable_panels_pane-basic_file-field_basic_file_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_file_text',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'basic_file',
      'default_value' => array(
        0 => array(
          'value' => 'Salsify napa cabbage azuki bean mung bean kakadu plum onion garbanzo horseradish lettuce jícama water chestnut gumbo turnip courgette winter purslane cress squash. ',
          'format' => 'plain_text',
        ),
      ),
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
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_file_text',
      'label' => 'Text',
      'required' => 0,
      'settings' => array(
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-image-field_basic_image_caption'.
  $fields['fieldable_panels_pane-image-field_basic_image_caption'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_image_caption',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'image',
      'default_value' => array(
        0 => array(
          'summary' => '',
          'value' => 'Green bean beet greens water spinach bitterleaf dandelion summer purslane plantain. Brussels sprout dulse kohlrabi cabbage napa cabbage winter purslane garlic mustard water spinach tigernut pea asparagus jícama wakame ricebean.',
          'format' => 'plain_text',
        ),
      ),
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
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_image_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-image-field_basic_image_image'.
  $fields['fieldable_panels_pane-image-field_basic_image_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_image_image',
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
      'module' => 'image',
      'settings' => array(
        'default_image' => '45',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'image',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'wetkit_image_full',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_image_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'general',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-map-field_map_address'.
  $fields['fieldable_panels_pane-map-field_map_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_address',
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
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'map',
      'default_value' => array(
        0 => array(
          'value' => '717 California Street, San Francisco, California 94108',
        ),
      ),
      'deleted' => '0',
      'description' => 'The street address of the location you wish to map. This widget will contact Google and try to do its best to create a map!',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'simple_gmap',
          'settings' => array(
            'iframe_height' => '400',
            'iframe_width' => '600',
            'include_link' => 0,
            'include_map' => 1,
            'include_text' => 0,
            'information_bubble' => 0,
            'link_text' => 'View larger map',
            'zoom_level' => '14',
          ),
          'type' => 'simple_gmap',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_map_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-map-field_map_information'.
  $fields['fieldable_panels_pane-map-field_map_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_information',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'map',
      'default_value' => array(
        0 => array(
          'value' => 'Zucchini gumbo grape salad watercress sea lettuce rutabaga chard bell pepper beetroot chickweed peanut garlic.',
          'format' => 'plain_text',
        ),
      ),
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
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_map_information',
      'label' => 'Information',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-quick_links-field_quick_links_links'.
  $fields['fieldable_panels_pane-quick_links-field_quick_links_links'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_quick_links_links',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'quick_links',
      'default_value' => array(
        0 => array(
          'title' => 'Kombu collard greens',
          'url' => 'http://drupal.org',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_quick_links_links',
      'label' => 'Links',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-spotlight-field_basic_spotlight_items'.
  $fields['fieldable_panels_pane-spotlight-field_basic_spotlight_items'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_spotlight_items',
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
      'type' => 'wetkit_spotlight',
    ),
    'field_instance' => array(
      'bundle' => 'spotlight',
      'default_value' => array(
        0 => array(
          'title' => 'Veggies sunt bona vobis!',
          'link' => 'http://drupal.org',
          'fid' => '',
          'description' => 'Kakadu plum cucumber soko prairie turnip cress squash tatsoi nori aubergine asparagus endive dandelion beetroot lettuce broccoli water chestnut brussels sprout. ',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'wetkit_widgets',
          'settings' => array(
            'image_style' => 'wetkit_image_spotlight',
          ),
          'type' => 'wetkit_spotlight_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_spotlight_items',
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
        'type' => 'wetkit_spotlight_form',
        'weight' => '-4',
      ),
    ),
  );

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
      'default_value' => array(
        0 => array(
          'title' => 'Tabbed Interface 1',
          'link' => 'http://canada.gc.ca',
          'fid' => 0,
          'alt' => '',
          'description' => 'This is where your description goes that will rendered in the body of the tabbed interface. ',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'wetkit_widgets',
          'settings' => array(
            'image_style' => 'slider',
          ),
          'type' => 'wetkit_tabbed_interface_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'fences_wrapper' => 'div',
      'field_name' => 'field_tabbed_interface',
      'label' => 'Items',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
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

  // Exported field: 'fieldable_panels_pane-table-field_basic_table_table'.
  $fields['fieldable_panels_pane-table-field_basic_table_table'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_table_table',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => '0',
        'lock_values' => 0,
      ),
      'translatable' => '0',
      'type' => 'tablefield',
    ),
    'field_instance' => array(
      'bundle' => 'table',
      'default_value' => array(
        0 => array(
          'tablefield' => array(
            'cell_0_0' => 'Vegetable One',
            'cell_0_1' => 'Vegeteable Two',
            'cell_1_0' => 'brussels sprouts',
            'cell_1_1' => 'cucumber',
            'cell_2_0' => 'spinach',
            'cell_2_1' => 'carrots',
            'import' => array(
              'rebuild_field_basic_table_table_0' => 'Upload CSV',
              'tablefield_csv_field_basic_table_table_0' => '',
            ),
            'rebuild' => array(
              'count_cols' => '2',
              'count_rows' => '3',
              'rebuild' => 'Rebuild Table',
            ),
          ),
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'tablefield',
          'settings' => array(),
          'type' => 'default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_table_table',
      'label' => 'Table',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-text-field_basic_text_text'.
  $fields['fieldable_panels_pane-text-field_basic_text_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_basic_text_text',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'text',
      'default_value' => array(
        0 => array(
          'value' => 'Bok choy potato courgette beet greens squash scallion avocado fennel soko. Radish water chestnut tomato sweet pepper soybean quandong. Sweet pepper collard greens courgette black-eyed pea kohlrabi bunya nuts parsley kakadu plum tomatillo coriander dandelion caulie. Pea sprouts onion chickweed garbanzo plantain cress kakadu plum bamboo shoot celery dandelion. Carrot kohlrabi parsnip lotus root scallion chickpea welsh onion spring onion broccoli rabe broccoli horseradish fennel caulie desert raisin cucumber. ',
          'format' => 'plain_text',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_text_text',
      'label' => 'Text',
      'required' => 0,
      'settings' => array(
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

  // Exported field: 'fieldable_panels_pane-video-field_video_video'.
  $fields['fieldable_panels_pane-video-field_video_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video_video',
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
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_video_video',
      'label' => 'Video',
      'required' => 1,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'videos',
        'file_extensions' => 'mov m4v mp4 mpeg avi',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 0,
            'vimeo' => 'vimeo',
            'youtube' => 'youtube',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'default' => 0,
            'image' => 0,
            'video' => 'video',
          ),
          'browser_plugins' => array(
            'library' => 0,
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 'media_internet',
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '-4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Caption');
  t('File');
  t('Image');
  t('Information');
  t('Items');
  t('Links');
  t('Table');
  t('Text');
  t('The street address of the location you wish to map. This widget will contact Google and try to do its best to create a map!');
  t('Video');

  return $fields;
}