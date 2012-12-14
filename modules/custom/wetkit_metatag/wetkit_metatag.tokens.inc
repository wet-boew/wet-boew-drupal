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
  $info['types']['current-page']['language'] = array(
    'name' => t('Metatag: Bilingual Global Prefix'),
    'description' => t('Bilingual global prefix for use with Metatags'),
  );
  // Node tokens
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
 * @param array $data (optional)
 *   An associative array of data objects to be used when generating replacement
 *   values, as supplied in the $data parameter to token_replace().
 * @param array $options (optional)
 *   An associative array of options for token replacement; see token_replace()
 *   for possible values.
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
        case 'language':
          global $language;
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
            $value = 'Date de modification ' . format_date($node->created, 'custom', '(Y-m-d)');
          }
          else {
            $value = 'Date Issued ' . format_date($node->created, 'custom', '(Y-m-d)');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;
        case 'bilingual_date_published':
          if ($node->language == 'fr') {
            $value = 'Date de publication ' . format_date($node->changed, 'custom', '(Y-m-d)');
          }
          else {
            $value = 'Date published ' . format_date($node->changed, 'custom', '(Y-m-d)');
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;
        case 'improved_summary':
          if ($items = field_get_items('node', $node, 'body', $language_code)) {
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
                // Cap off at 150 characters
                if ($pos >= 250 ) {
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