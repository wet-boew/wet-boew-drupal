<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
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
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
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
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region, below the main menu (if any).
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>

<div id="page">
  
  <!-- HeaderStart -->
  <div id="wb-head">
    <div id="wb-head-in">
      <header id="header" role="banner">
        <nav role="navigation">
          <div id="gcwu-gcnb">
            <h2><?php print t('Government of Canada navigation bar'); ?></h2>
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
                      <img src="<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/sig-eng.gif" width="214" height="20" alt="Government of Canada">
                    </div>
                    <?php endif;?>
                    <?php if ($language->language == 'fr'): ?>
                    <div id="gcwu-sig-fra" title="Gouvernement du Canada">
                      <img src="/<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/sig-fra.gif" width="214" height="20" alt="Gouvernement du Canada">
                    </div>
                    <?php endif;?>  
                  </div>
                </div>
                <?php if ($intranet): ?>
                  <div id="gcwu-wmms">
                    <div id="gcwu-wmms-in">
                      <?php if ($language->language == 'en'): ?>
                      <div id="gcwu-sig-eng" title="Symbol of the Government of Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbol of the Government of Canada"></div>
                      <?php endif;?>
                      <?php if ($language->language == 'fr'): ?>
                      <div id="gcwu-sig-fra" title="Symbole du gouvernement du Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbole du gouvernement du Canada"></div>
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
                  <div id="gcwu-wmms-fip" title="Symbol of the Government of Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbol of the Government of Canada"></div>
                  <?php endif;?>
                  <?php if ($language->language == 'fr'): ?>
                  <div id="gcwu-wmms-fip" title="Symbole du gouvernement du Canada"><img src="<?php print(base_path() . drupal_get_path('theme', 'web_usability_zen'));?>/wet-boew/theme-gcwu-fegc/images/wmms.gif" width="126" height="30" alt="Symbole du gouvernement du Canada"></div>
                  <?php endif;?>
                </div>
              </div>  
            <?php endif; ?>
            <?php if ($site_name || $site_slogan): ?>
              <div id="gcwu-title">
                <?php if ($site_name): ?>
                  <p id="gcwu-title-in">
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
                  </p>
                <?php endif; ?>
                <?php if ($site_slogan): ?>
                  <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
                <?php endif; ?>
              </div>                  
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
                    <?php print render($page['mega_menu']); ?>
                </div>                        
            </div>
          </div>  
          <div id="gcwu-bc">
            <h2><?php print t('Breadcrumbs'); ?></h2>
            <div id="gcwu-bc-in">
              <?php print $breadcrumb; ?>
            </div>
          </div>      
        </nav>
        <?php print render($page['header']); ?>
      </header>
    </div>
  </div>
  
  <div id="wb-core">
    <div id="wb-core-in" class="equalize">
      <div id="wb-main" role="main">
        <div id="wb-main-in"> 
          <?php
            // Render the sidebars to see if there's anything in them.
            $sidebar_first  = render($page['sidebar_first']);
            $sidebar_second = render($page['sidebar_second']);
          ?>
          <?php if ($is_front): ?>
            <div id="gcwu-content" class="column" role="main">
              <?php print $messages; ?>
              <?php print render($page['help']); ?>
              <?php unset($page['content']['system_main']['default_message']); ?>
              <?php unset($page['content']['system_main']['content']['default_message']); ?>
              <?php print render($page['content']); ?>
            </div><!-- /#content -->
            <aside role="complementary">
              <div id="gcwu-aside">
                <h2><?php print t('Supplemental Content'); ?></h2>
                <?php print $sidebar_second; ?>
              </div>
            </aside>
            <div class="clear"></div>
          <?php endif; ?>
          <?php if (!$is_front): ?>
          <div id="content" class="column" role="main">
            <?php print render($page['highlighted']); ?>
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
              <h1 class="title" id="page-title"><?php print $title; ?></h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php print render($tabs); ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>    
          </div>
          <?php endif; ?>
          <div id="navigation">
            <?php print render($page['navigation']); ?>
          </div><!-- /#navigation -->
          <div class="clear"></div>
        </div>
      </div> 
      <?php if (($sidebar_first) && !$is_front): ?>
          <div id="wb-sec">
          <div id="wb-sec-in" style="min-height: 680px; ">
            <nav role="navigation">
              <h2 id="wb-nav"><?php print t('Skip to side navigation'); ?></h2>
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

  <div id="wb-foot"><div id="wb-foot-in">
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
            <?php print render($page['footer']); ?>
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
    </footer>
    </div>
  </div>

</div><!-- /#page -->

<?php print render($page['bottom']); ?>