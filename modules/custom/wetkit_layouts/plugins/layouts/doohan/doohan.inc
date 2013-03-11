<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_doohan_panels_layouts() {
  $items['doohan'] = array(
    'title'    => t('Doohan (Left Sidebar)'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'doohan.png',
    'theme'    => 'doohan',
    'admin css' => 'doohan.admin.css',
    'css' => 'doohan.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'doohan_top'    => t('Top (conditional)'),
      'doohan_first'  => t('Content 1'),
      'doohan_second'  => t('Content 2'),
      'doohan_third' => t('Content 3'),
      'doohan_content_footer' => t('Content Footer'),
      'doohan_third'  => t('Sidebar'),
      'doohan_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body-sec',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for doohan.tpl.php.
 */
function template_preprocess_doohan(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
