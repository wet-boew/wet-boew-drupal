<?php
/**
 * @file
 * theme.inc
 */

/**
 * Override default theme_breadcrumb().
 *
 * @param array $variables
 *   Contains array with breadcrumbs.
 *
 * @return bool|string
 *   Rendered breadcrumbs or FALSE for no breadcrumbs.
 */
function wetkit_breadcrumbs_breadcrumb($variables) {
  $breadcrumbs = $variables['breadcrumb'];
  if (!empty($breadcrumbs)) {

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<div id="gcwu-bc"><h2>' . t('Breadcrumb Trail') . '</h2>';

    // Hide breadcrumb navigation if it contains only one element.
    $hide_single_breadcrumb = variable_get('path_breadcrumbs_hide_single_breadcrumb', 0);
    if ($hide_single_breadcrumb && count($breadcrumbs) == 1) {
      return FALSE;
    }

    // Add options for rich snippets.
    $elem_tag = 'li';
    $elem_property = '';
    $root_property = '';
    $options = array('html' => TRUE);
    $snippet = variable_get('path_breadcrumbs_rich_snippets', PATH_BREADCRUMBS_RICH_SNIPPETS_DISABLED);
    if ($snippet == PATH_BREADCRUMBS_RICH_SNIPPETS_RDFA) {

      // Add link options for RDFa support.
      $options['attributes'] = array('rel' => 'v:url', 'property' => 'v:title');
      $options['absolute'] = TRUE;

      // Set correct properties for RDFa support.
      $elem_property = 'typeof="v:Breadcrumb"';
      $root_property = 'xmlns:v="http://rdf.data-vocabulary.org/#"';
    }
    elseif ($snippet == PATH_BREADCRUMBS_RICH_SNIPPETS_MICRODATA) {

      // Add link options for microdata support.
      $options['attributes'] = array('itemprop' => 'url');
      $options['absolute'] = TRUE;

      // Set correct properties for microdata support.
      $elem_property = 'itemscope itemtype="http://data-vocabulary.org/Breadcrumb"';
      $elem_tag = 'div';

      // Add style that will display breadcrumbs wrapped in <div> inline.
      drupal_add_css(drupal_get_path('module', 'path_breadcrumbs') . '/path_breadcrumbs.css');
    }

    foreach ($breadcrumbs as $key => $breadcrumb) {

      // Build classes for the breadcrumbs.
      $classes = array('inline');
      $classes[] = $key % 2 ? 'even' : 'odd';
      if ($key == 0) {
        $classes[] = 'first';
      }
      if (count($breadcrumbs) == $key + 1) {
        $classes[] = 'last';
      }

      // For rich snippets support all links should be processed in the same way
      // even if they are provided not by Path Breadcrumbs module. So I have to
      // parse html code and create links again with new properties.
      preg_match('/href="([^"]+?)"/', $breadcrumb, $matches);

      // Remove base path from href.
      $href = '';
      if (!empty($matches[1])) {
        global $base_path;
        global $language;

        $base_string = $base_path;

        // Append additional params to base string if clean urls are disabled.
        if (!variable_get('clean_url', 0)) {
          $base_string .= '?q=';
        }

        // Append additional params to base string for multilingual sites.
        if (!empty($language->prefix)) {
          $base_string .= $language->prefix . '/';
        }

        // Means that this is href to the frontpage.
        if (drupal_strlen($base_string) > drupal_strlen($matches[1])) {
          $href = '';
        }
        // All hrefs exept frontpage.
        elseif (stripos($matches[1], $base_string) === 0) {
          $href = drupal_substr($matches[1], drupal_strlen($base_string));
        }
        // Other cases.
        else {
          // HREF param can't starts with '/'.
          $href = stripos($matches[1], '/') === 0 ? drupal_substr($matches[1], 1) : $matches[1];
        }

        // If HREF param is empty it should be linked to a front page.
        $href = empty($href) ? '<front>' : $href;
      }

      // Get breadcrumb title from a link like "<a href = "/path">title</a>".
      $title = trim(strip_tags($breadcrumb));

      // Wrap title in additional element for microdata support.
      if ($snippet == PATH_BREADCRUMBS_RICH_SNIPPETS_MICRODATA) {
        $title = '<span itemprop="title">' . $title . '</span>';
      }

      // Build new text or link breadcrumb.
      $new_breadcrumb = !empty($href) ? l($title, $href, $options) : $title;

      // Replace old breadcrumb link with a new one.
      $breadcrumbs[$key] = '<' . $elem_tag . ' class="' . implode(' ', $classes) . '" ' . $elem_property . '>' . $new_breadcrumb . '</' . $elem_tag . '>';
    }

    $delimiter = '';
    $output .= '<div id="gcwu-bc-in"' . $root_property . '>' . '<ol>' . implode(' ' . trim($delimiter) . ' ', $breadcrumbs) . '</ol></div></div>';
    return $output;
  }

  // Return false if no breadcrumbs.
  return FALSE;
}
