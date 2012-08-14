<?php
/**
 * @file
 * Template for default Panopoly Hewston.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display hewston clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="hewston-container hewston-top clearfix">
    <div class="hewston-top-region hewston-slider panel-panel">
      <div class="hewston-top-region-inner hewston-slider-inner panel-panel-inner">
        <?php print $content['slider']; ?>
      </div>
    </div>
    <div class="hewston-top-region hewston-slider-gutter panel-panel">
      <div class="hewston-top-region-inner hewston-slider-gutter-inner panel-panel-inner">
        <?php print $content['slidergutter']; ?>
      </div>
    </div>
  </div>
  
  <div class="hewston-container hewston-middle clearfix">
    <div class="hewston-middle-region hewston-column1 panel-panel">
      <div class="hewston-middle-region-inner hewston-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="hewston-middle-region hewston-column2 panel-panel">
      <div class="hewston-middle-region-inner hewston-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="hewston-middle-region hewston-column3 panel-panel">
      <div class="hewston-middle-region-inner hewston-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.hewston -->
