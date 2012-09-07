<?php
/**
 * @file
 * wetkit_wetboew.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wetkit_wetboew_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wetkit_default_content';
  $context->description = 'WetKit Default Layout for WetKit Web Usability';
  $context->tag = 'Layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'wetkit_page_other' => 'wetkit_page_other',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
        'shortcut-shortcuts' => array(
          'module' => 'shortcut',
          'delta' => 'shortcuts',
          'region' => 'sidebar_first',
          'weight' => '-17',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'content',
          'weight' => '-10',
        ),
        'workbench-block' => array(
          'module' => 'workbench',
          'delta' => 'block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('WetKit Default Layout for WetKit Web Usability');
  $export['wetkit_default_content'] = $context;

  return $export;
}
