<?php
/**
 * @file
 * pd_workkflows.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function pd_workkflows_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['Other PD'] = array();
  $workflows['Other PD']['Draft'] = array();
  $workflows['Other PD']['Draft']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Other PD']['Draft']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Other PD']['Draft']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Draft']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms'] = array();
  $workflows['Other PD']['Comms']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Other PD']['Comms']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Comms']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified'] = array();
  $workflows['Other PD']['Verified']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Other PD']['Verified']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Verified']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published'] = array();
  $workflows['Other PD']['Published']['anonymous user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['authenticated user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Other PD']['Published']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Other PD']['Published']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );

  $workflows['Travel/Hospitality'] = array();
  $workflows['Travel/Hospitality']['Draft'] = array();
  $workflows['Travel/Hospitality']['Draft']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Draft']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Draft']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Draft']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance'] = array();
  $workflows['Travel/Hospitality']['Finance']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Finance']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Finance']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation'] = array();
  $workflows['Travel/Hospitality']['Translation']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Translation']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Translation']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms'] = array();
  $workflows['Travel/Hospitality']['Comms']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Comms']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Comms']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified'] = array();
  $workflows['Travel/Hospitality']['Verified']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Verified']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Verified']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published'] = array();
  $workflows['Travel/Hospitality']['Published']['anonymous user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['authenticated user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Travel/Hospitality']['Published']['Co Od'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Content Poster'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Proactive Disclosure (Communications)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Proactive Disclosure (Secretariat)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Proactive Disclosure (Finance)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Proactive Disclosure (Translation)'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Rulings Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Site Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['Master Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Travel/Hospitality']['Published']['WORKFLOW_FEATURES_AUTHOR_NAME'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );

  return $workflows;
}
