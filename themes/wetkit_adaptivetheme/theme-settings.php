<?php

/**
 * @file
 * Implimentation of hook_form_system_theme_settings_alter()
 *
 * To use replace "wetkit_adaptivetheme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param $form: Nested array of form elements that comprise the form.
 * @param $form_state: A keyed array containing the current state of the form.
 */

function wetkit_adaptivetheme_form_system_theme_settings_alter(&$form, &$form_state)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }
  // Create the form using Forms API: http://api.drupal.org/api/7
  $form['at-settings']['accessibility'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Accessibility Settings'),
  );
  $form['at-settings']['accessibility']['skip_link_anchor'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for the “skip link” 1'),
    '#default_value' => theme_get_setting('skip_link_anchor'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the element that the accessible-but-hidden “skip link” should link to. (<a href="!link">Read more about skip links</a>.)', array('!link' => 'http://drupal.org/node/467976')),
  );
  $form['at-settings']['accessibility']['skip_link_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text for the “skip link” 1'),
    '#default_value' => theme_get_setting('skip_link_text'),
    '#description'   => t('For example: <em>Jump to navigation</em>, <em>Skip to content</em>'),
  );
  $form['at-settings']['accessibility']['skip_link2_anchor'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for the “skip link” 2'),
    '#default_value' => theme_get_setting('skip_link2_anchor'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the element that the accessible-but-hidden “skip link” should link to. (<a href="!link">Read more about skip links</a>.)', array('!link' => 'http://drupal.org/node/467976')),
  );
  $form['at-settings']['accessibility']['skip_link2_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text for the “skip link” 2'),
    '#default_value' => theme_get_setting('skip_link2_text'),
    '#description'   => t('For example: <em>Jump to navigation</em>, <em>Skip to content</em>'),
  );
  $form['at-settings']['intranet'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Intranet Settings'),
  );
  $form['at-settings']['intranet']['wetkit_intranet_enable'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Enable the Intranet Progressive Theme.'),
    '#default_value' => theme_get_setting('wetkit_intranet_enable'),
    '#description'   => t('This will modify the theme by adding custom css and logic for the Intranet Progressive Theme'),
  );
  $form['at-settings']['intranet']['wetkit_sub_site'] = array(
    '#type' => 'textfield',
    '#title' => t('Intranet web site name'),
    '#description' => t('The display name for the Intranet web site'),
    '#default_value' => theme_get_setting('wetkit_sub_site'),
  );
  // We are editing the $form in place, so we don't need to return anything.
}