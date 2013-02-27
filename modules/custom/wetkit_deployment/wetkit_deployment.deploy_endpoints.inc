<?php
/**
 * @file
 * wetkit_deployment.deploy_endpoints.inc
 */

/**
 * Implements hook_deploy_endpoints_default().
 */
function wetkit_deployment_deploy_endpoints_default() {
  $export = array();

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'wetkit_prod_server';
  $endpoint->title = 'WetKit Deployment Production Server';
  $endpoint->description = 'Endpoint related to the WetKit Deployment production server.';
  $endpoint->debug = 0;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'admin',
    'password' => 'WetKit@2012',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'http://wxt-drupal-deploy1:8082/deploy-api',
  );
  $export['wetkit_prod_server'] = $endpoint;

  return $export;
}
