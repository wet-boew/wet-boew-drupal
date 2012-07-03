<?php
/**
 * @file
 * Template for Panopoly bryant Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bryant-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="bryant-flipped-container bryant-flipped-content-container clearfix">
    <div class="bryant-flipped-content bryant-flipped-content-region panel-panel">
      <div class="bryant-flipped-content-inner bryant-flipped-content-region-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="bryant-flipped-sidebar bryant-flipped-content-region panel-panel">
      <div class="bryant-flipped-sidebar-inner bryant-flipped-content-region-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
    
</div><!-- /.bryant-flipped -->
