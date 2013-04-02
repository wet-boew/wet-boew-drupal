<?php
/**
 * @file
 * wetkit_deployment.deploy_actions.inc
 */

/**
 * Add a node to a deployment plan.
 */
function wetkit_deployment_action_add_content_to_managed_plan($node, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  $deploy = deploy_plan_load($context['plan']);
  if (!$deploy) {
    watchdog('action', 'Cannot add to non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_add_to_plan($context['plan'], 'node', $node);

  watchdog('action', 'Added node !nid to deployment plan @plan.', array('!nid' => $node->nid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Add a bean to a deployment plan.
 */
function wetkit_deployment_action_add_bean_to_managed_plan($bean, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  $deploy = deploy_plan_load($context['plan']);
  if (!$deploy) {
    watchdog('action', 'Cannot add to non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_add_to_plan($context['plan'], 'bean', $bean);

  watchdog('action', 'Added node !bid to deployment plan @plan.', array('!bid' => $bean->bid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Add a file to a deployment plan.
 */
function wetkit_deployment_action_add_file_to_managed_plan($file, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  $deploy = deploy_plan_load($context['plan']);
  if (!$deploy) {
    watchdog('action', 'Cannot add to non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_add_to_plan($context['plan'], 'file', $file);

  watchdog('action', 'Added node !fid to deployment plan @plan.', array('!fid' => $file->fid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Add a term to a deployment plan.
 */
function wetkit_deployment_action_add_term_to_managed_plan($term, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  $deploy = deploy_plan_load($context['plan']);
  if (!$deploy) {
    watchdog('action', 'Cannot add to non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_add_to_plan($context['plan'], 'taxonomy_term', $term);

  watchdog('action', 'Added node !tid to deployment plan @plan.', array('!tid' => $term->tid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Add a term to a deployment plan.
 */
function wetkit_deployment_action_add_user_to_managed_plan($user, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  $deploy = deploy_plan_load($context['plan']);
  if (!$deploy) {
    watchdog('action', 'Cannot add to non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_add_to_plan($context['plan'], 'user', $user);

  watchdog('action', 'Added node !uid to deployment plan @plan.', array('!uid' => $user->uid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Delete a file from a deployment plan.
 */
function wetkit_deployment_action_delete_bean_from_managed_plan($bean, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  if (!deploy_plan_load($context['plan'])) {
    watchdog('action', 'Cannot delete from non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_delete_from_plan($context['plan'], 'bean', $bean);

  watchdog('action', 'Deleted node !bid from deployment plan @plan.', array('!bid' => $bean->bid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Delete a file from a deployment plan.
 */
function wetkit_deployment_action_delete_file_from_managed_plan($file, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  if (!deploy_plan_load($context['plan'])) {
    watchdog('action', 'Cannot delete from non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_delete_from_plan($context['plan'], 'file', $file);

  watchdog('action', 'Deleted node !fid from deployment plan @plan.', array('!fid' => $file->fid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Delete a term from a deployment plan.
 */
function wetkit_deployment_action_delete_term_from_managed_plan($term, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  if (!deploy_plan_load($context['plan'])) {
    watchdog('action', 'Cannot delete from non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_delete_from_plan($context['plan'], 'taxonomy_term', $term);

  watchdog('action', 'Deleted node !tid from deployment plan @plan.', array('!tid' => $term->tid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Delete a term from a deployment plan.
 */
function wetkit_deployment_action_delete_user_from_managed_plan($user, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  if (!deploy_plan_load($context['plan'])) {
    watchdog('action', 'Cannot delete from non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_delete_from_plan($context['plan'], 'user', $user);

  watchdog('action', 'Deleted node !uid from deployment plan @plan.', array('!uid' => $user->uid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}

/**
 * Delete a node from a deployment plan.
 */
function wetkit_deployment_action_delete_content_from_managed_plan($node, $context = array()) {
  $context['plan'] = "wetkit_deployment";
  if (!deploy_plan_load($context['plan'])) {
    watchdog('action', 'Cannot delete from non-managed plan %name', array('%name' => $context['plan']), WATCHDOG_ERROR);
    return;
  }
  deploy_manager_delete_from_plan($context['plan'], 'node', $node);

  watchdog('action', 'Deleted node !nid from deployment plan @plan.', array('!nid' => $node->nid, '@plan' => $context['plan']), WATCHDOG_NOTICE);
}
