<?php
/**
 * @file
 * menu.theme.inc
 */

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block_megamenu($variables) {
  $element = $variables['element'];
  $depth = $element['#original_link']['depth'];
  $has_children = $element['#original_link']['has_children'];
  $has_nolink = (in_array($element['#href'], array('<nolink>')) ? $element['#title'] : l($element['#title'], $element['#href'], $element['#localized_options']));
  $mb_mainlink = '<div class="mb-main-link">' . l($element['#title'] . ' - ' . t('Main Page'), $element['#href'], $element['#localized_options']) . '</div>';

  // Recursion.
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Depth 1.
  if ($depth == 1) {
    // Has children menu items.
    if ($has_children == 1) {
      if (!at_get_setting('render_mb_main_link')) {
        return '<li><section><h3>' . $has_nolink . '</h3><div class="mb-sm">' . $sub_menu . $mb_mainlink . '</div></section></li>';
      }
      else {
        return '<li><section><h3>' . $has_nolink . '</h3><div class="mb-sm">' . $sub_menu . '</div></section></li>';
      }
    }
    // No children menu items.
    else {
      return '<li><div>' . $has_nolink . '</div></li>';
    }
  }
  // Depth 2.
  elseif ($depth == 2) {
    // Has children menu items.
    if ($has_children == 1) {
      return $has_nolink;
    }
    // No children menu items.
    else {
      return $has_nolink;
    }
  }
  // Default Depth.
  else {
    return '<li>' . $has_nolink . '</li>';
  }
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block_minipanel($variables) {
  $element = $variables['element'];
  $depth = $element['#original_link']['depth'];
  $has_children = $element['#original_link']['has_children'];
  $has_nolink = (in_array($element['#href'], array('<nolink>')) ? '<a href="#">' . $element['#title'] . '</a>' : l($element['#title'], $element['#href'], $element['#localized_options']));

  // Recursion.
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Depth 1.
  if ($depth == 1) {
    if ($has_children == 1) {
      if (isset($element['#below']['#children'])) {
        $sub_menu = (preg_match('<h4>', $element['#below']['#children']) ? '<section><ul>' . $sub_menu . '</ul></section>' : '<div><ul>' . $sub_menu . '</ul></div>');
      }
      else {
        $sub_menu = '<div><ul>' . $sub_menu . '</ul></div>';
      }
      return '<section><h3 class="top-section">' . $has_nolink . '</h3>' . $sub_menu . '</section>';
    }
    else {
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 2.
  if ($depth == 2) {
    if ($has_children == 1) {
      return '<section><h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul></section>';
    }
    else {
      $element['#attributes']['class'][] = '';
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 3.
  if ($depth == 3) {
    if ($has_children == 1) {
      return '<li>' . $has_nolink . '</li><ul>' . $sub_menu . '</ul>';
    }
    else {
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 4+.
  else {
    if ($has_children == 1) {
      return '<ul><li>' . $has_nolink . '<ul>' . $sub_menu . '</ul></li></ul>';
    }
    else {
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block_sidebar($variables) {
  $element = $variables['element'];
  $depth = $element['#original_link']['depth'];
  $has_children = $element['#original_link']['has_children'];
  $has_nolink = (in_array($element['#href'], array('<nolink>')) ? $element['#title'] : l($element['#title'], $element['#href'], $element['#localized_options']));

  // Recursion.
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Depth 1.
  if ($depth == 1) {
    if ($has_children == 1) {
      $sub_menu = (preg_match('<h4>', $element['#below']['#children']) ? '<section><ul>' . $sub_menu . '</ul></section>' : '<div><ul>' . $sub_menu . '</ul></div>');
      return '<section><h3 class="top-section">' . $has_nolink . '</h3>' . $sub_menu . '</section>';
    }
    else {
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 2.
  if ($depth == 2) {
    if ($has_children == 1) {
      return '<h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul>';
    }
    else {
      $element['#attributes']['class'][] = 'top-level';
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 3+.
  else {
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
  }
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block_minipanel_focus($variables) {
  $element = $variables['element'];
  $depth = $element['#original_link']['depth'];
  $has_children = $element['#original_link']['has_children'];
  $has_nolink = (in_array($element['#href'], array('<nolink>')) ? $element['#title'] : l($element['#title'], $element['#href'], $element['#localized_options']));

  // Recursion.
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Depth 1.
  if ($depth == 2) {
    if ($has_children == 1) {
      return '<h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul>';
    }
    else {
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
    }
  }
  // Depth 3+.
  else {
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</li>';
  }
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_link_menu_block_footer($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base).
  if (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'base';
  }
  else {
    $theme_prefix = 'gcwu';
  }

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if ($element['#original_link']['depth'] == 1) {
    if (in_array($element['#href'], array('<nolink>'))) {
      $output = '<h4 class="' . $theme_prefix . '-col-head">' . $element['#title'] . '</h4>';
    }
    else {
      $output = '<h4 class="' . $theme_prefix . '-col-head">' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h4>';
    }
    return '<section><div class="span-2">' . $output . '<ul>' . $sub_menu . '</ul>' . "</div></section>\n";
  }
  else {
    if (in_array($element['#href'], array('<nolink>'))) {
      $output = $element['#title'];
    }
    else {
      $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    }
    return '<li>' . $output . $sub_menu . "</li>\n";
  }
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_tree__main_menu($variables) {
  return '<ul>' . $variables['tree'] . '</ul>';
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_menu_menu_tree__menu_block($variables) {
  return $variables['tree'];
}
