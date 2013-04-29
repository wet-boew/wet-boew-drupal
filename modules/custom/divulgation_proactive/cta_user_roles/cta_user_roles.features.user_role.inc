<?php
/**
 * @file
 * cta_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cta_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Proactive Disclosure (Communications).
  $roles['Proactive Disclosure (Communications)'] = array(
    'name' => 'Proactive Disclosure (Communications)',
    'weight' => 9,
  );

  // Exported role: Proactive Disclosure (Finance).
  $roles['Proactive Disclosure (Finance)'] = array(
    'name' => 'Proactive Disclosure (Finance)',
    'weight' => 10,
  );

  // Exported role: Proactive Disclosure (Secretariat).
  $roles['Proactive Disclosure (Secretariat)'] = array(
    'name' => 'Proactive Disclosure (Secretariat)',
    'weight' => 8,
  );

  // Exported role: Proactive Disclosure (Translation).
  $roles['Proactive Disclosure (Translation)'] = array(
    'name' => 'Proactive Disclosure (Translation)',
    'weight' => 7,
  );

  return $roles;
}
