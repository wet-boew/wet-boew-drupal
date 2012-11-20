<?php
/**
 * @file
 * wetkit_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wetkit_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetkit_demo_panel';
  $page->task = 'page';
  $page->admin_title = 'Homepage Demo';
  $page->admin_description = 'This is a demo panel for WetKit so folks can see the magic';
  $page->path = 'front/demo';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Homepage Demo',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetkit_demo_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_demo_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Demo Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Demo';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_demo-individual_demo_item';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'name' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'title' => 'WetKit Demo',
      ),
      'view_mode' => 'featured',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'view_settings' => 'nodes',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['contentmain'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_demo-demo_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'name' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'sort_by' => 'created',
        'sort_order' => 'ASC',
        'widget_title' => '',
        'items_per_page' => '3',
      ),
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => '3',
      'view_settings' => 'nodes',
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['contentmain'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'override_title' => 0,
      'override_title_text' => 'Search the Site',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['sidebar'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_demo-demo_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'name' => 0,
        'body' => 0,
      ),
      'exposed' => array(
        'widget_title' => 'Demo Items',
      ),
      'view_mode' => 'teaser',
      'widget_title' => 'Demo Items',
      'items_per_page' => '3',
      'view_settings' => 'fields',
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['sidebar'][1] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_demo-list_featured_demo_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 0,
        'name' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Featured Demo Items',
      ),
      'view_mode' => 'teaser',
      'widget_title' => 'Featured Demo Items',
      'items_per_page' => '0',
      'view_settings' => 'fields',
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['sidebar'][2] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_demo_panel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetkit_demo_panel_front';
  $page->task = 'page';
  $page->admin_title = 'WetKit Demo Front';
  $page->admin_description = 'This is a demo panel for WetKit so folks can see the magic';
  $page->path = 'demo';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Homepage Demo',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetkit_demo_panel_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_demo_panel_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Demo Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'wetkit_three_40_40_20';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'wetkit_three_40_40_20_top' => NULL,
      'wetkit_three_40_40_20_first' => NULL,
      'wetkit_three_40_40_20_second' => NULL,
      'wetkit_three_40_40_20_third' => NULL,
      'wetkit_three_40_40_20_bottom' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Demo';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'wetkit_three_40_40_20_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'headlines_front_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['wetkit_three_40_40_20_first'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'wetkit_three_40_40_20_second';
    $pane->type = 'block';
    $pane->subtype = 'boxes-videos_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['wetkit_three_40_40_20_second'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'wetkit_three_40_40_20_third';
    $pane->type = 'block';
    $pane->subtype = 'boxes-priorities_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['wetkit_three_40_40_20_third'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'wetkit_three_40_40_20_third';
    $pane->type = 'block';
    $pane->subtype = 'boxes-minister_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['wetkit_three_40_40_20_third'][1] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_demo_panel_front'] = $page;

  return $pages;

}
