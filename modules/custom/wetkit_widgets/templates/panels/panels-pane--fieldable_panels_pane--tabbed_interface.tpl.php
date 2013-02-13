<?php

/**
 * @file
 * Adaptivetheme panel pane template
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
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>
<?php $tag = $title ? 'section' : 'div'; ?>
<<?php print $tag; ?> class="<?php print $classes; ?>" <?php print $id; ?>>
  <div class="pane-inner clearfix">
    <?php if ($admin_links): ?>
      <?php print $admin_links; ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($feeds): ?>
      <div class="feed">
        <?php print $feeds; ?>
      </div>
    <?php endif; ?>

    <div class="pane-content">
      <?php if (isset($settings['tabbed_interface_classes'])): ?>
        <div class="ipe_tabs_interface <?php print $settings['tabbed_interface_classes']; ?>">
          <?php print render($content); ?>
        </div>
      <?php else: ?>
        <div class="ipe_tabs_interface tabs-style-3 auto-play cycle-slow animate-slow">
          <?php print render($content); ?>
        </div>
      <?php endif; ?>
    </div>

    <?php if ($links): ?>
      <div class="links">
        <?php print $links; ?>
      </div>
    <?php endif; ?>

    <?php if ($more): ?>
      <div class="more-link">
        <?php print $more; ?>
      </div>
    <?php endif; ?>

  </div>
</<?php print $tag; ?>>
<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
