<?php
/**
 * @file
 * Adativetheme implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 * - $css_id: unique id if present.
 * - $panel_prefix: prints a wrapper when this template is used in certain context,
 *   such as when rendered by Display Suite or other module - the wrapper is
 *   added by Adaptivetheme in the appropriate process function.
 * - $panel_suffix: closing element for the $prefix.
 *
 * @see adaptivetheme_preprocess_three_40_40_20()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */

// Ensure variables are always set. In the last hours before cutting a stable
// release I found these are not set when inside a Field Collection using Display
// Suite, even though they are initialized in the templates preprocess function.
// This is a workaround, that may or may not go away.
$panel_prefix = isset($panel_prefix) ? $panel_prefix : '';
$panel_suffix = isset($panel_suffix) ? $panel_suffix : '';
?>

  <div id="wb-main" role="main">
    <div id="wb-main-in">
        
        <?php print $panel_prefix; ?>

        <div class="at-panel panel-display wetkit-three-40-40-20 clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>

        <?php if ($content['wetkit_three_40_40_20_top']): ?>
            <div class="region region-wetkit-three-40-40-20-top region-conditional-stack">
            <div class="region-inner clearfix">
                <?php print $content['wetkit_three_40_40_20_top']; ?>
            </div>
            </div>
        <?php endif; ?>

        <div id="gcwu-content">  
            <div class="region region-wetkit-three-40-40-20-first span-3">
                <div class="region-inner clearfix">
                <?php print $content['wetkit_three_40_40_20_first']; ?>
                </div>
            </div>
            <div class="region region-wetkit-three-40-40-20-second span-3">
                <div class="region-inner clearfix">
                <?php print $content['wetkit_three_40_40_20_second']; ?>
                </div>
            </div>
        </div>

        <aside role="complementary">
            <div id="gcwu-aside">
            <div class="region region-wetkit-three-40-40-20-third">
                <div class="region-inner clearfix">
                <?php print $content['wetkit_three_40_40_20_third']; ?>
                </div>
            </div>
        </div>
        </aside>

        <div class="clear"></div>

        </div>

        <?php if ($content['wetkit_three_40_40_20_bottom']): ?>
            <div class="region region-wetkit-three-40-40-20-bottom region-conditional-stack">
            <div class="region-inner clearfix">
                <?php print $content['wetkit_three_40_40_20_bottom']; ?>
            </div>
            </div>
        <?php endif; ?>
        </div>

        <?php print $panel_suffix; ?>

        <div class="clear"></div>
    </div>
  </div> 