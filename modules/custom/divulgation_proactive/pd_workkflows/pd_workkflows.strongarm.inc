<?php
/**
 * @file
 * pd_workkflows.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pd_workkflows_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workflow_pd_contract';
  $strongarm->value = array(
    0 => 'node',
  );
  $export['workflow_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workflow_pd_hospitality';
  $strongarm->value = array(
    0 => 'node',
  );
  $export['workflow_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workflow_pd_reclassification';
  $strongarm->value = array(
    0 => 'node',
  );
  $export['workflow_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workflow_pd_travel';
  $strongarm->value = array(
    0 => 'node',
  );
  $export['workflow_pd_travel'] = $strongarm;

  return $export;
}
