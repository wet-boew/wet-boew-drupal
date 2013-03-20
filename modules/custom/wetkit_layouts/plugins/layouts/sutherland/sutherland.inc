<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_sutherland_panels_layouts() {
  $items['sutherland'] = array(
    'title'    => t('Sutherland (Front Page)'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'sutherland.png',
    'theme'    => 'sutherland',
    'admin css' => 'sutherland.admin.css',
    'css' => 'sutherland.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'sutherland_top'    => t('Top (conditional)'),
      'sutherland_first'  => t('Left'),
      'sutherland_second' => t('Center'),
      'sutherland_third'  => t('Right'),
      'sutherland_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for sutherland.tpl.php.
 */
function template_preprocess_sutherland(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
