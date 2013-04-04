<?php
/**
 * @file
 * wetkit_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wetkit_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: wetkit-menu-minipanel.
  $menus['wetkit-menu-minipanel'] = array(
    'menu_name' => 'wetkit-menu-minipanel',
    'title' => 'Minipanel: WetKit',
    'description' => 'Minipanel: WetKit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Minipanel: WetKit');


  return $menus;
}
