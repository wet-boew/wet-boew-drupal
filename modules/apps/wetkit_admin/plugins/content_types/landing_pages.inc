<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's landing pages
 */

$plugin = array(
  'title' => t('Landing Pages'),
  'description' => t('This is a list of the landing pages that are available'),
  'content_types' => array('landing_pages'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_landing_pages_content_type_render($subtype, $conf, $panel_args, $context) {

  // Assemble the General Page Data
  $general_pages = array();
  module_load_include('inc', 'page_manager', 'page_manager.admin');
  $tasks = page_manager_get_tasks_by_type('page');
  $pages = array('operations' => array());
  page_manager_get_pages($tasks, $pages);
  foreach ($pages['rows'] as $id => $info) {
    if (strpos($id, 'wetkit_admin')) { 
      // Exclude any admin pages
    }
    elseif ($info['data']['type']['data'] == 'System') {
      // Exclude any system pages
    }
    elseif ($pages['disabled'][$id] == TRUE) {
      // Exclude any disabled pages
    }
    elseif ($info['data']['type']['data'] == 'Existing') {
      // Exclude PM Existing Pages 
    }
    elseif ($id == 'page-wetkit_search') {
      // Exclude WetKit Search's main page
    }
    else {
      // Include anything else as a general page
      $general_pages[] = array(
        'data' => array(
          $info['data']['title'],
          $info['data']['path'],
        ),
      );
    }
  }

  // Create the Output
  $pane = new stdClass();  
  $pane->title = t('Landing Pages');
  if (!empty($general_pages)) {
    $pane->content = theme('table', array('header' => array(), 'rows' => $general_pages, 'attributes' => array('class' => 'panels-manage')));
  }
  else {
    $pane->content = t('No general pages have yet been created!');
  }
  return $pane;
}
