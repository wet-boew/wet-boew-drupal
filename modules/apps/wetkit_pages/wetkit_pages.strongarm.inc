<?php
/**
 * @file
 * wetkit_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_wetkit_page';
  $strongarm->value = 'edit-i18n';
  $export['additional_settings__active_tab_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_wetkit_page_other';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wetkit_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__wetkit_page_other';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_wetkit_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_wetkit_page_other';
  $strongarm->value = '1';
  $export['i18n_node_extended_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_wetkit_page';
  $strongarm->value = array();
  $export['i18n_node_options_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_wetkit_page_other';
  $strongarm->value = array();
  $export['i18n_node_options_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_wetkit_page';
  $strongarm->value = array();
  $export['i18n_sync_node_type_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_wetkit_page_other';
  $strongarm->value = array();
  $export['i18n_sync_node_type_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_wetkit_page';
  $strongarm->value = '2';
  $export['language_content_type_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_wetkit_page_other';
  $strongarm->value = '2';
  $export['language_content_type_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wetkit_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_wetkit_page_other';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wetkit_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_wetkit_page_other';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wetkit_page';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wetkit_page_other';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wetkit_page';
  $strongarm->value = '0';
  $export['node_preview_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_wetkit_page_other';
  $strongarm->value = '0';
  $export['node_preview_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wetkit_page';
  $strongarm->value = 0;
  $export['node_submitted_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_wetkit_page_other';
  $strongarm->value = 0;
  $export['node_submitted_wetkit_page_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_wetkit_page';
  $strongarm->value = array(
    'status' => 1,
    'page_manager' => array(
      'status' => 1,
      'default' => 1,
      'choice' => 0,
    ),
    'default' => array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ),
    'teaser' => array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ),
    'featured' => array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ),
  );
  $export['panelizer_defaults_node_wetkit_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:wetkit_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:26:"panelizer_node:wetkit_page";s:23:"allowed_layout_settings";a:35:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:wetkit_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:wetkit_page_allowed_types';
  $strongarm->value = array(
    'entity_field-fieldable_panels_pane:field_quick_links_links' => 'entity_field-fieldable_panels_pane:field_quick_links_links',
    'entity_field-fieldable_panels_pane:field_basic_file_file' => 'entity_field-fieldable_panels_pane:field_basic_file_file',
    'entity_field-fieldable_panels_pane:field_basic_file_text' => 'entity_field-fieldable_panels_pane:field_basic_file_text',
    'entity_field-fieldable_panels_pane:field_basic_image_caption' => 'entity_field-fieldable_panels_pane:field_basic_image_caption',
    'entity_field-fieldable_panels_pane:field_basic_image_image' => 'entity_field-fieldable_panels_pane:field_basic_image_image',
    'entity_field-fieldable_panels_pane:field_basic_text_link' => 'entity_field-fieldable_panels_pane:field_basic_text_link',
    'entity_field-fieldable_panels_pane:field_basic_text_text' => 'entity_field-fieldable_panels_pane:field_basic_text_text',
    'entity_field-fieldable_panels_pane:field_map_address' => 'entity_field-fieldable_panels_pane:field_map_address',
    'entity_field-fieldable_panels_pane:field_basic_table_table' => 'entity_field-fieldable_panels_pane:field_basic_table_table',
    'entity_field-fieldable_panels_pane:field_video_video' => 'entity_field-fieldable_panels_pane:field_video_video',
    'entity_field-fieldable_panels_pane:field_basic_spotlight_items' => 'entity_field-fieldable_panels_pane:field_basic_spotlight_items',
    'entity_field-fieldable_panels_pane:field_item_list_item_list' => 'entity_field-fieldable_panels_pane:field_item_list_item_list',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_featured_image' => 'entity_field-node:field_featured_image',
    'entity_field-node:field_course_credits' => 'entity_field-node:field_course_credits',
    'entity_field-node:field_course_location' => 'entity_field-node:field_course_location',
    'entity_field-node:field_course_number' => 'entity_field-node:field_course_number',
    'entity_field-node:field_course_people' => 'entity_field-node:field_course_people',
    'entity_field-node:field_course_term' => 'entity_field-node:field_course_term',
    'entity_field-node:field_course_time' => 'entity_field-node:field_course_time',
    'entity_field-node:field_course_type' => 'entity_field-node:field_course_type',
    'entity_field-node:field_event_date' => 'entity_field-node:field_event_date',
    'entity_field-node:field_event_location' => 'entity_field-node:field_event_location',
    'entity_field-node:field_event_moreinfo' => 'entity_field-node:field_event_moreinfo',
    'entity_field-node:field_event_type' => 'entity_field-node:field_event_type',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_person_courses' => 'entity_field-node:field_person_courses',
    'entity_field-node:field_person_email' => 'entity_field-node:field_person_email',
    'entity_field-node:field_person_office' => 'entity_field-node:field_person_office',
    'entity_field-node:field_person_officehours' => 'entity_field-node:field_person_officehours',
    'entity_field-node:field_person_phone' => 'entity_field-node:field_person_phone',
    'entity_field-node:field_person_position' => 'entity_field-node:field_person_position',
    'entity_field-node:field_person_publications' => 'entity_field-node:field_person_publications',
    'entity_field-node:field_person_type' => 'entity_field-node:field_person_type',
    'entity_field-node:field_peson_website' => 'entity_field-node:field_peson_website',
    'entity_field-node:field_publication_action' => 'entity_field-node:field_publication_action',
    'entity_field-node:field_publication_author' => 'entity_field-node:field_publication_author',
    'entity_field-node:field_publication_citation' => 'entity_field-node:field_publication_citation',
    'entity_field-node:field_publication_published' => 'entity_field-node:field_publication_published',
    'entity_field-node:field_publication_publisher' => 'entity_field-node:field_publication_publisher',
    'entity_field_extra-fieldable_panels_pane:title' => 'entity_field_extra-fieldable_panels_pane:title',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'custom-custom' => 0,
    'block-apps-manage_apps__openacademy' => 0,
    'block-calendar-calendar_legend' => 0,
    'block-menu-devel' => 0,
    'block-menu-menu-footer-menu' => 0,
    'block-menu-menu-header-menu' => 0,
    'block-node-syndicate' => 0,
    'block-node-recent' => 0,
    'block-search-form' => 0,
    'block-system-powered-by' => 0,
    'block-system-help' => 0,
    'block-system-navigation' => 0,
    'block-system-management' => 0,
    'block-system-user-menu' => 0,
    'block-system-main-menu' => 0,
    'block-user-login' => 0,
    'block-user-new' => 0,
    'block-user-online' => 0,
    'block-admin-create' => 0,
    'block-admin-theme' => 0,
    'block-admin-account' => 0,
    'block-admin-menu' => 0,
    'block-admin-devel' => 0,
    'block-biblio-recent' => 0,
    'block-devel-execute_php' => 0,
    'block-devel-switch_user' => 0,
    'fieldable_panels_pane-quick_links' => 'fieldable_panels_pane-quick_links',
    'fieldable_panels_pane-basic_file' => 'fieldable_panels_pane-basic_file',
    'fieldable_panels_pane-image' => 'fieldable_panels_pane-image',
    'fieldable_panels_pane-text' => 'fieldable_panels_pane-text',
    'fieldable_panels_pane-map' => 'fieldable_panels_pane-map',
    'fieldable_panels_pane-table' => 'fieldable_panels_pane-table',
    'fieldable_panels_pane-video' => 'fieldable_panels_pane-video',
    'fieldable_panels_pane-spotlight' => 'fieldable_panels_pane-spotlight',
    'fieldable_panels_pane-item_list' => 'fieldable_panels_pane-item_list',
    'fieldable_panels_pane-fieldable_panels_pane' => 0,
    'menu_tree-_active' => 0,
    'menu_tree-devel' => 0,
    'menu_tree-menu-footer-menu' => 0,
    'menu_tree-menu-header-menu' => 0,
    'menu_tree-main-menu' => 1,
    'menu_tree-management' => 0,
    'menu_tree-navigation' => 0,
    'menu_tree-user-menu' => 0,
    'views_panes-openacademy_courses-course_listing' => 'views_panes-openacademy_courses-course_listing',
    'views_panes-openacademy_courses-courses_table' => 'views_panes-openacademy_courses-courses_table',
    'views_panes-openacademy_courses-featured_course' => 'views_panes-openacademy_courses-featured_course',
    'views_panes-openacademy_courses-course_slideshow' => 'views_panes-openacademy_courses-course_slideshow',
    'views_panes-openacademy_events-upcoming_events' => 'views_panes-openacademy_events-upcoming_events',
    'views_panes-openacademy_events-monthly_calendar' => 'views_panes-openacademy_events-monthly_calendar',
    'views_panes-openacademy_events-monthly_mini_calendar' => 'views_panes-openacademy_events-monthly_mini_calendar',
    'views_panes-openacademy_events-all_events' => 'views_panes-openacademy_events-all_events',
    'views_panes-openacademy_news-news_listing' => 'views_panes-openacademy_news-news_listing',
    'views_panes-openacademy_news-all_news' => 'views_panes-openacademy_news-all_news',
    'views_panes-openacademy_news-featured_news' => 'views_panes-openacademy_news-featured_news',
    'views_panes-openacademy_news-news_slideshow' => 'views_panes-openacademy_news-news_slideshow',
    'views_panes-wetkit_demo-demo_listing' => 'views_panes-wetkit_demo-demo_listing',
    'views_panes-wetkit_demo-all_demo' => 'views_panes-wetkit_demo-all_demo',
    'views_panes-wetkit_demo-featured_demo' => 'views_panes-wetkit_demo-featured_demo',
    'views_panes-wetkit_demo-demo_slideshow' => 'views_panes-wetkit_demo-demo_slideshow',
    'views_panes-openacademy_people-people_table' => 'views_panes-openacademy_people-people_table',
    'views_panes-openacademy_people-people_grid' => 'views_panes-openacademy_people-people_grid',
    'views_panes-openacademy_people-featured_person' => 'views_panes-openacademy_people-featured_person',
    'views_panes-openacademy_people-person_slideshow' => 'views_panes-openacademy_people-person_slideshow',
    'views_panes-openacademy_people-people_summary' => 'views_panes-openacademy_people-people_summary',
    'views_panes-openacademy_publications-publication_listing' => 'views_panes-openacademy_publications-publication_listing',
    'views_panes-openacademy_publications-publication_all' => 'views_panes-openacademy_publications-publication_all',
    'views_panes-openacademy_publications-featured_publication' => 'views_panes-openacademy_publications-featured_publication',
    'views_panes-wetkit_admin_content-admin_content' => 0,
    'views_panes-wetkit_admin_content-recent_content_collage' => 0,
    'views_panes-wetkit_admin_media-admin_media' => 0,
    'views_panes-wetkit_admin_users-admin_users' => 0,
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_result-search_result' => 'search_result-search_result',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'form-form' => 'form-form',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_row-views_row' => 'views_row-views_row',
    'views_view-views_view' => 'views_view-views_view',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'vocabulary_terms-vocabulary_terms' => 0,
    'user_signature-user_signature' => 0,
    'search_form-search_form' => 0,
    'page_actions-page_actions' => 0,
    'page_breadcrumb-page_breadcrumb' => 0,
    'page_feed_icons-page_feed_icons' => 0,
    'page_help-page_help' => 0,
    'page_logo-page_logo' => 0,
    'page_messages-page_messages' => 0,
    'page_primary_links-page_primary_links' => 0,
    'page_secondary_links-page_secondary_links' => 0,
    'page_site_name-page_site_name' => 0,
    'page_slogan-page_slogan' => 0,
    'page_tabs-page_tabs' => 0,
    'page_title-page_title' => 0,
    'node-node' => 0,
    'user_register-user_register' => 0,
    'user_password-user_password' => 0,
    'user_login-user_login' => 0,
    'pm_existing_pages-pm_existing_pages' => 0,
    'dsc-dsc' => 0,
    'apps-apps' => 0,
    'categories-categories' => 0,
    'content-content' => 0,
    'menus-menus' => 0,
    'theme-theme' => 0,
    'users-users' => 0,
  );
  $export['panelizer_node:wetkit_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:wetkit_page_default';
  $strongarm->value = array(
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 0,
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:wetkit_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_wetkit_page';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_wetkit_page'] = $strongarm;

  return $export;
}
