<?php
/**
 * @file
 * wetkit_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wetkit_admin_user_default_roles() {
  $roles = array();

  // Exported role: administrative user.
  $roles['administrative user'] = array(
    'name' => 'administrative user',
    'weight' => '2',
  );

  // Exported role: editorial user.
  $roles['editorial user'] = array(
    'name' => 'editorial user',
    'weight' => '3',
  );

  return $roles;
}
