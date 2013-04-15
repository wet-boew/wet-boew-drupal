<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_riel_panels_layouts() {
  $items['riel'] = array(
    'title' => t('Riel'),
    'category' => t('WetKit Layouts'),
    'icon' => 'riel.png',
    'theme' => 'riel',
    'admin css' => 'riel.admin.css',
    'css' => 'riel.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'riel_top'    => t('Top (conditional)'),
      'riel_first'  => t('Content'),
      'riel_second' => t('Sidebar'),
      'riel_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'two',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for riel.tpl.php.
 */
function template_preprocess_riel(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
