<?php
/**
 * @file
 * wetkit_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wetkit_users_user_default_permissions() {
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
