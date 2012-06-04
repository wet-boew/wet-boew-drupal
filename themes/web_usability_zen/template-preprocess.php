<?php
/**
 * @file
 * template-preprocess.php
 */

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
function web_usability_zen_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  web_usability_zen_preprocess_html($variables, $hook);
  web_usability_zen_preprocess_page($variables, $hook);
}

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function web_usability_zen_preprocess_html(&$variables, $hook) {
  //Support for Intranet Theme
  $variables['intranet'] = '';
  $variables['wetkit_sub_site'] = theme_get_setting('wetkit_sub_site');
  if (theme_get_setting('wetkit_intranet_enable') == 1) {
    $variables['intranet'] = 'Enabled';
    $variables['base_path'] = base_path();
    $variables['path_to_web_usability'] = drupal_get_path('theme', 'web_usability_zen');
  }

  //Assign other skip link variables
  $variables['skip_link2_anchor'] = theme_get_setting('zen_skip_link2_anchor');
  $variables['skip_link2_text'] = theme_get_setting('zen_skip_link2_text');

  //Support for two sidebars
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
    $variables['wetkit_col_array'] = 'wb-body-sec';
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
function web_usability_zen_preprocess_page(&$variables, $hook) {
  // I18N Check
  if (module_exists('i18n_menu')) {
    $is_multilingual = 1;
  }
  
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
  if (module_exists('wetkit_i18n')) {
    $language_link_markup = '<li id="gcwu-gcnb-lang">' . strip_tags($variables['menu_lang_bar'], '<a><span>') . '</li>';
    $variables['menu_gov_bar'] = '<ul>' . $goc_nav_bar_markup . $language_link_markup . '</ul>';
  }
  else {
    $variables['menu_gov_bar'] = '<ul>' . $goc_nav_bar_markup . '</ul>';
  }
  
  // Search
  if (module_exists('custom_search')) {
    // Custom Search
    //drupal_add_css(drupal_get_path('theme', 'web_usability_zen') . '/css/custom_searchbar.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
    $variables['custom_search'] = drupal_get_form('custom_search_blocks_form_1');
    $variables['custom_search']['#id'] = 'search-form';
    $variables['custom_search']['custom_search_blocks_form_1']['#id'] = 'gcwu-srch';
    $variables['custom_search']['actions']['submit']['#id'] = 'gcwu-srch-submit';
    $variables['search_box'] = render($variables['custom_search']);
  }
  else {
    // Drupal Search
    $search_box = drupal_render(drupal_get_form('search_form'));
    $variables['search_box'] = $search_box;
  }
  
  // Terms Navigation
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-terms') : menu_navigation_links('menu-wet-terms');
  $goc_terms_bar_markup = theme('links__menu_goc_terms_bar', array(
    'links' => $menu,
    'attributes' => array(
      'id' => 'menu',
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_gov_terms_bar'] = $goc_terms_bar_markup;
  
  // Footer Navigation
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-footer') : menu_navigation_links('menu-wet-footer');
  $goc_footer_bar_markup = theme('links__menu_goc_footer_bar', array(
    'links' => $menu,
    'attributes' => array(
      'id' => 'menu',
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_gov_footer_bar'] = $goc_footer_bar_markup;
  
  //Support for Intranet Theme
  $variables['intranet'] = '';
  $variables['wetkit_sub_site'] = theme_get_setting('wetkit_sub_site');
  if (theme_get_setting('wetkit_intranet_enable') == 1) {
    $variables['intranet'] = 'Enabled';
    //drupal_add_css(drupal_get_path('theme', 'web_usability_zen') . '/wet-boew/theme-gc-intranet/intranet.css', array('group' => CSS_THEME, 'every_page' => TRUE, 'weight' => 10));
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
function web_usability_zen_preprocess_node(&$variables, $hook) {
  // Optionally, run node-type-specific preprocess functions, like
  // web_usability_zen_preprocess_node_page() or web_usability_zen_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
function web_usability_zen_preprocess_comment(&$variables, $hook) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function web_usability_zen_preprocess_region(&$variables, $hook) {
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
function web_usability_zen_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];
  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
