<?php

/**
 * @file
 * Definition of the 'Configure Panes' panel styles.
 */

$plugin = array(
  'title' => t('WetKit Configure Panes'),
  'description' => t('Wraps Panel Panes into different WetKit pre-configured styles.'),
  'render pane' => 'wetkit_configure_panes_render_pane',
  'pane settings form' => 'wetkit_configure_panes_style_settings_form',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_wetkit_configure_panes_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];
  $settings = $vars['settings'];

  $class_stack = array();
  if (!empty($settings['configure_pane_styles'])) {
    array_push($class_stack, $settings['configure_pane_styles']);
  }
  if (!empty($settings['configure_pane_backgrounds'])) {
    array_push($class_stack, $settings['configure_pane_backgrounds']);
  }
  if (!empty($settings['configure_pane_rounded_corners'])) {
    array_push($class_stack, $settings['configure_pane_rounded_corners']);
  }
  if (!empty($settings['configure_pane_misc'])) {
    array_push($class_stack, $settings['configure_pane_misc']);
  }
  if (!empty($settings['configure_pane_custom_css'])) {
    array_push($class_stack, $settings['configure_pane_custom_css']);
  }
  $class_stack = implode(" ", $class_stack);
  $content->css_class .= ' ' . $class_stack;
  return theme('panels_pane', array(
    'content' => $content,
    'pane' => $pane,
    'display' => $display,
  ));
}

/**
 * Settings Form.
 */
function wetkit_configure_panes_style_settings_form($style_settings) {

  $form['configure_pane_styles'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Styles'),
    '#options' => array(
      '' => t('Default'),
      'bluegrad' => t('Blue Gradient'),
      'greengrad' => t('Green Gradient'),
      'redgrad' => t('Red Gradient'),
      'tilegrey' => t('Tile'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_styles'])) ? $style_settings['configure_pane_styles'] : '',
  );

  $form['configure_pane_backgrounds'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Backgrounds'),
    '#options' => array(
      '' => t('Default'),
      'darkblue' => t('Dark Blue'),
      'darkgreen' => t('Dark Green'),
      'nobackground' => t('No Background'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_backgrounds'])) ? $style_settings['configure_pane_backgrounds'] : '',
  );

  $form['configure_pane_rounded_corners'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Rounded Corners'),
    '#options' => array(
      '' => t('Default'),
      'br2' => t('Rounded Corners 2'),
      'br3' => t('Rounded Corners 3'),
      'br5' => t('Rounded Corners 5'),
      'br10' => t('Rounded Corners 10'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_rounded_corners'])) ? $style_settings['configure_pane_rounded_corners'] : '',
  );

  $form['configure_pane_misc'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Miscellaneous Styles'),
    '#options' => array(
      '' => t('Default'),
      'img-nonresponsive' => t('Image Non Responsive'),
      'internal-notes' => t('Internal Notes'),
      'section-link' => t('Section Link'),
      'city-basic-1' => t('Basic 1'),
      'city-basic-2' => t('Basic 2'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_misc'])) ? $style_settings['configure_pane_misc'] : '',
  );

  $form['configure_pane_custom_css'] = array(
    '#type' => 'textfield',
    '#title' => t('Configure Pane Custom CSS'),
    '#default_value' => (isset($style_settings['configure_pane_custom_css'])) ? $style_settings['configure_pane_custom_css'] : '',
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  );

  return $form;
}
