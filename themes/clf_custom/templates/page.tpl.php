<?php
// $Id: page.tpl.php,v 1.47 2010/11/05 01:25:33 dries Exp $

/**
* @file
* Default theme implementation to display a single Drupal page.
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
*/
?>

<?php if ($page['sidebar_first'] && $page['sidebar_second']): ?>
	<!-- Three column layout begins / Début de la mise en page de trois colonne -->
	<div id="cn-body-inner-3col">
<?php elseif ($page['sidebar_first'] && !$page['sidebar_second']): ?>
	<!-- Two column layout begins / Début de la mise en page de deux colonne -->
	<div id="cn-body-inner-2col">
<?php elseif (!$page['sidebar_first'] && $page['sidebar_second']): ?>
	<!-- Two column layout begins / Début de la mise en page de deux colonne -->
	<div id="cn-body-inner-2col-right">
<?php else: ?>
	<!-- One column layout begins / Début de la mise en page d'une colonne -->
	<div id="cn-body-inner-1col">
<?php endif; ?>

	<!-- Skip header begins / Début du saut de l'en-tête -->
	<div id="cn-skip-head">
	<nav>
		<ul id="cn-tphp">
			<li id="cn-sh-link-1"><a href="#cn-cont"><?php print t('Skip to main content'); ?></a></li>
			<li id="cn-sh-link-2"><a href="#cn-nav"><?php print t('Skip to primary navigation'); ?></a></li>
		</ul>
	</nav>
	</div>
	<!-- Skip header ends / Fin du saut de l'en-tête -->

	<!-- Header begins / Début de l'en-téte -->
	<div id="cn-head">
		<div id="cn-head-inner">
			<header>
        
				<!-- clf-nsi2 theme begins / Début du thème clf-nsi2 -->
				<div id="cn-sig"><img src="<?php print $base_path . $directory; ?>/images/sig.gif" alt="<?php print t('Government of Canada'); ?>" title="<?php print t('Government of Canada'); ?>" /></div>
				<div id="cn-wmms"><img src="<?php print $base_path . $directory; ?>/images/wmms.gif" width="83" height="20" alt="<?php print t('Symbol of the Government of Canada'); ?>" title="<?php print t('Symbol of the Government of Canada'); ?>" /></div>

				<!-- Banner begins / Début de la bannière -->
				<div id="cn-leaf"></div>
				<div id="cn-banner" role="banner">
					<p id="cn-banner-text"><?php print $site_name; ?></p>
					<p><?php print $site_slogan; ?></p>
				</div>
				<!-- Banner ends / Fin de la bannière -->

				<nav role="navigation">

					<!-- Common menu bar begins / Début de la barre de menu commune -->
					<div id="cn-cmb">
             <ul id="lang_selector">
             <li id="lang_selector_attribute">
              <?php print languagelink($language->language); ?>
					  </li>
            </ul>
              
            <!-- Custom Drupal WET: Header -->
            <?php print $main_menu_links; ?>
            <!-- /Custom Drupal WET: Header -->
                  
 					</div>
					<!-- Common menu bar ends / Fin de la barre de menu commune -->

					<?php if ($breadcrumb): ?>
						<!-- Breadcrumb begins / Début du fil d'Ariane -->
						<?php if ($breadcrumb): ?>
							<div id="cn-bcrumb">
								<h2><?php print t('Breadcrumb'); ?></h2>
								<?php print $breadcrumb; ?>
							</div>
						<?php endif; ?>
						<!-- Breadcrumb ends / Fin du fil d'Ariane -->
					<?php endif; ?>

				</nav>
				<!-- clf-nsi2 theme ends / Fin du thème clf-nsi2 -->

			</header>
		</div>
	</div>
	<!-- Header ends / Fin de l'en-téte -->

	<div id="cn-cols">
		<!-- Main content begins / Début du contenu principal -->
		<div id="cn-centre-col-gap"></div>
		<div id="cn-centre-col" role="main">
			<div id="cn-centre-col-inner">

				<?php if (!empty($page['solrsearch'])): ?>
					<?php print render($page['solrsearch']); ?>
				<?php endif; ?>

        <?php if (!$is_front): ?>
          <!-- Content title begins / Début du titre du contenu -->
          <?php print render($title_prefix); ?>
          <h1 id="cn-cont" class="title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
          <!-- Content Title ends / Fin du titre du contenu -->
        <?php endif; ?>
          
				<section>

					<?php if (!empty($messages)): ?>
						<?php print $messages; ?>
					<?php endif; ?>

					<?php if ($tabs): ?>
						<div class="tabs_drupal">
							<?php print render($tabs); ?>
						</div>
					<?php endif; ?>

					<?php if ($action_links): ?>
						<ul class="action-links">
							<?php print render($action_links); ?>
						</ul>
					<?php endif; ?>

					<?php if (!empty($page['content'])): ?>
						<?php print render($page['content']); ?>
					<?php endif; ?>

					<?php if (!empty($feed_icons)): ?>
						<?php print $feed_icons; ?>
					<?php endif; ?>

				</section>

			</div>
		</div>
		<!-- Main content ends / Fin du contenu principal -->

		<?php if ($page['sidebar_first']): ?>
			<!-- Primary navigation (left column) begins / Début de la navigation principale (colonne gauche) -->
			<div id="cn-left-col-gap"></div>
			<div id="cn-left-col">
				<div id="cn-left-col-inner">
					<nav role="navigation">
						<h2 id="cn-nav"><?php print t('Primary navigation (left column)'); ?></h2>
						<div class="cn-left-col-default">
							<?php print render($page['sidebar_first']); ?>
						</div>
					</nav>
				</div>
			</div>
			<!-- Primary navigation (left column) ends / Fin de la navigation principale (colonne gauche) -->
		<?php endif; ?>

		<?php if ($page['sidebar_second']): ?>
			<!-- Supplemental content (right column) begins / Début du contenu supplémentaire (colonne droite) -->
			<div id="cn-right-col-gap"></div>
			<div id="cn-right-col" role="complementary">
				<div id="cn-right-col-inner">
					<section>
						<h2><?php print t('Supplemental content (right column)'); ?></h2>
						<div class="cn-right-col-default">
							<?php print render($page['sidebar_second']); ?>
						</div>
					</section>
				</div>
			</div>
			<!-- Supplemental content (right column) ends / Fin du contenu supplémentaire (colonne droite) -->
		<?php endif; ?>

	</div>

	<!-- Footer begins / Début du pied de page -->
	<div id="cn-foot">
		<div id="cn-foot-inner">
			<footer>
				<h2><?php print t('Footer'); ?></h2>
				<!-- clf-nsi2 theme begins / Début du thème clf-nsi2 -->
				<div id="cn-in-pd">
					<dl id="cn-doc-dates" role="contentinfo">
						<dt><?php print t('Date Modified:'); ?></dt>
						<dd><span><time>2011-04-04</time></span></dd>
					</dl>
					<div id="cn-toppage-foot">
						<a href="#cn-tphp" title="<?php print t('Return to Top of Page'); ?>"><?php print t('Top of Page'); ?></a>
					</div>
					<div id="cn-in-pd-links">
						<a href="#" rel="license" title="<?php print t('Important Notices'); ?>"><?php print t('Important Notices'); ?></a>
					</div>
				</div>
				<!-- clf-nsi2 theme ends / Fin du thème clf-nsi2 -->
			</footer>
		</div>
	</div>
	<div class="clear1">&nbsp;</div>
	<!-- Footer ends / Fin du pied de page -->

</div>