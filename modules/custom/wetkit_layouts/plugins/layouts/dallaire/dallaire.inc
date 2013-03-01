<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_dallaire_panels_layouts() {
  $items['dallaire'] = array(
    'title'    => t('Dallaire (Left Sidebar)'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'dallaire.png',
    'theme'    => 'dallaire',
    'admin css' => 'dallaire.admin.css',
    'css' => 'dallaire.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'dallaire_top'    => t('Top (conditional)'),
      'dallaire_first'  => t('Content 1'),
      'dallaire_second' => t('Content 2'),
      'dallaire_third'  => t('Sidebar'),
      'dallaire_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body-sec',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for dallaire.tpl.php.
 */
function template_preprocess_dallaire(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
