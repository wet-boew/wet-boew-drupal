<?php
/**
 * @file
 * WetKit Rubik page.tpl.php implementation
 */
?>
<div id='branding'><div class='limiter clearfix'>
    <?php if (isset($breadcrumb)): ?>
      <div class='breadcrumb clearfix'><?php print $breadcrumb ?></div>
    <?php endif; ?>
    <?php if (!$overlay && isset($secondary_menu) && theme_get_setting('wetkit_rubik_show_user_menu')) : ?>
      
      <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('class' => 'links secondary-menu'))) ?>
      <?php print $menu_bar; ?>

    <?php endif; ?>
  </div></div>

<div id='page-title'><div class='limiter clearfix'>
    <div class='tabs clearfix'>
      <?php if (isset($primary_local_tasks)): ?>
        <ul class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></ul>
      <?php endif; ?>
    </div>
    <?php print render($title_prefix); ?>
    <h1 class='page-title <?php print $page_icon_class ?>'>
      <?php if (!empty($page_icon_class)): ?><span class='icon'></span><?php endif; ?>
      <?php if ($title): ?>
        <?php print $title ?>
      <?php endif; ?>
    </h1>
    <?php if ($action_links): ?>
      <ul class='action-links links clearfix'><?php print render($action_links) ?></ul>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  </div></div>

<?php if ($show_messages && $messages): ?>
  <div id='console'><div class='limiter clearfix'><?php print $messages; ?></div></div>
<?php endif; ?>

<div id='page' class="clearfix">
  <div id='main-content' class='limiter'>
    <?php if (isset($page['help'])): ?>
      <?php print render($page['help']) ?>
    <?php endif; ?>
    <div id='content' class='page-content clearfix'>
      <?php if (!empty($page['content'])): ?>
        <?php print render($page['content']) ?>
      <?php endif; ?>
    </div>
  </div>
  <?php if (isset($page['sidebar_first'])): ?>
    <div class="first_sidebar sidebar"><?php print render($page['sidebar_first']); ?> </div>
  <?php endif; ?>

  <?php if (isset($page['sidebar_second'])): ?>
    <div class="second_sidebar sidebar"> <?php print render($page['sidebar_second']) ?> </div>
  <?php endif ?>
</div>

<?php if ($feed_icons || isset($page['footer'])): ?>
  <div id='footer' class='clearfix'>
    <div class='limiter clearfix'>
      <?php if ($feed_icons): ?>
        <div class='feed-icons clearfix'>
          <label><?php print t('Feeds') ?></label>
          <?php print $feed_icons ?>
        </div>
      <?php endif; ?>
      <?php if ($page['footer']): ?>
        <div class="footer"><?php print render($page['footer']); ?></div>
      <?php endif; ?>
    </div>
  </div>
<?php endif; ?>
