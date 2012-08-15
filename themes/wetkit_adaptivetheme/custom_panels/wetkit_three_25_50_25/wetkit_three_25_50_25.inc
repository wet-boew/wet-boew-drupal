<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function wetkit_adaptivetheme_wetkit_three_25_50_25_panels_layouts() {
  $items['wetkit_three_25_50_25'] = array(
    'title'    => t('WetKit Three column 25/50/25'),
    'category' => t('WetKit - 3 column'),
    'icon'     => 'wetkit_three_25_50_25.png',
    'theme'    => 'wetkit_three_25_50_25',
    'admin css' => 'wetkit_three_25_50_25.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'wetkit_three_25_50_25_top'    => t('Top (conditional)'),
      'wetkit_three_25_50_25_first'  => t('Left'),
      'wetkit_three_25_50_25_second' => t('Center'),
      'wetkit_three_25_50_25_third'  => t('Right'),
      'wetkit_three_25_50_25_bottom' => t('Bottom (conditional)'),
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
 * Preprocess variables for wetkit-three-25-50-25.tpl.php
 */
function template_preprocess_wetkit_three_25_50_25(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
