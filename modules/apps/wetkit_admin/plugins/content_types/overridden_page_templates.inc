<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's pages and layouts
 */

$plugin = array(
  'title' => t('Overridden Page Templatess'),
  'description' => t('This is a list of overridden page templates'),
  'content_types' => array('pages'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_overridden_page_templates_content_type_render($subtype, $conf, $panel_args, $context) {

  // Assemble the Overridden Template Data
  $overridden_templates = array();
  $entity_types = array('node', 'taxonomy_term', 'user');
  $count = 30;
  $query = db_select('panelizer_entity', 'pe')->extend('PagerDefault');
  $query->limit($count);
  $pages = $query
    ->fields('pe', array('entity_type', 'view_mode', 'entity_id'))
    ->orderBy('pe.entity_id', 'DESC')
    ->condition('pe.entity_type', $entity_types)
    ->condition('pe.view_mode', 'page_manager')
    ->execute()
    ->fetchAllAssoc('entity_id');
  foreach($pages as $overridden_page) {
    $entity_info = entity_get_info($overridden_page->entity_type);
    $entity = entity_load($overridden_page->entity_type, array($overridden_page->entity_id));
    $entity = $entity[$overridden_page->entity_id];
    $entity_uri = entity_uri($overridden_page->entity_type, $entity);
    $entity_data = wetkit_admin_entity_parse_info($entity, $overridden_page->entity_type);

    $overridden_templates[] = array(
      'data' => array(
        $entity_data['title'],
        '<em>' . $entity_info['bundles'][$entity_data['bundle_type']]['label'] . ' template' . '</em>',
        l(url($entity_uri['path']), $entity_uri['path']),
        l(t('Revert'), 'admin/site/panelizer-delete/' . $entity_data['type'] . '/' . $entity_data['id']),
      )
    );
  }


  // Create the Output
  $pane = new stdClass();
  $pane->title = t('Overridden Page Templates');
  if (!empty($overridden_templates)) {
    $header = array(t('Title'), t('Template'), t('Path'), '');
    $pane->content = theme('table', array('header' => $header, 'rows' => $overridden_templates, 'attributes' => array('class' => array('panelizer-overrides'))));
    $pane->content .= theme('pager', array('quantity' => $count));
  }
  else {
    $pane->content = t('No page templates have yet been overridden!');
  }
  return $pane;
}
