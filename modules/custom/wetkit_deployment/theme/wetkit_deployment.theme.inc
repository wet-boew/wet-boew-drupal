<?php

/**
 * Theme callback for a plan's content.
 */
function theme_wetkit_deploy_ui_overview_plan_content($variables) {
  $info = $variables['info'];
  $header = array(t('Title'), t('Type'));
  $rows = array();

  foreach ($info as $values) {
    $rows[] = array($values['title'], $values['type']);
  }
  if (empty($rows)) {
    $rows = array(array(array(
      'colspan' => 2,
      'data' => t('Currently no content in this plan.'),
    )));
  }
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Theme callback for the overview page.
 */
function theme_wetkit_deploy_ui_overview($variables) {
  drupal_add_css(drupal_get_path('module', 'deploy_ui') . '/css/deploy_ui.admin.css');

  $blocks = $variables['blocks'];
  $container = array();

  $i = 0;
  foreach ($blocks as $block) {
    $position = ++$i % 2 ? 'left' : 'right';
    $container[$position][] = $block;
  }

  $output = '<div class="admin clearfix">';
  foreach ($container as $position => $blocks) {
    foreach ($blocks as $block) {
      $status_info = deploy_status_info($block['status']);

      $output .= '<div class="' . $position . ' clearfix">';
      $output .= '<div class="admin-panel deploy-panel">';
      $output .= '<h3>' . $block['plan_title'] . '</h3>';
      if (!$block['fetch_only'] && $status_info) {
        $output .= '<div class="messages ' . $status_info['class'] . '">';
        $output .= '<h4 class="element-invisible">Status message</h4>';
        $output .= $status_info['title'];
        $output .= '</div>';
      }
      $output .= '<div class="description">';
      $output .= '<h4 class="element-invisible">Plan description</h4>';
      $output .= $block['plan_description'];
      $output .= '</div>';
      if (!$block['fetch_only']) {
        $actions = array(array(
          'title' => t('Add to Queue'),
          'href' => 'admin/dashboard/deployment/deploy',
          'query' => array(
            'cancel_path' => $_GET['q'],
          )
        ));
        $output .= theme('links', array('links' => $actions, 'attributes' => array('class' => 'action-links')));
      }
      else {
        $output .= '<div class="description">' . t('This plan is <em>fetch-only</em>, and can therefore not be deployed in push fashion.') . '</div>';
      }
      $output .= '<div class="body">';
      $output .= $block['content'];
      $output .= '</div>';
      $output .= '</div>';
      $output .= '</div>';
    }
  }
  $output .= '</div>';
  return $output;
}

/**
 * Themes the queue display.
 *
 * @param $variables
 */
function theme_wetkit_deployment_items($variables) {
  $items = $variables['items'];
  $rows = array();
  foreach ($items as &$item) {
    $data = unserialize($item['data']);
    if ($item['expire'] > 0) {
      $item['expire'] = t("Claimed: expires %expire", array('%expire' => date('r', $item['expire'])));
    }
    else {
      $item['expire'] = t('Unclaimed');
    }
    $item['created'] = date('r', $item['created']);
    $user = user_load($data->__metadata['current_user']);
    $item['content'] = $user->name;
    //$item['title'] = $data->title;
    unset($item['data']);
    $rows[] = $item;
  }
  if (!empty($rows)) {
    $header = array(t('Item ID'), t('Claimed/Expiration'), t('Created'), t('Deployed By'));
    $output = theme('table', array('header' => $header, 'rows' => $rows));
    return $output;
  }
  else {
    return t('There are no items in the queue.');
  }
}
