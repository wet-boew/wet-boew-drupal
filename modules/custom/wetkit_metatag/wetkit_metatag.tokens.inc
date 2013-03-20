<?php
/**
 * @file
 * Provides additional tokens for WetKit.
 */

/**
 * Provide information about our custom placeholder/token.
 *
 * @return array
 *   An associative array of available tokens and token types.
 */
function wetkit_metatag_token_info() {
  // Current page tokens.
  $info['tokens']['current-page']['bilingual_default_value'] = array(
    'name' => t('Metatag: Default Metatag value'),
    'description' => t('Bilingual default value for use with WetKit specific metatags'),
  );
  $info['tokens']['current-page']['creator_default_value'] = array(
    'name' => t('Metatag: Bilingual Creator'),
    'description' => t('Bilingual creator for use with Metatags'),
  );
  $info['tokens']['current-page']['language_default_value'] = array(
    'name' => t('Metatag: Bilingual Global Prefix'),
    'description' => t('Bilingual global prefix for use with Metatags'),
  );
  // Panels tokens.
  $info['types']['panels'] = array(
    'name' => t('Panels'),
    'description' => t('Tokens related to panels.'),
  );
  $info['tokens']['panels']['bilingual_date_issued'] = array(
    'name' => t('Metatag: Panels Bilingual Date Issued'),
    'description' => t('Bilingual Date Issued for use with Panels Metatags'),
  );
  $info['tokens']['panels']['bilingual_date_published'] = array(
    'name' => t('Metatag: Panels Bilingual Date Published'),
    'description' => t('Bilingual Date Published for use with Panels Metatags'),
  );
  $info['tokens']['panels']['improved_creator'] = array(
    'name' => t('Metatag: Panels Improved creator'),
    'description' => t('Improved Creator for use with Panels Metatags'),
  );
  // Node tokens.
  $info['tokens']['node']['bilingual_prefix'] = array(
    'name' => t('Metatag: Bilingual Prefix'),
    'description' => t('Bilingual prefix for use with Metatags'),
  );
  $info['tokens']['node']['bilingual_date_issued'] = array(
    'name' => t('Metatag: Bilingual Date Issued'),
    'description' => t('Bilingual Date Issued for use with Metatags'),
  );
  $info['tokens']['node']['bilingual_date_published'] = array(
    'name' => t('Metatag: Bilingual Date Published'),
    'description' => t('Bilingual Date Published for use with Metatags'),
  );
  $info['tokens']['node']['improved_creator'] = array(
    'name' => t('Metatag: Improved creator'),
    'description' => t('Improved Creator for use with Metatags'),
  );
  $info['tokens']['node']['improved_summary'] = array(
    'name' => t('Metatag: Improved Summary'),
    'description' => t('Improved Summary for use with Metatags'),
  );

  return $info;
}

/**
 * Provide replacement values for placeholder tokens.
 *
 * @param string $type
 *   The machine-readable name of the type (group) of token being replaced, such
 *   as 'node', 'user', or another type defined by a hook_token_info()
 *   implementation.
 * @param array $tokens
 *   An array of tokens to be replaced. The keys are the machine-readable token
 *   names, and the values are the raw [type:token] strings that appeared in the
 *   original text.
 * @param array $data
 *   An associative array of data objects to be used when generating replacement
 *   values, as supplied in the $data parameter to token_replace().
 * @param array $options
 *   An associative array of options for token replacement; see token_replace()
 *   for possible values.
 *
 * @return array
 *   An associative array of replacement values, keyed by the raw [type:token]
 *   strings from the original text.
 */
function wetkit_metatag_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }

  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  // Current page tokens.
  if ($type == 'current-page') {
    $current_path = current_path();

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'bilingual_default_value':
          global $language;
          $value = '';
          if ($language->language == 'fr') {
            $value = 'null';
          }
          else {
            $value = 'none';
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'creator_default_value':
          global $language;
          $value = '';

          // If i18n variable exists then give it precedence.
          if (function_exists('i18n_variable_get')) {
            $value = i18n_variable_get('wetkit_metatag_creator', $language->language);
          }

          // If there is no i18n variable present for creator then node author.
          if ($value == '') {
            $value = 'Web Experience Toolkit';
          }

          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'language_default_value':
          global $language;
          $value = '';
          if ($language->language == 'fr') {
            $value = 'fra';
          }
          else {
            $value = 'eng';
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

      }
    }
  }

  // Panels tokens.
  if ($type == 'panels') {

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'bilingual_prefix':
          global $language;
          if ($language->language == 'fr') {
            $value = 'fra';
          }
          else {
            $value = 'eng';
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'bilingual_date_issued':
          global $language;
          if ($language->language == 'fr') {
            $value = format_date(time(), 'custom', 'Y-m-d');
          }
          else {
            $value = format_date(time(), 'custom', 'Y-m-d');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'bilingual_date_published':
          global $language;
          if ($language->language == 'fr') {
            $value = format_date(time(), 'custom', 'Y-m-d');
          }
          else {
            $value = format_date(time(), 'custom', 'Y-m-d');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'improved_creator':
          global $language;
          $value = '';

          // If i18n variable exists then give it precedence.
          if (function_exists('i18n_variable_get')) {
            $value = i18n_variable_get('wetkit_metatag_creator', $language->language);
          }
          else {
            $value = '';
          }

          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

      }
    }
  }

  // Node tokens.
  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'bilingual_prefix':
          if ($node->language == 'fr') {
            $value = 'fra';
          }
          else {
            $value = 'eng';
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'bilingual_date_issued':
          if ($node->language == 'fr') {
            $value = format_date($node->created, 'custom', 'Y-m-d');
          }
          else {
            $value = format_date($node->created, 'custom', 'Y-m-d');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'bilingual_date_published':
          if ($node->language == 'fr') {
            $value = format_date($node->changed, 'custom', 'Y-m-d');
          }
          else {
            $value = format_date($node->changed, 'custom', 'Y-m-d');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'improved_creator':
          $value = '';

          // If i18n variable exists then give it precedence.
          if (function_exists('i18n_variable_get')) {
            $value = i18n_variable_get('wetkit_metatag_creator', $node->language);
          }

          // If there is no i18n variable present for creator then node author.
          if ($value == '') {
            if (isset($node->name)) {
              $value = $node->name;
            }
          }

          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;

        case 'improved_summary':
          $items = field_get_items('node', $node, 'body', $language_code);
          if (isset($items)) {
            $instance = field_info_instance('node', 'body', $node->type);
            $field_langcode = field_language('node', $node, 'body', $language_code);

            // If the summary was requested and is not empty, use it.
            if ($name == 'improved_summary' && !empty($items[0]['summary'])) {
              $output = $sanitize ? _text_sanitize($instance, $field_langcode, $items[0], 'summary') : $items[0]['summary'];
            }
            // Attempt to provide a suitable version of the 'body' field.
            else {
              $output = $sanitize ? _text_sanitize($instance, $field_langcode, $items[0], 'value') : $items[0]['value'];
              // A summary was requested.
              if ($name == 'improved_summary') {
                $pos = strpos($output, ".");
                // Cap off at 150 characters.
                if ($pos >= 250) {
                  $pos = 250;
                }
                $trim_length = $pos;
                // Generate an optionally trimmed summary of the body field.
                $output = text_summary($output, $instance['settings']['text_processing'] ? $items[0]['format'] : NULL, $trim_length) . '...';
              }
            }
            $replacements[$original] = $output;
          }
          break;

      }
    }
  }

  return $replacements;
}
