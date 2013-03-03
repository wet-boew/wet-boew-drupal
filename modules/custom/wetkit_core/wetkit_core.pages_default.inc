<?php
/**
 * @file
 * wetkit_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wetkit_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Total Control administrative dashboard';
  $page->admin_description = '';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'have total control',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'WetKit Admin Dashboard',
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
  $display->layout = 'sutro';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d141782-c9ae-cc44-ed00-9625ee48ae1f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e6adc52-e297-a6b4-91de-23f7dd990d75';
    $pane->panel = 'column1';
    $pane->type = 'create';
    $pane->subtype = 'create';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'wetkit_documentation' => 'wetkit_documentation',
        'wetkit_page' => 'wetkit_page',
        'wetkit_page_other' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '<div class="background-accent">Create New Content</div>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e6adc52-e297-a6b4-91de-23f7dd990d75';
    $display->content['new-3e6adc52-e297-a6b4-91de-23f7dd990d75'] = $pane;
    $display->panels['column1'][0] = 'new-3e6adc52-e297-a6b4-91de-23f7dd990d75';
    $pane = new stdClass();
    $pane->pid = 'new-4f03b5fb-4424-a284-f530-8387999a510e';
    $pane->panel = 'column1';
    $pane->type = 'overview_content';
    $pane->subtype = 'overview_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'wetkit_documentation' => 'wetkit_documentation',
        'wetkit_page' => 'wetkit_page',
        'wetkit_page_other' => 0,
      ),
      'comments' => NULL,
      'spam' => NULL,
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
    $pane->uuid = '4f03b5fb-4424-a284-f530-8387999a510e';
    $display->content['new-4f03b5fb-4424-a284-f530-8387999a510e'] = $pane;
    $display->panels['column1'][1] = 'new-4f03b5fb-4424-a284-f530-8387999a510e';
    $pane = new stdClass();
    $pane->pid = 'new-65a39a9a-525d-d1c4-5538-4f43285fbb84';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_users_panes-pane_tc_new_users';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'view_mode' => 'teaser',
      'widget_title' => NULL,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '65a39a9a-525d-d1c4-5538-4f43285fbb84';
    $display->content['new-65a39a9a-525d-d1c4-5538-4f43285fbb84'] = $pane;
    $display->panels['column1'][2] = 'new-65a39a9a-525d-d1c4-5538-4f43285fbb84';
    $pane = new stdClass();
    $pane->pid = 'new-e835e473-a22c-5054-9903-1dee16581e9b';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_content_panes-pane_tc_new';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'New Content',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e835e473-a22c-5054-9903-1dee16581e9b';
    $display->content['new-e835e473-a22c-5054-9903-1dee16581e9b'] = $pane;
    $display->panels['column1'][3] = 'new-e835e473-a22c-5054-9903-1dee16581e9b';
    $pane = new stdClass();
    $pane->pid = 'new-b59c0474-c570-39f4-619d-3d343e2dd265';
    $pane->panel = 'column2';
    $pane->type = 'node_types';
    $pane->subtype = 'node_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'wetkit_documentation' => 'wetkit_documentation',
        'wetkit_page' => 'wetkit_page',
        'wetkit_page_other' => 0,
      ),
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
    $pane->uuid = 'b59c0474-c570-39f4-619d-3d343e2dd265';
    $display->content['new-b59c0474-c570-39f4-619d-3d343e2dd265'] = $pane;
    $display->panels['column2'][0] = 'new-b59c0474-c570-39f4-619d-3d343e2dd265';
    $pane = new stdClass();
    $pane->pid = 'new-06b79b3d-699c-c4f4-b1e4-157e6d4d2b04';
    $pane->panel = 'column2';
    $pane->type = 'menus';
    $pane->subtype = 'menus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menus' => array(
        'menu-wet-footer' => 'menu-wet-footer',
        'menu-wet-header' => 'menu-wet-header',
        'main-menu' => 'main-menu',
        'menu-wet-mid-footer' => 'menu-wet-mid-footer',
        'navigation' => 'navigation',
        'menu-wet-terms' => 'menu-wet-terms',
        'management' => 0,
        'user-menu' => 0,
      ),
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
    $pane->uuid = '06b79b3d-699c-c4f4-b1e4-157e6d4d2b04';
    $display->content['new-06b79b3d-699c-c4f4-b1e4-157e6d4d2b04'] = $pane;
    $display->panels['column2'][1] = 'new-06b79b3d-699c-c4f4-b1e4-157e6d4d2b04';
    $pane = new stdClass();
    $pane->pid = 'new-3f402146-b479-b8f4-e1e3-7c950fdd0445';
    $pane->panel = 'column2';
    $pane->type = 'taxonomy';
    $pane->subtype = 'taxonomy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vids' => array(
        2 => '2',
        1 => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f402146-b479-b8f4-e1e3-7c950fdd0445';
    $display->content['new-3f402146-b479-b8f4-e1e3-7c950fdd0445'] = $pane;
    $display->panels['column2'][2] = 'new-3f402146-b479-b8f4-e1e3-7c950fdd0445';
    $pane = new stdClass();
    $pane->pid = 'new-10b83a18-18ef-6b54-8132-12a6a829e7a6';
    $pane->panel = 'column2';
    $pane->type = 'panel_pages';
    $pane->subtype = 'panel_pages';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '10b83a18-18ef-6b54-8132-12a6a829e7a6';
    $display->content['new-10b83a18-18ef-6b54-8132-12a6a829e7a6'] = $pane;
    $display->panels['column2'][3] = 'new-10b83a18-18ef-6b54-8132-12a6a829e7a6';
    $pane = new stdClass();
    $pane->pid = 'new-747a8bc4-909e-aa94-11a7-6d8532376fe5';
    $pane->panel = 'header';
    $pane->type = 'welcome';
    $pane->subtype = 'welcome';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '747a8bc4-909e-aa94-11a7-6d8532376fe5';
    $display->content['new-747a8bc4-909e-aa94-11a7-6d8532376fe5'] = $pane;
    $display->panels['header'][0] = 'new-747a8bc4-909e-aa94-11a7-6d8532376fe5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Admin Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = 'fe94cfe2-c2a0-1e64-992e-5eba9aa665bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-766860cb-4917-92c4-9523-c25af16c3cc9';
    $pane->panel = 'left';
    $pane->type = 'create';
    $pane->subtype = 'create';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'project' => 'project',
        'page' => 0,
      ),
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
    $pane->locks = '';
    $pane->uuid = '766860cb-4917-92c4-9523-c25af16c3cc9';
    $display->content['new-766860cb-4917-92c4-9523-c25af16c3cc9'] = $pane;
    $display->panels['left'][0] = 'new-766860cb-4917-92c4-9523-c25af16c3cc9';
    $pane = new stdClass();
    $pane->pid = 'new-ff24932d-0c36-29f4-cd02-c01b72bac045';
    $pane->panel = 'left';
    $pane->type = 'overview_content';
    $pane->subtype = 'overview_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'page' => 'page',
        'project' => 'project',
        'video' => 'video',
      ),
      'comments' => array(
        'article' => 'article',
        'page' => 0,
        'project' => 0,
        'video' => 0,
      ),
      'spam' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'ff24932d-0c36-29f4-cd02-c01b72bac045';
    $display->content['new-ff24932d-0c36-29f4-cd02-c01b72bac045'] = $pane;
    $display->panels['left'][1] = 'new-ff24932d-0c36-29f4-cd02-c01b72bac045';
    $pane = new stdClass();
    $pane->pid = 'new-956fe555-9849-5e74-1180-f06f32ac1965';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_users_panes-pane_tc_new_users';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '956fe555-9849-5e74-1180-f06f32ac1965';
    $display->content['new-956fe555-9849-5e74-1180-f06f32ac1965'] = $pane;
    $display->panels['left'][2] = 'new-956fe555-9849-5e74-1180-f06f32ac1965';
    $pane = new stdClass();
    $pane->pid = 'new-5d341366-6de9-8e84-65ae-e4b91447324a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_content_panes-pane_tc_new';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '5d341366-6de9-8e84-65ae-e4b91447324a';
    $display->content['new-5d341366-6de9-8e84-65ae-e4b91447324a'] = $pane;
    $display->panels['left'][3] = 'new-5d341366-6de9-8e84-65ae-e4b91447324a';
    $pane = new stdClass();
    $pane->pid = 'new-c006b71b-1466-9564-a597-3aafa0761a66';
    $pane->panel = 'right';
    $pane->type = 'menus';
    $pane->subtype = 'menus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item1' => NULL,
      'item2' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
      'menus' => array(
        'main-menu' => 'main-menu',
        'navigation' => 'navigation',
        'devel' => 0,
        'management' => 0,
        'user-menu' => 0,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'c006b71b-1466-9564-a597-3aafa0761a66';
    $display->content['new-c006b71b-1466-9564-a597-3aafa0761a66'] = $pane;
    $display->panels['right'][0] = 'new-c006b71b-1466-9564-a597-3aafa0761a66';
    $pane = new stdClass();
    $pane->pid = 'new-e70fcad7-10ae-ce54-45bb-8d240a73f372';
    $pane->panel = 'right';
    $pane->type = 'node_types';
    $pane->subtype = 'node_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'page' => 'page',
        'project' => 'project',
        'video' => 'video',
      ),
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
    $pane->locks = '';
    $pane->uuid = 'e70fcad7-10ae-ce54-45bb-8d240a73f372';
    $display->content['new-e70fcad7-10ae-ce54-45bb-8d240a73f372'] = $pane;
    $display->panels['right'][1] = 'new-e70fcad7-10ae-ce54-45bb-8d240a73f372';
    $pane = new stdClass();
    $pane->pid = 'new-c8cb9920-f761-bf44-3d54-8af793d4242d';
    $pane->panel = 'right';
    $pane->type = 'taxonomy';
    $pane->subtype = 'taxonomy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vids' => array(
        0 => '2',
        1 => '1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'c8cb9920-f761-bf44-3d54-8af793d4242d';
    $display->content['new-c8cb9920-f761-bf44-3d54-8af793d4242d'] = $pane;
    $display->panels['right'][2] = 'new-c8cb9920-f761-bf44-3d54-8af793d4242d';
    $pane = new stdClass();
    $pane->pid = 'new-786597f8-a619-c504-f5f7-7d593e839a17';
    $pane->panel = 'right';
    $pane->type = 'panel_pages';
    $pane->subtype = 'panel_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item1' => NULL,
      'item2' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '786597f8-a619-c504-f5f7-7d593e839a17';
    $display->content['new-786597f8-a619-c504-f5f7-7d593e839a17'] = $pane;
    $display->panels['right'][3] = 'new-786597f8-a619-c504-f5f7-7d593e839a17';
    $pane = new stdClass();
    $pane->pid = 'new-9212c356-9e04-5954-3582-4a96f0cfc3f3';
    $pane->panel = 'top';
    $pane->type = 'welcome';
    $pane->subtype = 'welcome';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '9212c356-9e04-5954-3582-4a96f0cfc3f3';
    $display->content['new-9212c356-9e04-5954-3582-4a96f0cfc3f3'] = $pane;
    $display->panels['top'][0] = 'new-9212c356-9e04-5954-3582-4a96f0cfc3f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  return $pages;

}
