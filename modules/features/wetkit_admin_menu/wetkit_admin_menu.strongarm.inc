<?php
/**
 * @file
 * wetkit_admin_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_admin_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_toolbar';
  $strongarm->value = array(
    'layout' => 'vertical',
    'position' => 'nw',
    'behavior' => 'df',
    'blocks' => array(
      'context_ui-editor' => -1,
      'admin-create' => -1,
      'admin-theme' => 1,
      'admin-account' => -1,
      'admin-menu' => 1,
      'shortcut-shortcuts' => -1,
      'user-online' => -1,
    ),
  );
  $export['admin_toolbar'] = $strongarm;

  return $export;
}
