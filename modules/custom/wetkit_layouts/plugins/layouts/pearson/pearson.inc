<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_pearson_panels_layouts() {
  $items['pearson'] = array(
    'title' => t('Pearson (Left Sidebar)'),
    'category' => t('WetKit Layouts'),
    'icon' => 'pearson.png',
    'theme' => 'pearson',
    'admin css' => 'pearson.admin.css',
    'css' => 'pearson.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'pearson_top'    => t('Top (conditional)'),
      'pearson_first'  => t('Content'),
      'pearson_second' => t('Sidebar'),
      'pearson_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body-sec',
    'type' => 'two',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for pearson.tpl.php.
 */
function template_preprocess_pearson(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
