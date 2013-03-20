<?php

/**
 * @file
 * Template.php file for wetkit_rubik.
 */

/**
 * Preprocessor for theme('page').
 */
function wetkit_rubik_preprocess_html(&$vars) {

  drupal_add_css(drupal_get_path('theme', 'wetkit_rubik') . '/css/lt-ie9.css', array(
    'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE),
    'group' => CSS_THEME,
    'every_page' => TRUE,
    'preprocess' => FALSE,
    'weight' => 9999,
  ));
  $vars['classes_array'][] = 'wetkit_rubik';
  if (isset($vars['page']['sidebar_first'])) {
    $vars['classes_array'][] = 'wetkit-rubik-sidebar-first';
  }
  if (isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'wetkit-rubik-sidebar-second';
  }
  if (isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'wetkit-rubik-two-sidebars';
  }
  if ((!isset($vars['page']['sidebar_first']) && isset($vars['page']['sidebar_second'])) || (isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second']))) {
    $vars['classes_array'][] = 'wetkit-rubik-one-sidebar';
  }
  if (!isset($vars['page']['sidebar_first']) && !isset($vars['page']['sidebar_second'])) {
    $vars['classes_array'][] = 'wetkit-rubik-no-sidebars';
  }
  if (_wetkit_rubik_has_tabs()) {
    $vars['classes_array'][] = 'with-local-tasks';
  }
  if (theme_get_setting('wetkit_rubik_inline_field_descriptions')) {
    $vars['classes_array'][] = 'rubik-inline-field-descriptions';
  }
}

/**
 * Preprocessor for theme('page').
 */
function wetkit_rubik_preprocess_page(&$vars) {
  // Process local tasks. Only do this processing if the current theme is
  // indeed Rubik. Subthemes must reimplement this call.
  global $theme;

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base).
  if (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'base';
  }
  else {
    $theme_prefix = 'gcwu';
  }

  if (module_exists('wetkit_language')) {
    $language_link_markup = '<li id="' . $theme_prefix . '-gcnb-lang">' . strip_tags($vars['menu_lang_bar'], '<a><span>') . '</li>';
    $vars['menu_bar'] = '<ul class="links secondary-menu">' . $language_link_markup . '</ul>';
  }

  if ($theme === 'wetkit_rubik') {
    _rubik_local_tasks($vars);
  }

  // Add body class when we have local tasks.
  // Since we don't have access to body classes here
  // set a flag for preprocess_html().
  if (!empty($vars['primary_local_tasks'])) {
    _wetkit_rubik_has_tabs(TRUE);
  }

  // Set a page icon for dashboard links.
  if (empty($vars['page_icon_class'])) {
    $vars['page_icon_class'] = ($item = menu_get_item()) ? implode(' ', _wetkit_rubik_icon_classes($item['href'])) : '';
  }
}

/**
 * Override of theme('menu_local_task').
 */
function wetkit_rubik_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  // Render child tasks if available.
  $children = '';
  if (element_children($variables['element'])) {
    $children = drupal_render_children($variables['element']);
    $children = "<ul class='secondary-tabs links clearfix'>{$children}</ul>";
  }

  return '<li' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . $children . "</li>\n";
}

/**
 * Preprocessor for theme('help').
 */
function wetkit_rubik_preprocess_help(&$vars) {
  $vars['hook'] = 'help';
  $vars['attr']['id'] = 'help-text';
  $class = 'path-admin-help clear-block toggleable';
  $vars['attr']['class'] = isset($vars['attr']['class']) ? "{$vars['attr']['class']} $class" : $class;
  $help = menu_get_active_help();
  if (($test = strip_tags($help)) && !empty($help)) {
    // Thankfully this is static cached.
    $vars['attr']['class'] .= menu_secondary_local_tasks() ? ' with-tabs' : '';

    $vars['is_prose'] = TRUE;
    $vars['layout'] = TRUE;
    $vars['content'] = "<span class='icon'></span>" . $help;

    // Link to help section.
    $item = menu_get_item('admin/help');
    if ($item && $item['path'] === 'admin/help' && $item['access']) {
      $vars['links'] = l(t('More help topics'), 'admin/help');
    }
  }
}

/**
 * Helper function used to pass a value from preprocess_page().
 * to preprocess_html().
 */
function _wetkit_rubik_has_tabs($val = NULL) {
  $vars = &drupal_static(__FUNCTION__, array());

  // If a new value has been passed.
  if ($val) {
    $vars = $val;
  }

  return isset($vars) ? $vars : FALSE;
}

/**
 * Generate an icon class from a path.
 * Modified version of _rubik_icon_classes().
 */
function _wetkit_rubik_icon_classes($path) {
  $classes = array();
  $args = explode('/', $path);
  if ($args[0] === 'dashboard') {
    // Add a class specifically for the current path that allows non-cascading
    // style targeting.
    $classes[] = 'path-' . str_replace('/', '-', implode('/', $args)) . '-';
    while (count($args)) {
      $classes[] = drupal_html_class('path-' . str_replace('/', '-', implode('/', $args)));
      array_pop($args);
    }
    return $classes;
  }
  return array();
}
/**
 * Preprocess function.
 * Adds classes for icons in Taxonomy vocabulary overview page.
 *
 * @see theme_taxonomy_overview_vocabularies().
 */
function wetkit_rubik_preprocess_taxonomy_overview_vocabularies(&$variables) {
  $form = &$variables['form'];

  foreach (element_children($form) as $key) {
    if (isset($form[$key]['name'])) {
      // Add "edit" class.
      if (!isset($form[$key]['edit']['#attributes']['class'])) {
        $form[$key]['edit']['#attributes']['class'] = array();
      }
      $form[$key]['edit']['#attributes']['class'][] = 'action-edit';

      // Add "view" class.
      if (!isset($form[$key]['list']['#attributes']['class'])) {
        $form[$key]['list']['#attributes']['class'] = array();
      }
      $form[$key]['list']['#attributes']['class'][] = 'action-view';

      // Add "add" class.
      if (!isset($form[$key]['add']['#attributes']['class'])) {
        $form[$key]['add']['#attributes']['class'] = array();
      }
      $form[$key]['add']['#attributes']['class'][] = 'action-add';
    }
  }
}

/**
 * Preprocess function.
 * Adds classes for icons in Taxonomy term overview page.
 *
 * @see theme_taxonomy_overview_terms().
 */
function wetkit_rubik_preprocess_taxonomy_overview_terms(&$variables) {
  $form = &$variables['form'];

  foreach (element_children($form) as $key) {
    if (isset($form[$key]['#term'])) {
      // Add "edit" class.
      if (!isset($form[$key]['edit']['#attributes']['class'])) {
        $form[$key]['edit']['#attributes']['class'] = array();
      }
      $form[$key]['edit']['#attributes']['class'][] = 'action-edit';
    }
  }
}

/**
 * Override of theme('breadcrumb').
 */
function wetkit_rubik_breadcrumb($vars) {
  $output = '';

  // Add current page onto the end.
  if (!drupal_is_front_page()) {
    $item = menu_get_item();
    $end = end($vars['breadcrumb']);
    if ($end && strip_tags($end) !== $item['title']) {
      $vars['breadcrumb'][] = "<strong>" . check_plain($item['title']) . "</strong>";
    }
  }

  // Optional: Add the site name to the front of the stack.
  if (!empty($vars['prepend'])) {
    $site_name = empty($vars['breadcrumb']) ? "<strong>" . check_plain(variable_get('site_name', '')) . "</strong>" : l(variable_get('site_name', ''), '<front>', array('purl' => array('disabled' => TRUE)));
    array_unshift($vars['breadcrumb'], $site_name);
  }

  $depth = 0;
  $array_size = count($vars['breadcrumb']);
  $count = 0;
  foreach ($vars['breadcrumb'] as $link) {
    if ($count == $array_size - 1) {
      if (isset($link)) {
        $output .= "<span class='breadcrumb-link breadcrumb-depth-{$depth} last'>{$link}</span>";
      }
    }
    else {
      if (isset($link)) {
        $output .= "<span class='breadcrumb-link breadcrumb-depth-{$depth}'>{$link}</span>";
      }
    }
    $depth++;
    $count++;
  }
  return $output;
}
