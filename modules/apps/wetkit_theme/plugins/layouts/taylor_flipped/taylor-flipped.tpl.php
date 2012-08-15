<?php
/**
 * @file
 * Template for Panopoly Taylor Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display taylor-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="taylor-flipped-container taylor-flipped-header clearfix panel-panel">
    <div class="taylor-flipped-container-inner taylor-flipped-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="taylor-flipped-container taylor-flipped-column-content clearfix">
    <div class="taylor-flipped-column-content-region taylor-flipped-quarter1 taylor-flipped-column panel-panel">
      <div class="taylor-flipped-column-content-region-inner taylor-flipped-quarter1-inner taylor-flipped-column-inner panel-panel-inner">
        <?php print $content['quarter1']; ?>
      </div>
    </div>
    <div class="taylor-flipped-column-content-region taylor-flipped-quarter2 taylor-flipped-column panel-panel">
      <div class="taylor-flipped-column-content-region-inner taylor-flipped-quarter2-inner taylor-flipped-column-inner panel-panel-inner">
        <?php print $content['quarter2']; ?>
      </div>
    </div>
    <div class="taylor-flipped-column-content-region taylor-flipped-half taylor-flipped-column panel-panel">
      <div class="taylor-flipped-column-content-region-inner taylor-flipped-half-inner taylor-flipped-column-inner panel-panel-inner">
        <?php print $content['half']; ?>
      </div>
    </div>
  </div>
  
  <div class="taylor-flipped-container taylor-flipped-footer clearfix panel-panel">
    <div class="taylor-flipped-container-inner taylor-flipped-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
  
</div><!-- /.taylor-flipped -->
