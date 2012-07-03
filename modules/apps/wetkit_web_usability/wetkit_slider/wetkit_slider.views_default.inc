<?php
/**
 * @file
 * wetkit_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wetkit_slider_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'tabs';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Content: Slider Photo */
  $handler->display->display_options['fields']['field_slider_photo']['id'] = 'field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['table'] = 'field_data_field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['field'] = 'field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['label'] = '';
  $handler->display->display_options['fields']['field_slider_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_photo']['settings'] = array(
    'image_style' => 'slider',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slider_photo']['field_api_classes'] = 0;
  /* Field: Content: Slider Description */
  $handler->display->display_options['fields']['field_slider_description']['id'] = 'field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['table'] = 'field_data_field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['field'] = 'field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['label'] = '';
  $handler->display->display_options['fields']['field_slider_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_description']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_slider' => 'main_slider',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'tabs';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slider Title */
  $handler->display->display_options['fields']['field_slider_title']['id'] = 'field_slider_title';
  $handler->display->display_options['fields']['field_slider_title']['table'] = 'field_data_field_slider_title';
  $handler->display->display_options['fields']['field_slider_title']['field'] = 'field_slider_title';
  $handler->display->display_options['fields']['field_slider_title']['label'] = '';
  $handler->display->display_options['fields']['field_slider_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_title']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slider_title']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_slider_title']['field_api_classes'] = 0;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $translatables['slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Attachment'),
  );
  $export['slider'] = $view;

  return $export;
}
