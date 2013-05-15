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
 * Override or insert variables into the theme links templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_links__menu_terms_bar($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base).
  if (variable_get('wetkit_wetboew_theme', 0) == 1) {
    $theme_prefix = 'gcwu';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'gcwu';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 3) {
    $theme_prefix = 'base';
  }
  else {
    $theme_prefix = 'wet';
  }

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out
      // themers.
      if ($i == 1) {
        $class[] = 'first';
        $class[] = $theme_prefix . '-tc';
      }
      if ($i == $num_links) {
        $class[] = 'last';
        $class[] = $theme_prefix . '-tr';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page())) && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';
      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for
        // adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}

/**
 * Override or insert variables into the theme links templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_links__menu_footer_bar($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base).
  if (variable_get('wetkit_wetboew_theme', 0) == 1) {
    $theme_prefix = 'gcwu';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'gcwu';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 3) {
    $theme_prefix = 'base';
  }
  else {
    $theme_prefix = 'wet';
  }

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);
      // Add first, last and active classes to the list of links to help out
      // themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page())) && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      // Custom Override is here for last link.
      if ($i == $num_links) {
        $output .= '<li id="' . $theme_prefix . '-gcft-ca"' . drupal_attributes(array('class' => $class)) . '><div>';
      }
      else {
        $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';
      }
      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        // Custom Override is here.
        if (isset($link['attributes']['title'])) {
          $link['html'] = TRUE;
          $link['attributes']['rel'] = 'external';
          $output .= l('<span>' . $link['title'] . '</span>' . '<br />' . $link['attributes']['title'], $link['href'], $link);
        }
        else {
          $output .= l($link['title'], $link['href'], $link);
        }
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for
        // adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      if ($i == $num_links) {
        $output .= "</div></li>\n";
      }
      else {
        $output .= "</li>\n";
      }
      $i++;
    }

    $output .= '</ul>';
  }
  return $output;
}

/**
 * Override or insert variables into the theme links templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_links__menu_nav_bar($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  // Custom Logic Based on Theme Selection (Internet, Intranet or Base).
  if (variable_get('wetkit_wetboew_theme', 0) == 1) {
    $theme_prefix = 'gcwu-gcnb';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
    $theme_prefix = 'gcwu-gcnb';
  }
  elseif (variable_get('wetkit_wetboew_theme', 0) == 3) {
    $theme_prefix = 'base-gcnb';
  }
  else {
    $theme_prefix = 'wet-fullhd-lang-';
  }

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out
      // themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page())) && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li id="' . $theme_prefix . $i . '"' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for
        // adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}

/**
 * Override or insert variables into the theme links templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_adaptivetheme_views_mini_pager($vars) {
  global $pager_page_array, $pager_total;

  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];

  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  if ($pager_total[$element] > 1) {

    $li_previous = theme('pager_previous', 
      array(
      'text' => (isset($tags[1]) ? $tags[1] : t('‹‹')), 
      'element' => $element, 
      'interval' => 1, 
      'parameters' => $parameters,
    )
    );
    if (empty($li_previous)) {
      $li_previous = "<<";
    }

    $li_next = theme('pager_next', 
      array(
      'text' => (isset($tags[3]) ? $tags[3] : t('››')), 
      'element' => $element, 
      'interval' => 1, 
      'parameters' => $parameters,
    )
    );
    if (empty($li_next)) {
      $li_next = ">>";
    }

    $items[] = array(
      'class' => array('button button-accent pager-previous'), 
      'data' => $li_previous,
    );
    $items[] = array(
      'class' => array('button button-accent pager-current'), 
      'data' => t('@current of @max', array('@current' => $pager_current, '@max' => $pager_max)),
    );
    $items[] = array(
      'class' => array(' button button-accent pager-next'), 
      'data' => $li_next,
    );

    return theme('item_list', 
      array(
      'items' => $items, 
      'title' => NULL, 
      'type' => 'ul', 
      'attributes' => array('class' => array('pager')),
    )
    );
  }
}