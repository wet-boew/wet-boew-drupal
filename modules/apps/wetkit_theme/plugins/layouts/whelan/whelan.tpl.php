<?php
/**
 * @file
 * Template for Panopoly Whelan.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display whelan clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="whelan-container whelan-column-content clearfix">
    <div class="whelan-column-content-region whelan-column1 panel-panel">
      <div class="whelan-column-content-region-inner whelan-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="whelan-column-content-region whelan-content panel-panel">
      <div class="whelan-column-content-region-inner whelan-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="whelan-column-content-region whelan-column2 panel-panel">
      <div class="whelan-column-content-region-inner whelan-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.whelan -->
