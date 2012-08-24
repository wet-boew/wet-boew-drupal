<?php

/**
 * @file
 * Implements of hook_panels_layouts()
 */
function wetkit_adaptivetheme_wetkit_three_40_40_20_panels_layouts() {
  $items['wetkit_three_40_40_20'] = array(
    'title'    => t('WetKit Three column 40/40/20'),
    'category' => t('WetKit - 3 column'),
    'icon'     => 'wetkit_three_40_40_20.png',
    'theme'    => 'wetkit_three_40_40_20',
    'admin css' => 'wetkit_three_40_40_20.admin.css',
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
    /*
    'type' => 'three',
    'options' => array(
      'wetkit-three-40-40-20' => 'default',
      'wetkit-three-40-40-20-stack-bottom' => 'stack bottom',
      'wetkit-three-40-40-20-stack-top' => 'stack top',
      'wetkit-three-40-40-20-stack' => 'stack',
    ),
    'styles' => array(
      'wetkit-three-40-40-20' => array(
        'css' => array(
          '25' => array('.wetkit-three-40-40-20 > .region' => 'width:25%'),
          '50' => array('.wetkit-three-40-40-20 > div.region-wetkit-three-40-40-20-second' => 'width:50%'),
        ),
      ),
      'wetkit-three-40-40-20-stack-bottom' => array(
        'css' => array(
          '25' => array('.wetkit-three-40-40-20 > div.region-wetkit-three-40-40-20-first' => 'width:25%'),
          '75' => array('.wetkit-three-40-40-20 > div.region-wetkit-three-40-40-20-second' => 'width:75%'),
          'fdw' => array('.wetkit-three-40-40-20 > .region-wetkit-three-40-40-20-third' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'wetkit-three-40-40-20-stack-top' => array(
        'css' => array(
          'fdw' => array('.wetkit-three-40-40-20 > .region-wetkit-three-40-40-20-first' => 'float:none;display:block;width:100%;clear:both'),
          '75' => array('.wetkit-three-40-40-20 > div.region-wetkit-three-40-40-20-second' => 'width:75%'),
          '25' => array('.wetkit-three-40-40-20 > div.region-wetkit-three-40-40-20-third' => 'width:25%'),
        ),
      ),
      'wetkit-three-40-40-20-stack' => array(
        'css' => array(
          'fdw' => array('.wetkit-three-40-40-20 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
    */
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
