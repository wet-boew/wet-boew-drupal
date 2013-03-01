<?php
/**
 * @file
 * wetkit_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wetkit_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetkit_search';
  $page->task = 'page';
  $page->admin_title = 'Search Page';
  $page->admin_description = '';
  $page->path = 'search/site/!keywords';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'search content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'keywords' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetkit_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_search';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Solr Search Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'solr-search-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'solr',
          'settings' => NULL,
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'search_api_index',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search/site',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = '224a4ff7-5621-ffa4-dd03-cef2a339f2f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9a514de-7630-69a4-4dda-d3d426ca28f6';
    $pane->panel = 'contentmain';
    $pane->type = 'search_current';
    $pane->subtype = 'search_current';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => FALSE,
      'prompt' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9a514de-7630-69a4-4dda-d3d426ca28f6';
    $display->content['new-b9a514de-7630-69a4-4dda-d3d426ca28f6'] = $pane;
    $display->panels['contentmain'][0] = 'new-b9a514de-7630-69a4-4dda-d3d426ca28f6';
    $pane = new stdClass();
    $pane->pid = 'new-e4b1fd26-f93f-2a84-55e4-ace67b50753d';
    $pane->panel = 'contentmain';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => array(),
      'override_title' => 1,
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
    $pane->uuid = 'e4b1fd26-f93f-2a84-55e4-ace67b50753d';
    $display->content['new-e4b1fd26-f93f-2a84-55e4-ace67b50753d'] = $pane;
    $display->panels['contentmain'][1] = 'new-e4b1fd26-f93f-2a84-55e4-ace67b50753d';
    $pane = new stdClass();
    $pane->pid = 'new-8867783f-b2f3-2d44-c19d-fe5b6b7c2710';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_search-search_solr_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_string_1',
      ),
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8867783f-b2f3-2d44-c19d-fe5b6b7c2710';
    $display->content['new-8867783f-b2f3-2d44-c19d-fe5b6b7c2710'] = $pane;
    $display->panels['contentmain'][2] = 'new-8867783f-b2f3-2d44-c19d-fe5b6b7c2710';
    $pane = new stdClass();
    $pane->pid = 'new-4b64effb-820e-ad84-e975-e72faa76827f';
    $pane->panel = 'sidebar';
    $pane->type = 'facet';
    $pane->subtype = 'facet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => 'Filter by Type',
      'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b64effb-820e-ad84-e975-e72faa76827f';
    $display->content['new-4b64effb-820e-ad84-e975-e72faa76827f'] = $pane;
    $display->panels['sidebar'][0] = 'new-4b64effb-820e-ad84-e975-e72faa76827f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetkit_search_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_search';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Database Search Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'database-search-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search',
    'panels_breadcrumbs_paths' => 'search/site',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = '9c862c41-400f-1f74-35c1-bcb601a97c95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fff42db3-c7a5-9f14-ad00-0b057ac160a3';
    $pane->panel = 'contentmain';
    $pane->type = 'search_current';
    $pane->subtype = 'search_current';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => FALSE,
      'prompt' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fff42db3-c7a5-9f14-ad00-0b057ac160a3';
    $display->content['new-fff42db3-c7a5-9f14-ad00-0b057ac160a3'] = $pane;
    $display->panels['contentmain'][0] = 'new-fff42db3-c7a5-9f14-ad00-0b057ac160a3';
    $pane = new stdClass();
    $pane->pid = 'new-42602580-12c1-71d4-c5ab-39a408b759e7';
    $pane->panel = 'contentmain';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => array(),
      'override_title' => 1,
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
    $pane->uuid = '42602580-12c1-71d4-c5ab-39a408b759e7';
    $display->content['new-42602580-12c1-71d4-c5ab-39a408b759e7'] = $pane;
    $display->panels['contentmain'][1] = 'new-42602580-12c1-71d4-c5ab-39a408b759e7';
    $pane = new stdClass();
    $pane->pid = 'new-2a5192f7-9e54-5134-010c-7531d67c54ec';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetkit_database_search-search_database_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => '15',
      'context' => array(
        0 => 'argument_string_1',
      ),
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'widget_title' => '',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'use_pager' => 1,
      'pager_id' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2a5192f7-9e54-5134-010c-7531d67c54ec';
    $display->content['new-2a5192f7-9e54-5134-010c-7531d67c54ec'] = $pane;
    $display->panels['contentmain'][2] = 'new-2a5192f7-9e54-5134-010c-7531d67c54ec';
    $pane = new stdClass();
    $pane->pid = 'new-017cd573-8a64-3e04-f560-5220a5425b34';
    $pane->panel = 'sidebar';
    $pane->type = 'facet';
    $pane->subtype = 'facet';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => 'Filter by Type',
      'delta' => '1Cpx6naJU4Y3YvKVc0vcLK7Yo0ahaN0l',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '017cd573-8a64-3e04-f560-5220a5425b34';
    $display->content['new-017cd573-8a64-3e04-f560-5220a5425b34'] = $pane;
    $display->panels['sidebar'][0] = 'new-017cd573-8a64-3e04-f560-5220a5425b34';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_search'] = $page;

  return $pages;

}
