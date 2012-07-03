<?php

/**
* Form builder. Configure annotations.
*
* @ingroup forms
* @see system_settings_form().
*/
function wetkit_web_usability_admin_settings() {
  drupal_add_js(drupal_get_path('module', 'system') . '/system.js');

  $form['migrate_content'] = array(
    '#type' => 'fieldset',
    '#title' => t('Migrate'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE
  );
  $form['migrate_content']['migrate'] = array(
    '#type' => 'submit',
    '#value' => t('Migrate Demo Content'),
    '#submit' => array('wetkit_web_usability_migrate_content_submit'),
  );
  $form['features'] = array(
    '#type' => 'fieldset',
    '#title' => t('Enable / Disable WetKit jQuery Progressive Enhancement'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE
  );
  $form['features']['wetkit_web_usability_v1'] = array(
    '#type' => 'checkbox',
    '#title' => t('Web Experience Toolkit: jQuery v3.0 (In Development)'),
    '#default_value' => variable_get('wetkit_web_usability_v1'),
    '#description' => t('Web Experience Toolkit: jQuery v3.0 (In Development)'),
  );
  $form['#submit'][] = 'wetkit_web_usability_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Submit callback: migrates content.
 *
 * @ingroup forms
 */
function wetkit_web_usability_migrate_content_submit($form, &$form_state) {
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
function wetkit_web_usability_admin_settings_submit($form, &$form_state) {
 
}
