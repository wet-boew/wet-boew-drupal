<?php
/**
 * @file
 * wetkit_web_usability.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wetkit_web_usability_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'WET: Mega Menu',
    'description' => 'The <em>Main</em> megamenu for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-footer.
  $menus['menu-wet-footer'] = array(
    'menu_name' => 'menu-wet-footer',
    'title' => 'WET: Footer',
    'description' => 'Footer Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-header.
  $menus['menu-wet-header'] = array(
    'menu_name' => 'menu-wet-header',
    'title' => 'WET: Header',
    'description' => 'Header Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-mid-footer.
  $menus['menu-wet-mid-footer'] = array(
    'menu_name' => 'menu-wet-mid-footer',
    'title' => 'WET: Mid Footer',
    'description' => 'Mid Footer Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-wet-terms.
  $menus['menu-wet-terms'] = array(
    'menu_name' => 'menu-wet-terms',
    'title' => 'WET: Terms',
    'description' => 'Terms Section for Web Experience Toolkit',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Section for Web Experience Toolkit');
  t('Header Section for Web Experience Toolkit');
  t('Mid Footer Section for Web Experience Toolkit');
  t('Terms Section for Web Experience Toolkit');
  t('The <em>Main</em> megamenu for Web Experience Toolkit');
  t('WET: Footer');
  t('WET: Header');
  t('WET: Mega Menu');
  t('WET: Mid Footer');
  t('WET: Terms');


  return $menus;
}
