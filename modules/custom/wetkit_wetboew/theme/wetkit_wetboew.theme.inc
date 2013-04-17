<?php
/**
 * @file
 * wetkit_wetboew.theme.inc
 */

/**
 * Custom Template.
 *
 * Implements WET Messages: Alert, Attention, and General Information
 * TODO: Note, Q&A, Tools, Work in Progress, Refer, Summary, Archive
 */
function theme_wetkit_wetboew_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $extraclass = '';
    $spanclass = (drupal_is_front_page()) ? 'span-8' : 'span-8';
    switch ($type) {
      case 'completed':
        $extraclass = $spanclass . ' module-attention';
        break;

      case 'warning':
        $extraclass = $spanclass . ' module-attention';
        break;

      case 'error':
        $extraclass = $spanclass . ' module-alert';
        break;

      case 'status':
        $extraclass = $spanclass . ' module-info';
        break;

      default:
        $extraclass = '';
    }
    $output .= "<section><div class=\"$extraclass $type margin-bottom-medium\">\n";
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
  if (!empty($output)) {
    return '<div id="status-messages">' . $output . '</div>';
  }
  else {
    return;
  }
}

/**
 * Theme function for table view.
 */
function theme_wetkit_wetboew_tablefield_view($variables) {
  $attributes = array(
    'id' => 'tablefield-' . $variables['delta'],
    'class' => array(
      'wet-boew-zebra tablefield',
    ),
  );

  return '<div id="tablefield-wrapper-' . $variables['delta'] . '" class="tablefield-wrapper">'
    . theme('table',
      array(
        'header' => $variables['header'],
        'rows' => $variables['rows'],
        'attributes' => $attributes,
      )
    )
    . '</div>';
}

/**
 * Theme function for site overview.
 */
function theme_wetkit_wetboew_overview($variables) {
  $content = $variables['content'];
  $users = $variables['users'];

  $output  = '<div class="total-control-site-overview">';
  $output .= '<strong>' . t('Content') . '</strong>';
  $output .= theme('item_list', array('items' => $content));
  $output .= '<strong>' . t('Users') . '</strong>';
  $output .= theme('item_list', array('items' => $users));
  $output .= '</div>';

  return $output;
}

/**
 * Theme function for content overview.
 */
function theme_wetkit_wetboew_overview_content($variables) {
  $overview = $variables['overview'];

  $output  = '<div class="total-control-content-overview">';
  $output .= theme('item_list', array('items' => $overview));
  $output .= '</div>';

  return $output;
}

/**
 * Theme function for user overview.
 */
function theme_wetkit_wetboew_overview_user($variables) {
  $overview = $variables['overview'];

  $output  = '<div class="total-control-user-overview">';
  $output .= theme('item_list', array('items' => $overview));
  $output .= '</div>';

  return $output;
}

/**
 * Theme function for create content pane.
 */
function theme_wetkit_wetboew_create($variables) {
  $create = $variables['create'];

  $output  = '<div class="total-control-create">';
  $output .= theme('item_list', array('items' => $create));
  $output .= '</div>';

  return $output;
}

/**
 * Theme function for panel pages.
 */
function theme_wetkit_wetboew_admin_table($variables) {
  $header = $variables['header'];
  $rows = $variables['rows'];
  $link = $variables['link'];

  // Unfortunately link get generated too early.
  $link = str_replace('<a href=', '<a class="button button-accent" href=', $link);

  $output  = '<div class="total-control-panel-panes">';
  $output .= theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array(
      'class' => array(
        'panels-manage',
      ),
    ),
  ));
  $output .= '  <div class="admin-page">' . $link . '</div>';
  $output .= '</div>';

  return $output;
}
