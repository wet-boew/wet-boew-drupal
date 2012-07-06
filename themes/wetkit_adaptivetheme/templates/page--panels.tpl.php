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
  <?php print render($page['leaderboard']); ?>

  <div id="wb-head">
    <div id="wb-head-in">
      <header id="header" class="clearfix" role="banner">

        <!-- HeaderStart -->
        <nav role="navigation">
          <div id="gcwu-gcnb">
            <h2><span><?php print t('Site menu'); ?></span></h2>
            <div id="gcwu-gcnb-in"> 

              <?php if ($intranet): ?>
                <div id="gcwu-intranetnb">
                  <div id="gcwu-intranetnb-in">
                    <?php print $menu_gov_bar; ?>
                  </div>
                </div>
              <?php else: ?>
                <?php print $menu_gov_bar; ?>
              <?php endif; ?>

              <div id="gcwu-gcnb-fip">
              <div id="gcwu-sig">
                  <div id="gcwu-sig-in">
                    <?php if ($language->language == 'en'): ?>
                    <div id="gcwu-sig-eng" title="Government of Canada">
                      <img src="<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/sig-eng.gif" width="214" height="20" alt="Government of Canada">
                    </div>
                    <?php endif;?>
                    <?php if ($language->language == 'fr'): ?>
                    <div id="gcwu-sig-fra" title="Gouvernement du Canada">
                      <img src="/<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/sig-fra.gif" width="214" height="20" alt="Gouvernement du Canada">
                    </div>
                    <?php endif;?>  
                  </div>
                </div>

                <?php if ($intranet): ?>
                  <div id="gcwu-wmms">
                    <div id="gcwu-wmms-in">
                      <?php if ($language->language == 'en'): ?>
                      <div id="gcwu-sig-eng" title="Symbol of the Government of Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbol of the Government of Canada"></div>
                      <?php endif;?>
                      <?php if ($language->language == 'fr'): ?>
                      <div id="gcwu-sig-fra" title="Symbole du gouvernement du Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbole du gouvernement du Canada"></div>
                      <?php endif;?>
                    </div>
                  </div>  
                <?php endif; ?>

              </div>
            </div>
          </div>
        </nav>

        <div id="gcwu-bnr" role="banner">
          <div id="gcwu-bnr-in">

            <?php if (!$intranet): ?>
              <div id="gcwu-wmms">
                <div id="gcwu-wmms-in">
                  <?php if ($language->language == 'en'): ?>
                  <div id="gcwu-wmms-fip" title="Symbol of the Government of Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbol of the Government of Canada"></div>
                  <?php endif;?>
                  <?php if ($language->language == 'fr'): ?>
                  <div id="gcwu-wmms-fip" title="Symbole du gouvernement du Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'wetkit_adaptivetheme'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbole du gouvernement du Canada"></div>
                  <?php endif;?>
                </div>
              </div>  
            <?php endif; ?>

            <?php if ($site_name || $site_slogan): ?>
              <!-- start: Site name and Slogan hgroup -->
              <hgroup id="name-and-slogan"<?php print $hgroup_attributes; ?>>
                <div id="gcwu-title">
                  <?php if ($site_name): ?>
                    <p id="gcwu-title-in"<?php print $site_name_attributes; ?>>
                      <?php print $site_name; ?>
                    </p>
                  <?php endif; ?>
                  <?php if ($site_slogan): ?>
                    <h2 id="site-slogan"<?php print $site_slogan_attributes; ?>><?php print $site_slogan; ?></h2>
                  <?php endif; ?>
                </div>
              </hgroup><!-- /end #name-and-slogan -->
            <?php endif; ?>
                 
            <section role ="search">
              <div id="gcwu-srchbx">
                <h2><?php print t('Search'); ?></h2>
                <?php if ($search_box): ?>
                  <div id="gcwu-srchbx-in">
                    <?php print $search_box; ?>
                  </div>
                <?php endif; ?>
              </div>
            </section>
          </div>
        </div>

        <?php if ($intranet): ?>
          <div id="gcwu-subsite" class="gcwu-subsite-1">
            <p><?php print l(t($wetkit_sub_site), '<front>'); ?></p>
          </div> 
        <?php endif; ?>

        <nav role="navigation">
          <div id="gcwu-psnb">
            <h2><span><?php print t('Site menu'); ?></span></h2>
              <div id="gcwu-psnb-in">
                <div class="wet-boew-menubar mb-mega">
                  <div>
                    <?php 
                      $block = module_invoke('menu_block', 'block_view', 'wetkit_menu_blocks-1');
                      print render($block['content']);
                    ?>
                  </div>
                </div>                        
            </div>
          </div>

          <?php if ($breadcrumb): ?>
          <div id="gcwu-bc">
            <h2><?php print t('Breadcrumbs'); ?></h2>
            <div id="gcwu-bc-in">
              <?php print $breadcrumb; ?>
            </div>
          </div>
          <?php endif; ?>
        </nav>

        <!-- region: Header -->
        <?php print render($page['header']); ?>
      </header>
    </div>
  </div>
  
  
  <div id="wb-core">
    <div id="wb-core-in" class="equalize">

        <<?php print $tag; ?> id="main-content">

            <?php print render($title_prefix); // Does nothing by default in D7 core ?>

            <!-- region: Main Content -->
            <?php if ($content = render($page['content'])): ?>
                <?php print $content; ?>
            <?php endif; ?>

            <!-- Feed icons (RSS, Atom icons etc -->
            <?php print $feed_icons; ?>

            <?php print render($title_suffix); // Prints page level contextual links ?>

        </<?php print $tag; ?>><!-- /end #main-content -->
     
    </div>
  </div>

  
  <div id="wb-foot">
    <div id="wb-foot-in">
      <footer>

        <h2><?php print t('Footer'); ?></h2>
        <nav role="navigation">
          <div id="gcwu-sft">
            <h3><?php print t('Site Footer'); ?></h3>
            <div id="gcwu-sft-in">
              <div id="gcwu-tctr">
                <?php print $menu_gov_terms_bar; ?>
              </div>
              <div class="clear"></div>
                <?php 
                  $block = module_invoke('menu_block', 'block_view', 'wetkit_menu_blocks-2');
                  print render($block['content']);
                ?>
            </div>

          </div>
        </nav>

        <?php if (!$intranet): ?>
        <nav role="navigation">
          <div id="gcwu-gcft">
            <h3><?php print t('Government of Canada Footer'); ?></h3>
            <div id="gcwu-gcft-in">
              <div id="gcwu-gcft-fip">
                  <?php print $menu_gov_footer_bar; ?>        
              </div>
            </div>
          </div>
        </nav>
        <?php endif; ?>

        <!-- region: Footer -->
        <?php if ($page['footer']): ?>
          <?php print render($page['footer']); ?>
        <?php endif; ?>

      </footer>
    </div>
  </div>

</div>
