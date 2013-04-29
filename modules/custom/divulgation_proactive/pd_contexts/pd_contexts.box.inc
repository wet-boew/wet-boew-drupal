<?php
/**
 * @file
 * pd_contexts.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pd_contexts_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'guided_search';
  $box->plugin_key = 'wetkit_box';
  $box->title = '';
  $box->description = 'Guided search';
  $box->options = array(
    'en-title' => 'Guided search',
    'en-body' => array(
      'value' => '<p>Click a term to initiate a search.</p>',
      'format' => 'filtered_html',
    ),
    'fr-title' => 'Recherche guidée',
    'fr-body' => array(
      'value' => '<p>Cliquez sur un des critères ci-dessous pour lancer une recherche avancée.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['guided_search'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'next_posting_date_q1';
  $box->plugin_key = 'wetkit_box';
  $box->title = '';
  $box->description = 'Next Posting Date (Q1)';
  $box->options = array(
    'en-title' => 'Next posting date',
    'en-body' => array(
      'value' => '<p>The reports for January 1 to March 31 will be posted on April 30.</p>',
      'format' => 'filtered_html',
    ),
    'fr-title' => 'Prochaine date de mise en ligne',
    'fr-body' => array(
      'value' => '<p>Les rapports pour la période du 1 January au 31 March seront mis en ligne le 30 April.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['next_posting_date_q1'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'search_note';
  $box->plugin_key = 'wetkit_box';
  $box->title = '';
  $box->description = 'Search Note';
  $box->options = array(
    'en-title' => 'Search note',
    'en-body' => array(
      'value' => '<p>If you do not see a search term, such as a particular month or year, it means there were no position reclassifications for that period.</p>',
      'format' => 'filtered_html',
    ),
    'fr-title' => 'Note sur la recherche',
    'fr-body' => array(
      'value' => '<p>Si vous ne voyez pas un critère de recherche, tel qu\'un mois ou une année en particulier, cela signifie qu\'il n\'y avait pas de reclassifications de postes pour la période choisie.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['search_note'] = $box;

  return $export;
}
