<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_berton_panels_layouts() {
  $items['berton'] = array(
    'title' => t('Berton'),
    'category' => t('WetKit Layouts'),
    'icon' => 'berton.png',
    'theme' => 'berton',
    'admin css' => 'berton.admin.css',
    'css' => 'berton.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'berton_top'    => t('Top (conditional)'),
      'berton_highlight_1' => t('Highlight 1'),
      'berton_highlight_2' => t('Highlight 2'),
      'berton_highlight_3' => t('Highlight 3'),
      'berton_content_banner'  => t('Content Banner'),
      'berton_content_listings'  => t('Content Listings'),
      'berton_spotlight_1' => t('Spotlight 1'),
      'berton_spotlight_2' => t('Spotlight 2'),
      'berton_spotlight_3' => t('Spotlight 3'),
      'berton_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'one',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for berton.tpl.php.
 */
function template_preprocess_berton(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
