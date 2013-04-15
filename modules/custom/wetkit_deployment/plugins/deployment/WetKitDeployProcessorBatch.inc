<?php
/**
 * @file
 * WetKitDeployProcessorBatch.inc
 */

/**
 * Processor class using the Batch API
 */
class WetKitDeployProcessorBatch extends DeployProcessorMemory {

  /**
   * Batch operations to execute.
   *
   * @var array
   */
  public $operations = array();

  /**
   * Implements the processOperations logic.
   */
  protected function processOperations(Array $operations = array()) {
    if (!empty($operations)) {
      foreach ($this->aggregator as $entity) {
        foreach ($operations as $operation) {
          $this->operations[] = array(
            $operation['callback'],
            array(
              $this->aggregator->plan->name,
              $entity,
          ));
        }
      }
    }
  }

  /**
   * Implements the deploy logic.
   */
  public function deploy($deployment_key, DeployEndpoint $endpoint, $lock_name = NULL) {
    deploy_log($deployment_key, DEPLOY_STATUS_PROCESSING);
    foreach ($this->aggregator as $entity) {
      $entity_info = entity_get_info($entity->__metadata['type']);
      $id_key = $entity_info['entity keys']['id'];

      $entity->__metadata['id'] = $entity->{$id_key};
      $entity->__metadata['deployment_key'] = $deployment_key;
      $entity->__metadata['plan_name'] = $this->aggregator->plan->name;
      $entity->__metadata['endpoint_name'] = $endpoint->name;
      $entity->__metadata['lock_name'] = $lock_name;
      $this->operations[] = array('deploy_queue_worker_deploy', array($entity));
    }
  }

  /**
   * Implements the publish logic.
   */
  public function publish($deployment_key, DeployEndpoint $endpoint, $lock_name = NULL) {
    foreach ($this->aggregator as $entity) {
      $entity_info = entity_get_info($entity->__metadata['type']);
      $id_key = $entity_info['entity keys']['id'];

      $entity->__metadata['id'] = $entity->{$id_key};
      $entity->__metadata['deployment_key'] = $deployment_key;
      $entity->__metadata['plan_name'] = $this->aggregator->plan->name;
      $entity->__metadata['endpoint_name'] = $endpoint->name;
      $entity->__metadata['lock_name'] = $lock_name;
      $this->operations[] = array('deploy_queue_worker_publish', array($entity));
    }
  }

  /**
   * Implements the postProcess logic.
   */
  public function postProcess(Array $operations = array()) {
    $this->processOperations($operations);
    $batch = array(
      'title' => t('Deploying %plan', array('%plan' => $this->aggregator->plan->title)),
      'operations' => $this->operations,
      'finished' => 'deploy_batch_finished_operation',
    );
    batch_set($batch);
    batch_process('admin/dashboard/deployment');
  }
}
