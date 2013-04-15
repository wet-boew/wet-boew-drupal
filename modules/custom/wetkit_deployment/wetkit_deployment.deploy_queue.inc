<?php
/**
 * @file
 * wetkit_deployment.deploy_queue.inc
 */

/**
 * Theme form for deployment aggregation.
 *
 * Provides an interface to add items to the queue, to retrieve (claim)
 * an item from the head of the queue, and to claim and delete. Also
 * allows the user to run cron manually, so that claimed items can be
 * released.
 */
function wetkit_deployment_add_remove_form($form, &$form_state) {
  $queue_name = !empty($form_state['values']['queue_name']) ? $form_state['values']['queue_name'] : 'wetkit_publish';
  $items = wetkit_deployment_retrieve_queue($queue_name);

  // Add CSS to make the form a bit denser.
  $form['#attached']['css'] = array(drupal_get_path('module', 'wetkit_deployment') . '/css/wetkit_deployment.css');

  $form['status_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Deployment Area (All Users)'),
    '#collapsible' => TRUE,
  );
  $form['status_fieldset']['queue_name'] = array(
    '#type' => 'select',
    '#title' => t('Current queue:'),
    '#options' => drupal_map_assoc(array('wetkit_deploy', 'wetkit_publish')),
  );
  $form['status_fieldset']['status'] = array(
    '#prefix' => '<div id="queue-table">',
    '#type' => 'markup',
    '#markup' => theme('wetkit_deployment_items', array('items' => $items)),
    '#suffix' => '</div><div class="clear"></div>',
  );
  $form['status_fieldset']['run_cron'] = array(
    '#type' => 'submit',
    '#value' => t('Deploy all items'),
    '#submit' => array('wetkit_deployment_add_remove_form_run_cron'),
    '#attributes' => array('class' => array('button-confirm')),
  );
  $form['status_fieldset']['delete_queue'] = array(
    '#type' => 'submit',
    '#value' => t('Delete all items'),
    '#submit' => array('wetkit_deployment_add_remove_form_clear_queue'),
  );
  $form['status_fieldset']['delete_item'] = array(
    '#type' => 'submit',
    '#value' => t('Delete next item'),
    '#submit' => array('wetkit_deployment_add_remove_form_delete'),
  );

  return $form;
}

/**
 * Submit function for "Claim and delete" button.
 */
function wetkit_deployment_add_remove_form_delete($form, &$form_state) {
  // Deploy.
  $queue = DrupalQueue::get('wetkit_deploy');
  $queue->createQueue();
  $count = $queue->numberOfItems();
  $item = $queue->claimItem(60);
  if (!empty($item)) {
    $queue->deleteItem($item);
    $count = $queue->numberOfItems();
  }
  else {
    $count = $queue->numberOfItems();
    drupal_set_message(t('There were no items in the queue available to delete. There are currently @count items in the queue.', array('@count' => $count)));
  }
  // Publish.
  $queue = DrupalQueue::get('wetkit_publish');
  $queue->createQueue();
  $count = $queue->numberOfItems();
  $item = $queue->claimItem(60);
  if (!empty($item)) {
    $queue->deleteItem($item);
    $count = $queue->numberOfItems();
  }
  else {
    $count = $queue->numberOfItems();
    drupal_set_message(t('There were no items in the queue available to delete. There are currently @count items in the queue.', array('@count' => $count)));
  }

  $form_state['rebuild'] = TRUE;
}

/**
 * Submit function for "run cron" button.
 *
 * Runs cron (to release expired claims) and reports the results.
 */
function wetkit_deployment_add_remove_form_run_cron($form, &$form_state) {
  variable_set('wetkit_deployment_enable_cron', TRUE);
  drupal_cron_run();
  // Deploy.
  $queue = DrupalQueue::get('wetkit_deploy');
  $queue->createQueue();
  $count = $queue->numberOfItems();
  // Publish.
  $queue = DrupalQueue::get('wetkit_publish');
  $queue->createQueue();
  $count = $queue->numberOfItems();
  drupal_set_message(t('Ran the cron. There are now @count items in the queue', array('@count' => $count)));
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for clearing/deleting the queue.
 */
function wetkit_deployment_add_remove_form_clear_queue($form, &$form_state) {
  // Deploy.
  $queue = DrupalQueue::get('wetkit_deploy');
  $queue->deleteQueue();
  // Publish.
  $queue = DrupalQueue::get('wetkit_publish');
  $queue->deleteQueue();
  drupal_set_message(t('Deleted the deployment queue and all items in it'));
}

/**
 * Retrieves the queue from the database for display purposes only.
 *
 * It is not recommended to access the database directly, and this is only here
 * so that the user interface can give a good idea of what's going on in the
 * queue.
 *
 * @param string $queue_name
 *   The name of the queue from which to fetch items.
 */
function wetkit_deployment_retrieve_queue($queue_name) {
  $items = array();
  $result = db_query("SELECT item_id, data, expire, created FROM {queue} WHERE name = :name ORDER BY item_id",
    array(':name' => $queue_name),
    array('fetch' => PDO::FETCH_ASSOC));
  foreach ($result as $item) {
    $items[] = $item;
  }
  return $items;
}
