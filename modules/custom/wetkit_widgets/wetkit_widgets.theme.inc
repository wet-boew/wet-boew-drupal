<?php

/**
 * @file
 * Theme callbacks for the file entity module.
 */

/**
 * Returns HTML for displaying an HTML5 <video> tag.
 *
 * @param array $variables
 *   An associative array containing:
 *   - file: Associative array of file data, which must include "uri".
 *   - controls: Boolean indicating whether or not controls should be displayed.
 *   - autoplay: Boolean indicating whether or not the video should start
 *   playing automatically.
 *   - loop: Boolean indicating whether or not the video should loop.
 *   - muted: Boolean indicating whether or not the sound should be muted.
 *   - width: Width, in pixels, of the video player.
 *   - height: Height, in pixels, of the video player.
 *
 * @ingroup themeable
 */
function theme_wetkit_widgets_file_video($variables) {
  $files = $variables['files'];
  $output = '';

  $video_attributes = array();
  if ($variables['controls']) {
    $video_attributes['controls'] = 'controls';
  }
  if ($variables['autoplay']) {
    $video_attributes['autoplay'] = 'autoplay';
  }
  if ($variables['loop']) {
    $video_attributes['loop'] = 'loop';
  }
  if ($variables['muted']) {
    $video_attributes['muted'] = 'muted';
  }
  if ($variables['width'] && $variables['height']) {
    $video_attributes['width'] = $variables['width'];
    $video_attributes['height'] = $variables['height'];
  }

  if (isset($files[0]['field_poster']['und'][0]['uri'])) {
    $video_attributes['poster'] = file_create_url($files[0]['field_poster']['und'][0]['uri']);
  }

  $output .= '<div class="wet-boew-multimedia span-4"><video' . drupal_attributes($video_attributes) . '>';
  foreach ($files as $delta => $file) {
    $source_attributes = array(
      'src' => file_create_url($file['uri']),
      'type' => $file['filemime'],
    );
    $output .= '<source' . drupal_attributes($source_attributes) . ' />';
  }

  if (isset($files[0]['field_caption']['und'][0]['uri'])) {
    $track_attributes = array(
      'data-type' => $files[0]['field_caption']['und'][0]['filemime'],
      'kind' => 'captions',
      'src' => file_create_url($files[0]['field_caption']['und'][0]['uri']),
    );
    $output .= '<track' . drupal_attributes($track_attributes) . ' />';
  }

  $output .= '</video></div>';
  return $output;
}
