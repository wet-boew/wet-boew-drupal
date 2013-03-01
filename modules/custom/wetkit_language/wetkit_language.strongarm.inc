<?php
/**
 * @file
 * wetkit_language.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_language_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_shared_labels';
  $strongarm->value = 1;
  $export['entity_translation_shared_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_workflow_enabled';
  $strongarm->value = 0;
  $export['entity_translation_workflow_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_none';
  $strongarm->value = '0';
  $export['i18n_node_default_language_none'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_variable_conf';
  $strongarm->value = array(
    0 => 'i18n_select_page_list',
    1 => 'menu_main_links_source',
    2 => 'menu_secondary_links_source',
    3 => 'site_name',
    4 => 'site_slogan',
    5 => 'anonymous',
    6 => 'site_frontpage',
    7 => 'site_403',
    8 => 'site_404',
    9 => 'feed_description',
    10 => 'date_first_day',
    11 => 'user_default_timezone',
    12 => 'maintenance_mode_message',
    13 => 'theme_settings',
    14 => 'theme_[theme]_settings',
    15 => 'user_registration_help',
    16 => 'user_mail_register_admin_created_[mail_part]',
    17 => 'user_mail_register_no_approval_required_[mail_part]',
    18 => 'user_mail_register_pending_approval_[mail_part]',
    19 => 'user_mail_password_reset_[mail_part]',
    20 => 'user_mail_status_activated_[mail_part]',
    21 => 'user_mail_status_blocked_[mail_part]',
    22 => 'user_mail_cancel_confirm_[mail_part]',
    23 => 'user_mail_status_canceled_[mail_part]',
    24 => 'user_picture_dimensions',
    25 => 'user_picture_guidelines',
  );
  $export['i18n_variable_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_variable_list';
  $strongarm->value = array(
    0 => 'i18n_select_page_list',
    1 => 'menu_main_links_source',
    2 => 'menu_secondary_links_source',
    3 => 'site_name',
    4 => 'site_slogan',
    5 => 'anonymous',
    6 => 'site_frontpage',
    7 => 'site_403',
    8 => 'site_404',
    9 => 'feed_description',
    10 => 'date_first_day',
    11 => 'user_default_timezone',
    12 => 'maintenance_mode_message',
    13 => 'theme_settings',
    14 => 'theme_alpha_settings',
    15 => 'theme_bartik_settings',
    16 => 'theme_block_test_theme_settings',
    17 => 'theme_clf_settings',
    18 => 'theme_clf_custom_settings',
    19 => 'theme_garland_settings',
    20 => 'theme_genesis_settings',
    21 => 'theme_genesis_clf_settings',
    22 => 'theme_genesis_clf_intranet_settings',
    23 => 'theme_genesis_public_settings',
    24 => 'theme_genesis_scc_settings',
    25 => 'theme_mobile_jquery_settings',
    26 => 'theme_omega_settings',
    27 => 'theme_rubik_settings',
    28 => 'theme_seven_settings',
    29 => 'theme_stark_settings',
    30 => 'theme_starterkit_alpha_xhtml_settings',
    31 => 'theme_starterkit_omega_html5_settings',
    32 => 'theme_starterkit_omega_xhtml_settings',
    33 => 'theme_tao_settings',
    34 => 'theme_test_theme_settings',
    35 => 'theme_update_test_basetheme_settings',
    36 => 'theme_update_test_subtheme_settings',
    37 => 'theme_web_usability_omega_settings',
    38 => 'user_registration_help',
    39 => 'user_mail_register_admin_created_subject',
    40 => 'user_mail_register_admin_created_body',
    41 => 'user_mail_register_no_approval_required_subject',
    42 => 'user_mail_register_no_approval_required_body',
    43 => 'user_mail_register_pending_approval_subject',
    44 => 'user_mail_register_pending_approval_body',
    45 => 'user_mail_password_reset_subject',
    46 => 'user_mail_password_reset_body',
    47 => 'user_mail_status_activated_subject',
    48 => 'user_mail_status_activated_body',
    49 => 'user_mail_status_blocked_subject',
    50 => 'user_mail_status_blocked_body',
    51 => 'user_mail_cancel_confirm_subject',
    52 => 'user_mail_cancel_confirm_body',
    53 => 'user_mail_status_canceled_subject',
    54 => 'user_mail_status_canceled_body',
    55 => 'user_picture_dimensions',
    56 => 'user_picture_guidelines',
  );
  $export['i18n_variable_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'eng',
    'weight' => '0',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_field_language_fallback';
  $strongarm->value = 1;
  $export['locale_field_language_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language_content';
  $strongarm->value = array(
    'locale-url' => '-9',
    'locale-session' => '-8',
    'locale-user' => '-7',
    'locale-browser' => '-6',
    'locale-interface' => '-10',
    'language-default' => '-5',
  );
  $export['locale_language_providers_weight_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:bilingual_pathauto_prefix]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translation_language_type';
  $strongarm->value = 'language_content';
  $export['translation_language_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'menu_main_links_source',
    1 => 'menu_secondary_links_source',
    2 => 'site_name',
    3 => 'site_slogan',
    4 => 'anonymous',
    5 => 'site_frontpage',
    6 => 'site_403',
    7 => 'site_404',
    8 => 'maintenance_mode_message',
    9 => 'feed_description',
    10 => 'date_first_day',
    11 => 'user_default_timezone',
    12 => 'theme_settings',
    13 => 'theme_[theme]_settings',
    14 => 'user_registration_help',
    15 => 'user_picture_dimensions',
    16 => 'user_picture_guidelines',
    17 => 'user_mail_register_admin_created_[mail_part]',
    18 => 'user_mail_register_no_approval_required_[mail_part]',
    19 => 'user_mail_register_pending_approval_[mail_part]',
    20 => 'user_mail_password_reset_[mail_part]',
    21 => 'user_mail_status_activated_[mail_part]',
    22 => 'user_mail_status_blocked_[mail_part]',
    23 => 'user_mail_cancel_confirm_[mail_part]',
    24 => 'user_mail_status_canceled_[mail_part]',
    25 => 'wetkit_metatag_creator',
  );
  $export['variable_realm_list_language'] = $strongarm;

  return $export;
}
