<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function wetkit_adaptivetheme_wetkit_one_100_panels_layouts() {
  $items['wetkit_one_100'] = array(
    'title' => t('WetKit One column 100'),
    'category' => t('WetKit - 1 column'),
    'icon' => 'wetkit_one_100.png',
    'theme' => 'wetkit_one_100',
    'admin css' => 'wetkit_one_100.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'wetkit_one_100_top'    => t('Top (conditional)'),
      'wetkit_one_100_content'  => t('Content'),
      'wetkit_one_100_bottom' => t('Bottom (conditional)'),
    ),
    // WetKit Core
    'type' => 'one',
    'options' => array(
    ),
    'styles' => array(
    ),
  );

  return $items;
}

/**
 * Preprocess variables for wetkit-one-100.tpl.php
 */
function template_preprocess_wetkit_one_100(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
