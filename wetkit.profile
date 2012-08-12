<?php

/**
 * Implements hook_install_tasks()
 */
function wetkit_install_tasks($install_state) {

  // Start it off
  $tasks = array();

  // Attempt to increase the memory limit to 196M
  if (ini_get('memory_limit') != '-1' && ini_get('memory_limit') <= '196M') {    
    ini_set('memory_limit', '196M');
  }

  // Summon the power of the Apps module
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

  // Set up the Local Apps install task
  $local_server = array(
    'machine name' => 'wetkit',
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
    'required apps' => array(
      'wetkit_admin',
      'wetkit_core',
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
  $tasks = $tasks + apps_profile_install_tasks($install_state, $local_server);

  // Rename one of the default apps tasks. In the case of a non-interactive
  // installation, apps_profile_install_tasks() never defines this task, so we
  // need to make sure we don't accidentally create it when it doesn't exist.
  if (isset($tasks['apps_profile_apps_select_form_local'])) {
    $tasks['apps_profile_apps_select_form_local']['display_name'] = t('Install apps for WetKit (local)');
  }

  // Set up the theme selection and configuration tasks
  $tasks['wetkit_theme_form'] = array(
    'display_name' => t('Choose a theme'),
    'type' => 'form',
  );

  // Set up a finishing task to do cache clearing and various cleanup
  $tasks['wetkit_final_setup'] = array(
    'run' => '2',
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
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function wetkit_form_install_configure_form_alter(&$form, $form_state) {
  
  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'Web Experience Toolkit';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  
  // Define a default email address if we can guess a valid one
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
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
        $manifest = apps_manifest(apps_servers('wetkit'));
        foreach($manifest['apps'] as $name => $app) {
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
    ),
    'wetkit' => array(
      'title' => 'wetkit',
      'description' => 'Apps for the Web Experience Toolkit Drupal distro',
      'manifest' => 'http://wetkitappdev.devcloud.acquia-sites.com/app/query/WetKit%20App%20Server',
    ),
  );
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

  // Flush theme caches so things are right
  system_rebuild_theme_data();
  drupal_theme_rebuild();
}

/**
 * Handler callback to do additional setup reqired for the site
 */
function wetkit_final_setup(&$install_state) {

  // Allow anonymous and authenticated users to see and search content
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('search content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('search content'));
}
