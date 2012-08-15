<?php

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('WetKit Slider Style'),
  'description' => t('Change the Slider Style using WetKit\'s Tabbed Interface'),
  'render pane' => 'wetkit_web_usability_slider_style_render_pane',
  'pane settings form' => 'wetkit_web_usability_slider_style_settings_form',
  'hook theme'	=> array(
    'wetkit_web_usability_theme_pane' => array(
      'template' => 'slider-pane',
      'path' => drupal_get_path('module', 'wetkit_web_usability') .'/plugins/styles/slider',
        'variables' => array(
          'content' => NULL,
          'settings' => NULL,
        ),
    ),
  ),
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_wetkit_web_usability_slider_style_render_pane($vars) {
  //return render($vars['content']->content);
  $settings = $vars['settings'];
	$content = $vars['content'];
  return theme('wetkit_web_usability_theme_pane', array('content' => $content, 'settings' => $settings));
}

/**
 * Settings Form.
 */
function wetkit_web_usability_slider_style_settings_form($style_settings) {

  $form['headings'] = array(
    '#type' => 'select',
    '#title' => t('Headings'),
    '#options' => array(
      'h1' => t('h1'),
      'h2' => t('h2'),
      'h3' => t('h3'),
      'h4' => t('h4'),
      'h5' => t('h5'),
      'h6' => t('h6'),
    ),
    '#default_value' => (isset($style_settings['headings'])) ? $style_settings['headings'] : 'h3',
  );

  $form['gcwu_classes'] = array(
    '#type' => 'select',
    '#title' => t('Class'),
    '#options' => array(
      '' => t('Empty'),
      'span-2' => t('span-2'),
    ),
    '#default_value' => (isset($style_settings['gcwu_classes'])) ? $style_settings['gcwu_classes'] : '',
  );
  
  $form['gcwu_id'] = array(
    '#type' => 'select',
    '#title' => t('ID'),
    '#options' => array(
      '' => t('Empty'),
      'gcwu-connect' => t('gcwu-connect'),
    ),
    '#default_value' => (isset($style_settings['gcwu_id'])) ? $style_settings['gcwu_id'] : '',
  );

  return $form;
}

