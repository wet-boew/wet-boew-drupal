<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('CLF Three Column'),
  'category' => t('CLF'),
  'icon' => 'clf_threecol.png',
  'theme' => 'panels_clf_threecol',
  'theme arguments' => array('id', 'content'),
  'css' => 'clf_threecol.css',
  'regions' => array(
    'left' => t('Left side'),
    'middle' => t('Content column'),
    'right' => t('Right side')
  ),
);

