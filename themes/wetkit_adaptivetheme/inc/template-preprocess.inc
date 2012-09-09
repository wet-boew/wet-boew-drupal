<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "wetkit_adaptivetheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "wetkit_adaptivetheme".
 * 2. Uncomment the required function to use.
 */

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
function wetkit_adaptivetheme_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  wetkit_adaptivetheme_preprocess_html($variables, $hook);
  wetkit_adaptivetheme_preprocess_page($variables, $hook);
}

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function wetkit_adaptivetheme_preprocess_html(&$variables, $hook) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

  //Support for Intranet Theme
  $variables['intranet'] = '';
  if (at_get_setting('wetkit_intranet_enable') == 1) {
    $variables['intranet'] = 'Enabled';
    $variables['base_path'] = base_path();
    $variables['path_to_web_usability'] = drupal_get_path('theme', 'wetkit_adaptivetheme');
  }

  //Assign other skip link variables
  $variables['skip_link_content_anchor'] = at_get_setting('skip_link_content_anchor');
  $variables['skip_link_text'] = t('Skip to main content');
  $variables['skip_link_nav_anchor'] = at_get_setting('skip_link_nav_anchor');
  $variables['skip_link2_text'] = t('Skip to footer');

  //Detect Panels Layout if Exists
  $panel_page = page_manager_get_current_page();

  //Panels Layout
  if ($panel_page) {
    //Detect Panels Layout
    if (isset($panel_page['handler']->conf['display']->renderer_handler->plugins['layout']['theme'])) {
      $layout = $panel_page['handler']->conf['display']->renderer_handler->plugins['layout']['theme'];
    }
    //Detect Panelizer Panels Layout
    elseif  (isset($panel_page['handler']->conf['context'])) {
      $context = $panel_page['handler']->conf['context'];
      if (isset($panel_page['contexts'][$context]->data->panelizer['page_manager']->display->layout)) {
        $layout = $panel_page['contexts'][$context]->data->panelizer['page_manager']->display->layout;
      }
    }
    //Set Body Class for Panels Layouts
    if (isset($layout)) {
      if (substr($layout, 0, 10) == 'wetkit_two') {
        $variables['wetkit_col_array'] = 'wb-body-sec';
      }
      elseif (substr($layout, 0, 12) == 'wetkit_three') {
        $variables['wetkit_col_array'] = 'wb-body';
      }
      else {
        $variables['wetkit_col_array'] = 'wb-body';
      }
    }
  }
  //Non Panels Layout
  else {
    if ($variables['is_front']) {
        $variables['wetkit_col_array'] = 'wb-body';
    }
    elseif (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
        $variables['wetkit_col_array'] = 'wb-body-sec';
    }
    elseif (!empty($variables['page']['sidebar_first'])) {
        $variables['wetkit_col_array'] = 'wb-body-sec';
    }
    elseif (!empty($variables['page']['sidebar_second'])) {
        $variables['wetkit_col_array'] = 'wb-body-sec';
    }
    else {
        $variables['wetkit_col_array'] = 'wb-body';
    }
  }

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function wetkit_adaptivetheme_preprocess_page(&$variables, $hook) {

  $panel_page = page_manager_get_current_page();
  if ($panel_page) {
    // add a generic suggestion for all panel pages
    $suggestions[] = 'page__panels';
    // add the panel page machine name to the template suggestions
    $suggestions[] = 'page__' . $panel_page['name'];
    // merge the suggestions in to the existing suggestions (as more specific than the existing suggestions)
    $variables['theme_hook_suggestions'] = array_merge($variables['theme_hook_suggestions'], $suggestions);
  }

  // I18N Check
  $is_multilingual = 0;
  if (module_exists('i18n_menu')) {
    $is_multilingual = 1;
  }

  //Set Sub Site Name
  $variables['wetkit_sub_site'] = at_get_setting('wetkit_sub_site');
  
  // Header Navigation + Language Switcher
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-header') : menu_navigation_links('menu-wet-header');
  $goc_nav_bar_markup = theme('links__menu_goc_nav_bar', array(
    'links' => $menu,
    'attributes' => array(
      'id' => 'menu',
      'class' => array('links', 'clearfix'),
      ),
    ));
  $goc_nav_bar_markup = strip_tags($goc_nav_bar_markup, '<li><a>');
  if (module_exists('wetkit_language')) {
    $language_link_markup = '<li id="gcwu-gcnb-lang">' . strip_tags($variables['menu_lang_bar'], '<a><span>') . '</li>';
    $variables['menu_gov_bar'] = '<ul>' . $goc_nav_bar_markup . $language_link_markup . '</ul>';
  }
  else {
    $variables['menu_gov_bar'] = '<ul>' . $goc_nav_bar_markup . '</ul>';
  }

  // Search
  if (module_exists('custom_search')) {
    // Custom Search
    //drupal_add_css(drupal_get_path('theme', 'wetkit_adaptivetheme') . '/css/custom_searchbar.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
    $variables['custom_search'] = drupal_get_form('custom_search_blocks_form_1');
    $variables['custom_search']['#id'] = 'search-form';
    $variables['custom_search']['custom_search_blocks_form_1']['#id'] = 'gcwu-srch';
    $variables['custom_search']['actions']['submit']['#id'] = 'gcwu-srch-submit';
    $variables['search_box'] = render($variables['custom_search']);
  }

  // Mega Menu Region
  if (module_exists('menu_block')) {
    $config = menu_block_get_config('wetkit_menu_blocks-1');
    $data = menu_tree_build($config);
    $variables['page']['mega_menu'] = $data['content'];
  }

  // Terms Navigation
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-terms') : menu_navigation_links('menu-wet-terms');
  $goc_terms_bar_markup = theme('links__menu_goc_terms_bar', array(
    'links' => $menu,
    'attributes' => array(
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_gov_terms_bar'] = $goc_terms_bar_markup;

  // Footer Region
  if (module_exists('menu_block')) {
    $config = menu_block_get_config('wetkit_menu_blocks-2');
    $data = menu_tree_build($config);
    $variables['page']['footer'] = $data['content'];
  }

  // Footer Navigation
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-footer') : menu_navigation_links('menu-wet-footer');
  $goc_footer_bar_markup = theme('links__menu_goc_footer_bar', array(
    'links' => $menu,
    'attributes' => array(
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_gov_footer_bar'] = $goc_footer_bar_markup;

  //Support for Intranet Theme
  $variables['intranet'] = '';
  if (at_get_setting('wetkit_intranet_enable') == 1) {
    $variables['intranet'] = 'Enabled';
    drupal_add_css(
      path_to_theme() . '/wet-boew/theme-gcwu-intranet/css/theme-min-intranet.css', array(
      'group' => CSS_THEME,
      'media' => 'screen',
      'preprocess' => TRUE,
      'weight' => 0,
      )
    );
    drupal_add_css(
      path_to_theme() . '/wet-boew/theme-gcwu-intranet/css/theme-ie-min-intranet.css', array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'lte IE 7',
        '!IE' => FALSE,
      ),
      'media' => 'screen',
      'preprocess' => TRUE,
      'weight' => 0,
      )
    );
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function wetkit_adaptivetheme_preprocess_node(&$variables, $hook) {
  // Optionally, run node-type-specific preprocess functions, like
  // wetkit_adaptivetheme_preprocess_node_page() or wetkit_adaptivetheme_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
  $node = $variables['node'];
  $variables['date'] = format_date($node->created, 'custom', 'l, d/m/Y');
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
function wetkit_adaptivetheme_preprocess_comment(&$variables, $hook) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function wetkit_adaptivetheme_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function wetkit_adaptivetheme_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];
  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
