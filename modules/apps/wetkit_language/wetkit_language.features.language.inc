<?php
/**
 * @file
 * wetkit_language.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function wetkit_language_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => (variable_get('radio_language_domain_en')) ? variable_get('radio_language_domain_en') : '',
    'prefix' => 'en',
    'weight' => '0',
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => (variable_get('radio_language_domain_fr')) ? variable_get('radio_language_domain_fr') : '',
    'prefix' => 'fr',
    'weight' => '0',
  );
  return $languages;
}
