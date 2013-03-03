<?php
/**
 * @file
 * wetkit_core.block.inc
 */

/**
 * Implements _wetkit_core_default_blocks().
 */
function _wetkit_core_default_blocks() {
  // Enable some standard blocks.
  $default_theme = variable_get('theme_default', 'wetkit_adaptivetheme');
  $admin_theme = 'wetkit_rubik';
  $blocks = array(
    array(
      'module' => 'system',
      'delta' => 'main',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'content',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'node',
      'delta' => 'recent',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => 10,
      'region' => 'dashboard_main',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'system',
      'delta' => 'powered-by',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 10,
      'region' => 'footer',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'system',
      'delta' => 'help',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'help',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'system',
      'delta' => 'main',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'content',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'system',
      'delta' => 'help',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'help',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'user',
      'delta' => 'login',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => 10,
      'region' => 'content',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'user',
      'delta' => 'new',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'dashboard_sidebar',
      'pages' => '',
      'cache' => -1,
    ),
    array(
      'module' => 'search',
      'delta' => 'form',
      'theme' => $admin_theme,
      'status' => 1,
      'weight' => -10,
      'region' => 'dashboard_sidebar',
      'pages' => '',
      'cache' => -1,
    ),
  );
  $query = db_insert('block')->fields(array(
    'module',
    'delta',
    'theme',
    'status',
    'weight',
    'region',
    'pages',
    'cache',
  ));
  foreach ($blocks as $block) {
    $query->values($block);
  }
  $query->execute();
}
