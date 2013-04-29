<?php
/**
 * @file
 * pathauto_patterns.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function pathauto_patterns_defaultconfig_features() {
  return array(
    'pathauto_patterns' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function pathauto_patterns_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_atip_request_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_atip_request_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_atip_request_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_atip_request_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_atip_request_pattern';
  $strongarm->value = '';
  $export['pathauto_node_atip_request_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_atip_request_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_atip_request_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = '';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_milestone_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_milestone_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_milestone_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_milestone_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_milestone_pattern';
  $strongarm->value = '';
  $export['pathauto_node_milestone_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_milestone_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_milestone_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_contract_en_pattern';
  $strongarm->value = 'proactive-disclosure/[node:title]';
  $export['pathauto_node_pd_contract_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_contract_fr_pattern';
  $strongarm->value = 'divulgation-proactive/[node:title]';
  $export['pathauto_node_pd_contract_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_contract_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_contract_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_contract_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_contract_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_hospitality_en_pattern';
  $strongarm->value = 'proactive-disclosure/[node:title]';
  $export['pathauto_node_pd_hospitality_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_hospitality_fr_pattern';
  $strongarm->value = 'divulgation-proactive/[node:title]';
  $export['pathauto_node_pd_hospitality_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_hospitality_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_hospitality_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_hospitality_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_hospitality_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_reclassification_en_pattern';
  $strongarm->value = 'proactive-disclosure/[node:title]';
  $export['pathauto_node_pd_reclassification_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_reclassification_fr_pattern';
  $strongarm->value = 'divulgation-proactive/[node:title]';
  $export['pathauto_node_pd_reclassification_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_reclassification_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_reclassification_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_reclassification_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_reclassification_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_travel_en_pattern';
  $strongarm->value = 'proactive-disclosure/[node:title]';
  $export['pathauto_node_pd_travel_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_travel_fr_pattern';
  $strongarm->value = 'divulgation-proactive/[node:title]';
  $export['pathauto_node_pd_travel_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_travel_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_travel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pd_travel_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pd_travel_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publication_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publication_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publication_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publication_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publication_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publication_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publication_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_publication_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ruling_en_pattern';
  $strongarm->value = 'ruling/[node:field_ruling_number]';
  $export['pathauto_node_ruling_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ruling_fr_pattern';
  $strongarm->value = 'decision/[node:field_ruling_number]';
  $export['pathauto_node_ruling_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ruling_pattern';
  $strongarm->value = 'publication/[node:title]';
  $export['pathauto_node_ruling_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ruling_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ruling_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slide_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slide_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slide_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slide_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slide_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slide_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slide_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slide_und_pattern'] = $strongarm;

  return $export;
}
