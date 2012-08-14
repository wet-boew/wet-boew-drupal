<?php
/**
 * @file
 * Template for Panopoly McCoppin.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display mccoppin clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="mccoppin-container mccoppin-column-content clearfix">
    <div class="mccoppin-column-content-region mccoppin-column1 panel-panel">
      <div class="mccoppin-column-content-region-inner mccoppin-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="mccoppin-column-content-region mccoppin-column2 panel-panel">
      <div class="mccoppin-column-content-region-inner mccoppin-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="mccoppin-column-content-region mccoppin-column3 panel-panel">
      <div class="mccoppin-column-content-region-inner mccoppin-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.mccoppin -->
