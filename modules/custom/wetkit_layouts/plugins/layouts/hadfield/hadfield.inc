<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_hadfield_panels_layouts() {
  $items['hadfield'] = array(
    'title' => t('Hadfield'),
    'category' => t('WetKit Layouts'),
    'icon' => 'hadfield.png',
    'theme' => 'hadfield',
    'admin css' => 'hadfield.admin.css',
    'css' => 'hadfield.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'hadfield_top'    => t('Top (conditional)'),
      'hadfield_second' => t('Content'),
      'hadfield_first'  => t('Sidebar'),
      'hadfield_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'one',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for hadfield.tpl.php.
 */
function template_preprocess_hadfield(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
