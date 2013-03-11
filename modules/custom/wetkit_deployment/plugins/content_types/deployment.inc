<?php

/**
 * @file
 *
 * Welcome panel content type. Displays a summary of content statistics 
 * including: number pieces of each type of content, number of comments, 
 * number of blocked comments (spam) and configuration links.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Deployment'),
  'no title override' => TRUE,
  'icon' => 'cog.png',
  'description' => t('WetKit Deployment'),
  'category' => t('Dashboard'),
);

/**
 * Admin title callback for the content type.
 */
function wetkit_deployment_deployment_content_type_admin_title($subtype = NULL, $conf = NULL, $context = NULL) {
  return t('Deployment');
}

/**
 * Admin info callback for the content type.
 */
function wetkit_deployment_deployment_content_type_admin_info($subtype = NULL, $conf = NULL, $context = NULL) {
  $block = new stdClass();
  $block->title = t('WetKit Deployment');

  return $block;
}

/**
 * Run-time rendering of the body of the block.
 */
function wetkit_deployment_deployment_content_type_render($subtype, $conf, $panel_args, &$context) {
  $plans = deploy_plan_load_all();
  $blocks = array();

  // Iterate over all plans.
  foreach ($plans as $plan) {
    $info = array();

    // Get the entity keys from the aggregator.
    $entity_keys = $plan->getEntities();
    foreach ($entity_keys as $entity_key) {
      // Get the entity info and all entities of this type.
      $entity_info = entity_get_info($entity_key['type']);
      $entities = entity_load($entity_key['type'], array($entity_key['id']));

      // Construct a usable array for the theme function.
      foreach ($entities as $entity) {
        $title = '';
        if (isset($entity_info['entity keys']['label'])) {
          $title = filter_xss($entity->{$entity_info['entity keys']['label']});
        }
        // Walk-around for the user entity that apparently doesn't leverage
        // the entity key 'label'.
        elseif (isset($entity->uid) && isset($entity->name)) {
          $title = filter_xss($entity->name);
        }
        if (isset($entity_info['uri callback'])) {
          $uri = $entity_info['uri callback']($entity);
          $title = l($title, $uri['path'], array('html' => TRUE));
        }
        $info[] = array(
          'title' => $title,
          'type' => $entity_info['label'],
        );
      }
    }

    // Construct a usable array for the theme function.
    $blocks[] = array(
      'plan_name' => check_plain($plan->name),
      'plan_title' => check_plain($plan->title),
      'plan_description' => check_plain($plan->description),
      'content' => theme('deploy_ui_overview_plan_content', array('info' => $info)),
      'fetch_only' => $plan->fetch_only,
      'status' => deploy_plan_get_status($plan->name),
    );
  }

  $block = new stdClass();
  $block->module = t('wetkit_deployment');
  $block->title = t('WetKit Deployment');
  $block->content = theme('deploy_ui_overview', array('blocks' => $blocks));

  return $block;
}
