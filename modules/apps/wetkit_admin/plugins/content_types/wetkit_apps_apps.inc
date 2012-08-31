<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's apps
 */

$plugin = array(
  'title' => t('WetKit Apps'),
  'description' => t('This is a list of the apps for WetKit'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_wetkit_apps_apps_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  ctools_include('apps.pages', 'apps', '');
  $pane->content = apps_install_page('wetkit');
  return $pane;
}