<?php
/**
 * @file
 * Adaptivetheme implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 * - $css_id: unique id if present.
 * - $panel_prefix: prints a wrapper when this template is used in a context,
 *   such as when rendered by Display Suite or other module - the wrapper is
 *   added by Adaptivetheme in the appropriate process function.
 * - $panel_suffix: closing element for the $prefix.
 *
 * @see adaptivetheme_preprocess_berton()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */

// Ensure variables are always set. In the last hours before cutting a stable
// release I found these are not set when in a Field Collection using Display
// Suite, even though they are initialized in the templates preprocess function.
// This is a workaround, that may or may not go away.
$panel_prefix = isset($panel_prefix) ? $panel_prefix : '';
$panel_suffix = isset($panel_suffix) ? $panel_suffix : '';
?>
<?php print $panel_prefix; ?>
<div class="at-panel panel-display laurier clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['laurier_top']): ?>
  <div class="region-laurier-top span-8">
      <?php print $content['laurier_top']; ?>
  </div>
  <div class="clear"></div>
  <?php endif; ?>
  <div id="wb-main" role="main">
    <div id="wb-main-in">
      <div class="region-laurier-first">
          <?php print $content['laurier_content']; ?>
      </div>
      <div class="clear"></div>
    </div>
  </div>
  <?php if ($content['laurier_bottom']): ?>
  <div class="region-laurier-bottom span-8">
      <?php print $content['laurier_bottom']; ?>
  </div>
  <div class="clear"></div>
  <?php endif; ?>
</div>
<?php print $panel_suffix; ?>
