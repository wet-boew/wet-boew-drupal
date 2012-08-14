<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's taxonomies
 */

$plugin = array(
  'title' => t('Taxonomy'),
  'description' => t('This is a standard list of categories that are available'),
  'content_types' => array('categories'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you categories type in the blocks categories.
  */
function wetkit_admin_taxonomy_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Taxonomy');

  // Build configuration
  $categories = array();
  foreach (taxonomy_get_vocabularies() as $vocab) {
    $term_count = db_query("SELECT count(*) FROM {taxonomy_term_data} WHERE vid = :vid", array(':vid' => $vocab->vid))->fetchField();
    $categories_links = array();
    if (user_access('administer taxonomy') || user_access('edit terms in ' . $vocab->vid)) {
      $categories_links[] = array(
        'title' => t('Configure'),
        'href' => 'admin/structure/taxonomy/' . $vocab->machine_name,
        'query' => array(),
        );
      $categories_links[] = array(
        'title' => t('Add new'),
        'href' => 'admin/structure/taxonomy/' . $vocab->machine_name . '/add',
        'query' => array(),
      );
    }
    $categories_links = (count($categories_links)) ? theme('links__ctools_dropbutton', array('links' => $categories_links, 'attributes' => array('class' => array('links', 'inline')))) : '';
    $categories[] = '<div class="categories-links-wrapper clearfix"><div class="categories-links">' . $categories_links . '</div><strong>' . $vocab->name . '</strong><br /><em>' . format_plural($term_count, '1 term' , '@count terms') . '</em></div>';
  } 
  $pane->content = (count($categories)) ? theme('item_list', array('items' => $categories)) : NULL;
  return $pane;
}
