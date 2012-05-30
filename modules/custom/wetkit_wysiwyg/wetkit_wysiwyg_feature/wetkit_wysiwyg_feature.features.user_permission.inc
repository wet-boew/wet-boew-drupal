<?php
/**
 * @file
 * wetkit_wysiwyg_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wetkit_wysiwyg_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: show format selection for node
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: use text format advanced_text_editor
  $permissions['use text format advanced_text_editor'] = array(
    'name' => 'use text format advanced_text_editor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format text_editor
  $permissions['use text format text_editor'] = array(
    'name' => 'use text format text_editor',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
