<?php
/**
 * @file
 * template-menu-blocks.php
 */

function web_usability_zen_menu_tree__main_menu($variables) {
  return $variables['tree'];
}

function web_usability_zen_menu_link__main_menu($variables) {
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

function web_usability_zen_menu_tree__menu_wet_mid_footer($variables) {
  return $variables['tree'];
}

function web_usability_zen_menu_link__menu_wet_mid_footer($variables) {
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