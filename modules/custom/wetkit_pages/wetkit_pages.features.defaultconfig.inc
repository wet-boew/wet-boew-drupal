<?php
/**
 * @file
 * wetkit_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wetkit_pages_defaultconfig_features() {
  return array(
    'wetkit_pages' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function wetkit_pages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wetkit_page content.
  $permissions['create wetkit_page content'] = array(
    'name' => 'create wetkit_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wetkit_page content.
  $permissions['delete any wetkit_page content'] = array(
    'name' => 'delete any wetkit_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wetkit_page content.
  $permissions['delete own wetkit_page content'] = array(
    'name' => 'delete own wetkit_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wetkit_page content.
  $permissions['edit any wetkit_page content'] = array(
    'name' => 'edit any wetkit_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wetkit_page content.
  $permissions['edit own wetkit_page content'] = array(
    'name' => 'edit own wetkit_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
