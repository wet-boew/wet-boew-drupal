<?php
/**
 * @file
 * wetkit_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function wetkit_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'WetKit Node add/edit form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e721f600-7c2f-9fd4-dd0a-eee48ee14010';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdd6faee-963e-6534-0d08-4db1cfcf0818';
    $pane->panel = 'contentmain';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'fdd6faee-963e-6534-0d08-4db1cfcf0818';
    $display->content['new-fdd6faee-963e-6534-0d08-4db1cfcf0818'] = $pane;
    $display->panels['contentmain'][0] = 'new-fdd6faee-963e-6534-0d08-4db1cfcf0818';
    $pane = new stdClass();
    $pane->pid = 'new-4430e6b4-5128-8344-0d3f-3a0021249c28';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '4430e6b4-5128-8344-0d3f-3a0021249c28';
    $display->content['new-4430e6b4-5128-8344-0d3f-3a0021249c28'] = $pane;
    $display->panels['contentmain'][1] = 'new-4430e6b4-5128-8344-0d3f-3a0021249c28';
    $pane = new stdClass();
    $pane->pid = 'new-3fbfca82-5e81-bb54-0d91-209b9d4a0df1';
    $pane->panel = 'contentmain';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '3fbfca82-5e81-bb54-0d91-209b9d4a0df1';
    $display->content['new-3fbfca82-5e81-bb54-0d91-209b9d4a0df1'] = $pane;
    $display->panels['contentmain'][2] = 'new-3fbfca82-5e81-bb54-0d91-209b9d4a0df1';
    $pane = new stdClass();
    $pane->pid = 'new-390b7bd0-1989-7964-7106-2e29ba6076d4';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '390b7bd0-1989-7964-7106-2e29ba6076d4';
    $display->content['new-390b7bd0-1989-7964-7106-2e29ba6076d4'] = $pane;
    $display->panels['contentmain'][3] = 'new-390b7bd0-1989-7964-7106-2e29ba6076d4';
    $pane = new stdClass();
    $pane->pid = 'new-857367a5-b834-50d4-5d10-bf15f424854e';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Featured image',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '857367a5-b834-50d4-5d10-bf15f424854e';
    $display->content['new-857367a5-b834-50d4-5d10-bf15f424854e'] = $pane;
    $display->panels['sidebar'][0] = 'new-857367a5-b834-50d4-5d10-bf15f424854e';
    $pane = new stdClass();
    $pane->pid = 'new-23b65da0-7fa6-91b4-c94f-dbd30ba5aed6';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Content category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23b65da0-7fa6-91b4-c94f-dbd30ba5aed6';
    $display->content['new-23b65da0-7fa6-91b4-c94f-dbd30ba5aed6'] = $pane;
    $display->panels['sidebar'][1] = 'new-23b65da0-7fa6-91b4-c94f-dbd30ba5aed6';
    $pane = new stdClass();
    $pane->pid = 'new-696d9b71-2e82-1414-19af-2f65bf35a787';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '696d9b71-2e82-1414-19af-2f65bf35a787';
    $display->content['new-696d9b71-2e82-1414-19af-2f65bf35a787'] = $pane;
    $display->panels['sidebar'][2] = 'new-696d9b71-2e82-1414-19af-2f65bf35a787';
    $pane = new stdClass();
    $pane->pid = 'new-380364ad-a36f-13e4-e521-b2be36733db6';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '380364ad-a36f-13e4-e521-b2be36733db6';
    $display->content['new-380364ad-a36f-13e4-e521-b2be36733db6'] = $pane;
    $display->panels['sidebar'][3] = 'new-380364ad-a36f-13e4-e521-b2be36733db6';
    $pane = new stdClass();
    $pane->pid = 'new-3223a34b-bf87-b1d4-b5fb-425a5ce8d892';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_author';
    $pane->subtype = 'node_form_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3223a34b-bf87-b1d4-b5fb-425a5ce8d892';
    $display->content['new-3223a34b-bf87-b1d4-b5fb-425a5ce8d892'] = $pane;
    $display->panels['sidebar'][4] = 'new-3223a34b-bf87-b1d4-b5fb-425a5ce8d892';
    $pane = new stdClass();
    $pane->pid = 'new-b4789c8a-2356-2ad4-2d39-3f1722eb448c';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b4789c8a-2356-2ad4-2d39-3f1722eb448c';
    $display->content['new-b4789c8a-2356-2ad4-2d39-3f1722eb448c'] = $pane;
    $display->panels['sidebar'][5] = 'new-b4789c8a-2356-2ad4-2d39-3f1722eb448c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-390b7bd0-1989-7964-7106-2e29ba6076d4';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  return $export;
}
