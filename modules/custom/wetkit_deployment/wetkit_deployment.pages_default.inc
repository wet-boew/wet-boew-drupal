<?php
/**
 * @file
 * wetkit_deployment.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wetkit_deployment_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetkit_deployment';
  $page->task = 'page';
  $page->admin_title = 'WetKit Deployment';
  $page->admin_description = 'Deployment Administrative Screen';
  $page->path = 'admin/dashboard/deployment';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Deployment',
    'name' => 'navigation',
    'weight' => '-1',
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
  $handler->name = 'page_wetkit_deployment_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_deployment';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1dd0ab5c-44b0-4db4-257a-8e42c5430520';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f7bbbe56-5885-1d84-3922-8679d1363fae';
    $pane->panel = 'contentmain';
    $pane->type = 'deployment';
    $pane->subtype = 'deployment';
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
    $pane->uuid = 'f7bbbe56-5885-1d84-3922-8679d1363fae';
    $display->content['new-f7bbbe56-5885-1d84-3922-8679d1363fae'] = $pane;
    $display->panels['contentmain'][0] = 'new-f7bbbe56-5885-1d84-3922-8679d1363fae';
    $pane = new stdClass();
    $pane->pid = 'new-d1a413aa-e0e1-c2b4-81c6-2672856b66dc';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'deployment_administration_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd1a413aa-e0e1-c2b4-81c6-2672856b66dc';
    $display->content['new-d1a413aa-e0e1-c2b4-81c6-2672856b66dc'] = $pane;
    $display->panels['contentmain'][1] = 'new-d1a413aa-e0e1-c2b4-81c6-2672856b66dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_deployment'] = $page;

  return $pages;

}
