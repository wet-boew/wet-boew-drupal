<?php

/**
 * @file
 * A specification for the custom tabbed interface entity that is part of WetKit Widgets
 */

/**
 * Implements hook_preprocess_panels_pane().
 */
function wetkit_widgets_preprocess_panels_pane(&$variables) {
  $bundle = isset($variables['content']['#bundle']) ? $variables['content']['#bundle'] : '';
  if ($bundle == 'tabbed_interface') {
    $variables['theme_hook_suggestions'][] = 'panels_pane__fieldable_panels_pane__tabbed_interface';
  }
}

/**
 * Implements hook_field_info().
 */
function wetkit_widgets_field_info() {
  return array(
    'wetkit_tabbed_interface' => array(
      'label' => t('Tabbed Interface'),
      'description' => t('WetKit Plugin for the Web Experience Toolkit\'s Tabbed Interface'),
      'default_widget' => 'wetkit_tabbed_interface_form',
      'default_formatter' => 'wetkit_tabbed_interface_default',
      'settings' => array(
        'uri_scheme' => variable_get('file_default_scheme', 'public'),
        'default_image' => 1,
      ),
      'instance_settings' => array(
        'file_extensions' => 'jpg jpeg gif png',
        'file_directory' => 'general',
        'max_filesize' => '',
        'alt_field' => 0,
        'title_field' => 0,
        'max_resolution' => '',
        'min_resolution' => '',
      ),
    ),
  );
}

/**
 * Implements hook_field_is_empty().
 */
function wetkit_widgets_field_is_empty($item, $field) {
  if (empty($item['title']) && empty($item['link']) && empty($item['description']) && empty($item['fid'])) {
    return TRUE;
  }
  return FALSE;
}

/**
 * Implements hook_field_widget_info().
 */
function wetkit_widgets_field_widget_info() {
  return array(
    'wetkit_tabbed_interface_form' => array(
      'label' => t('Tabbed Interface'),
      'field types' => array('wetkit_tabbed_interface'),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_DEFAULT,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
    ),
  );
}

/**
 * Implements hook_field_settings_form().
 */
function wetkit_widgets_field_settings_form($field, $instance, $has_data) {
  $form = array();
  $defaults = field_info_field_settings($field['type']);
  $settings = array_merge($defaults, $field['settings']);

  $scheme_options = array();
  foreach (file_get_stream_wrappers(STREAM_WRAPPERS_WRITE_VISIBLE) as $scheme => $stream_wrapper) {
    $scheme_options[$scheme] = $stream_wrapper['name'];
  }
  $form['uri_scheme'] = array(
    '#type' => 'radios',
    '#title' => t('Upload destination'),
    '#options' => $scheme_options,
    '#default_value' => $settings['uri_scheme'],
    '#description' => t('Select where the final files should be stored. Private file storage has significantly more overhead than public files, but allows restricted access to files within this field.'),
  );

  // When the user sets the scheme on the UI, even for the first time, it's
  // updating a field because fields are created on the "Manage fields"
  // page. So image_field_update_field() can handle this change.
  $form['default_image'] = array(
    '#title' => t('Default image'),
    '#type' => 'managed_file',
    '#description' => t('If no image is uploaded, this image will be shown on display.'),
    '#default_value' => $field['settings']['default_image'],
    '#upload_location' => $settings['uri_scheme'] . '://default_images/',
  );

  return $form;
}

/**
 * Implements hook_field_instance_settings_form().
 */
function wetkit_widgets_field_instance_settings_form($field, $instance) {
  $form = image_field_instance_settings_form($field, $instance);
  return $form;
}

/**
 * Implements hook_field_formatter_info().
 */
function wetkit_widgets_field_formatter_info() {
  return array(
    'file_wetkit_video' => array(
      'label' => t('WetKit Video'),
      'description' => t('Render the file using an HTML5 video tag'),
      'field types' => array('file'),
      'settings' => array(
        'controls' => TRUE,
        'autoplay' => FALSE,
        'loop' => FALSE,
        'muted' => FALSE,
        'size' => array(
          'width' => NULL,
          'height' => NULL,
        ),
        'multiple_file_behaviour' => 'sources',
      ),
    ),
    'wetkit_tabbed_interface_default' => array(
      'label' => t('Default'),
      'field types' => array('wetkit_tabbed_interface'),
      'settings' => array(
        'image_style' => 'panopoly_image_spotlight',
      ),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function wetkit_widgets_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = array();

  if ($display['type'] == 'wetkit_tabbed_interface_default') {
    $element['image_style'] = array(
      '#title' => t('Image style'), 
      '#type' => 'select',
      '#options' => image_style_options(),
      '#default_value' => $settings['image_style'],
      '#required' => TRUE,
    );
  }
  else if ($display['type'] == 'file_wetkit_video') {
    $element['controls'] = array(
      '#title' => t('Show video controls'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['controls']) ? $settings['controls'] : TRUE,
    );
    $element['autoplay'] = array(
      '#title' => t('Autoplay'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['autoplay']) ? $settings['autoplay'] : FALSE,
    );
    $element['loop'] = array(
      '#title' => t('Loop'),
      '#type' => 'checkbox',
      '#default_value' => isset($settings['loop']) ? $settings['loop'] : FALSE,
    );
    $element['size'] = array(
      '#type' => 'item',
      '#title' => t('Size'),
      '#field_prefix' => '<div class="container-inline">',
      '#field_suffix' => '</div>',
      '#description' => t('The size expressed as WIDTHxHEIGHT (e.g. 640x480). Leave blank to use the video file to determine the size of the player.'),
    );
    $element['size']['width'] = array(
      '#type' => 'textfield',
      '#title' => t('Width'),
      '#title_display' => 'invisible',
      '#default_value' => isset($settings['size']['width']) ? $settings['size']['width'] : NULL,
      '#size' => 5,
      '#maxlength' => 5,
      '#field_suffix' => ' x ',
    );
    $element['size']['height'] = array(
      '#type' => 'textfield',
      '#title' => t('Height'),
      '#title_display' => 'invisible',
      '#default_value' => isset($settings['size']['height']) ? $settings['size']['height'] : NULL,
      '#size' => 5,
      '#maxlength' => 5,
      '#field_suffix' => ' ' . t('pixels'),
    );
    $element['multiple_file_behaviour'] = array(
      '#title' => t('Display of multiple files'),
      '#type' => 'radios',
      '#options' => array(
        'sources' => t('Use multiple sources within a single <video> tag'),
        'tags' => t('Use multiple <video> tags, each with a single source'),
      ),
      '#default_value' => isset($settings['multiple_file_behaviour']) ? $settings['multiple_file_behaviour'] : 'sources',
    );

  }

  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function wetkit_widgets_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $summary = NULL;
  
  if ($display['type'] === 'file_wetkit_video') {
    $summary_items = array();
    if (isset($settings['multiple_file_behaviour'])) {
      $summary_items[] = t('Multiple files: %multiple', array('%multiple' => $settings['multiple_file_behaviour']));
    }
    if (isset($settings['controls'])) {
      $summary_items[] = t('Controls: %controls', array('%controls' => $settings['controls'] ? 'visible' : 'hidden'));
    }
    if (isset($settings['autoplay'])) {
      $summary_items[] = t('Autoplay: %autoplay', array('%autoplay' => $settings['autoplay'] ? t('yes') : t('no')));
    }
    if (isset($settings['loop'])) {
      $summary_items[] = t('Loop: %loop', array('%loop' => $settings['loop'] ? t('yes') : t('no')));
    }
    if (isset($settings['muted'])) {
      $summary_items[] = t('Muted: %muted', array('%muted' => $settings['muted'] ? t('yes') : t('no')));
    }
    if ($settings['size']['width'] && $settings['size']['height']) {
      $summary_items[] = t('Size: %width x %height', array('%width' => $settings['size']['width'], '%height' => $settings['size']['height']));
    }
    $summary = implode('<br />', $summary_items);
  }
  else if ($display['type'] == 'wetkit_tabbed_interface_default') {
    $summary = t('Image Style: @style', array('@style' => $settings['image_style']));
  }

  return $summary;
}

/**
 * Implements hook_field_formatter_view().
 */
function wetkit_widgets_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $settings = $display['settings'];
  $formatter = $display['type'];
  
  if ($display['type'] == 'file_wetkit_video') {
    $multiple_file_behaviour = isset($settings['multiple_file_behaviour']) ? $settings['multiple_file_behaviour'] : 'sources';

    // Prevent 'empty' fields from causing a WSOD.
    $items = array_filter($items);

    // Build an array of sources for each <video> element.
    $source_lists = array();
    if ($multiple_file_behaviour == 'tags') {
      foreach ($items as $delta => $item) {
        if ($item['type'] == 'wetkit_video') {
          $source_lists[] = array($item);
        }
      }
    }
    else {
      foreach ($items as $delta => $item) {
        if ($item['type'] == 'wetkit_video') {
          $source_lists[0][] = $item;
        }
      }
    }

    // render each source list as an <video> element
    foreach ($source_lists as $delta => $sources) {
      $width = isset($settings['size']['width']) ? $settings['size']['width'] : NULL;
      $height = isset($settings['size']['height']) ? $settings['size']['height'] : NULL;
      $element[$delta] = array(
        '#theme' => 'wetkit_widgets_file_video',
        '#files' => $sources,
        '#controls' => isset($settings['controls']) ? $settings['controls'] : TRUE,
        '#autoplay' => isset($settings['autoplay']) ? $settings['autoplay'] : FALSE,
        '#loop' => isset($settings['loop']) ? $settings['loop'] : FALSE,
        '#muted' => isset($settings['muted']) ? $settings['muted'] : FALSE,
        '#width' => ($width && $height) ? $width : NULL,
        '#height' => ($width && $height) ? $height : NULL,
      );
    }
  }
  else if ($display['type'] == 'wetkit_tabbed_interface_default') {
    drupal_add_library('system', 'ui.tabs');
    // Assemble the tabs content
    foreach ($items as $delta => $item_data) {
      $element[$delta]['#markup'] = ($delta == 0) ? theme('wetkit_tab_interface_view', array('items' => $item_data, 'delta' => $delta, 'settings' => $settings)) : theme('wetkit_tab_interface_view', array('items' => $item_data, 'delta' => $delta, 'settings' => $settings));
      $element[$delta]['title'] = ($delta == 0) ? $item_data['title'] : $item_data['title'];
            //if panel style is applied
        $element[$delta]['tabbed_true'] = 'true';
    }
  }
  
  return $element;
}

/**
 * Implements hook_widget_form().
 */
function wetkit_widgets_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {

  if ($instance['widget']['type'] == 'wetkit_tabbed_interface_form') {
   
    // Make it a multipart form  
    $form['#attributes']['enctype'] = 'multipart/form-data';

    // Define the element
    $element['title'] = array(
      '#title' => 'Title',
      '#type' => 'textfield',
      '#default_value' => isset($items[$delta]['title']) ? $items[$delta]['title'] : NULL,
    );

    $element['link'] = array(
      '#title' => 'Link',
      '#type' => 'textfield',
      '#default_value' => isset($items[$delta]['link']) ? $items[$delta]['link'] : NULL,
    );

    $element['fid'] = array(
      '#title' => 'Image',
      '#type' => 'managed_file',
      '#upload_location' => file_field_widget_uri($field, $instance),
      '#default_value' => isset($items[$delta]['fid']) ? $items[$delta]['fid'] : NULL,
    );

    $element['alt'] = array(
      '#title' => 'Alt',
      '#type' => 'textfield',
      '#default_value' => isset($items[$delta]['alt']) ? $items[$delta]['alt'] : NULL,
    );

    $element['description'] = array(
      '#title' => 'Description',
      '#type' => 'textarea',
      '#rows' => '2',
      '#resizable' => FALSE,
      '#default_value' => isset($items[$delta]['description']) ? $items[$delta]['description'] : NULL,
    );
  }

  return $element;
}

/**
 * Implements hook_field_presave().
 */
function wetkit_widgets_field_presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
  // We need to set presave values if fids are not set. This shouldn't effect save operations
  // form API validation will prevent this from ever happening unless previewing.
  if (!empty($items)) {
    foreach ($items as &$item) {
      if (empty($item['fid'])) {
        $fid = variable_get('wetkit_widgets_default_' . $entity->bundle . '_fid', NULL);
        
        if (!empty($fid)) {
          $item['fid'] = $fid;
        }
      }
    }

    image_field_presave($entity_type, $entity, $field, $instance, $langcode, $items);
  }
}

/**
 * Implements hook_field_load().
 */
function wetkit_widgets_field_load($entity_type, $entities, $field, $instances, $langcode, &$items, $age) {
  image_field_load($entity_type, $entities, $field, $instances, $langcode, $items, $age);
}

/**
 * Implements hook_field_insert().
 */
function wetkit_widgets_field_insert($entity_type, $entity, $field, $instance, $langcode, &$items) {
  image_field_insert($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_update().
 */
function wetkit_widgets_field_update($entity_type, $entity, $field, $instance, $langcode, &$items) {

  // Load the original entity, if $entity->original is not already set.
  // This is done as per http://drupal.org/node/985642 and can be removed when that patch is committed. 
  if (empty($entity->original)) {
    $entity->original = entity_load_unchanged($entity_type, $field['id']);
  }

  image_field_update($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_delete().
 */
function wetkit_widgets_field_delete($entity_type, $entity, $field, $instance, $langcode, &$items) {
  image_field_delete($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_delete_revision().
 */
function wetkit_widgets_field_delete_revision($entity_type, $entity, $field, $instance, $langcode, &$items) {
  image_field_delete_revision($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_prepare_view().
 */
function wetkit_widgets_field_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items) {
  // If there are no files specified at all, use the default.
  // TODO - make sure this works 
  foreach ($entities as $id => $entity) {
    if (empty($items[$id]) && $field['settings']['default_image']) {
      if ($file = file_load($field['settings']['default_image'])) {
        $items[$id][0] = (array) $file + array(
          'is_default' => TRUE,
          'alt' => '',
          'title' => '',
        );
      }
    }
  }
}

/**
 * Theme function for table view
 */
function theme_wetkit_tab_interface_view($variables) {
  $title = $variables['items']['title'];
  $description = $variables['items']['description'];
  if (module_exists('uuid')) {
    $image_entity = entity_uuid_load('file', array($variables['items']['uuid']));
    $image = file_load(array_pop($image_entity)->fid);
  }
  else {
    $image = (object) $variables['items'];
  }
  $link = $variables['items']['link'];
  $settings = $variables['settings'];

  $output = '<div id="' . 'tabs1_' . $variables['delta'] . '" class="tabs-content-pad ' . '' . '">';
  $output .= '<section>';
  $output .= '<h4>' . l($title, $link) . '</h4>';
  $output .= theme('image_style', array('style_name' => $settings['image_style'], 'path' => $image->uri, 'alt' => $variables['items']['alt']));
  $output .= '<p>' . $description . '</p>';
  $output .= '</section>';
  $output .= '</div>';

  return $output;
}
