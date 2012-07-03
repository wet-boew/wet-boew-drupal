<?php
/**
 * @file
 * Template for default Panopoly Brown.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display brown clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="brown-container brown-top clearfix">
    <div class="brown-top-region brown-slider panel-panel">
      <div class="brown-top-region-inner brown-slider-inner panel-panel-inner">
        <?php print $content['slider']; ?>
      </div>
    </div>
    <div class="brown-top-region brown-slider-gutter panel-panel">
      <div class="brown-top-region-inner brown-slider-gutter-inner panel-panel-inner">
        <?php print $content['slidergutter']; ?>
      </div>
    </div>
  </div>
  
  <div class="brown-container brown-middle clearfix">
    <div class="brown-middle-region brown-column1 panel-panel">
      <div class="brown-middle-region-inner brown-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="brown-middle-region brown-column2 panel-panel">
      <div class="brown-middle-region-inner brown-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="brown-middle-region brown-column3 panel-panel">
      <div class="brown-middle-region-inner brown-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div> 
    </div>
  </div>
  
  <div class="brown-container brown-footer clearfix">
    <div class="brown-footer-region brown-footer-column1 panel-panel">
      <div class="brown-footer-region-inner brown-footer-column1-inner panel-panel-inner">
        <?php print $content['footercolumn1']; ?>
      </div>
    </div>
    <div class="brown-footer-region brown-footer-column2 panel-panel">
      <div class="brown-footer-region-inner brown-footer-column2-inner panel-panel-inner">
        <?php print $content['footercolumn2']; ?>
      </div>
    </div>
    <div class="brown-footer-region brown-footer-column3 panel-panel">
      <div class="brown-footer-region-inner brown-footer-column3-inner panel-panel-inner">
        <?php print $content['footercolumn3']; ?>
      </div>
    </div>
  </div>

</div><!-- /.brown -->
