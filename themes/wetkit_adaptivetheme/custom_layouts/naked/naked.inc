<?php

/**
 * @file
 * Implimentation of an Adaptivetheme Page Layout plugin
 *
 * This is an example of a Page Layout plugin for Adaptivetheme. If enabled this
 * will be picked up by the Plugin system and added as a page layout option for
 * the specified 'device_groups'.
 *
 * The three_col_grail.inc AT Core layout holds extensive documentation on Page
 * Layout plugins, its well worth reviewing that file.
 *
 * @SEE adaptivetheme/at_core/layouts/core/three_col_grail/three_col_grail.inc
 * @SEE at_subtheme.info (Custom Page Layout Plugins).
 * 
 * TODO: Write and link to documentation.
 */
function naked() {
  $page_layout['naked'] = array(
    'title' => t('Naked'),
    'category' => t('AT Subtheme Custom Page Layout'),
    'method' => 'naked',
    'type' => 'page_layout',
    'device_groups' => array(
      'bigscreen',
      'tablet_landscape',
      'tablet_portrait',
      'smartphone_landscape',
    ),
  );
  return $page_layout;
}

/**
 * CSS Builder for the naked layout.
 *
 * Parameter values are passed to this function from the submit function, then
 * returned back to the submit function where they are written to file and saved
 * in public files.
 *
 * In essense you just write CSS here using the parameters as placeholders for
 * inserting the values. You might do some logic with those values first
 * depending on the complexity and nature of your layout. Its worth taking some
 * time to review AT Cores Page layouts for examples.
 *
 * @param $sidebar_first, an arbitary numeric value.
 * @param $sidebar_second, an arbitary numeric value.
 * @param $sidebar_unit, a value unit, one of px, em or %.
 */
function naked_layout($sidebar_first, $sidebar_second, $sidebar_unit) {
  $styles = <<<EOF
/* Nothing to output, this style is naked! */
EOF;

  return $styles;
}
