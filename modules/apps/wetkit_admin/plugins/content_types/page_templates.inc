<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's page templates
 */

$plugin = array(
  'title' => t('Page Templates'),
  'description' => t('This is a list of page templates'),
  'content_types' => array('page_templates'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('WetKit Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function wetkit_admin_page_templates_content_type_render($subtype, $conf, $panel_args, $context) {

  // Assemble the Page Template Data for Nodes, Taxonomy Terms, and Users
  $page_templates = array();
  $plugins = panelizer_get_entity_plugins();
  foreach ($plugins as $entity_type => $plugin) {
    if (in_array($entity_type, array('node', 'taxonomy_term', 'user'))) {
      $handler = panelizer_entity_plugin_get_handler($entity_type);
      $entity_info = entity_get_info($entity_type);
      foreach ($handler->plugin['bundles'] as $bundle_type => $bundle) {
        if (!empty($bundle['view modes']['page_manager']) && $bundle['view modes']['page_manager']['status'] == 1 && $bundle['view modes']['page_manager']['default'] == 1) {
          $page_templates[]  = array(
            'data' => array(
              $entity_info['bundles'][$bundle_type]['label'],
              '<em>' . $entity_info['label'] . ' template' . '</em>',
              (module_exists('pathauto') && pathauto_pattern_load_by_entity($entity_type, $bundle_type)) ? l('/' . pathauto_pattern_load_by_entity($entity_type, $bundle_type), 'admin/config/content/panelizer/' . $entity_type . '/' . $bundle_type . '.page_manager/content') : l('/' . $handler->plugin['entity path'], 'admin/config/content/panelizer/' . $entity_type . '/' . $bundle_type . '.page_manager/content'),
            ),
          );
        }
      }
    }
  }

  // Create the output of the pane
  $pane = new stdClass();
  $pane->title = t('Page Templates');
  if (!empty($page_templates)) {
    $pane->content = theme('table', array('header' => array(), 'rows' => $page_templates, 'attributes' => array('class' => 'panelizer-templates')));
  }
  else {
    $pane->content =  t('No page templates have yet been created!');
  }

  return $pane;
}
