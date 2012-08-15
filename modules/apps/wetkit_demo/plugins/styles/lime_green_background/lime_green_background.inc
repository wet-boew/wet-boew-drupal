<?php

/**
 * @file
 * Definition of the 'lime green background' panel style.
 */

$plugin = array(
  'title' => t('Lime Green Background'),
  'description' => t('Wraps panes in the Drupal light blue style.'),
  'render pane' => 'wetkit_demo_lime_green_background_render_pane',
  'render region' => 'wetkit_demo_lime_green_background_render_region',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_wetkit_demo_lime_green_background_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];
  
  $content->css_class .= ' pane-lime-green-background';
  
  // if the style is gone or has no theme of its own, just display the output.
  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}

/**
 * Theme function for the region style.
 */
function theme_wetkit_demo_lime_green_background_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $output = '';
  $output .= '<div class="region region-' . $vars['region_id'] . ' region-lime-green-background">';
  $output .= implode('<div class="panel-separator"></div>', $panes);
  $output .= '</div>';
  return $output;
}
