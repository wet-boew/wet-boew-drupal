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

<div class="panel-display webb clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="webb-container webb-header clearfix panel-panel">
    <div class="webb-container-inner webb-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="webb-container webb-column-content clearfix">
    
    <div class="webb-sidebar webb-column-content-region webb-column panel-panel">
      <div class="webb-sidebar-inner webb-column-content-region-inner webb-column-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
    
    <div class="webb-content-container">
      <div class="webb-content-container-inner">
      
        <div class="webb-column-content-region webb-content-header panel-panel clearfix">
          <div class="webb-column-content-region-inner webb-content-header-inner panel-panel-inner">
            <?php print $content['contentheader']; ?>
          </div>
        </div>
        
        <div class="webb-content-container-column-container clearfix">
          <div class="webb-column-content-region webb-content-column1 webb-column panel-panel">
            <div class="webb-column-content-region-inner webb-content-column1-inner webb-column-inner panel-panel-inner">
              <?php print $content['contentcolumn1']; ?>
            </div>
          </div>
          <div class="webb-column-content-region webb-content-column2 webb-column panel-panel">
            <div class="webb-column-content-region-inner webb-content-column2-inner webb-column-inner panel-panel-inner">
              <?php print $content['contentcolumn2']; ?>
            </div>
          </div>
        </div><!-- /.webb-content-container-column-container -->
      
      </div>
    </div><!-- /.webb-content-container -->
    
  </div><!-- /.webb-column-content -->
  
</div><!-- /.webb -->
