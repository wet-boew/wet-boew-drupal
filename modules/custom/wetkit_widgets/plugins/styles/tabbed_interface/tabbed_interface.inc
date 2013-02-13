<?php

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition.
$plugin = array(
  'title' => t('WetKit Tabbed Interface'),
  'description' => t('Display the pane with customized settings for the Tabbed Interface Plugin.'),
  'render pane' => 'wetkit_widgets_tabbed_interface_style_render_pane',
  'pane settings form' => 'wetkit_widgets_tabbed_interface_style_settings_form',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_wetkit_widgets_tabbed_interface_style_render_pane($vars) {

  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $settings = $vars['settings'];

  return theme('panels_pane', array(
    'content' => $content,
    'pane' => $pane,
    'display' => $display,
    'settings' => $settings,
  ));
}

/**
 * Settings Form.
 */
function wetkit_widgets_tabbed_interface_style_settings_form($style_settings) {

  $form['tabbed_interface_classes'] = array(
    '#type' => 'select',
    '#title' => t('Class'),
    '#options' => array(
      '' => t('Empty'),
      'tabs-style-1 auto-play cycle' => t('Style 1'),
      'tabs-style-2 auto-play cycle' => t('Style 2'),
      'tabs-style-3 auto-play cycle' => t('Style 3'),
      'tabs-style-4 auto-play cycle' => t('Style 4'),
      'tabs-style-5 auto-play cycle' => t('Style 5'),
      'tabs-style-7 auto-play animate-slow cycle' => t('Style 7'),
    ),
    '#default_value' => (isset($style_settings['tabbed_interface_classes'])) ? $style_settings['tabbed_interface_classes'] : '',
  );

  return $form;
}
