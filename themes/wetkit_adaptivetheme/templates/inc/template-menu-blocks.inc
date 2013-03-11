<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal,
 * often used as an alternative to directly editing or adding code to templates.
 * Its worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE:
 * http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "wetkit_adaptivetheme" to match
 *    your subthemes name, for example, if your theme name is "footheme" then
 *    the function name will be "footheme_preprocess_hook". Tip - you can
 *    search/replace on "wetkit_adaptivetheme".
 * 2. Uncomment the required function to use.
 */

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__main_menu($variables) {
  return '<ul>' . $variables['tree'] . '</ul>';
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__menu_block($variables) {
  return $variables['tree'];
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_link__menu_block($variables) {
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
    if (!empty($sub_menu)) {
      return '<section class="wet-menu-block"><h3 class="top-section">' . $has_nolink . '</h3>' . $sub_menu . '</section>';
    }
    else {
      return '<section class="wet-menu-block"><h3 class="top-section">' . $has_nolink . '</h3>' . '</section>';
    }
  }

  // Depth 2.
  elseif ($depth == 2) {
    // Has children menu items.
    if ($has_children == 1) {
      if (!empty($sub_menu)) {
        if (in_array($element['#href'], array('<separator>'))) {
          $sub_menu = (preg_match('<h4>', $element['#below']['#children']) ? '<section>' . $sub_menu . '</section>' : '<div><ul>' . $sub_menu . '</ul></div>');
          return $sub_menu;
        }
        else {
          return '<section><h4' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</h4>' . '<ul>' . $sub_menu . '</ul>' . '</section>';
        }
      }
      else {
        return '<section><h4' . drupal_attributes($element['#attributes']) . '>' . $has_nolink . '</h4>' . '</section>';
      }
    }
    // No children menu items.
    else {
      return '<div>' . $has_nolink . '</div>';
    }
  }

  // Depth 3.
  elseif ($depth == 3) {
    // Has children menu items.
    if ($has_children == 1) {
      if (in_array($element['#href'], array('<group>'))) {
        // TODO: Fix Hack workaround.
        return '<ul>' . preg_replace('/<li>/', '<li class="top-level">', $sub_menu) . '</ul>';
      }
      else {
        return '<h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul>';
      }
    }
    // No children menu items.
    else {
      return '<li>' . $has_nolink . '</li>';
    }
 }

  // Default Depth.
  else {
    return '<li>' . $has_nolink . "</li>\n";
  }
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__menu_block__wetkit_menu_blocks_1($variables) {
  return $variables['tree'];
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_link__menu_block__wetkit_menu_blocks_1($variables) {
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
        return '<li><section><h3>' . $has_nolink . '</h3><div class="mb-sm">' . $sub_menu . '<div class="clear"></div>' . $mb_mainlink . '</div></section></li>';
      }
      else {
        return '<li><section><h3>' . $has_nolink . '</h3><div class="mb-sm">' . $sub_menu . '<div class="clear"></div>' . '</div></section></li>';
      }
    }
    // No children menu items.
    else {
      return '<li><div>' . $has_nolink . '</div></li>';
    }
  }

  // Depth 2.
  // Support for special menu item <separator>.
  elseif ($depth == 2) {
    // Has children menu items.
    if ($has_children == 1) {
      if (in_array($element['#href'], array('<separator>'))) {
        // TODO: Fix Hack workaround.
        $sub_menu = (preg_match('<h4>', $element['#below']['#children']) ? $sub_menu : '<ul>' . $sub_menu . '</ul>');
        return '<div class="span-2">' . $sub_menu . '</div>';
      }
      else {
        return '<section><h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul></section>';
      }
    }
    // No children menu items.
    else {
      return  '<li>' . $has_nolink . '</li>';
    }
  }

  // Depth 3.
  elseif ($depth == 3) {
    // Has children menu items.
    if ($has_children == 1) {
      if (in_array($element['#href'], array('<group>'))) {
        // TODO: Fix Hack workaround.
        return '<ul>' . preg_replace('/<li>/', '<li class="top-level">', $sub_menu) . '</ul>';
      }
      else {
        return '<section><h4>' . $has_nolink . '</h4><ul>' . $sub_menu . '</ul></section>';
      }
    }
    // No children menu items
    else {
      return '<li>' . $has_nolink . '</li>';
    }
  }

  // Default Depth.
  else {
    return  '<li>' . $has_nolink . '</li>';
  }
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__menu_block__wetkit_menu_blocks_2($variables) {
  return $variables['tree'];
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_link__menu_block__wetkit_menu_blocks_2($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base)
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
