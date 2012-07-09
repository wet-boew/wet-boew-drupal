<?php

/**
 * Implements hook_install_tasks()
 */
function wetkit_install_tasks($install_state) {

  // Start iterating through the tasks and attempt to increase the memory if
  // provided with less than 196M
  $tasks = array();
  if (ini_get('memory_limit') != '-1' && ini_get('memory_limit') <= '196M') {    
    ini_set('memory_limit', '196M');
  }

  // Include the awesomesauce that is Apps
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');

  // Set up a task to include secondary language (fr)
  $tasks['wetkit_batch_processing'] = array(
    'display_name' => t('Import French Language'),
    'type' => 'batch',
  );

  // Set up a task to verify wetkit capability to run apps
  $tasks['wetkit_apps_check'] = array(
    'display_name' => t('Enable apps support'),
    'type' => 'form',
  );

  // Set up the WetKit Apps install task
  $local_server = array(
    'machine name' => 'local',
    'default apps' => array(
      'wetkit_admin',
      'wetkit_core',
      'wetkit_demo',
      'wetkit_images',
      'wetkit_magic',
      'wetkit_pages',
      'wetkit_theme',
      'wetkit_users',
      'wetkit_widgets',
      'wetkit_wysiwyg',
      'wetkit_language',
      'wetkit_web_usability',
    ),
  );

  $wetkit_server = array(
    'machine name' => 'wetkit',
      'default apps' => array(

    ),
    'required apps' => array(

    ),
  );

  // Add Apps Install tasks
  $tasks = $tasks + apps_profile_install_tasks($install_state, $local_server);
  //$tasks = $tasks + apps_profile_install_tasks($install_state, $wetkit_server);

  // Rename one of the default apps tasks. In the case of a non-interactive
  // installation, apps_profile_install_tasks() never defines this task, so we
  // need to make sure we don't accidentally create it when it doesn't exist.
  if (isset($tasks['apps_profile_apps_select_form_local'])) {
    $tasks['apps_profile_apps_select_form_local']['display_name'] = t('Install apps for WetKit (local)');
  }
  //if (isset($tasks['apps_profile_apps_select_form_wetkit'])) {
  //  $tasks['apps_profile_apps_select_form_wetkit']['display_name'] = t('Install apps for WetKit');
  //}

  // Set up the theme selection and configuration tasks
  $tasks['wetkit_theme_form'] = array(
    'display_name' => t('Choose a theme'),
    'type' => 'form',
  );

  //$tasks['wetkit_theme_configure_form'] = array(
  //  'display_name' => t('Configure theme settings'),
  //  'type' => 'form',
  //);

  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function wetkit_form_install_configure_form_alter(&$form, $form_state) {
  
  // Set the logo for WetKit
  //$theme_data = _system_rebuild_theme_data();
  //$seven_data = $theme_data['seven']->info['settings'];
  //$seven_data['default_logo'] = 0;
  //$seven_data['logo_path'] = 'profiles/wetkit/images/wetkit_large.png';  variable_set('theme_seven_settings', $seven_data);

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
  locale_add_language('fr');
  //Batch up the process + import existing po files
  $batch = locale_batch_by_language('fr');
  return $batch;

}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function wetkit_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
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

    // Remove the demo content selection option since this is
    // handled through the Panopoly demo module.
    $form['default_content_fieldset']['#access'] = FALSE;

    // Remove the "skip this step" option since why would we want that?
    $form['actions']['skip']['#access'] = FALSE;
  }
}

/**
 * Implements hook_install_tasks_alter()
 */
function wetkit_install_tasks_alter(&$tasks, $install_state) {
  //If using French Locale as default remove associated Install Task
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);

  // Create a more fun finished page with our Open Academy Saurus
  $tasks['install_finished']['function'] = 'wetkit_finished_install';
  $tasks['install_finished']['display_name'] = t('Finished!');
  $tasks['install_finished']['type'] = 'form';
}

/**
 * Implements hook_appstore_stores_info()
 */
function wetkit_apps_servers_info() {
  $profile = variable_get('install_profile', 'wetkit');
  $info =  drupal_parse_info_file(drupal_get_path('profile', $profile) . '/' . $profile . '.info');
  return array(
    'local' => array(
      'title' => 'Local',
      'description' => 'Apps for the Web Experience Toolkit Drupal distro',
      'featured app' => 'wetkit_web_usability',
      'manifest' => '',
      //'profile' => $profile,
      //'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
      //'server_name' => (!empty($_SERVER['SERVER_NAME'])) ? $_SERVER['SERVER_NAME'] : NULL,
      //'server_ip' => (!empty($_SERVER['SERVER_ADDR'])) ? $_SERVER['SERVER_ADDR'] : NULL,
    ),
    'wetkit' => array(
      'title' => 'wetkit',
      'description' => 'Apps for the Web Experience Toolkit Drupal distro',
      'manifest' => 'http://wetkitappdev.devcloud.acquia-sites.com/app/query/WetKit%20App%20Server',
      //'profile' => $profile,
      //'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
      //'server_name' => (!empty($_SERVER['SERVER_NAME'])) ? $_SERVER['SERVER_NAME'] : NULL,
      //'server_ip' => (!empty($_SERVER['SERVER_ADDR'])) ? $_SERVER['SERVER_ADDR'] : NULL,
    ),
  );
  //'manifest' => (empty($info['version']) || $info['version'] == '7.x-1.x-dev') ? 'http://apps.getpantheon.com/panopoly-dev' : 'http://apps.getpantheon.com/panopoly',
}

/**
 * Form to check to see if Apps support is possible
 */
function wetkit_apps_check($form, &$form_state) {
  $form = array();
  
  // Set the title
  drupal_set_title(t('Enable Support for Apps'));

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
function wetkit_theme_form($form, &$form_state) {
  // Set the page title
  drupal_set_title(t('Choose a theme!'));

  // Create list of theme options, minus admin + testing + starter themes
  $themes = array();
  foreach(system_rebuild_theme_data() as $theme) {
   if (!in_array($theme->name, array('test_theme', 'update_test_basetheme', 'update_test_subtheme', 'block_test_theme', 'stark', 'seven', 'clf', 'clf_custom', 'genesis', 'genesis_subtheme', 'mobile_jquery', 'rubik', 'tao', 'zen', 'wetkit_adaptivetheme_settings'))) {
      $themes[$theme->name] = theme('image', array('path' => $theme->info['screenshot'])) . '<strong>' . $theme->info['name'] . '</strong><br><p><em>' . $theme->info['description'] . '</em></p><p class="clearfix"></p>';
    }
  }

  $form['theme_wrapper'] = array(
    '#title' => t('Starting Theme'),
    '#type' => 'fieldset',
  );

  $form['theme_wrapper']['theme'] = array(
    '#type' => 'radios',
    '#options' => $themes,
    '#default_value' => 'wetkit_adaptivetheme',
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
function wetkit_theme_form_submit($form, &$form_state) {
  // Enable and set the theme of choice
  $theme = $form_state['input']['theme'];
  theme_enable(array($theme));
  variable_set('theme_default', $theme);

  // Set the AdaptiveTheme logo to be WetKit's logo
  //if ($theme == 'bartik' || $theme == 'garland') {
  //  $theme_data = _system_rebuild_theme_data();
  //  $theme_data[$theme]->info['settings']['default_logo'] = 0;
  //  $theme_data[$theme]->info['settings']['logo_path'] = 'profiles/panopoly/images/panopoly_icon_theme.png';
  //  variable_set('theme_' . $theme . '_settings', $theme_data[$theme]->info['settings']);
  //}

  // Flush theme caches so things are right
  system_rebuild_theme_data();
  drupal_theme_rebuild();
}

/**
 * Form to choose the starting theme
 */
function wetkit_theme_configure_form($form, &$form_state) {
  $theme = variable_get('theme_default');
  ctools_include('system.admin', 'system', '');
  $form = system_theme_settings($form, $form_state, $theme); 
  return $form;
}

/**
 * Form to finish it all out and send us on our way
 */
function wetkit_finished_install($form, &$form_state) {

  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');

  $form = array();

  // Set the title
  drupal_set_title(t('Finished!'));
  $form['openingtext'] = array(
    '#markup' => '<h2>' . t('Congratulations, you just installed the Drupal 7 Web Experience Toolkit!') . '</h2>',
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
function wetkit_finished_install_submit($form, &$form_state) {

  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the install profile are registered correctly.
  _field_info_collate_fields(TRUE);
  _field_info_collate_fields();
  drupal_flush_all_caches();
  
  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());

  // Install profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();

  // Allow anonymous and authenticated users to see content
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);

  // Run cron to populate update status tables (if available) so that users
  // will be warned if they've installed an out of date Drupal version.
  // Will also trigger indexing of profile-supplied content or feeds.
  drupal_cron_run();

  // And away we go! Redirect the user to the front page if they are using
  // the interactive mode installer.
  $install_state = $form_state['build_info']['args'][0];
  if ($install_state['interactive']) {
    drupal_goto('<front>');
  }
}