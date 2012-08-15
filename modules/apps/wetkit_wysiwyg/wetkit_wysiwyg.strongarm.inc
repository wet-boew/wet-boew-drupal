<?php
/**
 * @file
 * wetkit_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_browser_plugins';
  $strongarm->value = array(
    'upload' => 'upload',
    'media_default--media_browser_1' => 'media_default--media_browser_1',
    'media_internet' => 'media_internet',
    'library' => 0,
    'media_default--media_browser_my_files' => 0,
  );
  $export['media__wysiwyg_browser_plugins'] = $strongarm;

  return $export;
}
