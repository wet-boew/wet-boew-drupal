<?php
/**
 * @file
 * Template for Panopoly Bartlett.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bartlett clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="bartlett-sidebar bartlett-column-content-region bartlett-column bartlett-container panel-panel">
    <div class="bartlett-sidebar-inner bartlett-column-content-region-inner bartlett-column-inner bartlett-container-inner panel-panel-inner">
      <?php print $content['sidebar']; ?>
    </div>
  </div>
  
  <div class="bartlett-content-container bartlett-container">
    <div class="bartlett-column-content-region bartlett-content-header clearfix panel-panel">
      <div class="bartlett-column-content-region-inner bartlett-content-header-inner panel-panel-inner">
        <?php print $content['contentheader']; ?>
      </div>
    </div>
  
    <div class="bartlett-content-container-column-container clearfix">
      <div class="bartlett-column-content-region bartlett-content-column1 bartlett-column panel-panel">
        <div class="bartlett-column-content-region-inner bartlett-content-column1-inner bartlett-column-inner panel-panel-inner">
          <?php print $content['contentcolumn1']; ?>
        </div>
      </div>
      <div class="bartlett-column-content-region bartlett-content-column2 bartlett-column panel-panel">
        <div class="bartlett-column-content-region-inner bartlett-content-column2-inner bartlett-column-inner panel-panel-inner">
          <?php print $content['contentcolumn2']; ?>
        </div>
      </div>
    </div><!-- /.bartlett-content-container-column-container -->
    
  </div><!-- /.bartlett-content-container -->
    
</div><!-- /.bartlett -->
