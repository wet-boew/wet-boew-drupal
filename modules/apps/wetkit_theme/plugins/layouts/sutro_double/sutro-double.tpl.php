<?php
/**
 * @file
 * Template for Panopoly Sutro Double.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display sutro-double clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="sutro-double-container sutro-double-header clearfix panel-panel">
    <div class="sutro-double-container-inner sutro-double-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="sutro-double-container sutro-double-column-content sutro-double-first-column-content clearfix">
    <div class="sutro-double-column-content-region sutro-double-column1 sutro-double-column panel-panel">
      <div class="sutro-double-column-content-region-inner sutro-double-column1-inner sutro-double-column-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="sutro-double-column-content-region sutro-double-column2 sutro-double-column panel-panel">
      <div class="sutro-double-column-content-region-inner sutro-double-column2-inner sutro-double-column-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  
  <div class="sutro-double-container sutro-double-middle clearfix panel-panel">
    <div class="sutro-double-container-inner sutro-double-middle-inner panel-panel-inner">
      <?php print $content['middle']; ?>
    </div>
  </div>
  
  <div class="sutro-double-container sutro-double-column-content sutro-double-second-column-content clearfix">
    <div class="sutro-double-column-content-region sutro-double-column1 sutro-double-column panel-panel">
      <div class="sutro-double-column-content-region-inner sutro-double-column1-inner sutro-double-column-inner panel-panel-inner">
        <?php print $content['secondcolumn1']; ?>
      </div>
    </div>
    <div class="sutro-double-column-content-region sutro-double-column2 sutro-double-column panel-panel">
      <div class="sutro-double-column-content-region-inner sutro-double-column2-inner sutro-double-column-inner panel-panel-inner">
        <?php print $content['secondcolumn2']; ?>
      </div>
    </div>
  </div>
  
  <div class="sutro-double-container sutro-double-footer clearfix panel-panel">
    <div class="sutro-double-container-inner sutro-double-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
  
</div><!-- /.sutro-double -->
