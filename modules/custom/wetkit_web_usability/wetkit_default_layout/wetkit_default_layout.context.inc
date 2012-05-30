<?php
/**
 * @file
 * wetkit_default_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wetkit_default_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wetkit_default_layout_context_front';
  $context->description = 'Default Layout (front) for WetKit Distro';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-headlines_front_page-block' => array(
          'module' => 'views',
          'delta' => 'headlines_front_page-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-videos_box' => array(
          'module' => 'boxes',
          'delta' => 'videos_box',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-connected_box' => array(
          'module' => 'boxes',
          'delta' => 'connected_box',
          'region' => 'content',
          'weight' => '-8',
        ),
        'boxes-priorities_box' => array(
          'module' => 'boxes',
          'delta' => 'priorities_box',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-minister_box' => array(
          'module' => 'boxes',
          'delta' => 'minister_box',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default Layout (front) for WetKit Distro');
  t('Layout');
  $export['wetkit_default_layout_context_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wetkit_default_layout_context_sitewide';
  $context->description = 'Default Layout for WetKit Distro';
  $context->tag = 'Layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-wetkit_menu_blocks-1' => array(
          'module' => 'menu_block',
          'delta' => 'wetkit_menu_blocks-1',
          'region' => 'mega_menu',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'shortcut-shortcuts' => array(
          'module' => 'shortcut',
          'delta' => 'shortcuts',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-wetkit_menu_blocks-2' => array(
          'module' => 'menu_block',
          'delta' => 'wetkit_menu_blocks-2',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default Layout for WetKit Distro');
  t('Layout');
  $export['wetkit_default_layout_context_sitewide'] = $context;

  return $export;
}
