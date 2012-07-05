<?php
$plugin = array(
  'title' => t('Blue Background'),
  'description' => t('Wraps panes in the Berkeley blue style.'),
  'render pane' => 'panopoly_demo_blue_background_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_panopoly_demo_blue_background_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];
  
  $content->css_class .= ' pane-blue-background';
  
  // if the style is gone or has no theme of its own, just display the output.
  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
