<?php
/**
 * @file
 * pathauto_patterns.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pathauto_patterns_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Master Administrator' => 'Master Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Master Administrator' => 'Master Administrator',
    ),
    'module' => 'pathauto',
  );

  return $permissions;
}
