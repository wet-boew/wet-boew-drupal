<?php
/**
 * @file
 * Theme settings for wetkit_rubik.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function wetkit_rubik_form_system_theme_settings_alter(&$form) {
  $form['wetkit_rubik'] = array(
    '#type' => 'fieldset',
    '#title' => 'WetKit Rubik',
    '#collapsible' => FALSE,
  );

  $form['wetkit_rubik']['wetkit_rubik_show_user_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show User Menu in Top Right Corner'),
    '#default_value' => theme_get_setting('wetkit_rubik_show_user_menu'),
  );
}