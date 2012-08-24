<?php
/**
 * @file
 * Metatag integration for the wetkit_metatag.admin module.
 */

/**
 * Menu callback for Dublin Core configuration.
 */
function wetkit_metatag_config() {
  $form = array();

  // Add a term Prefix option.
  $form['wetkit_metatag_prefix'] = array(
    '#type' => 'select',
    '#title' => t('Dublin Core Prefix'),
    '#description' => t('Choose a prefix to be rendered on page display.'),
    '#options' => array(
      'DCTERMS' => 'dcterms',
      'DC' => 'dc',
    ),
    '#default_value' => _wetkit_dc_prefix(),
  );
  $form['#submit'][] = 'wetkit_metatag_submit';

  return system_settings_form($form);
}

/**
 * Submit callback for Dublin Core configuration.
 */
function wetkit_metatag_submit() {
  // Give feedback to the user to reset the cache to take effect.
  drupal_set_message(t('The cache needs to be cleared for this setting to take effect.'));
}
