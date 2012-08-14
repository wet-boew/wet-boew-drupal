<?php
// Plugin definition
$plugin = array(
  'title' => t('Selby Flipped'),
  'icon' => 'selby-flipped.png',
  'category' => t('Panopoly'),
  'theme' => 'selby_flipped',
  'css' => 'selby-flipped.css',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentheader' => t('Content Header'),
    'contentcolumn1' => t('Content Column 1'),
    'contentcolumn2' => t('Content Column 2'),
    'contentfooter' => t('Content Footer'),
  ),
);
