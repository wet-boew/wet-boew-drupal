<?php

/**
 * @file
 * Welcome panel content type. Displays a summary of content statistics 
 * including: number pieces of each type of content, number of comments, 
 * number of blocked comments (spam) and configuration links.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Welcome'),
  'no title override' => TRUE,
  'icon' => 'cog.png',
  'description' => t('Intro to WetKit Dashboard'),
  'category' => t('Dashboard'),
);

/**
 * Admin title callback for the content type.
 */
function wetkit_core_welcome_content_type_admin_title($subtype = NULL, $conf = NULL, $context = NULL) {
  return t('Welcome');
}

/**
 * Admin info callback for the content type.
 */
function wetkit_core_welcome_content_type_admin_info($subtype = NULL, $conf = NULL, $context = NULL) {
  $block = new stdClass();
  $block->title = t('Intro to WetKit Dashboard');

  return $block;
}

/**
 * Run-time rendering of the body of the block.
 */
function wetkit_core_welcome_content_type_render($subtype, $conf, $panel_args, &$context) {
  // Build the content.
  $content = '<div class="wetkit-site-overview">';
  $content .= '  <p>' . t('Welcome to your administrative dashboard.  !panel
    to add more content panes here, and/or configure those provided by default.
    Please note that Views content panes can be created for you automatically 
    according to your preferences by changing the !settings settings.  Please
    tailor this dashboard the faciliatate your administrative needs.', array(
      '!panel' => l(t('Edit this panel'), 'admin/structure/pages/nojs/operation/page-dashboard/handlers/page_dashboard_panel_context/content', array('attributes' => array('class' => 'button'))),
      '!settings' => l(t('Total Control'), 'admin/config/administration/control', array('attributes' => array('class' => 'button'))))) . '</p>';
  $content .= '</div>';

  $block = new stdClass();
  $block->module = t('wetkit_core');
  $block->title = t('WetKit Dashboards');
  $block->content = $content;

  return $block;
}
