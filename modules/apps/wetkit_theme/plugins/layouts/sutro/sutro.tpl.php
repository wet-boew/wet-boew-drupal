<?php
/**
 * @file
 * Template for Panopoly Sutro.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display sutro clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="sutro-container sutro-header clearfix panel-panel">
    <div class="sutro-container-inner sutro-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="sutro-container sutro-column-content clearfix">
    <div class="sutro-column-content-region sutro-column1 sutro-column panel-panel">
      <div class="sutro-column-content-region-inner sutro-column1-inner sutro-column-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="sutro-column-content-region sutro-column2 sutro-column panel-panel">
      <div class="sutro-column-content-region-inner sutro-column2-inner sutro-column-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  
  <div class="sutro-container sutro-footer clearfix panel-panel">
    <div class="sutro-container-inner sutro-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
  
</div><!-- /.sutro -->
