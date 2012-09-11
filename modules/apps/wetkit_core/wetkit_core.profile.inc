<?php

/**
 * Task handler to set the language to English since that is the only one
 * we have at the moment.
 */
function wetkit_core_install_locale_selection(&$install_state) {
  $install_state['parameters']['locale'] = 'en';
}

/**
 * Task handler to load our install profile and enhance the dependency information
 */
function wetkit_core_install_load_profile(&$install_state) {

  // Loading the install profile normally
  install_load_profile($install_state);

  // Include any dependencies that we might have missed...
  foreach($install_state['profile_info']['dependencies'] as $module) {
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
    if (!empty($module_info['dependencies'])) {
      $install_state['profile_info']['dependencies'] = array_unique(array_merge($install_state['profile_info']['dependencies'], $module_info['dependencies']));
    }
  }
}
