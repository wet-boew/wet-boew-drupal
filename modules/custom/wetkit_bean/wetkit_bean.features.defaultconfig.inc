<?php
/**
 * @file
 * wetkit_bean.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wetkit_bean_defaultconfig_features() {
  return array(
    'wetkit_bean' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function wetkit_bean_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any wetkit_bean bean.
  $permissions['view any wetkit_bean bean'] = array(
    'name' => 'view any wetkit_bean bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
