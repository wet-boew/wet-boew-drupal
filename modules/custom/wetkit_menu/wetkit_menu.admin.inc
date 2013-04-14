<?php
/**
 * @file
 * WetKit Menu administration include file for configuration.
 */

/**
 * Toggle the status of a menu.
 */
function wetkit_menu_menu_toggle($menu) {
  // Some security precations.
  $menu = check_plain($menu);

  // First ensure the menu item actually exists.
  $result = db_query("SELECT menu_name FROM {menu_custom} WHERE menu_name = :name", array(':name' => $menu), array('fetch' => PDO::FETCH_ASSOC));
  if (!empty($result)) {
    if (variable_get('wetkit_menu_' . $menu . '_enabled', FALSE)) {
      variable_set('wetkit_menu_' . $menu . '_enabled', FALSE);
    }
    else {
      variable_set('wetkit_menu_' . $menu . '_enabled', TRUE);
    }

    drupal_set_message(t('Menu :menu has been toggled.', array(':menu' => $menu)));
  }

  drupal_goto('admin/config/user-interface/wetkit_menu');
}

/**
 * Page callback for admin/settings/wetkit_menu.
 */
function wetkit_menu_admin() {
  $form = array();

  // Show the current status of the WET library.
  include_once 'includes/install.inc';
  module_load_include('install', 'wetkit_menu');
  $status = wetkit_menu_requirements('runtime');
  $form['status'] = array(
    '#type' => 'fieldset',
    '#title' => t('WET Library Status'),
    '#description' => '<p>' . $status['wetkit_menu']['value'] . "</p>\n",
  );
  if (!empty($status['wetkit_menu']['description'])) {
    $form['status']['#description'] .= '<p>' . $status['wetkit_menu']['description'] . "</p>\n";
  }

  // Give shortcuts to the menu-edit pages.
  $result = db_query("SELECT * FROM {menu_custom} ORDER BY title", array(), array('fetch' => PDO::FETCH_ASSOC));
  $header = array(t('Title'), array('data' => t('Can be used?')));
  $rows = array();
  foreach ($result as $menu) {
    $row = array();
    $row[] = array('data' => l($menu['title'], 'admin/structure/menu/manage/' . $menu['menu_name'] . '/edit', array('query' => array('destination' => 'admin/config/content/wetkit_menu'), 'attributes' => array('title' => t('Edit this menu')))));
    if (variable_get('wetkit_menu_' . $menu['menu_name'] . '_enabled', FALSE)) {
      $label = 'Yes';
    }
    else {
      $label = 'No';
    }
    $row[] = array(
      'data' => l(t($label), 'admin/config/user-interface/wetkit_menu/toggle/' . $menu['menu_name'], array('attributes' => array('title' => t('Toggle this menu')))));
    $rows[] = $row;
  }
  $form['menus'] = array(
    '#markup' => theme('table', array(
      'caption' => t('Menu selection'),
      'header' => $header,
      'rows' => $rows,
    )),
  );

  // Control which pages are excluded from having megamenus.
  $form['wetkit_menu_exclude_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Don\'t show WetKit Menu on specific pages'),
    '#default_value' => variable_get('wetkit_menu_exclude_paths', "admin\nadmin/*"),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array(
      '%blog' => 'blog',
      '%blog-wildcard' => 'blog/*',
      '%front' => '<front>',
    )),
  );

  return system_settings_form($form);
}
