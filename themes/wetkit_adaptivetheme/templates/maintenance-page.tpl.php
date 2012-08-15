<?php
/**
 * @file
 * Adaptivetheme implementation to display a single Drupal page while offline.
 *
 * Not all variables are mirrored from html.tpl.php and page.tpl.php, only those
 * required to deliver a valid html page with branding and site offline messages.
 * $polyfills is included to support HTML5 in IE8 and below.
 *
 * Adaptivetheme variables:
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see adaptivetheme_preprocess()
 * @see adaptivetheme_preprocess_maintenance_page()
 */
?>
<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php print $polyfills; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <div id="page" class="container">
    <header id="header" class="clearfix" role="banner">
      <div id="branding" class="branding-elements clearfix">
        <?php if (!empty($logo)): ?>
          <div id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </div>
        <?php endif; ?>
        <?php if ($site_name): ?>
          <h1 id="site-name">
            <a href="<?php print $base_path ?>" title="<?php print t('Home page'); ?>" rel="home"><?php print $site_name; ?></a>
          </h1>
        <?php endif; ?>
      </div>
    </header>
    <section id="main-content" role="main">
      <?php if ($title): ?>
        <h1 id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print $messages; ?>
      <div id="content">
        <?php print $content; ?>
      </div>
    </section>
  </div>
  <?php print $page_bottom ?>
</body>
</html>
