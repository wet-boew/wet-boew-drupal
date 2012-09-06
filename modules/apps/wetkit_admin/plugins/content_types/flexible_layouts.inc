<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's pages and layouts
 */

$plugin = array(
  'title' => t('Flexible Layout Builder'),
  'description' => t('This is list of your custom layouts from the flexible layout builder'),
  'content_types' => array('flexible_layouts'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_flexible_layouts_content_type_render($subtype, $conf, $panel_args, $context) {

  // Bring in anything from the flexible layout builder
  $layout_options = array();
  foreach(panels_get_layouts() as $layout_option) {
    if ($layout_option['theme'] == 'panels_flexible' && $layout_option['builder'] == FALSE) {
      $layout_options[] = array(
        'data' => array(
          theme('image', array('path' => $layout_option['path'] . '/' . $layout_option['icon'])),
          $layout_option['title'],
          $layout_option['category'],
          l(t('Edit'), 'admin/structure/panels/layouts/list/' . str_replace('flexible:', '', $layout_option['name']) . '/edit'),
        ),
      );
    }
  }

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('Flexible Layout Builder');
  if (!empty($layout_options)) {
    $header = array(array('data' => '', 'style' => 'width: 30px'), t('Title'), t('Category'), '');
    $pane->content = theme('table', array('header' => $header, 'rows' => $layout_options, 'attributes' => array('class' => array('flexible-layouts'))));
  }
  else {
    $pane->content = t('No flexible layout options have yet been created. !add add one now!', array('!add' => l('Add', 'admin/structure/panels/layouts/add-flexible')));
  }
  return $pane;
}
