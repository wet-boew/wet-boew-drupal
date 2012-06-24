<?php

/**
 * Implements hook_install_tasks()
 */
function webexp_install_tasks($install_state) {
  // Start iterating through the tasks
  $tasks = array();
  
  // Include the Apps Module Profile
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
   // Set up a task to include secondary language (fr)
  $tasks['webexp_batch_processing'] = array(
    'display_name' => t('Import French Language'),
    'type' => 'batch',
  );
  // Set up a task to verify webexp capability to run apps
  $tasks['webexp_apps_check'] = array(
    'display_name' => t('Enable apps support'),
    'type' => 'form',
  );
  if ($install_state['interactive']) {
    // Set up the Webexp Apps install task
    $webexp_server = array(
      'machine name' => 'webexp',
      'default apps' => array(
        'wetkit_search',
      ),
      //'required apps' => array(
      //  'wetkit_wysiwyg',
      //),
    );
    $tasks = $tasks + apps_profile_install_tasks($install_state, $webexp_server);
  }
  // Rename one of the default apps tasks. In the case of a non-interactive
  // installation, apps_profile_install_tasks() never defines this task, so we
  // need to make sure we don't accidentally create it when it doesn't exist.
  if (isset($tasks['apps_profile_apps_select_form_webexp'])) {
    $tasks['apps_profile_apps_select_form_webexp']['display_name'] = t('Install apps for Webexp');
  }
  // Set up the theme selection and configuration tasks
  $tasks['webexp_theme_form'] = array(
    'display_name' => t('Choose a theme'),
    'type' => 'form',
  );
  $tasks['webexp_theme_configure_form'] = array(
    'display_name' => t('Configure theme settings'),
    'type' => 'form',
  );
  // Set up the prepare task to close it out
  $tasks['webexp_prepare'] = array(
    'display_name' => t('Prepare site'),
    'type' => 'form',
  );
  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function webexp_form_install_configure_form_alter(&$form, $form_state) {
  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'Web Experience Toolkit';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  
  // Don't set the email address to "admin@localhost" as that will fail D7's
  // email address validation.
  if ($_SERVER['HTTP_HOST'] != 'localhost') {
    $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
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
  $form['#validate'][] = 'webexp_password_validate';
  $form['#submit'][] = 'webexp_password_submit';
}

/**
 * Password Policy save validate handler.
 */
function webexp_password_validate($form, &$form_state) {
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
function webexp_password_submit($form, &$form_state) {
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
function webexp_batch_processing(&$install_state) {
  //Import the additonal language po file and translate the interface;
  //Require once is only added here because too early in the bootstrap
  require_once 'includes/locale.inc';
  require_once 'includes/form.inc';

  //Call funtion locale_add_language in locale.inc
  locale_add_language('fr');
  //Batch up the process + import existing po files
  $batch = locale_batch_by_language('fr');
  return $batch;

}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function webexp_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
  // If App Manifest Exists
  if (isset($_SESSION['apps_manifest'])) {
    // For some things there are no need
    $form['apps_message']['#access'] = FALSE;
    $form['apps_fieldset']['apps']['#title'] = NULL;

    // Improve style of apps selection form
    if (isset($form['apps_fieldset'])) {
      $options = array();
      foreach($_SESSION['apps_manifest'] as $name => $app) {
        if ($name != '#theme') {
          $options[$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
        }
      }
      ksort($options);
      $form['apps_fieldset']['apps']['#options'] = $options;
    }
  }
}

/**
 * Implements hook_install_tasks_alter()
 */
function webexp_install_tasks_alter(&$tasks, $install_state) {
  //If using French Locale as default remove associated Install Task
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);

  // Create a more fun finished page with our Open Academy Saurus
  $tasks['install_finished']['function'] = 'webexp_finished_install';
  $tasks['install_finished']['display_name'] = t('Finished!');
  $tasks['install_finished']['type'] = 'form';
}

/**
 * Implements hook_appstore_stores_info()
 */
function webexp_apps_servers_info() {
  $profile = variable_get('install_profile', 'webexp');
  $info =  drupal_parse_info_file(drupal_get_path('profile', $profile) . '/' . $profile . '.info');
  return array(
    'webexp' => array(
      'title' => 'Webexp',
      'description' => 'Apps for the Web Experience Toolkit Drupal distro',
      'manifest' => 'http://wetkitappdev.devcloud.acquia-sites.com/app/query/WetKit%20App%20Server',
      'profile' => $profile,
      'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
      'server_name' => $_SERVER['SERVER_NAME'],
      'server_ip' => gethostbyname($_SERVER['SERVER_NAME']),
    ),
  );
}

/**
 * Apps installer default content callback.
 *
 * Adapted from openenterprise_default_content()
 */
function webexp_default_content(&$modules) {
  $files = system_rebuild_module_data();
  foreach($modules as $module) {
    // This assumes a pattern MYMODULE_democontent which is probably not always true. Might be 
    // better to check $_SESSION['apps_manifest'] and check to see if this exists:
    // function_exists($_SESSION['module']['configure form'])
    if (isset($files[$module . '_democontent'])) {
      $modules[] = $module . '_democontent';
    }
  }
}

/**
 * Form to check to see if Apps support is possible
 */
function webexp_apps_check($form, &$form_state) {
  $form = array();
  $form['opening'] = array(
    '#markup' => '<h1>' . t('Enable Support for Apps') . '</h1>',
  );
  $form['openingtext'] = array(
    '#markup' => '<p>' . t('Apps uses the same mechanism for installing modules as the update module in core. This depends on certain php extensions to be installed on your server. Below is the documentation for the various methods of installing.') . '</p>',
  );
  $form['ftp'] = array(
    '#title' => t('FTP'),
    '#type' => 'fieldset',
    '#description' => 'In order to install via ftp, you must have the ftp php extension enabled. Most apache2/php installs have this by default which is by it probably shows up on most installs. <br /><br />You may run into a server that doesn\'t have ftp so then you will need to install it or use an alternative method. See <a href="http://us2.php.net/manual/en/book.ftp.php">http://us2.php.net/manual/en/book.ftp.php</a> for how to install the ftp php extension. You will also need an ftp username and password that has rights to write to your site directory on your server. Be aware that FTP is not an encrypted protocol and your credentials will be transmitted in the clear.',
  );
  $form['ssh'] = array(
    '#title' => t('SSH'),
    '#type' => 'fieldset',
    '#description' => 'In order to install via ssh, you must have the ssh2 php extension installed and enabled. This does not come by default with many apache2/php installs so it commonly needs to be added. <br /><br />See <a href="http://us2.php.net/manual/en/book.ssh2.php">http://us2.php.net/manual/en/book.ssh2.php</a> for how to install the ssh2 php extension. You will also need a username and password of a user that can ssh into the server and has write permissions to your site directory on your server.',
  );
  $form['webserver'] = array(
    '#title' => 'Webserver Direct Install',
    '#type' => 'fieldset',
    '#description' => 'In order to install directly to the sites/all/modules directory it needs to be writable. In order to do this go to the root of your drupal install and type <strong>sudo chmod -R 777 sites/all/modules</strong>. Be aware that there are security issues with leaving your site in this state.',
  );
  $form['continue'] = array(
    '#type' => 'submit',
    '#value' => 'Continue',
  );
  return $form;
}
                
/**
 * Form to choose the starting theme from list of available options
 */
function webexp_theme_form($form, &$form_state) {
  // Create list of theme options, minus admin + testing + starter themes
  $themes = array();
  foreach(system_rebuild_theme_data() as $theme) {
   if (!in_array($theme->name, array('test_theme', 'update_test_basetheme', 'update_test_subtheme', 'block_test_theme', 'stark', 'seven', 'clf', 'clf_custom', 'genesis', 'genesis_subtheme', 'mobile_jquery', 'rubik', 'tao', 'zen'))) {
      $themes[$theme->name] = theme('image', array('path' => $theme->info['screenshot'])) . '<strong>' . $theme->info['name'] . '</strong><br><p><em>' . $theme->info['description'] . '</em></p><p class="clearfix"></p>';
    }
  }
  $form['theme'] = array(
    '#title' => t('Starting Theme'),
    '#type' => 'radios',
    '#options' => $themes,
    '#default_value' => 'web_usability_zen',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Choose theme',
  );
  return $form;
}

/**
 * Form submit handler to select the theme
 */
function webexp_theme_form_submit($form, &$form_state) {
  // Enable and set the theme of choice
  $theme = $form_state['input']['theme'];
  theme_enable(array($theme));
  variable_set('theme_default', $theme);
 
  // Flush theme caches so things are right
  system_rebuild_theme_data();
  drupal_theme_rebuild();
}

/**
 * Form to choose the starting theme
 */
function webexp_theme_configure_form($form, &$form_state) {
  $theme = variable_get('theme_default');
  ctools_include('system.admin', 'system', '');
  $form = system_theme_settings($form, $form_state, $theme); 
  return $form;
}

/**
 * Form to talk about preparing the site for prime time
 */
function webexp_prepare($form, &$form_state) {
  $form = array();
  $form['preparing_title'] = array(
    '#markup' => '<h1>' . t('Preparing Site'),
  );
  $form['preparing_body'] = array(
    '#markup' => '<h2>' . t('The installation now needs to do a bit more Drupal wizardry to finalize some settings.') . '</h2>',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Prepare your site',
  );
  return $form;
}

/**
 * Submit form to prepare site for prime time
 */
function webexp_prepare_submit($form, &$form_state) {
  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the install profile are registered correctly.
  module_enable(array('fences'));
  drupal_flush_all_caches();
  // Fix for some blocks being added to Header Region for certain themes.
  db_update('block')
    ->fields(array('region' => '-1'))
    ->condition('region', 'header')
    ->execute();
  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());
  // Install profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();
  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);
  // Run cron to populate update status tables (if available) so that users
  // will be warned if they've installed an out of date Drupal version.
  // Will also trigger indexing of profile-supplied content or feeds.
  drupal_cron_run();
}

/**
 * Form to finish it all out and send us on our way
 */
function webexp_finished_install($form, &$form_state) {
  $form = array();
  $form['opening'] = array(
    '#markup' => '<h1>' . t('Finished!') . '</h1>',
  );
  $form['openingtext'] = array(
    '#markup' => '<h2>' . t('Congratulations, you just installed the Drupal 7 Web Experience Toolkit!') . '</h2>',
  );
  $form['webexp_icon'] = array(
    '#markup' => theme('image', array('path' => drupal_get_path('profile', 'webexp') . '/images/webexp_icon.png')),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Visit your new site!',
  );
  return $form;
}

/**
 * Submit form to finish it out and send us on our way!
 */
function webexp_finished_install_submit($form, &$form_state) {
  // Allow anonymous and authenticated users to see content
  //user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  //user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));

  // Once more for good measure
  drupal_flush_all_caches();
  // And away we go
  // $form_state['redirect'] won't work here since we are still in the
  // installer, so use drupal_goto() (for interactive installs only) instead.
  $install_state = $form_state['build_info']['args'][0];
  if ($install_state['interactive']) {
    drupal_goto('<front>');
  }
}