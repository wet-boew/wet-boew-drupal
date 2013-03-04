<?php
/**
 * @file
 * wetkit_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function wetkit_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:wetkit_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wetkit_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'page-page';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = '';
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'pearson';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'pearson_top' => NULL,
      'pearson_first' => NULL,
      'pearson_bottom' => NULL,
      'pearson_second' => NULL,
    ),
    'pearson_second' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f1a7144d-64a4-7bf4-b931-0e700ae6215d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28357710-c0b5-a374-7563-68a132da5aa5';
    $pane->panel = 'pearson_first';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'wb-cont',
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
    $pane->uuid = '28357710-c0b5-a374-7563-68a132da5aa5';
    $display->content['new-28357710-c0b5-a374-7563-68a132da5aa5'] = $pane;
    $display->panels['pearson_first'][0] = 'new-28357710-c0b5-a374-7563-68a132da5aa5';
    $pane = new stdClass();
    $pane->pid = 'new-f911e7f8-853e-4c04-e561-60d5b6ee7080';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f911e7f8-853e-4c04-e561-60d5b6ee7080';
    $display->content['new-f911e7f8-853e-4c04-e561-60d5b6ee7080'] = $pane;
    $display->panels['pearson_first'][1] = 'new-f911e7f8-853e-4c04-e561-60d5b6ee7080';
    $pane = new stdClass();
    $pane->pid = 'new-cd6c5c4b-9dbc-ba04-0913-60c13d9e0e64';
    $pane->panel = 'pearson_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cd6c5c4b-9dbc-ba04-0913-60c13d9e0e64';
    $display->content['new-cd6c5c4b-9dbc-ba04-0913-60c13d9e0e64'] = $pane;
    $display->panels['pearson_first'][2] = 'new-cd6c5c4b-9dbc-ba04-0913-60c13d9e0e64';
    $pane = new stdClass();
    $pane->pid = 'new-4f47e56c-213d-4af4-b5e1-084ca78518fb';
    $pane->panel = 'pearson_first';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'panelizer',
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
    $pane->uuid = '4f47e56c-213d-4af4-b5e1-084ca78518fb';
    $display->content['new-4f47e56c-213d-4af4-b5e1-084ca78518fb'] = $pane;
    $display->panels['pearson_first'][3] = 'new-4f47e56c-213d-4af4-b5e1-084ca78518fb';
    $pane = new stdClass();
    $pane->pid = 'new-fa01dc08-f1a0-f9f4-bd4c-c51f31a44dc9';
    $pane->panel = 'pearson_second';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Main Menu',
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
    $pane->uuid = 'fa01dc08-f1a0-f9f4-bd4c-c51f31a44dc9';
    $display->content['new-fa01dc08-f1a0-f9f4-bd4c-c51f31a44dc9'] = $pane;
    $display->panels['pearson_second'][0] = 'new-fa01dc08-f1a0-f9f4-bd4c-c51f31a44dc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wetkit_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:wetkit_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wetkit_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'page-default';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7854fc5b-70f4-94c4-29e9-1dc8d1456a4a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-685f6a02-8db3-2274-8d9f-c98c604d2152';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_share_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'wetkit_widgets_share',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'custom_class' => 'span-4',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '685f6a02-8db3-2274-8d9f-c98c604d2152';
    $display->content['new-685f6a02-8db3-2274-8d9f-c98c604d2152'] = $pane;
    $display->panels['contentmain'][0] = 'new-685f6a02-8db3-2274-8d9f-c98c604d2152';
    $pane = new stdClass();
    $pane->pid = 'new-beac8fcf-cf69-da94-4940-9c4762568f89';
    $pane->panel = 'contentmain';
    $pane->type = 'archived_widget';
    $pane->subtype = 'archived_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'beac8fcf-cf69-da94-4940-9c4762568f89';
    $display->content['new-beac8fcf-cf69-da94-4940-9c4762568f89'] = $pane;
    $display->panels['contentmain'][1] = 'new-beac8fcf-cf69-da94-4940-9c4762568f89';
    $pane = new stdClass();
    $pane->pid = 'new-b991e592-d2da-0bc4-b591-1a287343e310';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'wetkit_widgets_lightbox',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'panopoly_image_half',
        'image_link' => '',
        'image_style_destination' => 'panopoly_image_half',
        'image_style_source' => 'panopoly_image_half',
        'custom_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'view_mode' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b991e592-d2da-0bc4-b591-1a287343e310';
    $display->content['new-b991e592-d2da-0bc4-b591-1a287343e310'] = $pane;
    $display->panels['contentmain'][2] = 'new-b991e592-d2da-0bc4-b591-1a287343e310';
    $pane = new stdClass();
    $pane->pid = 'new-9074cd05-d8b8-8ec4-fdac-e686c9443e9b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '9074cd05-d8b8-8ec4-fdac-e686c9443e9b';
    $display->content['new-9074cd05-d8b8-8ec4-fdac-e686c9443e9b'] = $pane;
    $display->panels['contentmain'][3] = 'new-9074cd05-d8b8-8ec4-fdac-e686c9443e9b';
    $pane = new stdClass();
    $pane->pid = 'new-f7a4e28c-af61-7234-9dc9-a63469563766';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f7a4e28c-af61-7234-9dc9-a63469563766';
    $display->content['new-f7a4e28c-af61-7234-9dc9-a63469563766'] = $pane;
    $display->panels['contentmain'][4] = 'new-f7a4e28c-af61-7234-9dc9-a63469563766';
    $pane = new stdClass();
    $pane->pid = 'new-5bcea881-0569-69e4-f1d8-a2d752de0a58';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '5bcea881-0569-69e4-f1d8-a2d752de0a58';
    $display->content['new-5bcea881-0569-69e4-f1d8-a2d752de0a58'] = $pane;
    $display->panels['contentmain'][5] = 'new-5bcea881-0569-69e4-f1d8-a2d752de0a58';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wetkit_page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:wetkit_page:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wetkit_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cb8bad5f-4581-54a4-a90a-2f58b4c5aa19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bab4cb8-0767-ca34-2577-9f9f9cdb69f1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'panopoly_image_half',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '4bab4cb8-0767-ca34-2577-9f9f9cdb69f1';
    $display->content['new-4bab4cb8-0767-ca34-2577-9f9f9cdb69f1'] = $pane;
    $display->panels['contentmain'][0] = 'new-4bab4cb8-0767-ca34-2577-9f9f9cdb69f1';
    $pane = new stdClass();
    $pane->pid = 'new-3f56a28a-910e-cd14-c9b9-847aa3cceb69';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
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
    $pane->uuid = '3f56a28a-910e-cd14-c9b9-847aa3cceb69';
    $display->content['new-3f56a28a-910e-cd14-c9b9-847aa3cceb69'] = $pane;
    $display->panels['contentmain'][1] = 'new-3f56a28a-910e-cd14-c9b9-847aa3cceb69';
    $pane = new stdClass();
    $pane->pid = 'new-f9ae3a9c-92bd-65b4-d5cd-c220d1cea850';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '250',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'f9ae3a9c-92bd-65b4-d5cd-c220d1cea850';
    $display->content['new-f9ae3a9c-92bd-65b4-d5cd-c220d1cea850'] = $pane;
    $display->panels['contentmain'][2] = 'new-f9ae3a9c-92bd-65b4-d5cd-c220d1cea850';
    $pane = new stdClass();
    $pane->pid = 'new-53c1dbaa-269e-7864-5db3-23314a360764';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '53c1dbaa-269e-7864-5db3-23314a360764';
    $display->content['new-53c1dbaa-269e-7864-5db3-23314a360764'] = $pane;
    $display->panels['contentmain'][3] = 'new-53c1dbaa-269e-7864-5db3-23314a360764';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wetkit_page:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:wetkit_page:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wetkit_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'page-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
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
  $display->title = '%node:title';
  $display->uuid = '941e4e96-a729-d0c4-e58a-132dc75539da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0141500e-6a30-13f4-3593-0341e1d0fa83';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'panopoly_image_quarter',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = '0141500e-6a30-13f4-3593-0341e1d0fa83';
    $display->content['new-0141500e-6a30-13f4-3593-0341e1d0fa83'] = $pane;
    $display->panels['contentmain'][0] = 'new-0141500e-6a30-13f4-3593-0341e1d0fa83';
    $pane = new stdClass();
    $pane->pid = 'new-4a6f3bb9-56fa-dc54-6163-170989af9270';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '4a6f3bb9-56fa-dc54-6163-170989af9270';
    $display->content['new-4a6f3bb9-56fa-dc54-6163-170989af9270'] = $pane;
    $display->panels['contentmain'][1] = 'new-4a6f3bb9-56fa-dc54-6163-170989af9270';
    $pane = new stdClass();
    $pane->pid = 'new-8bbefdcc-82da-04c4-a9ff-9c376df28916';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8bbefdcc-82da-04c4-a9ff-9c376df28916';
    $display->content['new-8bbefdcc-82da-04c4-a9ff-9c376df28916'] = $pane;
    $display->panels['contentmain'][2] = 'new-8bbefdcc-82da-04c4-a9ff-9c376df28916';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wetkit_page:default:teaser'] = $panelizer;

  return $export;
}
