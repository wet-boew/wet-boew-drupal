<?php
/**
 * @file
 * Variable API module. Definition for WetKit core variables
 */

/**
 * WetKit Metatags module variables.
 */
function wetkit_metatag_variable_info($options) {

  $variables['wetkit_metatag_creator'] = array(
    'type' => 'text',
    'title' => t('WetKit Metag: Creator', array(), $options),
    'default' => '',
    'description' => t("This text (if specificed) is displayed in the dcterms.creator metatag area else the [node:author] token will be used.", array(), $options),
    'group' => 'wetkit_metatags_settings',
  );

  return $variables;
}

/**
 * WetKit module variable groups.
 */
function wetkit_metatag_variable_group_info() {
  $groups['wetkit_metatags_settings'] = array(
    'title' => t('WetKit Metatag'),
    'description' => t('WetKit Metatag settings for more granular control of various metatags used throughout the site.'),
    'access' => 'administer site configuration',
  );
  return $groups;
}
