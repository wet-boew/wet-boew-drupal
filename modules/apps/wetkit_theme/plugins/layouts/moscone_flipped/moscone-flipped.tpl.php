<?php
/**
 * @file
 * Template for Panopoly Moscone Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display moscone-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="moscone-container moscone-header clearfix panel-panel">
    <div class="moscone-container-inner moscone-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="moscone-flipped-container moscone-flipped-column-content clearfix">
    <div class="moscone-flipped-column-content-region moscone-flipped-content panel-panel">
      <div class="moscone-flipped-column-content-region-inner moscone-flipped-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="moscone-flipped-column-content-region moscone-flipped-sidebar panel-panel">
      <div class="moscone-flipped-column-content-region-inner moscone-flipped-sidebar-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
  
  <div class="moscone-container moscone-header clearfix panel-panel">
    <div class="moscone-container-inner moscone-header-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
  
</div><!-- /.moscone-flipped -->
