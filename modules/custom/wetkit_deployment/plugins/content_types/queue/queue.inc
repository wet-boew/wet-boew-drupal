<?php
/**
 * @file
 * queue.inc
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'render last' => TRUE,
  'title' => t('Queue'),
  'icon' => 'icon_form.png',
  'description' => t('WetKit Deployment'),
  'render callback' => 'wetkit_deployment_queue_content_type_render',
  'edit form' => 'wetkit_deployment_queue_edit_form',
  'category' => t('Deployment'),
);

/**
 * Admin title callback for the content type.
 */
function wetkit_deployment_queue_content_type_admin_title($subtype = NULL, $conf = NULL, $context = NULL) {
  return t('Queue');
}

/**
 * Admin info callback for the content type.
 */
function wetkit_deployment_queue_content_type_admin_info($subtype = NULL, $conf = NULL, $context = NULL) {
  $block = new stdClass();
  $block->title = t('WetKit Deployment');

  return $block;
}

/**
 * Run-time rendering of the body of the block.
 */
function wetkit_deployment_queue_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->title = t('WetKit Deployment');

  $block->content = drupal_get_form('wetkit_deployment_add_remove_form');
  return $block;
}

/**
 * Edit callback edit form for the content type.
 */
function wetkit_deployment_queue_edit_form($form, &$form_state) {

  return $form;
}
