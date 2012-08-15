<?php
/**
 * @file
 * wetkit_widgets.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function wetkit_widgets_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__default__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '560',
    'height' => '340',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 0,
    'hd' => 0,
    'showsearch' => 0,
    'modestbranding' => 1,
    'showinfo' => 0,
    'chromeless' => 1,
  );
  $export['video__default__media_youtube_video'] = $file_display;

  return $export;
}
