<?php
/**
 * @file
 * A file for the configuration interface for WetKit Web Usability
 */

/**
 * Form builder. Configure annotations.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function wetkit_wetboew_admin_settings() {
  drupal_add_js(drupal_get_path('module', 'system') . '/system.js');

  $form['wetboew'] = array(
    '#type' => 'fieldset',
    '#title' => t('WetKit jQuery Progressive Enhancement'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE
  );
  $form['wetboew']['wetkit_wetboew_dev'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Web Experience Toolkit: jQuery v3.0 Development Mode'),
    '#default_value' => variable_get('wetkit_wetboew_dev', 0),
    '#description' => t('Selecting this checkbox will enable the unminified development version of WET-BOEW JS files'),
  );

  $form['#submit'][] = 'wetkit_wetboew_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Submit callback: migrates content.
 *
 * @ingroup forms
 */
function wetkit_wetboew_migrate_content_submit($form, &$form_state) {
  $migration = Migration::getInstance('XML_Default_Content');
  $result = $migration->processImport();
  $migration = Migration::getInstance('XML_Web_Usability');
  $result = $migration->processImport();
  $migration = Migration::getInstance('HTML_Documentation');
  $result = $migration->processImport();
}

/**
 * Handle submission of the WetKit Web Usability configuration page.
 */
function wetkit_wetboew_admin_settings_submit($form, &$form_state) {
  drupal_flush_all_caches();
}
