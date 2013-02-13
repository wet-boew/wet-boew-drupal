<?php
/**
 * @file
 * Provides special bilingual tokens to use with WetKit.
 */

/**
 * Provide information about our custom placeholder/token.
 *
 * @return array
 *   An associative array of available tokens and token types.
 */
function wetkit_language_token_info() {
  // Node tokens.
  $info['tokens']['node']['bilingual_pathauto_prefix'] = array(
    'name' => t('Pathauto: Bilingual Content Prefix'),
    'description' => t('Bilingual Pathauto prefix for use with Pathauto'),
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
function wetkit_language_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  // Node tokens.
  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'bilingual_pathauto_prefix':
          if ($node->language == 'fr') {
            $value = 'contenu';
          }
          else {
            $value = 'content';
          }
          $replacements[$original] = $sanitize ? filter_xss($value) : $value;
          break;
      }
    }
  }

  return $replacements;
}
