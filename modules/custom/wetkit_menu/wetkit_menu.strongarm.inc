<?php
/**
 * @file
 * wetkit_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_admin_menu_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_admin_menu_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_devel_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_devel_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels__enabled';
  $strongarm->value = TRUE;
  $export['menu_minipanels__enabled'] = $strongarm;

  return $export;
}
