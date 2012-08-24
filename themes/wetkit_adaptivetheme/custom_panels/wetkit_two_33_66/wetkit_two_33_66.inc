<?php

/**
 * @file
 * Implements hook_panels_layouts().
 */
function wetkit_adaptivetheme_wetkit_two_33_66_panels_layouts() {
  $items['wetkit_two_33_66'] = array(
    'title' => t('WetKit Two column 33/66'),
    'category' => t('WetKit - 2 column'),
    'icon' => 'wetkit_two_33_66.png',
    'theme' => 'wetkit_two_33_66',
    'admin css' => 'wetkit_two_33_66.admin.css',
    'css' => 'wetkit_two_33_66.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'wetkit_two_33_66_top'    => t('Top (conditional)'),
      'wetkit_two_33_66_first'  => t('Content'),
      'wetkit_two_33_66_second' => t('Sidebar'),
      'wetkit_two_33_66_bottom' => t('Bottom (conditional)'),
    ),
    // WetKit Core
    'type' => 'two',
    'options' => array(
    ),
    'styles' => array(
    ),
  );

  return $items;
}

/**
 * Preprocess variables for wetkit-two-33-66.tpl.php
 */
function template_preprocess_wetkit_two_33_66(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
