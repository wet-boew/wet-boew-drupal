<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's reusable widget panes
 */

$plugin = array(
  'title' => t('Reusable Widget Panes'),
  'description' => t('This is list of the generical widget panes that are reusablely available on the site.'),
  'content_types' => array('reusable_widgets'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_reusable_widgets_content_type_render($subtype, $conf, $panel_args, $context) {

  // Create the Table Data
  ctools_include('common', 'panels');
  ctools_include('plugins', 'panels');
  $header = array(array('data' => '', 'style' => 'width: 20px'), t('Title'), t('Category'), t('Type'), '');
  $rows = array();
  $general_types = _fieldable_panels_panes_default_content_type();
  $ids = db_query('SELECT fpid FROM {fieldable_panels_panes} WHERE reusable = 1')->fetchCol();
  if ($ids) {
    $entities = fieldable_panels_panes_load_multiple($ids);
    foreach ($entities as $entity) {
      $subtype = _fieldable_panels_panes_custom_content_type($entity);
      $rows[] = array(
        'data' => array(
          theme('image', array('path' => $general_types[$entity->bundle]['icon'])),
          l($subtype['title'], 'admin/structure/fieldable-panels-panes/view/' . $entity->fpid),
          $subtype['category'],
          ucwords($entity->bundle),
          l('Edit', 'admin/structure/fieldable-panels-panes/view/' . $entity->fpid . '/edit'),
        ),
      );
    }
  } 

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('Reusable Widget Panes');
  if (!empty($rows)) {
    $pane->content = theme('table', array('header' => $header, 'rows' => $rows));
  }
  else {
    $pane->content = t('You do have not created any reusable widgets');
  }
  return $pane;
}
