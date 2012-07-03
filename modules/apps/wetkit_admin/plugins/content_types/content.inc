<?php

$plugin = array(
  'title' => t('Content'),
  'description' => t('This is a standard list of content that are available'),
  'content_types' => array('content'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_content_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Content');

  // Build the content screen
  $types = node_type_get_types();
  $create = array();
  foreach ($types as $type => $object) {
    if (node_access('create', $type)) {
      $type_url_str = str_replace('_', '-', $object->type);
      $type_count = db_query("SELECT count(*) FROM {node} WHERE type = :type and status = 1", array(':type' => $type))->fetchField();
      $create_links = array();
      if (user_access('create ' . $type . ' content')) {
        $create_links[] =  array(
          'title' => t('Add new', array('!type' => $object->name)),
          'href' => 'node/add/' . $type_url_str,
          'query' => array(),           
        );                                      
      }
      $create_links[] =  array(
        'title' => t('See all'),
        'href' => 'admin/site/content',
        'query' => array('type' => $type),
      );
      if (user_access('administer content types')) {
        $create_links[] =  array(
          'title' => t('Configure', array('!type' => $object->name)),
          'href' => 'admin/structure/types/manage/' . $type_url_str,
          'query' => array(),           
        );                                      
      }
    }

    $create_links = (count($create_links)) ? theme('links__ctools_dropbutton', array('links' => $create_links, 'attributes' => array('class' => array('links', 'inline')))) : '';
    $create[] = '<div class="create-links-wrapper clearfix"><div class="create-links">' . $create_links . '</div><strong>' . $object->name . '</strong><br /><em>' . format_plural($type_count, '1 item' , '@count items') . '</em></div>';
  }
  $pane->content = count($create) ? theme('item_list', array('items' => $create)) : NULL;
  return $pane;
}
