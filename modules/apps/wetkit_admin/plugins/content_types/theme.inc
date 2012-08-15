<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's theme
 */

$plugin = array(
  'title' => t('Theme'),
  'description' => t('This is the current theme that is installed.'),
  'content_types' => array('theme'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_theme_content_type_render($subtype, $conf, $panel_args, $context) {

  // Kick us off
  $pane = new stdClass();
  $pane->title = t('Theme');
  ctools_include('modal');
  ctools_modal_add_js();

  // Get the current theme and define links
  global $theme_key;
  $theme_data = list_themes();
  $theme_links = array();
  $theme_links[] = array(
    'title' => t('Configure'),
    'href' => 'admin/wetkit_theme/configure/nojs/' . $theme_key . '/configure',
    'attributes' => array('class' => 'ctools-use-modal'),
    'query' => array(),
  );
  $theme_links[] = array(
    'title' => t('Change theme'),
    'href' => 'admin/appearance',
    'query' => array(),
  );
  $configure = (count($theme_links)) ? theme('links__ctools_dropbutton', array('links' => $theme_links, 'attributes' => array('class' => array('links', 'inline'))))  : '';

  // Display the information about the theme
  $pane->content = '<div class="clearfix"><div class="admin-theme-configure">' . $configure . '</div><div class="admin-theme-image">' . theme('image', array('path' => $theme_data[$theme_key]->info['screenshot'], 'title' => $theme_data[$theme_key]->info['name'])) . '</div></div>';
  return $pane;
}
