<?php
/**
 * @file
 * wetkit_workflow_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wetkit_workflow_rules_default_rules_configuration() {
  $items = array();
  $items['rules_publish_workflow'] = entity_import('rules_config', '{ "rules_publish_workflow" : {
      "LABEL" : "Send Email(s) on Workbench Moderation Transition (Needs Review -\\u003E Published)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Sample Title",
            "message" : "Sample Body Message"
          }
        }
      ]
    }
  }');
  $items['rules_review_workflow'] = entity_import('rules_config', '{ "rules_review_workflow" : {
      "LABEL" : "Send Email(s) on Workbench Moderation Transition (Drafts -\\u003E Needs Review)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Sample Title",
            "message" : "Sample Body Message"
          }
        }
      ]
    }
  }');
  return $items;
}
