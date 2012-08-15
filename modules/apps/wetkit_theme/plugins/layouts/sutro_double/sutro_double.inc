<?php
// Plugin definition
$plugin = array(
  'title' => t('Sutro Double'),
  'icon' => 'sutro-double.png',
  'category' => t('Panopoly'),
  'theme' => 'sutro_double',
  'css' => 'sutro-double.css',
  'regions' => array(
    'header' => t('Header'),
    'column1' => t('First Column'),
    'column2' => t('Second Column'),
    'middle' => t('Middle'),
    'secondcolumn1' => t('Bottom First Column'),
    'secondcolumn2' => t('Bottom Second Column'),
    'footer' => t('Footer'),
  ),
);
