<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function wetkit_adaptivetheme_wetkit_33_66_panels_layouts() {
  $items['wetkit_33_66'] = array(
    'title' => t('WetKit Two column 33/66'),
    'category' => t('WetKit - 2 column'),
    'icon' => 'wetkit_33_66.png',
    'theme' => 'wetkit_33_66',
    'admin css' => 'wetkit_33_66.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'wetkit_33_66_top'    => t('Top (conditional)'),
      'wetkit_33_66_first'  => t('Left'),
      'wetkit_33_66_second' => t('Right'),
      'wetkit_33_66_bottom' => t('Bottom (conditional)'),
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
 * Preprocess variables for wetkit-33-66.tpl.php
 */
function template_preprocess_wetkit_33_66(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
