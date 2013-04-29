<?php
/**
 * @file
 * pd_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pd_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contracts';
  $context->description = '';
  $context->tag = 'Proactive Disclosures';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pd_views_facet:page' => 'pd_views_facet:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-Guided-Search-PD' => array(
          'module' => 'bean',
          'delta' => 'Guided-Search-PD',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-bsKWLb3mT7bDwSmEsIQswjIxiC0jNLO0' => array(
          'module' => 'facetapi',
          'delta' => 'bsKWLb3mT7bDwSmEsIQswjIxiC0jNLO0',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'bean-Search-note-pd' => array(
          'module' => 'bean',
          'delta' => 'Search-note-pd',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Proactive Disclosures');
  $export['contracts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reclassifications';
  $context->description = '';
  $context->tag = 'Proactive Disclosures';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pd_views_facet:page_2' => 'pd_views_facet:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-Guided-Search-PD' => array(
          'module' => 'bean',
          'delta' => 'Guided-Search-PD',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-2auGrspnAB2EUW1z3495s7Iq6w338lPp' => array(
          'module' => 'facetapi',
          'delta' => '2auGrspnAB2EUW1z3495s7Iq6w338lPp',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-LrHCJMRN7VVbWs4A2ORWulo7Mst58rR4' => array(
          'module' => 'facetapi',
          'delta' => 'LrHCJMRN7VVbWs4A2ORWulo7Mst58rR4',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'bean-Search-note-pd' => array(
          'module' => 'bean',
          'delta' => 'Search-note-pd',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Proactive Disclosures');
  $export['reclassifications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'travel_hospitality';
  $context->description = '';
  $context->tag = 'Proactive Disclosures';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pd_views_facet:page_1' => 'pd_views_facet:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-Guided-Search-PD' => array(
          'module' => 'bean',
          'delta' => 'Guided-Search-PD',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-1bohjEvByK4Uuvt0i5oCFgyQ7x4yGg9h' => array(
          'module' => 'facetapi',
          'delta' => '1bohjEvByK4Uuvt0i5oCFgyQ7x4yGg9h',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-tEn0MQbyZt6tk2i0Vinf7CxRf1iozWbq' => array(
          'module' => 'facetapi',
          'delta' => 'tEn0MQbyZt6tk2i0Vinf7CxRf1iozWbq',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'bean-Search-note-pd' => array(
          'module' => 'bean',
          'delta' => 'Search-note-pd',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Proactive Disclosures');
  $export['travel_hospitality'] = $context;

  return $export;
}
