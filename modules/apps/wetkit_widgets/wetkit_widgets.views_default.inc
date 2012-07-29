<?php
/**
 * @file
 * wetkit_widgets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wetkit_widgets_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'tabbed_interface_widget_view';
  $view->description = 'Tabbed Interface Widget View';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'Tabbed Interface Widget View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Fieldable panel pane: Tabbed Image */
  $handler->display->display_options['fields']['field_tabbed_image']['id'] = 'field_tabbed_image';
  $handler->display->display_options['fields']['field_tabbed_image']['table'] = 'field_data_field_tabbed_image';
  $handler->display->display_options['fields']['field_tabbed_image']['field'] = 'field_tabbed_image';
  $handler->display->display_options['fields']['field_tabbed_image']['label'] = '';
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabbed_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabbed_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tabbed_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tabbed_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tabbed_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_tabbed_image']['field_api_classes'] = 0;
  /* Field: Fieldable panel pane: Tabbed Body */
  $handler->display->display_options['fields']['field_tabbed_body']['id'] = 'field_tabbed_body';
  $handler->display->display_options['fields']['field_tabbed_body']['table'] = 'field_data_field_tabbed_body';
  $handler->display->display_options['fields']['field_tabbed_body']['field'] = 'field_tabbed_body';
  $handler->display->display_options['fields']['field_tabbed_body']['label'] = '';
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabbed_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabbed_body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tabbed_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tabbed_body']['field_api_classes'] = 0;
  /* Sort criterion: Fieldable pane: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Fieldable pane: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'tabbed_interface' => 'tabbed_interface',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'wetkit_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'WetKit';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'wetkit_attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'tabs';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Fieldable pane: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['displays'] = array(
    'wetkit_pane_1' => 'wetkit_pane_1',
    'default' => 0,
  );
  $translatables['tabbed_interface_widget_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Content pane'),
    t('WetKit'),
    t('Attachment'),
  );
  $export['tabbed_interface_widget_view'] = $view;

  return $export;
}
