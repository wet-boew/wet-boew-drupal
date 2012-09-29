<?php
/**
 * @file
 * wetkit_wetboew.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wetkit_wetboew_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'contact',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format wetkit_html_text.
  $permissions['use text format wetkit_html_text'] = array(
    'name' => 'use text format wetkit_html_text',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format wetkit_wysiwyg_text.
  $permissions['use text format wetkit_wysiwyg_text'] = array(
    'name' => 'use text format wetkit_wysiwyg_text',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
