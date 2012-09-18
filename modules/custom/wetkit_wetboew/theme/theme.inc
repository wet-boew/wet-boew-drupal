<?php
/**
 * @file
 * theme.inc
 */

/**
 * Custom Template
 *
 * Implements WET Messages: Alert, Attention, and General Information
 * TODO: Note, Q&A, Tools, Work in Progress, Refer, Summary, Archive
 */
function theme_wetkit_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $extraclass = '';
    $spanclass = (drupal_is_front_page()) ? 'span-8' : 'span-6';
    switch ($type) {
      case 'warning':
        $extraclass = $spanclass . ' module-alert';
        break;
      case 'error':
        $extraclass = $spanclass . ' module-attention';
        break;
      case 'status':
        $extraclass = $spanclass . ' module-info';
        break;
      default:
        $extraclass = '';
    }
    $current_path = current_path();
    if (path_is_admin($current_path)) {
      $extraclass = 'messages';
    }
    $output .= "<section><div class=\"$extraclass $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h3 class="font-xlarge"><span class="color-dark">' . $status_heading[$type] . "</span></h3>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= '<ul><li>' . $messages[0] . "</li></ul>\n";
    }
    $output .= "</div></section><div class=\"clear\"></div>\n";
  }
  return $output;
}