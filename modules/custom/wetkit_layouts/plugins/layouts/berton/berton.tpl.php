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
<div class="at-panel panel-display berton clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['berton_top']): ?>
  <div class="region-berton-top span-8">
      <?php print $content['berton_top']; ?>
  </div>
  <div class="clear"></div>
  <?php endif; ?>
  <div id="wb-main" role="main">
    <div id="wb-main-in">
      <div class="grid-12">
        <div class="region-berton-highlight-1 span-4">
            <?php print $content['berton_highlight_1']; ?>
        </div>
        <div class="region-berton-highlight-2 span-4">
            <?php print $content['berton_highlight_2']; ?>
        </div>
        <div class="region-berton-highlight-3 span-4">
            <?php print $content['berton_highlight_3']; ?>
        </div>
        <div class="clear"></div>
        <div class="region-berton-content-banner span-8">
            <?php print $content['berton_content_banner']; ?>
        </div>
        <div class="region-berton-content-listings span-4">
            <?php print $content['berton_content_listings']; ?>
        </div>
        <div class="clear"></div>
        <div class="region-berton-spotlight-1 span-4">
            <?php print $content['berton_spotlight_1']; ?>
        </div>
        <div class="region-berton-spotlight-2 span-4">
            <?php print $content['berton_spotlight_2']; ?>
        </div>
        <div class="region-berton-spotlight-3 span-4">
            <?php print $content['berton_spotlight_3']; ?>
        </div>
        <div class="clear"></div>
      </div>
    </div>
  </div>
  <?php if ($content['berton_bottom']): ?>
  <div class="region-berton-bottom span-8">
      <?php print $content['berton_bottom']; ?>
  </div>
  <div class="clear"></div>
  <?php endif; ?>
</div>
<?php print $panel_suffix; ?>
