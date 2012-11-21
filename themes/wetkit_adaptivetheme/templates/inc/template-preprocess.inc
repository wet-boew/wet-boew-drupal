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

  // Add a body class for the active theme name.
  $variables['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  $variables['classes_array'][] = css_browser_selector();

  // Assign skip link variables
  $variables['skip_link_content_anchor'] = at_get_setting('skip_link_content_anchor');
  $variables['skip_link_text'] = t('Skip to main content');
  $variables['skip_link_nav_anchor'] = at_get_setting('skip_link_nav_anchor');
  $variables['skip_link2_text'] = t('Skip to footer');

  // Detect Panels Layout
  $panel_page = page_manager_get_current_page();
  if ($panel_page) {
    // Panels Layout
    if (isset($panel_page['handler']->conf['display']->renderer_handler->plugins['layout']['theme'])) {
      $layout = $panel_page['handler']->conf['display']->renderer_handler->plugins['layout']['theme'];
    }
    // Panelizer Layout
    elseif  (isset($panel_page['handler']->conf['context'])) {
      $context = $panel_page['handler']->conf['context'];
      if (isset($panel_page['contexts'][$context]->data->panelizer['page_manager']->display->layout)) {
        $layout = $panel_page['contexts'][$context]->data->panelizer['page_manager']->display->layout;
      }
    }
    //Set Body Class for Panels Layouts
    if (isset($layout)) {
      if (drupal_substr($layout, 0, 10) == 'wetkit_two') {
        $variables['wetkit_col_array'] = 'wb-body-sec';
      }
      elseif (drupal_substr($layout, 0, 12) == 'wetkit_three') {
        $variables['wetkit_col_array'] = 'wb-body';
      }
      else {
        $variables['wetkit_col_array'] = 'wb-body';
      }
    }
  }
  // Detect Blocks Layout
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

  // Remove Class(es)
  $variables['classes_array'] = array_diff($variables['classes_array'], array('site-name-web-experience-toolkit'));
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

  if (module_exists('page_manager')) {
    // Page template suggestions for Panels pages
    if ($panel_page = page_manager_get_current_page()) {
      if (variable_get('wetkit_wetboew_theme', 0) == 1) {
        $suggestions[] = 'page__panels__intranet';
      }
      elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
        $suggestions[] = 'page__panels__base';
      }
      else {
        $suggestions[] = 'page__panels__internet';
      }
      // add the panel page machine name to the template suggestions
      $suggestions[] = 'page__' . $panel_page['name'];
      // merge the suggestions in to the existing suggestions (as more specific than the existing suggestions)
      $variables['theme_hook_suggestions'] = array_merge($variables['theme_hook_suggestions'], $suggestions);
    }
    // Page template suggestions for normal pages
    else {
      if (variable_get('wetkit_wetboew_theme', 0) == 1) {
        $suggestions[] = 'page__intranet';
      }
      elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
        $suggestions[] = 'page__base';
      }
      else {
        $suggestions[] = 'page__internet';
      }
      // merge the suggestions in to the existing suggestions (as more specific than the existing suggestions)
      $variables['theme_hook_suggestions'] = array_merge($variables['theme_hook_suggestions'], $suggestions);
    }
  }

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base)
  if (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'base';
  }
  else {
    $theme_prefix = 'gcwu';
  }

  // Internationalization Check
  $is_multilingual = 0;
  if (module_exists('i18n_menu')) {
    $is_multilingual = 1;
  }

  // Set Sub Site Name
  $variables['wetkit_sub_site'] = at_get_setting('wetkit_sub_site');

  // Header Navigation + Language Switcher
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-header') : menu_navigation_links('menu-wet-header');
  $nav_bar_markup = theme('links__menu_nav_bar', array(
    'links' => $menu,
    'attributes' => array(
      'id' => 'menu',
      'class' => array('links', 'clearfix'),
      ),
    ));
  $nav_bar_markup = strip_tags($nav_bar_markup, '<li><a>');
  if (module_exists('wetkit_language')) {
    $language_link_markup = '<li id="' . $theme_prefix . '-gcnb-lang">' . strip_tags($variables['menu_lang_bar'], '<a><span>') . '</li>';
    $variables['menu_bar'] = '<ul>' . $nav_bar_markup . $language_link_markup . '</ul>';
  }
  else {
    $variables['menu_bar'] = '<ul>' . $nav_bar_markup . '</ul>';
  }

  // Search Region
  if (module_exists('custom_search')) {
    // Custom Search
    //drupal_add_css(drupal_get_path('theme', 'wetkit_adaptivetheme') . '/css/custom_searchbar.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
    $variables['custom_search'] = drupal_get_form('custom_search_blocks_form_1');
    $variables['custom_search']['#id'] = 'search-form';
    $variables['custom_search']['custom_search_blocks_form_1']['#id'] = $theme_prefix . '-srch';
    $variables['custom_search']['actions']['submit']['#id'] = $theme_prefix . '-srch-submit';
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
  $terms_bar_markup = theme('links__menu_terms_bar', array(
    'links' => $menu,
    'attributes' => array(
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_terms_bar'] = $terms_bar_markup;

  // Mid Footer Region
  if (module_exists('menu_block')) {
    $config = menu_block_get_config('wetkit_menu_blocks-2');
    $data = menu_tree_build($config);
    $variables['page']['footer'] = $data['content'];
  }

  // Footer Navigation
  $menu = ($is_multilingual) ? i18n_menu_navigation_links('menu-wet-footer') : menu_navigation_links('menu-wet-footer');
  $footer_bar_markup = theme('links__menu_footer_bar', array(
    'links' => $menu,
    'attributes' => array(
      'class' => array('links', 'clearfix'),
      ),
    ));
  $variables['menu_footer_bar'] = $footer_bar_markup;
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
  $variables['date'] = format_date($node->changed, 'custom', 'Y-m-d');
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

/**
 * Theme the 'placeholder' pane, which is shown on an active IPE when no panes
 * live in that region.
 *
 * @param string $region_id
 * @param string $region_title
 */
function wetkit_adaptivetheme_panels_ipe_placeholder_pane($vars) {
  $region_id = $vars['region_id'];
  $region_title = $vars['region_title'];

  $output = '<div class="panels-ipe-placeholder-content">';
  $output .= "<h4>$region_title</h4>";
  $output .= '</div>';
  return $output;
}
