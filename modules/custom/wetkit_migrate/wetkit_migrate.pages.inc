<?php
/**
 * @file
 * wetkit_migrate.pages.inc
 */

/**
 * WetKit Migrate Administration Form Settings.
 */
function wetkit_migrate_form() {

  // Documentation.
  $form['documentation'] = array(
    '#title' => 'Migration Settings',
    '#type'  => 'fieldset',
    '#collapsible' => 'true',
  );

  $form['documentation']['WetKitMigrateDocumentation_basedir'] = array(
    '#title' => t('Documentation migration base directory'),
    '#type' => t('textfield'),
    '#maxlength' => 255,
    '#size' => 50,
    '#default_value' => variable_get('WetKitMigrateDocumentation_basedir'),
    '#description' => t('Enter the base directory for the Documentation content'),
  );

  $form['documentation']['WetKitMigrateDocumentation_listdir'] = array(
    '#title' => t('Documentation migration source files directory'),
    '#type' => t('textfield'),
    '#maxlength' => 255,
    '#size' => 50,
    '#default_value' => variable_get('WetKitMigrateDocumentation_listdir'),
    '#description' => t('Enter the source files directory for the Documentation content'),
  );

  $form['documentation']['WetKitMigrateDocumentation_ignore_dirs'] = array(
    '#title' => t('Documentation migration folders to ignore'),
    '#type' => t('textfield'),
    '#maxlength' => 255,
    '#size' => 50,
    '#default_value' => variable_get('WetKitMigrateDocumentation_ignore_dirs'),
    '#description' => t('Enter a colon-separated list of directories that should not be migrated.'),
  );

  $form['documentation']['WetKitMigrateDocumentation_files'] = array(
    '#title' => t('Documentation Files Root Directory'),
    '#type' => t('textfield'),
    '#maxlength' => 255,
    '#size' => 50,
    '#default_value' => variable_get('WetKitMigrateDocumentation_files'),
    '#description' => t('Enter the base path where the image and other files for the subsite are located'),
  );

  // Apply default system settings to the form and return it
  // By using this function, a default form submit handler will save every
  // field to a variable with the same key value.
  return system_settings_form($form);
}
