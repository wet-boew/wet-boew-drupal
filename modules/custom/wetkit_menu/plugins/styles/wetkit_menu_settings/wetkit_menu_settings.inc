<?php

/**
 * @file
 * Definition of the 'WetKit Group Menu Items' panel styles.
 */

$plugin = array(
  'title' => t('WetKit Group Menu Items'),
  'description' => t('Provide support for grouping top level menu items without children.'),
  'render pane' => 'wetkit_menu_wetkit_menu_settings_render_pane',
  'pane settings form' => 'wetkit_menu_wetkit_menu_settings_style_settings_form',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_wetkit_menu_wetkit_menu_settings_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];
  $settings = $vars['settings'];
  $element = $content->content['#content'];

  // Strips all of the sub-menu items.
  if (isset($settings['wetkit_menu_settings_strip_sub_items']) && ($settings['wetkit_menu_settings_strip_sub_items'] == 1)) {
    $children = array_intersect_key($element, array_flip(element_children($element)));
    foreach ($children as $element_key => $element_value) {
      $content->content['#content'][$element_key]['#attributes']['class'][] = (isset($settings['wetkit_menu_settings_custom_css'])) ? $settings['wetkit_menu_settings_custom_css'] : '';
      if ($element_value['#original_link']['has_children'] == "1") {
        unset($content->content['#content'][$element_key]);
      }
    }
  }

  // Wrap the menu items with markup.
  if (isset($settings['wetkit_menu_settings_wrap_menu_items']) && ($settings['wetkit_menu_settings_wrap_menu_items'] == 1)) {
    $content->content['#content']['#prefix'] = '<ul>';
    $content->content['#content']['#suffix'] = '</ul>';    
  }

  // Wrap the panel pane with markup.
  if (isset($settings['wetkit_menu_settings_wrap_pane']) && ($settings['wetkit_menu_settings_wrap_pane'] == 1)) {
    return '<section>' . theme('panels_pane', array(
      'content' => $content,
      'pane' => $pane,
      'display' => $display,
    )) . '</section>';
  }
  elseif (isset($settings['wetkit_menu_settings_wrap_pane']) && ($settings['wetkit_menu_settings_wrap_pane'] == 2)) {
    return '<div>' . theme('panels_pane', array(
      'content' => $content,
      'pane' => $pane,
      'display' => $display,
    )) . '</div>';
  }
  else {
    return theme('panels_pane', array(
      'content' => $content,
      'pane' => $pane,
      'display' => $display,
    ));  
  }
}

/**
 * Settings Form.
 */
function wetkit_menu_wetkit_menu_settings_style_settings_form($style_settings) {

 $form['wetkit_menu_settings_strip_sub_items'] = array(
    '#type' => 'select',
    '#title' => t('Strip all of the sub menu items?'),
    '#options' => array(
      '0' => t('No'),
      '1' => t('Yes'),
    ),
    '#default_value' => (isset($style_settings['wetkit_menu_settings_strip_sub_items'])) ? $style_settings['wetkit_menu_settings_strip_sub_items'] : '',
  );
 $form['wetkit_menu_settings_wrap_pane'] = array(
    '#type' => 'select',
    '#title' => t('Wrap Pane in the following tags?'),
    '#options' => array(
      '0' => t('- None -'),
      '1' => t('<section>'),
      '2' => t('<div>'),
    ),
    '#default_value' => (isset($style_settings['wetkit_menu_settings_wrap_pane'])) ? $style_settings['wetkit_menu_settings_wrap_pane'] : '',
  );
 $form['wetkit_menu_settings_wrap_menu_items'] = array(
    '#type' => 'select',
    '#title' => t('Wrap menu links in the following tags?'),
    '#options' => array(
      '0' => t('- None -'),
      '1' => t('<ul>'),
    ),
    '#default_value' => (isset($style_settings['wetkit_menu_settings_wrap_menu_items'])) ? $style_settings['wetkit_menu_settings_wrap_menu_items'] : '',
  );
  $form['wetkit_menu_settings_custom_css'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom CSS to be applied to each menu item.'),
    '#default_value' => (isset($style_settings['wetkit_menu_settings_custom_css'])) ? $style_settings['wetkit_menu_settings_custom_css'] : '',
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  );

  return $form;
}
