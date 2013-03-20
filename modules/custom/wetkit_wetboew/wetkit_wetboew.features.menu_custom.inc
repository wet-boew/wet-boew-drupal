<?php
/**
 * @file
 * wetkit_wetboew.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wetkit_wetboew_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Mega Menu',
    'description' => 'The <em>Main</em> megamenu for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-footer.
  $menus['menu-wet-footer'] = array(
    'menu_name' => 'menu-wet-footer',
    'title' => 'Footer',
    'description' => 'Footer Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-header.
  $menus['menu-wet-header'] = array(
    'menu_name' => 'menu-wet-header',
    'title' => 'Header',
    'description' => 'Header Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-mid-footer.
  $menus['menu-wet-mid-footer'] = array(
    'menu_name' => 'menu-wet-mid-footer',
    'title' => 'Mid Footer',
    'description' => 'Mid Footer Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-terms.
  $menus['menu-wet-terms'] = array(
    'menu_name' => 'menu-wet-terms',
    'title' => 'Terms',
    'description' => 'Terms Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Footer Section for Web Experience Toolkit');
  t('Header');
  t('Header Section for Web Experience Toolkit');
  t('Mega Menu');
  t('Mid Footer');
  t('Mid Footer Section for Web Experience Toolkit');
  t('Terms');
  t('Terms Section for Web Experience Toolkit');
  t('The <em>Main</em> megamenu for Web Experience Toolkit');

  return $menus;
}
