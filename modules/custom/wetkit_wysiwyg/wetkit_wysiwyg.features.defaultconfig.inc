<?php
/**
 * @file
 * wetkit_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wetkit_wysiwyg_defaultconfig_features() {
  return array(
    'wetkit_wysiwyg' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function wetkit_wysiwyg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format wetkit_html_text.
  $permissions['use text format wetkit_html_text'] = array(
    'name' => 'use text format wetkit_html_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format wetkit_wysiwyg_text.
  $permissions['use text format wetkit_wysiwyg_text'] = array(
    'name' => 'use text format wetkit_wysiwyg_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
