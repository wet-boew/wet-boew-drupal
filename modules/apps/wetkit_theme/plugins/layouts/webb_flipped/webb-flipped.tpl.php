<?php
/**
 * @file
 * Template for Panopoly Webb.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display webb-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="webb-flipped-container webb-flipped-header clearfix panel-panel">
    <div class="webb-flipped-container-inner webb-flipped-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="webb-flipped-container webb-flipped-column-content clearfix">
    
    <div class="webb-flipped-content-container">
      <div class="webb-flipped-content-container-inner">
      
        <div class="webb-flipped-column-content-region webb-flipped-content-header panel-panel clearfix">
          <div class="webb-flipped-column-content-region-inner webb-flipped-content-header-inner panel-panel-inner">
            <?php print $content['contentheader']; ?>
          </div>
        </div>
        
        <div class="webb-flipped-content-container-column-container clearfix">
          <div class="webb-flipped-column-content-region webb-flipped-content-column1 webb-flipped-column panel-panel">
            <div class="webb-flipped-column-content-region-inner webb-flipped-content-column1-inner webb-flipped-column-inner panel-panel-inner">
              <?php print $content['contentcolumn1']; ?>
            </div>
          </div>
          <div class="webb-flipped-column-content-region webb-flipped-content-column2 webb-flipped-column panel-panel">
            <div class="webb-flipped-column-content-region-inner webb-flipped-content-column2-inner webb-flipped-column-inner panel-panel-inner">
              <?php print $content['contentcolumn2']; ?>
            </div>
          </div>
        </div><!-- /.webb-flipped-content-container-column-container -->
      
      </div>
    </div><!-- /.webb-flipped-content-container -->
    
    <div class="webb-flipped-sidebar webb-flipped-column-content-region webb-flipped-column panel-panel">
      <div class="webb-flipped-sidebar-inner webb-flipped-column-content-region-inner webb-flipped-column-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
    
  </div><!-- /.webb-flipped-column-content -->
  
</div><!-- /.webb-flipped -->
