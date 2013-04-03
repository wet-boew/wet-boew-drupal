<?php
/**
 * @file
 * wetkit_deployment.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function wetkit_deployment_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'wetkit_deployment';
  $plan->title = 'Staging Area (Per User)';
  $plan->description = 'Deployment functionality that assists in moving uuid controlled entities from Staging to Production.';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'WetKitDeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 1,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'WetKitDeployProcessorQueue';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'wetkit_prod_server' => 'wetkit_prod_server',
  );
  $export['wetkit_deployment'] = $plan;

  return $export;
}
