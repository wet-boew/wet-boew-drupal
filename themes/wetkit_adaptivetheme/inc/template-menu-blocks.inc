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
 * Override or insert variables into the menu tree templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__main_menu($variables) {
  return '<ul>' . $variables['tree'] . '</ul>';
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__menu_block__wetkit_menu_blocks_1($variables) {
  return $variables['tree'];
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_link__menu_block__wetkit_menu_blocks_1($variables) {
   /*
      // LEVEL1
      <li>
        <section><h3><a href="http://wet-boew.github.com/wet-boew/docs/index-eng.html">WET project</a></h3>
          <div class="mb-sm">
            <div class="span-2">
              <ul>
                // LEVEL2 no further depth
                <li><a href="https://github.com/wet-boew/wet-boew/">Main project page</a></li>
                <li><a href="http://www.tbs.gc.ca/ws-nw/wet-boew/terms">Terms and conditions</a></li>
                <li><a href="http://wet-boew.github.com/wet-boew/demos/index-eng.html">Working examples</a></li>
              </ul>
            </div>
            <div class="clear"></div>
          </div>
        </section>
      </li>

      // LEVEL1
      <li>
        <section><h3><a href="section2/index-eng.html">Section 2</a></h3>
          <div class="mb-sm">
            <div class="span-2">
              // LEVEL2 with further depth
              <section><h4><a href="#">Section 2.1</a></h4>
                <ul>
                  // LEVEL3
                  <li><a href="#">Item 2.1.1</a></li>
                  <li><a href="#">Item 2.1.2</a></li>
                  <li><a href="#">Item 2.1.3</a></li>
                  <li><a href="#">Item 2.1.4</a></li>
                  <li><a href="#">Item 2.1.5</a></li>
                  <li><a href="#">Item 2.1.6</a></li>
                </ul>
              </section>
            </div>
          </div>
        </section>
      </li>
  */
  $element = $variables['element'];
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if ($element['#original_link']['depth'] == 1 && $element['#original_link']['has_children'] == 1) {
      $output = '<h3>' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h3>';
      return '<li><section>' . $output . '<div class="mb-sm">' . $sub_menu . '<div class="clear"></div></div>' . "</section></li>\n";
  }
  elseif ($element['#original_link']['depth'] == 1 && $element['#original_link']['has_children'] == 0) {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li><div>' . $output . "</div></li>\n";
  }
  elseif ($element['#original_link']['depth'] == 2 && $element['#original_link']['has_children'] == 1) {
    $output = '<h4>' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h4>';
    return '<div class="span-2"><section>' . $output . '<ul>' . $sub_menu . '</ul>' . "</section></div>\n";
  }
  elseif ($element['#original_link']['depth'] == 2 && $element['#original_link']['has_children'] == 0) {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<div class="span-2"><ul><li>' . $output . "</li></ul></div>\n";
  }
  else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li>' . $output . "</li>\n";
  }
}

/**
 * Override or insert variables into the menu tree templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_tree__menu_wet_mid_footer($variables) {
  return $variables['tree'];
}

/**
 * Override or insert variables into the menu link templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_menu_link__menu_wet_mid_footer($variables) {
  $element = $variables['element'];
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if ($element['#original_link']['depth'] == 1) {
    $output = '<h4 class="gcwu-col-head">' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</h4>';
    return '<section><div class="span-2">' . $output . '<ul>' . $sub_menu . '</ul>' . "</div></section>\n";
  }
  else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li>' . $output . $sub_menu . "</li>\n";
  }
}
