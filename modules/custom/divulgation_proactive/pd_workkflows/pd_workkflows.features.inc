<?php
/**
 * @file
 * pd_workkflows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pd_workkflows_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_workflow_features_default_workflow().
 */
function pd_workkflows_workflow_features_default_workflow() {
  return array(
    'Other PD' => array(
      'name' => 'Other PD',
      'tab_roles' => '3,17',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:0;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => -50,
          'sysid' => 1,
          'status' => 1,
        ),
        1 => array(
          'state' => 'Draft',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        2 => array(
          'state' => 'Comms',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        3 => array(
          'state' => 'Verified',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        4 => array(
          'state' => 'Published',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'Draft',
          'roles' => 'author,3,17',
        ),
        1 => array(
          'sid' => '(creation)',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        2 => array(
          'sid' => '(creation)',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        3 => array(
          'sid' => '(creation)',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        4 => array(
          'sid' => 'Draft',
          'target_sid' => 'Comms',
          'roles' => 'author,3,17,7',
        ),
        5 => array(
          'sid' => 'Draft',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        6 => array(
          'sid' => 'Draft',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        7 => array(
          'sid' => 'Comms',
          'target_sid' => 'Draft',
          'roles' => '3,17,6',
        ),
        8 => array(
          'sid' => 'Comms',
          'target_sid' => 'Verified',
          'roles' => '3,17,6',
        ),
        9 => array(
          'sid' => 'Comms',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        10 => array(
          'sid' => 'Verified',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        11 => array(
          'sid' => 'Verified',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        12 => array(
          'sid' => 'Verified',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        13 => array(
          'sid' => 'Published',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        14 => array(
          'sid' => 'Published',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        15 => array(
          'sid' => 'Published',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'pd_contract',
          'wid' => 1,
        ),
        1 => array(
          'type' => 'pd_reclassification',
          'wid' => 1,
        ),
      ),
    ),
    'Travel/Hospitality' => array(
      'name' => 'Travel/Hospitality',
      'tab_roles' => '3,17',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:0;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => -50,
          'sysid' => 1,
          'status' => 1,
        ),
        1 => array(
          'state' => 'Draft',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        2 => array(
          'state' => 'Finance',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        3 => array(
          'state' => 'Translation',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        4 => array(
          'state' => 'Comms',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        5 => array(
          'state' => 'Verified',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        6 => array(
          'state' => 'Published',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'Draft',
          'roles' => 'author,3,17,7',
        ),
        1 => array(
          'sid' => '(creation)',
          'target_sid' => 'Finance',
          'roles' => '3,17',
        ),
        2 => array(
          'sid' => '(creation)',
          'target_sid' => 'Translation',
          'roles' => '3,17,7',
        ),
        3 => array(
          'sid' => '(creation)',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        4 => array(
          'sid' => '(creation)',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        5 => array(
          'sid' => '(creation)',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        6 => array(
          'sid' => 'Draft',
          'target_sid' => 'Finance',
          'roles' => '3,17',
        ),
        7 => array(
          'sid' => 'Draft',
          'target_sid' => 'Translation',
          'roles' => 'author,3,17,7',
        ),
        8 => array(
          'sid' => 'Draft',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        9 => array(
          'sid' => 'Draft',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        10 => array(
          'sid' => 'Draft',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        11 => array(
          'sid' => 'Finance',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        12 => array(
          'sid' => 'Finance',
          'target_sid' => 'Translation',
          'roles' => '3,17,14,8',
        ),
        13 => array(
          'sid' => 'Finance',
          'target_sid' => 'Comms',
          'roles' => '3,17,14',
        ),
        14 => array(
          'sid' => 'Finance',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        15 => array(
          'sid' => 'Finance',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        16 => array(
          'sid' => 'Translation',
          'target_sid' => 'Draft',
          'roles' => '3,17,8',
        ),
        17 => array(
          'sid' => 'Translation',
          'target_sid' => 'Finance',
          'roles' => '3,17,8',
        ),
        18 => array(
          'sid' => 'Translation',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        19 => array(
          'sid' => 'Translation',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
        20 => array(
          'sid' => 'Translation',
          'target_sid' => 'Published',
          'roles' => 3,
        ),
        21 => array(
          'sid' => 'Comms',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        22 => array(
          'sid' => 'Comms',
          'target_sid' => 'Finance',
          'roles' => '3,17,6',
        ),
        23 => array(
          'sid' => 'Comms',
          'target_sid' => 'Translation',
          'roles' => '3,17',
        ),
        24 => array(
          'sid' => 'Comms',
          'target_sid' => 'Verified',
          'roles' => '3,17,6',
        ),
        25 => array(
          'sid' => 'Comms',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        26 => array(
          'sid' => 'Verified',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        27 => array(
          'sid' => 'Verified',
          'target_sid' => 'Finance',
          'roles' => '3,17',
        ),
        28 => array(
          'sid' => 'Verified',
          'target_sid' => 'Translation',
          'roles' => '3,17',
        ),
        29 => array(
          'sid' => 'Verified',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        30 => array(
          'sid' => 'Verified',
          'target_sid' => 'Published',
          'roles' => '3,17',
        ),
        31 => array(
          'sid' => 'Published',
          'target_sid' => 'Draft',
          'roles' => '3,17',
        ),
        32 => array(
          'sid' => 'Published',
          'target_sid' => 'Finance',
          'roles' => '3,17',
        ),
        33 => array(
          'sid' => 'Published',
          'target_sid' => 'Translation',
          'roles' => '3,17',
        ),
        34 => array(
          'sid' => 'Published',
          'target_sid' => 'Comms',
          'roles' => '3,17',
        ),
        35 => array(
          'sid' => 'Published',
          'target_sid' => 'Verified',
          'roles' => '3,17',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'pd_hospitality',
          'wid' => 2,
        ),
        1 => array(
          'type' => 'pd_travel',
          'wid' => 2,
        ),
      ),
    ),
  );
}
