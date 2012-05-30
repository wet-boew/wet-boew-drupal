<?php
/**
 * @file
 * wetkit_custom_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wetkit_custom_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: use custom search.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  return $permissions;
}
