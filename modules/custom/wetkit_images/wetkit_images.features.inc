<?php
/**
 * @file
 * wetkit_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function wetkit_images_image_default_styles() {
  $styles = array();

  // Exported image style: slider.
  $styles['slider'] = array(
    'name' => 'slider',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '730',
          'height' => '250',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
