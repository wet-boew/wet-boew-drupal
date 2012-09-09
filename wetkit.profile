<?php

/**
 * Implements hook_install_tasks()
 */
function wetkit_install_tasks(&$install_state) {

  // Require specific code required for the install profile process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  require_once(drupal_get_path('module', 'wetkit_theme') . '/wetkit_theme.profile.inc');

  // Assemble and return the install tasks
  $tasks = array();
  
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'wetkit', 'default apps' => array('')));
  $tasks = $tasks + wetkit_theme_profile_theme_selection_install_task($install_state);

  // Set up a task to include secondary language (fr)
  $tasks['wetkit_batch_processing'] = array(
    'display_name' => t('Import French Language'),
    'type' => 'batch',
  );

  return $tasks;
}

/**
 * Implements hook_install_tasks_alter()
 */
function wetkit_install_tasks_alter(&$tasks, $install_state) {
  //If using French Locale as default remove associated Install Task
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);
  
  // Magically go one level deeper in solving years of dependency problems with install profiles
  $tasks['install_load_profile']['function'] = 'wetkit_install_load_profile';

   // Since we only offer one language, define a callback to set this
  //$tasks['install_select_locale']['function'] = 'wetkit_install_locale_selection';
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function wetkit_form_install_configure_form_alter(&$form, $form_state) {
  
  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'Web Experience Toolkit';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  
  // Define a default email address if we can guess a valid one
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
    $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  }
  
  // Password Policy for Enterprise Level Seucrity
  $roles = array(DRUPAL_AUTHENTICATED_RID);
  $policy = _password_policy_load_active_policy($roles);
  $translate = array();
  if (!empty($policy['policy'])) {
    // Some policy constraints are active.
    password_policy_add_policy_js($policy, 1);
    foreach ($policy['policy'] as $key => $value) {
      $translate['constraint_' . $key] = _password_policy_constraint_error($key, $value);
    }
  }
  // Set a custom form validate and submit handlers.
  $form['#validate'][] = 'wetkit_password_validate';
  $form['#submit'][] = 'wetkit_password_submit';
}

/**
 * Password Policy save validate handler.
 */
function wetkit_password_validate($form, &$form_state) {

  $values = $form_state['values'];
  $account = (object)array('uid' => 1);
  $account->roles = array(DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID);

  if (!empty($values['account']['pass'])) {
    $error = _password_policy_constraint_validate($values['account']['pass'], $account);
    if ($error) {
      form_set_error('pass', st('Your password has not met the basic requirement(s):') . '<ul><li>' . implode('</li><li>', $error) . '</li></ul>');
    }
  }
}

/**
 * Password Policy save submit handler.
 */
function wetkit_password_submit($form, &$form_state) {

  global $user;
  $values = $form_state['values'];
  $account = (object)array('uid' => 1);
  // Track the hashed password values which can then be used in the history constraint.
  if ($account->uid && !empty($values['account']['pass'])) {
    _password_policy_store_password($account->uid, $values['account']['pass']);
  }
}

/**
 * Batch Processing for French Language import.
 */
function wetkit_batch_processing(&$install_state) {

  //Import the additonal language po file and translate the interface;
  //Require once is only added here because too early in the bootstrap
  require_once 'includes/locale.inc';
  require_once 'includes/form.inc';

  //Call funtion locale_add_language in locale.inc
  //locale_add_language('fr');

  //Batch up the process + import existing po files
  $batch = locale_batch_by_language('fr');
  return $batch;

}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function wetkit_form_apps_profile_apps_select_form_alter(&$form, $form_state) {

    // For some things there are no need
    $form['apps_message']['#access'] = FALSE;
    $form['apps_fieldset']['apps']['#title'] = NULL;

    // Improve style of apps selection form
    if (isset($form['apps_fieldset'])) {
      $manifest = apps_manifest(apps_servers('wetkit'));
      foreach ($manifest['apps'] as $name => $app) {
       if ($name != '#theme') {
         $form['apps_fieldset']['apps']['#options'][$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
       }
      }
    }

    // Remove the demo content selection option since this is handled through the WetKit demo module.
    $form['default_content_fieldset']['#access'] = FALSE;
}

 /**
  * Task handler to set the language to English since that is the only one
  * we have at the moment.
  */
 //function wetkit_install_locale_selection(&$install_state) {
 //  $install_state['parameters']['locale'] = 'en';
 //}
 
/**
 * Task handler to load our install profile and enhance the dependency information
 */
 function wetkit_install_load_profile(&$install_state) {

  // Loading the install profile normally
  install_load_profile($install_state);

  // Include any dependencies that we might have missed...
  foreach ($install_state['profile_info']['dependencies'] as $module) {
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
    if (!empty($module_info['dependencies'])) {
      $install_state['profile_info']['dependencies'] = array_unique(array_merge($install_state['profile_info']['dependencies'], $module_info['dependencies']));
    }
  }
}