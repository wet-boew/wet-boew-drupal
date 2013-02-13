<?php

/**
 * @file
 * Implementation of an Adaptivetheme Page Layout plugin
 *
 * This is an example of a Page Layout plugin for Adaptivetheme. If enabled this
 * will be picked up by the Plugin system and added as a page layout option for
 * the specified 'device_groups'.
 *
 * You can enable the "wetkit" example layout plugin by uncommenting the
 * info file entry in your subthemes info file. Look for:
 * Custom Page Layout Plugins:
 * plugins[page_layout][layouts] = custom_layouts
 *
 * Where "custom_layouts" is the directory holding this file. Remember to clear
 * the cache after you make changes to your info file.
 *
 * The three_col_grail.inc AT Core layout holds extensive documentation on Page
 * Layout plugins, its well worth reviewing that file.
 *
 * NOTE: when making changes to layout plugins you must clear cache all - plugin
 * data is cached in the database!
 *
 * @SEE adaptivetheme/at_core/layouts/core/three_col_grail/three_col_grail.inc
 * @SEE at_subtheme.info
 */

/**
 * Layout Plugin.
 */
function wetkit() {
  $page_layout['wetkit'] = array(
    'title' => t('wetkit'),
    'category' => t('WetKit Subtheme Custom Page Layout'),
    'method' => 'wetkit',
    'type' => 'page_layout',
    'admin css' => 'wetkit.admin.css',
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
 * CSS Builder for the wetkit layout.
 *
 * Page layout functions are called during theme settings submit to process and
 * return CSS to be written to file. Sidebar width and unit values are set in
 * theme settings and passed to this function as parameters.
 *
 * In essense you just write CSS here using the parameters as placeholders for
 * inserting the values. You might do some logic with those values first
 * depending on the complexity and nature of your layout. Its worth taking some
 * time to review AT Cores Page layouts for examples.
 *
 * @param int $sidebar_first
 *   An arbitary numeric value.
 * @param int $sidebar_second
 *   An arbitary numeric value.
 * @param int $sidebar_unit
 *   A value unit, one of px, em or %.
 */
function wetkit_layout($sidebar_first, $sidebar_second, $sidebar_unit) {
  $styles = <<<EOF
/* Nothing to output, this style is wetkit! */
EOF;

  return $styles;
}
