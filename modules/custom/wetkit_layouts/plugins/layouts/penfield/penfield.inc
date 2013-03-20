<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_penfield_panels_layouts() {
  $items['penfield'] = array(
    'title'    => t('Penfield (Left Sidebar)'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'penfield.png',
    'theme'    => 'penfield',
    'admin css' => 'penfield.admin.css',
    'css' => 'penfield.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'penfield_top'    => t('Top (conditional)'),
      'penfield_first'  => t('Content 1'),
      'penfield_second' => t('Content 2'),
      'penfield_content_footer' => t('Content Footer'),
      'penfield_third'  => t('Sidebar'),
      'penfield_bottom' => t('Bottom (conditional)'),
    ),
    'bodyid' => 'wb-body-sec',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for penfield.tpl.php.
 */
function template_preprocess_penfield(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
