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
      'dcterms' => 'dcterms',
      'dc' => 'dc',
    ),
    '#default_value' => _wetkit_metatag_prefix(),
  );
  $form['#submit'][] = 'wetkit_metatag_submit';

  return system_settings_form($form);
}

/**
 * Submit callback for Dublin Core configuration.
 */
function wetkit_metatag_submit() {
  cache_clear_all('*', 'cache_metatag', TRUE);
}
