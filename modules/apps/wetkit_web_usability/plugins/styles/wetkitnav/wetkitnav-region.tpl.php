<?php drupal_add_css(drupal_get_path('module','wetkit_web_usability') .'/plugins/styles/wetkitnav/wetkitnav.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="wetkitnav-region">
<?php print render($content->content); ?>
</div>