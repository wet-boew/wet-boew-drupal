<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_vanier_panels_layouts() {
  $items['vanier'] = array(
    'title' => t('Vanier'),
    'category' => t('WetKit Layouts'),
    'icon' => 'vanier.png',
    'theme' => 'vanier',
    'admin css' => 'vanier.admin.css',
    'css' => 'vanier.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'vanier_top'    => t('Top (conditional)'),
      'vanier_content_banner'  => t('Content Banner'),
      'vanier_content_listings'  => t('Content Listings'),
      'vanier_spotlight_1' => t('Spotlight 1'),
      'vanier_spotlight_2' => t('Spotlight 2'),
      'vanier_spotlight_3' => t('Spotlight 3'),
      'vanier_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'one',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for vanier.tpl.php.
 */
function template_preprocess_vanier(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
