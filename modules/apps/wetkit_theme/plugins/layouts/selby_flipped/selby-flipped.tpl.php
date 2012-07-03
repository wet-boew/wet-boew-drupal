<?php
/**
 * @file
 * Template for Panopoly Selby Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display selby-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="selby-flipped-content-container selby-flipped-container">
    <div class="selby-flipped-content-container-inner selby-flipped-container-inner">
    
      <div class="selby-flipped-column-content-region selby-flipped-content-header clearfix panel-panel">
        <div class="selby-flipped-column-content-region-inner selby-flipped-content-header-inner panel-panel-inner">
          <?php print $content['contentheader']; ?>
        </div>
      </div>
      
      <div class="selby-flipped-content-container-column-container clearfix">
        <div class="selby-flipped-content-container-column-container-inner">
          <div class="selby-flipped-column-content-region selby-flipped-content-column1 selby-flipped-column panel-panel">
            <div class="selby-flipped-column-content-region-inner selby-flipped-content-column1-inner selby-flipped-column-inner panel-panel-inner">
              <?php print $content['contentcolumn1']; ?>
            </div>
          </div>
          <div class="selby-flipped-column-content-region selby-flipped-content-column2 selby-flipped-column panel-panel">
            <div class="selby-flipped-column-content-region-inner selby-flipped-content-column2-inner selby-flipped-column-inner panel-panel-inner">
              <?php print $content['contentcolumn2']; ?>
            </div>
          </div>
        </div>
      </div><!-- /.selby-flipped-content-container-column-container -->
      
      <div class="selby-flipped-column-content-region selby-flipped-content-footer clearfix panel-panel">
        <div class="selby-flipped-column-content-region-inner selby-flipped-content-footer-inner panel-panel-inner">
          <?php print $content['contentfooter']; ?>
        </div>
      </div>
      
    </div>
  </div><!-- /.selby-flipped-content-container -->
  
  <div class="selby-flipped-sidebar selby-flipped-column-content-region selby-flipped-column selby-flipped-container panel-panel">
    <div class="selby-flipped-sidebar-inner selby-flipped-column-content-region-inner selby-flipped-column-inner selby-flipped-container-inner panel-panel-inner">
      <?php print $content['sidebar']; ?>
    </div>
  </div>
  
</div><!-- /.selby-flipped -->
