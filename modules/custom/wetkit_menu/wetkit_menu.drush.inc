<?php
/**
 * @file
 * Drush integration for WetKit Menu.
 */

/**
 * Implements hook_drush_command().
 */
function wetkit_menu_drush_command() {
  $items = array();
  $items['download-wet-boew'] = array(
    'callback' => 'wetkit_menu_drush_download',
    'description' => dt('Downloads the required WET JavaScript library from github.com/wet-boew/wet-boew-drupal.git.'),
    'arguments' => array(
      'path' => dt('Optional. A path to the download folder. If omitted Drush will use the default location (sites/all/libraries/wet-boew).'),
    ),
  );
  return $items;
}

/**
 * Download the WET script.
 */
function wetkit_menu_drush_download() {
  $url = "https://github.com/wet-boew/wet-boew-drupal.git";

  $args = func_get_args();
  if (isset($args[0])) {
    $path = $args[0];
  }
  else {
    $path = drush_get_context('DRUSH_DRUPAL_ROOT');
    if (module_exists('libraries') && $lib_path = libraries_get_path('wet-boew')) {
      $path .= '/' . $lib_path;
    }
    else {
      $path .= '/sites/all/libraries/wet-boew';
    }
  }

  // Ensure the directory exists, if it doesn't exist, recursively create it.
  if (!is_dir($path) && !mkdir($path, 0777, TRUE)) {
    drush_log(dt('Drush was unable to create the directory @path.', array('@path' => $path)), 'error');
    return;
  }

  $olddir = getcwd();
  drush_op('chdir', $path);
  $tmp_file = 'wet-boew-drupal.zip';

  // Download the file.
  system_retrieve_file($url, './' . $tmp_file, FALSE, FILE_EXISTS_REPLACE);

  if (file_exists($tmp_file) || drush_get_context('DRUSH_SIMULATE')) {
    if (!drush_shell_exec("unzip -o %s", $tmp_file)) {
      drush_op('chdir', $olddir);
      return drush_set_error('DRUSH_PM_DOWNLOAD_FAILED', 'Drush was unable to extract WET-BOEW from ' . $tmp_file . ', ensure the \'unzip\' command is in your command path. You may also manually extract the file.');
    }
    else {
      drush_log(dt('WET-BOEW has been downloaded & extracted to @path.', array('@path' => $path)), 'success');
    }
  }
  else {
    drush_op('chdir', $olddir);
    return drush_set_error('DRUSH_PM_DOWNLOAD_FAILED', 'Drush was unable to download WET-BOEW from ' . $url . '.');
  }
}

/**
 * Implements drush_MODULE_post_COMMAND().
 */
function drush_wetkit_menu_post_enable() {
  $modules = func_get_args();
  if (in_array('wetkit_menu', $modules)) {
    wetkit_menu_drush_download();
  }
}
