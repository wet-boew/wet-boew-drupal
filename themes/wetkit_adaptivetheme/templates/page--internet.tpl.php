<?php
/**
 * @file
 * Adaptivetheme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * Adaptivetheme supplied variables:
 * - $site_logo: Themed logo - linked to front with alt attribute.
 * - $site_name: Site name linked to the homepage.
 * - $site_name_unlinked: Site name without any link.
 * - $hide_site_name: Toggles the visibility of the site name.
 * - $visibility: Holds the class .element-invisible or is empty.
 * - $primary_navigation: Themed Main menu.
 * - $secondary_navigation: Themed Secondary/user menu.
 * - $primary_local_tasks: Split local tasks - primary.
 * - $secondary_local_tasks: Split local tasks - secondary.
 * - $tag: Prints the wrapper element for the main content.
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see adaptivetheme_preprocess_page()
 * @see adaptivetheme_process_page()
 */
?>
<div id="page" class="container <?php print $classes; ?>">
  <!-- region: Leaderboard -->
  <?php if ($page['leaderboard']): ?>
    <?php print render($page['leaderboard']); ?>
  <?php endif; ?>
  <div id="wb-head">
    <div id="wb-head-in">
      <header id="header" class="clearfix">
        <!-- HeaderStart -->
        <nav role="navigation">
          <div id="gcwu-gcnb">
            <h2><span><?php print t('Site menu'); ?></span></h2>
            <div id="gcwu-gcnb-in">
              <?php print $menu_bar; ?>
              <div id="gcwu-gcnb-fip">
                <div id="gcwu-sig">
                  <div id="gcwu-sig-in">
                    <?php if ($language->language == 'en'): ?>
                      <div id="gcwu-sig-eng" title="Government of Canada">
                        <object data="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/sig-eng.svg" role="img" tabindex="-1" aria-label="Government of Canada" type="image/svg+xml">
                          <img src="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/sig-eng.png" alt="Government of Canada" />
                        </object>
                      </div>
                    <?php endif;?>
                    <?php if ($language->language == 'fr'): ?>
                      <div id="gcwu-sig-fra" title="Gouvernement du Canada">
                        <object data="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/sig-eng.svg" role="img" tabindex="-1" aria-label="Gouvernement du Canada" type="image/svg+xml">
                          <img src="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/sig-eng.png" alt="Gouvernement du Canada" />
                        </object>
                      </div>
                    <?php endif;?>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </nav>
        <div id="gcwu-bnr" role="banner">
          <div id="gcwu-bnr-in">
            <div id="gcwu-wmms">
              <div id="gcwu-wmms-in">
                <?php if ($language->language == 'en'): ?>
                  <object data="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/wmms.svg" role="img" tabindex="-1" aria-label="Symbol of the Government of Canada" type="image/svg+xml">
                    <img src="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/wmms.png" alt="Symbol of the Government of Canada" />
                  </object>
                <?php endif;?>
                <?php if ($language->language == 'fr'): ?>
                  <object data="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/wmms.svg" role="img" tabindex="-1" aria-label="Symbole du gouvernement du Canada" type="image/svg+xml">
                    <img src="<?php print (base_path() . libraries_get_path('wet-boew'));?>/dist/theme-gcwu-fegc/images/wmms.png" alt="Symbole du gouvernement du Canada" />
                  </object>
                <?php endif;?>
              </div>
            </div>
            <?php if ($site_name || $site_slogan): ?>
              <div id="gcwu-title">
                <?php if ($site_name): ?>
                  <p id="gcwu-title-in"><?php print $site_name; ?></p>
                <?php endif; ?>
                <?php if ($site_slogan): ?>
                  <h2 id="site-slogan"<?php print $site_slogan_attributes; ?>><?php print $site_slogan; ?></h2>
                <?php endif; ?>
              </div>
            <?php endif; ?>
            <section role ="search">
              <div id="gcwu-srchbx">
                <h2><?php print t('Search'); ?></h2>
                <?php if ($search_box): ?>
                  <?php print $search_box; ?>
                <?php endif; ?>
              </div>
            </section>
          </div>
        </div>
        <nav role="navigation">
          <div id="gcwu-psnb">
           <h2><?php print t('<span>Site</span> Menu'); ?></h2>
            <div id="gcwu-psnb-in">
              <div class="wet-boew-menubar mb-mega">
                <div>
                  <!-- region: Mega Menu -->
                  <?php if ($page['mega_menu']): ?>
                    <?php print render($page['mega_menu']); ?>
                  <?php endif; ?>
                </div>
              </div>
            </div>
          </div>
          <?php if ($breadcrumb): ?>
            <?php print $breadcrumb; ?>
          <?php endif; ?>
        </nav>
        <!-- region: Header -->
        <?php print render($page['header']); ?>
      </header>
    </div>
  </div>
  <div id="wb-core">
    <div id="wb-core-in" class="equalize">
      <div id="wb-main" role="main">
        <div id="wb-main-in">
          <div id="columns" class="clearfix">
            <div id="content-column" role="main">
              <div class="content-inner">
                <!-- region: Highlighted -->
                <?php print render($page['highlighted']); ?>
                <!-- Messages and Help -->
                <?php print $messages; ?>
                <?php print render($page['help']); ?>
                <?php if (isset($search_indexing_start)): ?>
                  <?php print $search_indexing_start; ?>
                <?php endif; ?>                  
                <section id="main-content">
                  <?php print render($title_prefix); ?>
                  <?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
                    <header id="main-content-header">
                      <?php if ($title): ?>
                      <h1 id="wb-cont"<?php print $attributes; ?>>
                        <?php print $title; ?>
                      </h1>
                      <?php endif; ?>
                      <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
                        <div id="tasks">
                          <?php if ($primary_local_tasks): ?>
                          <ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
                          <?php endif; ?>
                          <?php if ($secondary_local_tasks): ?>
                          <ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
                          <?php endif; ?>
                          <?php if ($action_links = render($action_links)): ?>
                          <ul class="action-links clearfix"><?php print $action_links; ?></ul>
                          <?php endif; ?>
                        </div>
                      <?php endif; ?>
                    </header>
                  <?php endif; ?>
                  <!-- region: Main Content -->
                  <?php if ($content = render($page['content'])): ?>
                    <div id="content"><?php print $content; ?></div>
                  <?php endif; ?>
                  <!-- Feed icons (RSS, Atom icons etc -->
                  <?php print $feed_icons; ?>
                  <?php print render($title_suffix); ?>
                </section>
                <?php if (isset($search_indexing_stop)): ?>
                  <?php print $search_indexing_stop; ?>
                <?php endif; ?>                
                <!-- region: Content Aside -->
                <?php print render($page['content_aside']); ?>
              </div>
            </div>
            <!-- regions: Sidebar first and Sidebar second -->
            <?php $sidebar_first = render($page['sidebar_first']); ?>
            <?php $sidebar_second = render($page['sidebar_second']); ?>
          </div>
          <div class="clear"></div>
        </div>
      </div>
      <?php if (($sidebar_first) && !$is_front): ?>
        <div id="wb-sec">
          <div id="wb-sec-in" style="min-height: 680px; ">
            <nav role="navigation">
              <h2 id="wb-side-nav"><?php print t('Skip to side navigation'); ?></h2>
              <div class="wb-sec-def">
                <div id="sidebar-first" class="sidebar">
                  <?php print $sidebar_first; ?>
                </div>  
              </div>
            </nav>
          </div>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <div id="wb-foot">
    <div id="wb-foot-in">
      <footer>
        <h2 id="wb-nav"><?php print t('Footer'); ?></h2>
        <nav role="navigation">
          <div id="gcwu-sft">
            <h3><?php print t('Site Footer'); ?></h3>
            <div id="gcwu-sft-in">
              <div id="gcwu-tctr">
                <?php print $menu_terms_bar; ?>
              </div>
              <div class="clear"></div>
              <!-- region: Footer -->
              <?php if ($page['footer']): ?>
                <?php print render($page['footer']); ?>
              <?php endif; ?>
            </div>
          </div>
        </nav>
        <nav role="navigation">
          <div id="gcwu-gcft">
            <h3><?php print t('Government of Canada Footer'); ?></h3>
            <div id="gcwu-gcft-in">
              <div id="gcwu-gcft-fip">
                <?php print $menu_footer_bar; ?>        
              </div>
            </div>
          </div>
        </nav>
      </footer>
    </div>
  </div>
</div>
