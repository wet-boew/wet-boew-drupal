<?php
/**
 * @file
 * wetkit_migrate.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function wetkit_migrate_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'WetKit Migrate Multiple Column',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'wetkit_documentation' => 'wetkit_documentation',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:wetkit_documentation:field_column',
          'settings' => array(
            'field_column' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_column_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'pearson';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'pearson_top' => NULL,
      'pearson_first' => NULL,
      'pearson_second' => NULL,
      'pearson_bottom' => NULL,
      'wetkit_one_100_top' => NULL,
      'wetkit_one_100_content' => NULL,
      'wetkit_one_100_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3f472208-68be-20e4-2d49-ce9936233b8f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4217ce05-63d2-1424-8d4d-9a39e356d000';
    $pane->panel = 'pearson_first';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '4217ce05-63d2-1424-8d4d-9a39e356d000';
    $display->content['new-4217ce05-63d2-1424-8d4d-9a39e356d000'] = $pane;
    $display->panels['pearson_first'][0] = 'new-4217ce05-63d2-1424-8d4d-9a39e356d000';
    $pane = new stdClass();
    $pane->pid = 'new-e93912ce-8e84-5844-1519-1ff0a274ca5f';
    $pane->panel = 'pearson_first';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e93912ce-8e84-5844-1519-1ff0a274ca5f';
    $display->content['new-e93912ce-8e84-5844-1519-1ff0a274ca5f'] = $pane;
    $display->panels['pearson_first'][1] = 'new-e93912ce-8e84-5844-1519-1ff0a274ca5f';
    $pane = new stdClass();
    $pane->pid = 'new-0e0f2d1d-1f7f-b034-0592-36072def1eab';
    $pane->panel = 'pearson_first';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '0e0f2d1d-1f7f-b034-0592-36072def1eab';
    $display->content['new-0e0f2d1d-1f7f-b034-0592-36072def1eab'] = $pane;
    $display->panels['pearson_first'][2] = 'new-0e0f2d1d-1f7f-b034-0592-36072def1eab';
    $pane = new stdClass();
    $pane->pid = 'new-107225ea-623b-ff54-b938-49e1ef2dee23';
    $pane->panel = 'pearson_second';
    $pane->type = 'menu_tree';
    $pane->subtype = 'document_grd';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'demos/grids/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'document_grd',
      'parent_mlid' => 'document_grd:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 1,
      'sort' => 0,
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
    $pane->uuid = '107225ea-623b-ff54-b938-49e1ef2dee23';
    $display->content['new-107225ea-623b-ff54-b938-49e1ef2dee23'] = $pane;
    $display->panels['pearson_second'][0] = 'new-107225ea-623b-ff54-b938-49e1ef2dee23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'WetKit Migrate Single Column',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'wetkit_documentation' => 'wetkit_documentation',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:wetkit_documentation:field_column',
          'settings' => array(
            'field_column' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_column_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'wetkit_one_100';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'pearson_top' => NULL,
      'pearson_first' => NULL,
      'pearson_second' => NULL,
      'pearson_bottom' => NULL,
      'wetkit_one_100_top' => NULL,
      'wetkit_one_100_content' => NULL,
      'wetkit_one_100_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '82a39aae-45d3-5c74-9563-9354123cf4a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f924848d-6e73-9284-f948-dc4764c83d5d';
    $pane->panel = 'wetkit_one_100_content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'f924848d-6e73-9284-f948-dc4764c83d5d';
    $display->content['new-f924848d-6e73-9284-f948-dc4764c83d5d'] = $pane;
    $display->panels['wetkit_one_100_content'][0] = 'new-f924848d-6e73-9284-f948-dc4764c83d5d';
    $pane = new stdClass();
    $pane->pid = 'new-a9f4d870-b86b-9fd4-0d3d-f64eb3f85fe0';
    $pane->panel = 'wetkit_one_100_content';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a9f4d870-b86b-9fd4-0d3d-f64eb3f85fe0';
    $display->content['new-a9f4d870-b86b-9fd4-0d3d-f64eb3f85fe0'] = $pane;
    $display->panels['wetkit_one_100_content'][1] = 'new-a9f4d870-b86b-9fd4-0d3d-f64eb3f85fe0';
    $pane = new stdClass();
    $pane->pid = 'new-ebab45fd-8ddc-0a74-c568-c4f12d3062d1';
    $pane->panel = 'wetkit_one_100_content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'ebab45fd-8ddc-0a74-c568-c4f12d3062d1';
    $display->content['new-ebab45fd-8ddc-0a74-c568-c4f12d3062d1'] = $pane;
    $display->panels['wetkit_one_100_content'][2] = 'new-ebab45fd-8ddc-0a74-c568-c4f12d3062d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
