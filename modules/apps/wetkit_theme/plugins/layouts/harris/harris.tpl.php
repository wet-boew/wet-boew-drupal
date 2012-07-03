<?php
/**
 * @file
 * Template for Panopoly Harris.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display harris clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="harris-container harris-header clearfix panel-panel">
    <div class="harris-container-inner harris-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="harris-container harris-column-content clearfix">
    <div class="harris-column-content-region harris-column1 panel-panel">
      <div class="harris-column-content-region-inner harris-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="harris-column-content-region harris-content panel-panel">
      <div class="harris-column-content-region-inner harris-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="harris-column-content-region harris-column2 panel-panel">
      <div class="harris-column-content-region-inner harris-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.harris -->
