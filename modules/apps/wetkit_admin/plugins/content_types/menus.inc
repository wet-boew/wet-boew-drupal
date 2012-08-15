<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's menus
 */

$plugin = array(
  'title' => t('Menus'),
  'description' => t('This is a standard list of menus that are available'),
  'content_types' => array('menus'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you menus type in the blocks menus.
  */
function wetkit_admin_menus_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Menus');

  // Build the menus
  $menus = array();
  foreach (menu_get_menus() as $menu_name => $menu) {
    $menu_links = array();
    if (user_access('administer menu')) {
      $menu_links[] = array(
        'title' => t('Configure', array('!menu' => ucwords($menu))),
        'href' => 'admin/structure/menu/manage/' . $menu_name . '/edit',
        'query' => array(),    
      );
      $menu_links[] = array(
        'title' => t('Add new', array('!menu' => ucwords($menu))),
        'href' => 'admin/structure/menu/manage/' . $menu_name . '/add',
        'query' => array(),           
      );
    }
    $menu_count = db_query("SELECT count(*) FROM {menu_links} WHERE menu_name = :menu_name", array(':menu_name' => $menu_name))->fetchField();
    
    // Filter out the options we don't want
    if (!in_array($menu_name, array('devel', 'management', 'navigation', 'user-menu'))) {
      $menu_links = (count($menu_links)) ? theme('links__ctools_dropbutton', array('links' => $menu_links, 'attributes' => array('class' => array('links', 'inline')))) : ''; 
      $menus[] = '<div class="menu-links-wrapper clearfix"><div class="menu-links">' . $menu_links . '</div><strong>' . ucwords(str_replace(' Menu', '', $menu)) . '</strong><br /> <em>' . format_plural($menu_count, '1 link' , '@count links') . '</em></div>';
    }
  }

  $pane->content = theme('item_list', array('items' => $menus));
  return $pane;
}
