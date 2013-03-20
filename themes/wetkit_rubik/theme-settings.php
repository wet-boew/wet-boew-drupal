<?php

/**
 * @file
 * Theme settings for wetkit_rubik.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function wetkit_rubik_form_system_theme_settings_alter(&$form) {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

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

  $form['wetkit_rubik']['wetkit_rubik_inline_field_descriptions'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display form field descriptions inline.'),
    '#description' => t("By default, each field's description is displayed in a pop-up, which is only visible when hovering over that field. Select this option to make all field descriptions visible at all times."),
    '#default_value' => theme_get_setting('wetkit_rubik_inline_field_descriptions', 'rubik'),
  );
}
