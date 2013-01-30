<?php

/**
 * @file
 * Implements hook_panels_layouts().
 */
function wetkit_adaptivetheme_wetkit_three_40_40_20_panels_layouts() {
  $items['wetkit_three_40_40_20'] = array(
    'title'    => t('WetKit Three column 40/40/20 (Front)'),
    'category' => t('WetKit - 3 column'),
    'icon'     => 'wetkit_three_40_40_20.png',
    'theme'    => 'wetkit_three_40_40_20',
    'admin css' => 'wetkit_three_40_40_20.admin.css',
    'css' => 'wetkit_three_40_40_20.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'wetkit_three_40_40_20_top'    => t('Top (conditional)'),
      'wetkit_three_40_40_20_first'  => t('Left'),
      'wetkit_three_40_40_20_second' => t('Center'),
      'wetkit_three_40_40_20_third'  => t('Right'),
      'wetkit_three_40_40_20_bottom' => t('Bottom (conditional)'),
    ),
    // WetKit Core
    'type' => 'three',
    'options' => array(
    ),
    'styles' => array(
    ),
  );

  return $items;
}

/**
 * Preprocess variables for wetkit-three-40-40-20.tpl.php
 */
function template_preprocess_wetkit_three_40_40_20(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
