<?php

/**
 * @file
 * Theme settings for wetkit_adaptivetheme.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * To use replace "wetkit_adaptivetheme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param array $form
 *   Nested array of form elements that help to comprise the form.
 * @param array $form_state
 *   A keyed array containing the current state of the rendered form.
 */
function wetkit_adaptivetheme_form_system_theme_settings_alter(&$form, &$form_state) {
  // Your knarly custom theme settings go here...
  if (isset($form_id)) {
    return;
  }
  // Create the form using Forms API: http://api.drupal.org/api/7
  $form['at-settings']['wetkit_overrides'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('WetKit Overrides'),
  );
  $form['at-settings']['wetkit_overrides']['render_mb_main_link'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Disable rendering of the mb main link inside the mega menu'),
    '#default_value' => at_get_setting('render_mb_main_link'),
    '#description'   => t('Specify whether or not the mega menu should include the main link.'),
  );
  $form['at-settings']['wetkit_overrides']['render_nolink'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Disable rendering of menu items with <nolink> as path'),
    '#default_value' => at_get_setting('render_nolink'),
    '#description'   => t('Specify whether or not menu links with <nolink> as path should render an a href. (This can break certain versions of WET)'),
  );
  $form['at-settings']['wetkit_overrides']['alternate_site_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Alternate Site URL'),
    '#default_value' => at_get_setting('alternate_site_url'),
    '#description'   => t('Alternate Site URL to be used with Site Name.'),
  );
  $form['at-settings']['wetkit_overrides']['wetkit_sub_site'] = array(
    '#type' => 'textfield',
    '#title' => t('Intranet web site name'),
    '#default_value' => at_get_setting('wetkit_sub_site'),
    '#description' => t('The display name for the Intranet web site'),
  );
  $form['at-settings']['wetkit_overrides']['search_indexing_start'] = array(
    '#type' => 'textfield',
    '#title' => t('Start Indexing tag for search'),
    '#default_value' => at_get_setting('search_indexing_start'),
    '#description' => t('Custom Markup to wrap around content to assist in indexing.'),
  );
  $form['at-settings']['wetkit_overrides']['search_indexing_stop'] = array(
    '#type' => 'textfield',
    '#title' => t('Stop Indexing tag for search'),
    '#default_value' => at_get_setting('search_indexing_stop'),
    '#description' => t('Custom Markup to wrap around content to assist in indexing.'),
  );
  $form['at-settings']['accessibility'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Accessibility Settings'),
  );
  $form['at-settings']['accessibility']['skip_link_content_anchor'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for the “skip link” 1'),
    '#default_value' => at_get_setting('skip_link_content_anchor'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the element that the accessible-but-hidden “skip link” should link to. (<a href="!link">Read more about skip links</a>.)', array('!link' => 'http://drupal.org/node/467976')),
  );
  $form['at-settings']['accessibility']['skip_link_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text for the “skip link” 1'),
    '#default_value' => t('Skip to main content'),
    '#description'   => t('For example: <em>Jump to navigation</em>, <em>Skip to content</em>'),
  );
  $form['at-settings']['accessibility']['skip_link_nav_anchor'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for the “skip link” 2'),
    '#default_value' => at_get_setting('skip_link_nav_anchor'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the element that the accessible-but-hidden “skip link” should link to. (<a href="!link">Read more about skip links</a>.)', array('!link' => 'http://drupal.org/node/467976')),
  );
  $form['at-settings']['accessibility']['skip_link2_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Text for the “skip link” 2'),
    '#default_value' => t('Skip to footer'),
    '#description'   => t('For example: <em>Jump to navigation</em>, <em>Skip to content</em>'),
  );
  // We are editing the $form in place, so we don't need to return anything.
}
