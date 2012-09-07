<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's pages and layouts
 */

$plugin = array(
  'title' => t('WetKit Layouts'),
  'description' => t('This is list of the layouts that come with WetKit'),
  'content_types' => array('wetkit_layouts'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_wetkit_layouts_content_type_render($subtype, $conf, $panel_args, $context) {

  // Find all the WetKit layouts
  $layout_options = array();
  foreach(panels_get_layouts() as $layout_option) {
    if ($layout_option['category'] == 'WetKit') {
      $layout_options[] = array(
        'data' => array(
          theme('image', array('path' => $layout_option['path'] . '/' . $layout_option['icon'])),
          $layout_option['title'],
          $layout_option['category'],
        ),
      );
    }
  }

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('WetKit Layouts');
  if (!empty($layout_options)) {
    $header = array(array('data' => '', 'style' => 'width: 30px'), t('Title'), t('Category'));
    $pane->content = theme('table', array('header' => $header, 'rows' => $layout_options, 'attributes' => array('class' => array('wetkit-layouts'))));
  }
  else {
    $pane->content = t('There are no WetKit layouts available :(');
  }
  return $pane;
}
