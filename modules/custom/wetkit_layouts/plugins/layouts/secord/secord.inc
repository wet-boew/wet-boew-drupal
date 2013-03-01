<?php

/**
 * @file
 * Implements core hooks for wetkit_layouts.
 */

/**
 * Implements hook_panels_layouts().
 */
function wetkit_layouts_secord_panels_layouts() {
  $items['secord'] = array(
    'title'    => t('Secord'),
    'category' => t('WetKit Layouts'),
    'icon'     => 'secord.png',
    'theme'    => 'secord',
    'admin css' => 'secord.admin.css',
    'css' => 'secord.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'secord_top_left'  => t('Top Left'),
      'secord_top_right_1'  => t('Top Right'),
      'secord_top_right_2'  => t('Top Right'),
      'secord_mid_left' => t('Mid Left'),
      'secord_mid_center'  => t('Mid Center'),
      'secord_mid_right' => t('Mid Right'),
      'secord_bottom_left' => t('Bottom Left'),
      'secord_bottom_center'  => t('Bottom Center'),
      'secord_bottom_right' => t('Bottom Right'),
    ),
    'bodyid' => 'wb-body',
    'type' => 'three',
    'options' => array(),
    'styles' => array(),
  );

  return $items;
}

/**
 * Preprocess variables for secord.tpl.php.
 */
function template_preprocess_secord(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
