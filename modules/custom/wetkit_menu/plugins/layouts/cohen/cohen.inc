<?php

/**
 * @file
 * Implements core hooks for wetkit_menu.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_menu_cohen_panels_layouts() {
  $items['cohen'] = array(
    'title' => t('Cohen'),
    'category' => t('WetKit Menu'),
    'icon' => 'cohen.png',
    'theme' => 'cohen',
    'admin css' => 'cohen.admin.css',
    'css' => 'cohen.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'cohen_top' => t('Top'),
      'cohen_left' => t('Left'),
      'cohen_middle_left' => t('Middle Left'),
      'cohen_middle_right' => t('Middle Right'),
      'cohen_right' => t('Right'),
    ),
    'type' => 'one',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for cohen.tpl.php.
 */
function template_preprocess_cohen(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
