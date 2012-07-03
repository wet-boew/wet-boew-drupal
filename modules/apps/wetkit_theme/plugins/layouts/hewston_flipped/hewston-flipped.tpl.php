<?php
/**
 * @file
 * Template for default Panopoly Hewston Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display hewston-flipped clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="hewston-flipped-container hewston-flipped-top clearfix">
    <div class="hewston-flipped-top-region hewston-flipped-slider-gutter panel-panel">
      <div class="hewston-flipped-top-region-inner hewston-flipped-slider-gutter-inner panel-panel-inner">
        <?php print $content['slidergutter']; ?>
      </div>
    </div>
    <div class="hewston-flipped-top-region hewston-flipped-slider panel-panel">
      <div class="hewston-flipped-top-region-inner hewston-flipped-slider-inner panel-panel-inner">
        <?php print $content['slider']; ?>
      </div>
    </div>
  </div>
  
  <div class="hewston-flipped-container hewston-flipped-middle clearfix">
    <div class="hewston-flipped-middle-region hewston-flipped-column1 panel-panel">
      <div class="hewston-flipped-middle-region-inner hewston-flipped-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="hewston-flipped-middle-region hewston-flipped-column2 panel-panel">
      <div class="hewston-flipped-middle-region-inner hewston-flipped-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="hewston-flipped-middle-region hewston-flipped-column3 panel-panel">
      <div class="hewston-flipped-middle-region-inner hewston-flipped-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.hewston-flipped -->
