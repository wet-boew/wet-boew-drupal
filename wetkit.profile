<?php

/**
 * @file
 * Bootstrap profile for installation of Drupal WxT.
 */

/**
 * Implements hook_install_tasks().
 */
function wetkit_install_tasks(&$install_state) {
  // Increase maximum function nesting level to prevent install errors.
  $max_nesting_level = ini_get('xdebug.max_nesting_level');
  if ($max_nesting_level > 0 && $max_nesting_level <= '200') {
    ini_set('xdebug.max_nesting_level', 200);
  }

  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  $tasks = array();

  // Add the WetKit theme selection to the installation process.
  require_once drupal_get_path('module', 'wetkit_theme') . '/wetkit_theme.profile.inc';
  $tasks = $tasks + wetkit_theme_profile_theme_selection_install_task($install_state);

  // Set up a task to include secondary language (fr).
  $tasks['wetkit_batch_processing'] = array(
    'display_name' => st('Import French Language'),
    'type' => 'batch',
  );

  $tasks['wetkit_import_content'] = array(
    'display_name' => st('Import Required Content'),
    'type' => 'batch',
    'display' => TRUE,
  );

  if (isset($install_state['parameters']['demo_content'])) {
    $tasks['wetkit_import_demo_content'] = array(
      'display_name' => st('Import Demo Content'),
      'type' => 'batch',
      'display' => $install_state['parameters']['demo_content'] == 1,
      'run' => $install_state['parameters']['demo_content'] == 1 ? INSTALL_TASK_RUN_IF_NOT_COMPLETED : INSTALL_TASK_SKIP,
    );
  }

  return $tasks;
}

/**
 * Implements hook_install_tasks_alter().
 */
function wetkit_install_tasks_alter(&$tasks, $install_state) {
  $tasks['install_select_profile']['display'] = FALSE;
  $tasks['install_select_locale']['display'] = FALSE;

  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // The "Welcome" screen needs to come after the first two steps
  // (profile and language selection), despite the fact that they are disabled.
  $new_task['wetkit_install_welcome'] = array(
    'display' => TRUE,
    'display_name' => st('Welcome'),
    'type' => 'form',
    'run' => isset($install_state['parameters']['welcome']) ? INSTALL_TASK_SKIP : INSTALL_TASK_RUN_IF_REACHED,
  );
  $old_tasks = $tasks;
  $tasks = array_slice($old_tasks, 0, 2) + $new_task + array_slice($old_tasks, 2);

  _wetkit_set_theme('wetkit_shiny');

  // If using French Locale as default remove associated Install Task.
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);

  // Magically go one level deeper in solving years of dependency problems.
  require_once drupal_get_path('module', 'wetkit_core') . '/wetkit_core.profile.inc';
  $tasks['install_load_profile']['function'] = 'wetkit_core_install_load_profile';
}

/**
 * Force-set a theme at any point during the execution of the request.
 *
 * Drupal doesn't give us the option to set the theme during the installation
 * process and forces enable the maintenance theme too early in the request
 * for us to modify it in a clean way.
 */
function _wetkit_set_theme($target_theme) {
  if ($GLOBALS['theme'] != $target_theme) {
    unset($GLOBALS['theme']);

    drupal_static_reset();
    $GLOBALS['conf']['maintenance_theme'] = $target_theme;
    _drupal_maintenance_theme();
  }
}

/**
 * Task callback: shows the welcome screen.
 */
function wetkit_install_welcome($form, &$form_state, &$install_state) {
  drupal_set_title(st('Welcome'));

  $message = st('Thank you for choosing the Web Experience Toolkit Drupal Distribution!') . '<br />';
  $message .= '<p>' . st('This distribution installs Drupal with
    preconfigured features that will help you meet Enterprise Standards.') . '</p>';
  $message .= '<p>' . st('Please note that this is a community-supported work in progress,
    so be sure to join us over on ' . l(t('github.com/wet-boew/wet-boew-drupal'), 'http://github.com/wet-boew/wet-boew-drupal') .
    ' and help us improve this product.') . '</p>';

  $form = array();
  $form['welcome_message'] = array(
    '#markup' => $message,
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st("Let's Get Started!"),
    '#weight' => 10,
  );
  return $form;
}

/**
 * Task callback: Welcome screen submit.
 */
function wetkit_install_welcome_submit($form, &$form_state) {
  global $install_state;
  $install_state['parameters']['welcome'] = 'done';
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function wetkit_form_install_configure_form_alter(&$form, $form_state) {
  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form.
  $form['site_information']['site_name']['#default_value'] = 'Web Experience Toolkit';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';

  // Define a default email address if we can guess a valid one.
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
    $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  }

  $form['wetkit_settings'] = array(
    '#type' => 'fieldset',
    '#title' => st('WXT Settings'),
  );

  $form['wetkit_settings']['demo_content'] = array(
    '#title' => st('Import Demo Content'),
    '#description' => st('Whether demo content should imported.'),
    '#type' => 'checkbox',
    '#default_value' => drupal_is_cli() ? FALSE : TRUE,
  );
  array_push($form['#submit'], 'wetkit_import_demo_content_form_submit');
}

/**
 * Batch Processing for French Language import.
 */
function wetkit_batch_processing(&$install_state) {
  // Import the additonal language po file and translate the interface.
  // Require once is only added here because too early in the bootstrap.
  require_once 'includes/locale.inc';
  require_once 'includes/form.inc';

  // Batch up the process + import existing po files.
  $batch = locale_batch_by_language('fr');
  return $batch;

}

/**
 * Task callback: return a batch API array with the products to be imported.
 */
function wetkit_import_content() {

  // Run Mega Menu migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateMegaMenu',
    t('Importing content.'),
    ));

  // Run entities import.
  $operations[] = array('_wetkit_entities_import', array(
    t('Initializing entities.'),
    ));

  // Page Manager Fix.
  $operations[] = array('_wetkit_panels_fix', array(
    t('Fix Page Manager dependency chain issue.'),
    ));

  // Permissions Fix.
  $operations[] = array('_wetkit_permissions_fix', array(
    t('Fix Permissions for Administrator Role.'),
    ));

  $batch = array(
    'title' => t('Importing content'),
    'operations' => $operations,
    'file' => drupal_get_path('profile', 'wetkit') . '/wetkit.install_callbacks.inc',
  );
  return $batch;
}

/**
 * Form submit callback: Demo content form submit callback.
 */
function wetkit_import_demo_content_form_submit($form, &$form_state) {
  global $install_state;
  $install_state['parameters']['demo_content'] = $form_state['values']['demo_content'];
}

/**
 * Task callback: return a batch API array with the products to be imported.
 */
function wetkit_import_demo_content() {
  // Fixes problems when the CSV files used for importing have been created
  // on a Mac, by forcing PHP to detect the appropriate line endings.
  ini_set("auto_detect_line_endings", TRUE);

  // Run Site Menu migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateSiteMenu',
    t('Importing content.'),
    ));

  // Run Site Menu Links migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateSiteMenuLinks',
    t('Importing content.'),
    ));

  // Run Default Content Media migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateDefaultContentMedia',
    t('Importing media.'),
    ));

  // Run Default Content migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateDefaultContent',
    t('Importing content.'),
    ));

  // Enable WetKit Demo.
  $operations[] = array('module_enable', array(
    array('wetkit_demo'),
    t('Enabling wetkit_demo module.'),
    ));

  // Run Mega Menu Links migration.
  $operations[] = array('_wetkit_import', array(
    'WetKitMigrateMegaMenuLinks',
    t('Importing content.'),
    ));

  // Install Bean demo content.
  $operations[] = array('_wetkit_bean_import', array(t('Importing Bean content.')));

  $batch = array(
    'title' => t('Importing content'),
    'operations' => $operations,
    'file' => drupal_get_path('profile', 'wetkit') . '/wetkit.install_callbacks.inc',
  );

  return $batch;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function wetkit_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
  // Hide some messages from various modules.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // For some things there are no need.
  $form['apps_message']['#access'] = FALSE;
  $form['apps_fieldset']['apps']['#title'] = NULL;

  // Improve style of apps selection form.
  if (isset($form['apps_fieldset'])) {
    $manifest = apps_manifest(apps_servers('wetkit'));
    foreach ($manifest['apps'] as $name => $app) {
      if ($name != '#theme') {
        $form['apps_fieldset']['apps']['#options'][$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array(
          'path' => $app['logo']['path'],
          'height' => '32', 'width' => '32',
        )) . '</div>' . $app['description'] . '</div></p>';
      }
    }
  }
  // Remove the demo content selection option since this is handled through the
  // WetKit demo module.
  $form['default_content_fieldset']['#access'] = FALSE;
}
