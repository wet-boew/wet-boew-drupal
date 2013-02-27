<?php
/**
 * @file
 * wetkit_deployment.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wetkit_deployment_default_rules_configuration() {
  $items = array();
  $items['rules_wetkit_deployment'] = entity_import('rules_config', '{ "rules_wetkit_deployment" : {
      "LABEL" : "WetKit Deployment Deployment",
      "PLUGIN" : "rule",
      "TAGS" : [ "Depoyment" ],
      "REQUIRES" : [ "rules", "workbench_moderation", "deploy" ],
      "USES VARIABLES" : { "node_deployment" : { "label" : "Node Deployment", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node-deployment" ],
            "type" : { "value" : { "wetkit_basic_page" : "wetkit_basic_page" } }
          }
        },
        { "AND" : [] },
        { "contents_current_state" : { "node" : [ "node-deployment" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "deploy_rules_action_add_to_managed_plan" : { "plan_name" : "wetkit_deployment", "entity" : [ "node-deployment" ] } }
      ]
    }
  }');
  return $items;
}
