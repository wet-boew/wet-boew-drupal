<?php
/**
 * @file
 * wetkit_metatag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_metatag_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wetkit_metatag_creator';
  $strongarm->value = 'Web Experience Toolkit';
  $export['wetkit_metatag_creator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wetkit_metatag_subject_scheme';
  $strongarm->value = 'gccore';
  $export['wetkit_metatag_subject_scheme'] = $strongarm;

  return $export;
}
