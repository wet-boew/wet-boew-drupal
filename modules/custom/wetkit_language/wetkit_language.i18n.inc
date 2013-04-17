<?php
/**
 * @file
 * Internationalization (i18n) hooks
 */

/**
 * Implements hook_i18n_object_info().
 */
function i18n_panels_i18n_object_info() {
  $info['pane_configuration'] = array(
    'title' => t('Pane Configuration'),
    'key' => 'uuid',
    'string translation' => array(
      'textgroup' => 'panels',
      'type' => 'pane_configuration',
      'properties' => array(
        'title' => t('Pane Title'),
      ),
    ),
  );
  $info['display_configuration'] = array(
    'title' => t('Display Configuration'),
    'key' => 'uuid',
    'string translation' => array(
      'textgroup' => 'panels',
      'type' => 'display_configuration',
      'properties' => array(
        'title' => t('Display Title'),
      ),
    ),
  );

  return $info;
}

/**
 * Implements hook_i18n_string_info().
 */
function i18n_panels_i18n_string_info() {
  $groups['panels'] = array(
    'title' => t('Panels'),
    'description' => t('Translatable panels items: display and pane configuration items. E.g. Title.'),
    // This group doesn't have strings with format.
    'format' => FALSE,
    // This group can list all strings.
    'list' => FALSE,
  );
  return $groups;
}
