<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_payette_panels_layouts() {
  $items['payette'] = array(
    'title'    => t('Payette'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'payette.png',
    'theme'    => 'payette',
    'admin css' => 'payette.admin.css',
    'css' => 'payette.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'payette_top_left'  => t('Top Left'),
      'payette_top_right'  => t('Top Right'),
      'payette_mid_left' => t('Mid Left'),
      'payette_mid_center'  => t('Mid Center'),
      'payette_mid_right' => t('Mid Right'),
      'payette_bottom_left' => t('Bottom Left'),
      'payette_bottom_center'  => t('Bottom Center'),
      'payette_bottom_right' => t('Bottom Right'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for payette.tpl.php.
 */
function template_preprocess_payette(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
