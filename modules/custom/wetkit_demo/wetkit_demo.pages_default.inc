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
  $display->uuid = '1fca7fae-e69e-c6d4-e557-de7931b653d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0401d359-dd80-cbd4-a9c6-4499ffa32c71';
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
    $pane->uuid = '0401d359-dd80-cbd4-a9c6-4499ffa32c71';
    $display->content['new-0401d359-dd80-cbd4-a9c6-4499ffa32c71'] = $pane;
    $display->panels['contentmain'][0] = 'new-0401d359-dd80-cbd4-a9c6-4499ffa32c71';
    $pane = new stdClass();
    $pane->pid = 'new-d71f9fa8-3a1d-6644-75ae-655dd98c5a28';
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
    $pane->uuid = 'd71f9fa8-3a1d-6644-75ae-655dd98c5a28';
    $display->content['new-d71f9fa8-3a1d-6644-75ae-655dd98c5a28'] = $pane;
    $display->panels['contentmain'][1] = 'new-d71f9fa8-3a1d-6644-75ae-655dd98c5a28';
    $pane = new stdClass();
    $pane->pid = 'new-b3ed0864-cf8e-00e4-4172-11ffa19199b7';
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
    $pane->uuid = 'b3ed0864-cf8e-00e4-4172-11ffa19199b7';
    $display->content['new-b3ed0864-cf8e-00e4-4172-11ffa19199b7'] = $pane;
    $display->panels['sidebar'][0] = 'new-b3ed0864-cf8e-00e4-4172-11ffa19199b7';
    $pane = new stdClass();
    $pane->pid = 'new-58c7a6dc-29a3-e544-1148-ccfc1ee86904';
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
    $pane->uuid = '58c7a6dc-29a3-e544-1148-ccfc1ee86904';
    $display->content['new-58c7a6dc-29a3-e544-1148-ccfc1ee86904'] = $pane;
    $display->panels['sidebar'][1] = 'new-58c7a6dc-29a3-e544-1148-ccfc1ee86904';
    $pane = new stdClass();
    $pane->pid = 'new-1ae5b718-65c3-e024-31fc-d3653846cada';
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
    $pane->uuid = '1ae5b718-65c3-e024-31fc-d3653846cada';
    $display->content['new-1ae5b718-65c3-e024-31fc-d3653846cada'] = $pane;
    $display->panels['sidebar'][2] = 'new-1ae5b718-65c3-e024-31fc-d3653846cada';
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
  $display->layout = 'sutherland';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'sutherland_top' => NULL,
      'sutherland_first' => NULL,
      'sutherland_second' => NULL,
      'sutherland_third' => NULL,
      'sutherland_bottom' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Demo';
  $display->uuid = 'f434ee22-6e3e-9b44-a9d4-b7c4547f9236';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85afc336-dbbd-afd4-ede7-f67373b29d27';
    $pane->panel = 'sutherland_bottom';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'Stay-Connected',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85afc336-dbbd-afd4-ede7-f67373b29d27';
    $display->content['new-85afc336-dbbd-afd4-ede7-f67373b29d27'] = $pane;
    $display->panels['sutherland_bottom'][0] = 'new-85afc336-dbbd-afd4-ede7-f67373b29d27';
    $pane = new stdClass();
    $pane->pid = 'new-673f621a-6667-3cc4-e51d-31865bc28dd5';
    $pane->panel = 'sutherland_first';
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
    $pane->uuid = '673f621a-6667-3cc4-e51d-31865bc28dd5';
    $display->content['new-673f621a-6667-3cc4-e51d-31865bc28dd5'] = $pane;
    $display->panels['sutherland_first'][0] = 'new-673f621a-6667-3cc4-e51d-31865bc28dd5';
    $pane = new stdClass();
    $pane->pid = 'new-474044a4-2130-9eb4-c907-f79e446e618c';
    $pane->panel = 'sutherland_second';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'Videos',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '474044a4-2130-9eb4-c907-f79e446e618c';
    $display->content['new-474044a4-2130-9eb4-c907-f79e446e618c'] = $pane;
    $display->panels['sutherland_second'][0] = 'new-474044a4-2130-9eb4-c907-f79e446e618c';
    $pane = new stdClass();
    $pane->pid = 'new-15d9a383-0e26-b004-e9c0-6e8beda5102c';
    $pane->panel = 'sutherland_third';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'Priorities',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15d9a383-0e26-b004-e9c0-6e8beda5102c';
    $display->content['new-15d9a383-0e26-b004-e9c0-6e8beda5102c'] = $pane;
    $display->panels['sutherland_third'][0] = 'new-15d9a383-0e26-b004-e9c0-6e8beda5102c';
    $pane = new stdClass();
    $pane->pid = 'new-29dbf717-51a1-1494-7952-bf6cf1ba67a9';
    $pane->panel = 'sutherland_third';
    $pane->type = 'bean_panels';
    $pane->subtype = 'bean_panels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'default',
      'bean_delta' => 'Minister',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '29dbf717-51a1-1494-7952-bf6cf1ba67a9';
    $display->content['new-29dbf717-51a1-1494-7952-bf6cf1ba67a9'] = $pane;
    $display->panels['sutherland_third'][1] = 'new-29dbf717-51a1-1494-7952-bf6cf1ba67a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_demo_panel_front'] = $page;

  return $pages;

}
