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
  if (!empty($settings['configure_pane_modules'])) {
    array_push($class_stack, $settings['configure_pane_modules']);
  }
  if (!empty($settings['configure_pane_opacity'])) {
    array_push($class_stack, $settings['configure_pane_opacity']);
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
      'width-100' => t('Width 100'),
      'width-90' => t('Width 90'),
      'width-80' => t('Width 80'),
      'width-70' => t('Width 70'),
      'width-60' => t('Width 60'),
      'width-50' => t('Width 50'),
      'width-40' => t('Width 40'),
      'width-30' => t('Width 30'),
      'width-20' => t('Width 20'),
      'width-10' => t('Width 10'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_styles'])) ? $style_settings['configure_pane_styles'] : '',
  );

  $form['configure_pane_backgrounds'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Backgrounds'),
    '#options' => array(
      'background-white' => t('Background White'),
      'background-light' => t('Background Light'),
      'background-medium' => t('Background Medium'),
      'background-dark' => t('Background Dark'),
      'background-accent' => t('Background Accent'),
      'background-highlight' => t('Background Highlight'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_backgrounds'])) ? $style_settings['configure_pane_backgrounds'] : '',
  );

  $form['configure_pane_modules'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Modules'),
    '#options' => array(
      'module' => t('Module'),
      'module-alert' => t('Module Alert'),
      'module-attention' => t('Module Attention'),
      'module-note' => t('Module Note'),
      'module-info' => t('Module Info'),
      'module-question' => t('Module Question'),
      'module-answer' => t('Module Answer'),
      'module-tool' => t('Module Tool'),
      'module-inprogress' => t('Module In Progress'),
      'module-refer' => t('Module Refer'),
      'module-summary' => t('Module Summary'),
      'module-archive' => t('Module Archive'),
      'module-related' => t('Module Related'),
      'module-billboard' => t('Module Billboard'),
      'module-menu-section' => t('Module Menu Section'),
      'module-table-contents' => t('Module Table contents'),
      'module-poster' => t('Module Poster'),
      'module-contact' => t('Module Contact'),
      'module-news' => t('Module News'),
      'module-spotlight' => t('Module Spotlight'),
      'module-comment' => t('Module Comment'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_modules'])) ? $style_settings['configure_pane_modules'] : '',
  );

  $form['configure_pane_opacity'] = array(
    '#type' => 'select',
    '#title' => t('Configure Pane Opacity'),
    '#options' => array(
      'opacity-100' => t('100% opacity'),
      'opacity-90' => t('90% opacity'),
      'opacity-80' => t('80% opacity'),
      'opacity-70' => t('70% opacity'),
      'opacity-60' => t('60% opacity'),
      'opacity-50' => t('50% opacity'),
      'opacity-40' => t('40% opacity'),
      'opacity-30' => t('30% opacity'),
      'opacity-20' => t('20% opacity'),
      'opacity-10' => t('10% opacity'),
    ),
    '#default_value' => (isset($style_settings['configure_pane_opacity'])) ? $style_settings['configure_pane_opacity'] : '',
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
