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

function wetkit_adaptivetheme_menu_tree__main_menu($variables) {
  return $variables['tree'];
}

function wetkit_adaptivetheme_menu_link__menu_block__wetkit_menu_blocks_1($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  
  if ($element['#original_link']['depth'] == 1 && $element['#original_link']['has_children'] == 1) {
    $output = '<h3>' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h3>';
    return '<li><section>' . $output . '<div class="mb-sm">' . $sub_menu . '<div class="clear"></div></div>' . "</section></li>\n";
  }
  else if ($element['#original_link']['depth'] == 2) {
    $output = '<h4>' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h4>';
    return '<div class="span-2"><section>' . $output . '<ul>' . $sub_menu . '</ul>' . "</section></div>\n";
  }
  else if ($element['#original_link']['depth'] == 1 && $element['#original_link']['has_children'] == 0) {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li><section><h3>' . $output . $sub_menu . "</h3></section></li>\n";
  }
  else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li>' . $output . $sub_menu . "</li>\n";
  }
}

function wetkit_adaptivetheme_menu_tree__menu_wet_mid_footer($variables) {
  return $variables['tree'];
}

function wetkit_adaptivetheme_menu_link__menu_wet_mid_footer($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  
  if ($element['#original_link']['depth'] == 1) {
    $output = '<h4 class="gcwu-col-head">' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h4>';
    return '<section><div class="span-2">' . $output . '<ul>' . $sub_menu . '</ul>' .  "</div></section></li>\n";
  }
  else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li>' . $output . $sub_menu . "</li>\n";
  }
}