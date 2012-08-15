<?php
/**
 * @file
 * Enables modules after they have been downloaded
 */

/**
 * Implementation of hook_drush_help_alter()
 * Adds an option "enable" to pm-download command.
 */
function autoenable_drush_help_alter(&$command) {
  if ($command['command'] == 'pm-download') {
    $command['options']['enable'] = "Enable the module automatically.";
  }
}

/**
 * Implementation of drush_hook_post_COMMAND()
 * Hooks into pm-download when it has finished an enables the module automatically.
 */
function autoenable_drush_pm_post_download($request, $release) {
  $phase = drush_get_context('DRUSH_BOOTSTRAP_PHASE');
  if (($phase >= DRUSH_BOOTSTRAP_DRUPAL_SITE) &&
      drush_get_option('enable')) {
    if (file_exists($request['full_project_path'] . DIRECTORY_SEPARATOR . 
      $request['name'] . '.info')) {
      drush_invoke('pm-enable', $request['name']); 
    }
  }
}
