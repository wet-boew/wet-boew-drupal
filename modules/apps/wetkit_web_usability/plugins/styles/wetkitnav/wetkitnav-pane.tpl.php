<?php drupal_add_css(drupal_get_path('module','wetkit_web_usability') .'/plugins/styles/wetkitnav/wetkitnav.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="wetkitnav-pane">
  
  <?php if (isset($content->title)): ?>
  <?php
    $headings = (isset($settings['headings'])) ? $settings['headings'] : 'h3';
    $gcwu_classes = (isset($settings['gcwu_classes'])) ? $settings['gcwu_classes'] : '';
    $gcwu_id = (isset($settings['gcwu_id'])) ?  $settings['gcwu_id']  : '';
    if ($gcwu_id != '') {
      $gcwu_id = 'id="' . $gcwu_id . '"'; 
    }
  ?>
  <<?php print $headings; ?> class="pane-title <?php print $gcwu_classes; ?>" <?php print $gcwu_id; ?>>
    <?php print $content->title; ?>
  </<?php print (isset($settings['headings'])) ? $settings['headings'] : 'h3'; ?>>
  <?php endif ?>

  <div class="pane-content">
  <?php print render($content->content); ?>
  </div>

</div>