<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's panes
 */

$plugin = array(
  'title' => t('General Panes'),
  'description' => t('This is list of the panes that are generally available on the site.'),
  'content_types' => array('general_panes'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_general_panes_content_type_render($subtype, $conf, $panel_args, $context) {

  // Get the pane settings and modify accordingly
  ctools_include('common', 'panels');
  ctools_include('plugins', 'panels');
  ctools_include('content');
  $content_types =  ctools_content_get_all_types();
  $header = array(array('data' => '', 'style' => 'width: 20px'), t('Title'), t('Category'));
  $rows = array();
  foreach(ctools_content_get_all_types() as $category_name => $category) {
    foreach($category as $plugin_name => $plugin) {
      $rows[] = array(
        theme('image', array('path' => ctools_content_admin_icon($plugin))),
        $plugin['title'],
        $plugin['category'],
      );
    }
  }

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('General Panes');
  $pane->content = theme('table', array('header' => $header, 'rows' => $rows));
  return $pane;
}
