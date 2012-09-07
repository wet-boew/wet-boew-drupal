<?php
/**
 * @file wetkitnav-pane.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>
<?php drupal_add_css(drupal_get_path('module','wetkit_wetboew') .'/plugins/styles/wetkitnav/wetkitnav.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
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