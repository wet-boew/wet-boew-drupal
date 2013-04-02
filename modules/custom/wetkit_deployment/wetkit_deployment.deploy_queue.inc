<?php
/**
 * @file
 * wetkit_deployment.deploy_queue.inc
 */

/**
 * Provides an interface to add items to the queue, to retrieve (claim)
 * an item from the head of the queue, and to claim and delete. Also
 * allows the user to run cron manually, so that claimed items can be
 * released.
 */
function wetkit_deployment_add_remove_form($form, &$form_state) {
  $queue_name = !empty($form_state['values']['queue_name']) ? $form_state['values']['queue_name'] : 'wetkit_deploy';
  $items = wetkit_deployment_retrieve_queue($queue_name);

  // Add CSS to make the form a bit denser.
  $form['#attached']['css'] = array(drupal_get_path('module', 'wetkit_deployment') . '/css/wetkit_deployment.css');

  $form['queue_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Choose queue'),
    '#collapsible' => TRUE,
  );
  $form['queue_fieldset']['queue_name'] = array(
    '#type' => 'select',
    '#title' => t('Choose queue'),
    '#options' => drupal_map_assoc(array('wetkit_deploy', 'wetkit_publish')),
  );

  $form['claim_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Claim from queue'),
    '#collapsible' => TRUE,
  );
  $form['claim_fieldset']['claim_time'] = array(
    '#type' => 'radios',
    '#title' => t('Claim time, in seconds'),
    '#options' => array(0 => t('none'), 5 => t('5 seconds'), 60 => t('60 seconds')),
    '#description' => t('This time is only valid if cron runs during this time period. You can run cron manually below.'),
    '#default_value' => !empty($form_state['values']['claim_time']) ? $form_state['values']['claim_time'] : 5,
  );
  $form['claim_fieldset']['claim_item'] = array(
    '#type' => 'submit',
    '#value' => t('Claim the next item from the queue'),
    '#submit' => array('wetkit_deployment_add_remove_form_claim'),
  );
  $form['claim_fieldset']['claim_and_delete_item'] = array(
    '#type' => 'submit',
    '#value' => t('Claim the next item and delete it'),
    '#submit' => array('wetkit_deployment_add_remove_form_delete'),
  );

  $form['status_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Queue status'),
    '#collapsible' => TRUE,
  );
  $form['status_fieldset']['status'] = array(
    '#prefix' => '<div id="queue-table">',
    '#type' => 'markup',
    '#markup' => t('Queue status for queue @name:', array('@name' => $queue_name)) . '<br/>' . theme('wetkit_deployment_items', array('items' => $items)),
    '#suffix' => '</div><div class="clear"></div>',
  );
  $form['status_fieldset']['run_cron'] = array(
    '#type' => 'submit',
    '#value' => t('Run cron manually (to expire claimed items)'),
    '#submit' => array('wetkit_deployment_add_remove_form_run_cron'),
  );
  $form['status_fieldset']['delete_queue'] = array(
    '#type' => 'submit',
    '#value' => t('Delete the queue and items in it'),
    '#submit' => array('wetkit_deployment_add_remove_form_clear_queue'),
  );
  return $form;
}

/**
 * Submit function for the insert-into-queue button.
 */
function wetkit_deployment_add_remove_form_insert($form, &$form_state) {
  // Get a queue (of the default type) called 'wetkit_deployment_queue'.
  // If the default queue class is SystemQueue this creates a queue that stores
  // its items in the database.
  $queue = DrupalQueue::get($form_state['values']['queue_name']);
  $queue->createQueue();  // There is no harm in trying to recreate existing.

  // Queue the string.
  $queue->createItem($form_state['values']['string_to_add']);
  $count = $queue->numberOfItems();
  drupal_set_message(t('Queued your string (@string_to_add). There are now @count items in the queue.', array('@count' => $count, '@string_to_add' => $form_state['values']['string_to_add'])));
  $form_state['rebuild'] = TRUE;  // Allows us to keep information in $form_state.
  // Unsetting the string_to_add allows us to set the incremented default value
  // for the user so they don't have to type anything.
  unset($form_state['input']['string_to_add']);
  $form_state['storage']['insert_counter']++;
}

/**
 * Submit function for the "claim" button. Claims (retrieves) an item from
 * the queue and reports the results.
 */
function wetkit_deployment_add_remove_form_claim($form, &$form_state) {
  $queue = DrupalQueue::get($form_state['values']['queue_name']);
  $queue->createQueue();  // There is no harm in trying to recreate existing.
  $item = $queue->claimItem($form_state['values']['claim_time']);
  $count = $queue->numberOfItems();
  if (!empty($item)) {
    drupal_set_message(t('Claimed item id=@item_id string=@string for @seconds seconds. There are @count items in the queue.', array('@count' => $count, '@item_id' => $item->item_id, '@string' => $item->data, '@seconds' => $form_state['values']['claim_time'])));
  }
  else {
    drupal_set_message(t('There were no items in the queue available to claim. There are @count items in the queue.', array('@count' => $count)));
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit function for "Claim and delete" button.
 */
function wetkit_deployment_add_remove_form_delete($form, &$form_state) {
  $queue = DrupalQueue::get($form_state['values']['queue_name']);
  $queue->createQueue();  // There is no harm in trying to recreate existing.
  $count = $queue->numberOfItems();
  $item = $queue->claimItem(60);
  if (!empty($item)) {
    drupal_set_message(t('Claimed and deleted item id=@item_id string=@string for @seconds seconds. There are @count items in the queue.', array('@count' => $count, '@item_id' => $item->item_id, '@string' => $item->data, '@seconds' => $form_state['values']['claim_time'])));
    $queue->deleteItem($item);
    $count = $queue->numberOfItems();
    drupal_set_message(t('There are now @count items in the queue.', array('@count' => $count)));
  }
  else {
    $count = $queue->numberOfItems();
    drupal_set_message(t('There were no items in the queue available to claim/delete. There are currently @count items in the queue.', array('@count' => $count)));
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit function for "run cron" button.
 *
 * Runs cron (to release expired claims) and reports the results.
 */
function wetkit_deployment_add_remove_form_run_cron($form, &$form_state) {
  drupal_cron_run();
  $queue = DrupalQueue::get($form_state['values']['queue_name']);
  $queue->createQueue();  // There is no harm in trying to recreate existing.
  $count = $queue->numberOfItems();
  drupal_set_message(t('Ran cron. If claimed items expired, they should be expired now. There are now @count items in the queue', array('@count' => $count)));
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for clearing/deleting the queue.
 */
function wetkit_deployment_add_remove_form_clear_queue($form, &$form_state) {
  $queue = DrupalQueue::get($form_state['values']['queue_name']);
  $queue->deleteQueue();
  drupal_set_message(t('Deleted the @queue_name queue and all items in it', array('@queue_name' => $form_state['values']['queue_name'])));
}

/**
 * Retrieves the queue from the database for display purposes only.
 *
 * It is not recommended to access the database directly, and this is only here
 * so that the user interface can give a good idea of what's going on in the
 * queue.
 *
 * @param $queue_name
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
