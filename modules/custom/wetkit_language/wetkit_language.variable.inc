<?php
/**
 * @file
 * wetkit_language.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function wetkit_language_variable_realm_default_variables() {
  $realm_variables = array();
  $realm_variables['language']['en'] = array(
    'wetkit_metatag_creator' => 'Web Experience Toolkit',
  );
  $realm_variables['language']['fr'] = array(
    'wetkit_metatag_creator' => 'Boîte à outils de l\'expérience Web',
  );

  return $realm_variables;
}
