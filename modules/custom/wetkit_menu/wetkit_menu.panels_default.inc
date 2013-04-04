<?php
/**
 * @file
 * wetkit_menu.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function wetkit_menu_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wetkit_mini_panels_drupal_github';
  $mini->category = 'WetKit Mini Panels';
  $mini->admin_title = 'WetKit Mini Panels: GitHub';
  $mini->admin_description = 'WetKit Mini Panels: Drupal GitHub';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'cohen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cohen_left' => NULL,
      'cohen_middle_left' => NULL,
      'cohen_middle_right' => NULL,
      'cohen_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '24a2a4b8-8724-f0e4-09cb-41795fff62e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane->panel = 'cohen_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_3_a'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_3_a'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => '',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $display->content['new-348f94ea-5284-a3c4-4d9f-11b9548932c6'] = $pane;
    $display->panels['cohen_left'][0] = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane = new stdClass();
    $pane->pid = 'new-326d2cd6-d010-9dc4-7df6-15124c970ec7';
    $pane->panel = 'cohen_middle_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_3_e'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_3_e'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => '',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '326d2cd6-d010-9dc4-7df6-15124c970ec7';
    $display->content['new-326d2cd6-d010-9dc4-7df6-15124c970ec7'] = $pane;
    $display->panels['cohen_middle_left'][0] = 'new-326d2cd6-d010-9dc4-7df6-15124c970ec7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $mini->display = $display;
  $export['wetkit_mini_panels_drupal_github'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wetkit_mini_panels_drupal_wcms';
  $mini->category = 'WetKit Mini Panels';
  $mini->admin_title = 'WetKit Mini Panels: Drupal WCMS';
  $mini->admin_description = 'WetKit Mini Panels: Drupal WCMS';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'cohen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cohen_left' => NULL,
      'cohen_middle_left' => NULL,
      'cohen_middle_right' => NULL,
      'cohen_right' => NULL,
      'cohen_top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '24a2a4b8-8724-f0e4-09cb-41795fff62e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-692d417f-b29c-df24-89e6-b84594fde05a';
    $pane->panel = 'cohen_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_strip_sub_items' => '1',
        'wetkit_menu_settings_wrap_pane' => '0',
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => 'top-level',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '692d417f-b29c-df24-89e6-b84594fde05a';
    $display->content['new-692d417f-b29c-df24-89e6-b84594fde05a'] = $pane;
    $display->panels['cohen_left'][0] = 'new-692d417f-b29c-df24-89e6-b84594fde05a';
    $pane = new stdClass();
    $pane->pid = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane->panel = 'cohen_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2_d'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2_d'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => '',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $display->content['new-348f94ea-5284-a3c4-4d9f-11b9548932c6'] = $pane;
    $display->panels['cohen_left'][1] = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane = new stdClass();
    $pane->pid = 'new-789c6484-8d81-a2a4-edaa-3cc51ef38151';
    $pane->panel = 'cohen_middle_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2_g'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_2_g'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => '',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '789c6484-8d81-a2a4-edaa-3cc51ef38151';
    $display->content['new-789c6484-8d81-a2a4-edaa-3cc51ef38151'] = $pane;
    $display->panels['cohen_middle_left'][0] = 'new-789c6484-8d81-a2a4-edaa-3cc51ef38151';
    $pane = new stdClass();
    $pane->pid = 'new-8a419294-5247-18d4-59f0-4957a3568216';
    $pane->panel = 'cohen_top';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel-focus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel-focus',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_focus_links_eng_1'),
      'parent' => 'wetkit-menu-minipanel-focus:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_focus_links_eng_1'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
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
    $pane->uuid = '8a419294-5247-18d4-59f0-4957a3568216';
    $display->content['new-8a419294-5247-18d4-59f0-4957a3568216'] = $pane;
    $display->panels['cohen_top'][0] = 'new-8a419294-5247-18d4-59f0-4957a3568216';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $mini->display = $display;
  $export['wetkit_mini_panels_drupal_wcms'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wetkit_mini_panels_example_pages';
  $mini->category = 'WetKit Mini Panels';
  $mini->admin_title = 'WetKit Mini Panels: Example Pages';
  $mini->admin_description = 'WetKit Mini Panels: Example Pages';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'cohen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cohen_left' => NULL,
      'cohen_middle_left' => NULL,
      'cohen_middle_right' => NULL,
      'cohen_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '24a2a4b8-8724-f0e4-09cb-41795fff62e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane->panel = 'cohen_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_4'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_4'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
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
    $pane->uuid = '348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $display->content['new-348f94ea-5284-a3c4-4d9f-11b9548932c6'] = $pane;
    $display->panels['cohen_left'][0] = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $mini->display = $display;
  $export['wetkit_mini_panels_example_pages'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wetkit_mini_panels_home';
  $mini->category = 'WetKit Mini Panels';
  $mini->admin_title = 'WetKit Mini Panels: Home';
  $mini->admin_description = 'WetKit Mini Panels: Home';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'cohen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cohen_left' => NULL,
      'cohen_middle_left' => NULL,
      'cohen_middle_right' => NULL,
      'cohen_right' => NULL,
      'cohen_top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '24a2a4b8-8724-f0e4-09cb-41795fff62e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $pane->panel = 'cohen_left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'wetkit-menu-minipanel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'wetkit-menu-minipanel',
      'parent_mlid' => _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_1'),
      'parent' => 'wetkit-menu-minipanel:' . _wetkit_menu_get_mlid('wetkit_menu_minipanel_links_eng_1'),
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'wetkit_menu_settings_strip_sub_items' => '0',
        'wetkit_menu_settings_wrap_pane' => '0',
        'wetkit_menu_settings_wrap_menu_items' => '1',
        'wetkit_menu_settings_custom_css' => '',
      ),
      'style' => 'wetkit_menu_settings',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '348f94ea-5284-a3c4-4d9f-11b9548932c6';
    $display->content['new-348f94ea-5284-a3c4-4d9f-11b9548932c6'] = $pane;
    $display->panels['cohen_left'][0] = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-348f94ea-5284-a3c4-4d9f-11b9548932c6';
  $mini->display = $display;
  $export['wetkit_mini_panels_home'] = $mini;

  return $export;
}

/**
 * Custom function for retrieving mlids by link path.
 */
function _wetkit_menu_get_mlid($source_id) {
  if (db_table_exists('migrate_map_wetkitmigratemegamenulinks')) {
    $menu_link = db_select('migrate_map_wetkitmigratemegamenulinks')
        ->fields('migrate_map_wetkitmigratemegamenulinks')
        ->condition('sourceid1', $source_id)
        ->execute()->fetch();

    if (isset($menu_link->destid1)) {
      return $menu_link->destid1;
    }
  }
  else {
    return FALSE;
  }
}
