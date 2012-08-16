<?php drupal_add_css(drupal_get_path('module','wetkit_web_usability') .'/plugins/styles/tabbed_interface/tabbed_interface.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<?php $tabbed_interface_classes = (isset($settings['tabbed_interface_classes'])) ? $settings['tabbed_interface_classes'] : 'tabs-style-7 auto-play animate-slow cycle'; ?>

<div class="wet-boew-tabbedinterface <?php print $tabbed_interface_classes; ?>">
  <?php print render($content->content); ?>
</div>