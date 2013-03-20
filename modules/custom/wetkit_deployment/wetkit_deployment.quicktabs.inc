<?php
/**
 * @file
 * wetkit_deployment.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function wetkit_deployment_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'deployment_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Deployment Sections';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'deployment_administration_nodes',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Content',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'deployment_administration_beans',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Beans',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'deployment_administration_files',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Files',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'deployment_administration_taxonomy',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Taxonomy',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'deployment_administration_users',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Users',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'WetKit Tabs';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Beans');
  t('Content');
  t('Deployment Sections');
  t('Files');
  t('Taxonomy');
  t('Users');

  $export['deployment_quicktabs'] = $quicktabs;

  return $export;
}
