<?php
/**
 * @file
 * Adaptivetheme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 */
?>
<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <div id="page" class="container">
    <div id="header" class="clearfix">
      <?php if ($site_name): ?>
        <h1 id="site-name">
          <a href="<?php print $base_path ?>" title="<?php print t('Home page'); ?>" rel="home"><?php print $site_name; ?></a>
        </h1>
      <?php endif; ?>
    </div>
    <div id="main-content">
      <?php if ($title): ?>
        <h1 id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print $messages; ?>
      <div id="content">
        <?php print $content; ?>
      </div>
    </div>
  </div>
  <?php print $page_bottom ?>
</body>
</html>
