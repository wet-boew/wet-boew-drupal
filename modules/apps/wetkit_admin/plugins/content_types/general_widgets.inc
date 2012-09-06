<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's general widget panes
 */

$plugin = array(
  'title' => t('General Widget Panes'),
  'description' => t('This is list of the generical widget panes that are generally available on the site.'),
  'content_types' => array('general_widgets'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_general_widgets_content_type_render($subtype, $conf, $panel_args, $context) {

  // Create the Table Data
  ctools_include('common', 'panels');
  ctools_include('plugins', 'panels');
  $header = array(array('data' => '', 'style' => 'width: 20px'), t('Name'), '');
  $rows = array();
  foreach(_fieldable_panels_panes_default_content_type() as $widget) {
    if ($widget['name'] != 'fieldable_panels_pane') {
      $rows[] = array(
        'data' => array(
          theme('image', array('path' => $widget['icon'])),
          str_replace('Add ', '', ucwords($widget['title'])),
          l('Add new', 'admin/structure/fieldable-panels-panes/manage/' . $widget['name'] .'/add'),
        ),
      );
    }
  }

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('General Widget Panes');
  $pane->content = theme('table', array('header' => $header, 'rows' => $rows));
  return $pane;
}
