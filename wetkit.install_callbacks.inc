<?php

/**
 * @file
 * Contains Batch API callbacks used during installation of Drupal WxT.
 */

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_import($operation, $type, &$context) {
  $context['message'] = t('@operation', array('@operation' => $type));
  $migration = Migration::getInstance($operation);
  $migration->processImport();
}

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_entities_import($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
}

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_bean_import($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
  _wetkit_bean_load();
}

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_panels_fix($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));

  // Fix Panels Edit Page on Browser Install.
  variable_set('page_manager_node_edit_disabled', 0);
  menu_rebuild();
}

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_permissions_fix($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));

  // Ensure Administrator has all permissions
  // checked by default.
  if ($administrator = user_role_load_by_name('administrator')) {
    $permissions = module_invoke_all('permission');
    user_role_grant_permissions($administrator->rid, array_keys($permissions));
  }
}
