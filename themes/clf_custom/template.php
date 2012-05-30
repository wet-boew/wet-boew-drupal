<?php
/**
 *
 * Web Experience Toolkit (WET) / Bo?te ? outils de l'exp?rience Web (BOEW)
 * Terms and conditions of use: http://tbs-sct.ircan.gc.ca/projects/gcwwwtemplates/wiki/Terms
 * Conditions r?gissant l'utilisation : http://tbs-sct.ircan.gc.ca/projects/gcwwwtemplates/wiki/Conditions
 *
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to base_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: base_breadcrumb()
 *
 *   where base is the name of your sub-theme. For example, the
 *   wet_classic theme would define a wet_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */

function clf_custom_preprocess_page(&$vars) {
  
  $vars['theme_hook_suggestions'] = array();
  
  if (module_exists('panels')) {
    $page = panels_get_current_page_display();
    if ($page) {
      $vars['panels_enable'] = $page->layout;
      $vars['theme_hook_suggestions'][] = 'page__panels';
    }
    if (isset($page->panels['right']))
    {
      $vars['panels_right'] = 'right';
    }
    if (isset($page->panels['left']))
    {
      $vars['panels_left'] = 'left';
    }
  }

  //Main Menu Bar
  $menu = i18n_menu_navigation_links('main-menu');
  $vars['main_menu_links'] = theme('links__system_main_menu',
    array(
      'links' => $menu,
      'attributes' => array(
              'id' => 'main-menu',
              'class' => array(
                'links', 'inline', 'clearfix')
              ), 
              'heading' => t('Main menu'))); 
}

/**
 * Displays a language switcher. Translation links may be provided by other modules.
 */
function languagelink($currentlang) {
    // Get the current page.  This code is preferred, but not 100%. Fix later
    $path = drupal_is_front_page() ? '<front>' : $_GET['q'];
    $languages = language_list('enabled');
    $links = array();
    foreach ($languages[1] as $language) {
    	if ($language->language != $currentlang) {
    	  $links[$language->language] = array(
    	    'href'       => $path,
    	    'title'      => $language->native,
    	    'language'   => $language,
    	    'attributes' => array('class' => 'language-link'),
        );
      drupal_alter('translation_link', $links, $path);
	    $options["language"] = $links[$language->language]['language'];
	    $options["attributes"] = $links[$language->language]['attributes'];
      return l($links[$language->language]['title'], $links[$language->language]['href'], $options);
      }
   }
}
