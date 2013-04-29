<?php
/**
 * @file
 * pd_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pd_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pd_contract';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pd_hospitality';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pd_reclassification';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pd_travel';
  $strongarm->value = 'edit-diff';
  $export['additional_settings__active_tab_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_pd_contract';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_pd_hospitality';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_pd_travel';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_pd_contract';
  $strongarm->value = '<?php
  $date = new DateTime($entity->field_contract_date[\'und\'][0][\'value\']);
  $date = date_format($date, \'Y-m-d\');
  $string = $entity->field_vendor[\'und\'][0][\'value\']. \': \' .$date;
  print $string; 
?>';
  $export['auto_entitylabel_pattern_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_pd_hospitality';
  $strongarm->value = '<?php
$date = new DateTime($entity->field_date[\'und\'][0][\'value\']);
$date = date_format($date, \'Y-m-d\');
$tid = $entity->field_member[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($tid);
$name = $term->name;
$string = $name. \': \' .$entity->field_location[\'und\'][0][\'value\']. \', \' .$date;
print $string;
?>';
  $export['auto_entitylabel_pattern_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_pd_travel';
  $strongarm->value = '[node:field_member]: [node:field_destinations], [node:field_date:value]';
  $export['auto_entitylabel_pattern_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_pd_contract';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_pd_hospitality';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_pd_travel';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pd_contract';
  $strongarm->value = 0;
  $export['comment_anonymous_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pd_hospitality';
  $strongarm->value = 0;
  $export['comment_anonymous_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pd_reclassification';
  $strongarm->value = 0;
  $export['comment_anonymous_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pd_travel';
  $strongarm->value = 0;
  $export['comment_anonymous_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pd_contract';
  $strongarm->value = 1;
  $export['comment_default_mode_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pd_hospitality';
  $strongarm->value = 1;
  $export['comment_default_mode_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pd_reclassification';
  $strongarm->value = 1;
  $export['comment_default_mode_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pd_travel';
  $strongarm->value = 1;
  $export['comment_default_mode_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pd_contract';
  $strongarm->value = '50';
  $export['comment_default_per_page_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pd_hospitality';
  $strongarm->value = '50';
  $export['comment_default_per_page_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pd_reclassification';
  $strongarm->value = '50';
  $export['comment_default_per_page_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pd_travel';
  $strongarm->value = '50';
  $export['comment_default_per_page_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pd_contract';
  $strongarm->value = 1;
  $export['comment_form_location_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pd_hospitality';
  $strongarm->value = 1;
  $export['comment_form_location_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pd_reclassification';
  $strongarm->value = 1;
  $export['comment_form_location_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pd_travel';
  $strongarm->value = 1;
  $export['comment_form_location_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pd_contract';
  $strongarm->value = '0';
  $export['comment_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pd_hospitality';
  $strongarm->value = '0';
  $export['comment_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pd_reclassification';
  $strongarm->value = '0';
  $export['comment_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pd_travel';
  $strongarm->value = '0';
  $export['comment_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pd_contract';
  $strongarm->value = '1';
  $export['comment_preview_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pd_hospitality';
  $strongarm->value = '1';
  $export['comment_preview_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pd_reclassification';
  $strongarm->value = '1';
  $export['comment_preview_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pd_travel';
  $strongarm->value = '1';
  $export['comment_preview_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pd_contract';
  $strongarm->value = 1;
  $export['comment_subject_field_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pd_hospitality';
  $strongarm->value = 1;
  $export['comment_subject_field_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pd_reclassification';
  $strongarm->value = 1;
  $export['comment_subject_field_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pd_travel';
  $strongarm->value = 1;
  $export['comment_subject_field_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_pd_contract';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_pd_hospitality';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_pd_reclassification';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_pd_travel';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_pd_contract';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_pd_hospitality';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_pd_reclassification';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_pd_travel';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_pd_contract';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_pd_hospitality';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_pd_reclassification';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_pd_travel';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pd_contract';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pd_hospitality';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pd_reclassification';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pd_travel';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pd_contract';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pd_hospitality';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pd_reclassification';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pd_travel';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pd_contract';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pd_hospitality';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pd_reclassification';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pd_travel';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_pd_contract';
  $strongarm->value = 1;
  $export['enable_revisions_page_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_pd_hospitality';
  $strongarm->value = 1;
  $export['enable_revisions_page_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_pd_reclassification';
  $strongarm->value = 1;
  $export['enable_revisions_page_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_pd_travel';
  $strongarm->value = 1;
  $export['enable_revisions_page_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pd_contract';
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
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '16',
        ),
        'metatags' => array(
          'weight' => '19',
        ),
        'title' => array(
          'weight' => '22',
        ),
        'path' => array(
          'weight' => '18',
        ),
        'feeds' => array(
          'weight' => '21',
        ),
        'workflow' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pd_hospitality';
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
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pd_reclassification';
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
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
        ),
        'workflow' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(
        'language' => array(
          'featured' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pd_travel';
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
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '15',
        ),
        'metatags' => array(
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'workflow' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_pd_contract';
  $strongarm->value = '1';
  $export['i18n_node_extended_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_pd_hospitality';
  $strongarm->value = '1';
  $export['i18n_node_extended_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_pd_reclassification';
  $strongarm->value = '1';
  $export['i18n_node_extended_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_pd_travel';
  $strongarm->value = '1';
  $export['i18n_node_extended_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_pd_contract';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_pd_hospitality';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_pd_reclassification';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_pd_travel';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_pd_contract';
  $strongarm->value = array();
  $export['i18n_sync_node_type_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_pd_hospitality';
  $strongarm->value = array();
  $export['i18n_sync_node_type_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_pd_reclassification';
  $strongarm->value = array();
  $export['i18n_sync_node_type_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_pd_travel';
  $strongarm->value = array();
  $export['i18n_sync_node_type_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pd_contract';
  $strongarm->value = '2';
  $export['language_content_type_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pd_hospitality';
  $strongarm->value = '2';
  $export['language_content_type_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pd_reclassification';
  $strongarm->value = '2';
  $export['language_content_type_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pd_travel';
  $strongarm->value = '2';
  $export['language_content_type_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pd_contract';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pd_hospitality';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pd_reclassification';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pd_travel';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pd_contract';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pd_hospitality';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pd_reclassification';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pd_travel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pd_contract';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pd_hospitality';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pd_reclassification';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pd_travel';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pd_contract';
  $strongarm->value = '1';
  $export['node_preview_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pd_hospitality';
  $strongarm->value = '1';
  $export['node_preview_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pd_reclassification';
  $strongarm->value = '1';
  $export['node_preview_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pd_travel';
  $strongarm->value = '1';
  $export['node_preview_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pd_contract';
  $strongarm->value = 0;
  $export['node_submitted_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pd_hospitality';
  $strongarm->value = 0;
  $export['node_submitted_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pd_reclassification';
  $strongarm->value = 0;
  $export['node_submitted_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pd_travel';
  $strongarm->value = 0;
  $export['node_submitted_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_pd_contract';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
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
    ),
  );
  $export['panelizer_defaults_node_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_pd_hospitality';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
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
    ),
  );
  $export['panelizer_defaults_node_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_pd_reclassification';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
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
    ),
  );
  $export['panelizer_defaults_node_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_pd_travel';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
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
    ),
  );
  $export['panelizer_defaults_node_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'remove_markup_default_pd_contract';
  $strongarm->value = 0;
  $export['remove_markup_default_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'remove_markup_default_pd_hospitality';
  $strongarm->value = 0;
  $export['remove_markup_default_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'remove_markup_default_pd_reclassification';
  $strongarm->value = 0;
  $export['remove_markup_default_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'remove_markup_default_pd_travel';
  $strongarm->value = 0;
  $export['remove_markup_default_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_pd_contract';
  $strongarm->value = 0;
  $export['show_diff_inline_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_pd_hospitality';
  $strongarm->value = 0;
  $export['show_diff_inline_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_pd_reclassification';
  $strongarm->value = 0;
  $export['show_diff_inline_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_pd_travel';
  $strongarm->value = 0;
  $export['show_diff_inline_pd_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_pd_contract';
  $strongarm->value = 1;
  $export['show_preview_changes_pd_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_pd_hospitality';
  $strongarm->value = 1;
  $export['show_preview_changes_pd_hospitality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_pd_reclassification';
  $strongarm->value = 1;
  $export['show_preview_changes_pd_reclassification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_pd_travel';
  $strongarm->value = 1;
  $export['show_preview_changes_pd_travel'] = $strongarm;

  return $export;
}
