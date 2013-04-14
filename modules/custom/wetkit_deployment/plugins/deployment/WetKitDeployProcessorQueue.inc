<?php
/**
 * @file
 * WetKitDeployProcessorQueue.inc
 */

/**
 * Processor class using the Batch API
 */
class WetKitDeployProcessorQueue extends DeployProcessorMemory {

  /**
   * Deploy to the endpoint.
   */
  public function deploy($deployment_key, DeployEndpoint $endpoint, $lock_name = NULL) {
    deploy_log($deployment_key, DEPLOY_STATUS_PROCESSING);
    $queue = DrupalQueue::get('wetkit_deploy');
    foreach ($this->aggregator as $entity) {
      // We don't want entities that has a cause, i.e. not dependencies, because
      // those'll be taken care of when the service iterates over the queue.
      if (empty($entity->__metadata['cause'])) {
        $entity_info = entity_get_info($entity->__metadata['type']);
        $id_key = $entity_info['entity keys']['id'];

        $entity->__metadata['id'] = $entity->{$id_key};
        $entity->__metadata['deployment_key'] = $deployment_key;
        $entity->__metadata['plan_name'] = $this->aggregator->plan->name;
        $entity->__metadata['endpoint_name'] = $endpoint->name;
        $entity->__metadata['lock_name'] = $lock_name;
        $queue->createItem($entity);
      }
    }
  }

  /**
   * Publish to the endpoint.
   */
  public function publish($deployment_key, DeployEndpoint $endpoint, $lock_name = NULL) {
    $queue = DrupalQueue::get('wetkit_publish');
    foreach ($this->aggregator as $entity) {
      // We don't want entities that has a cause, i.e. not dependencies, because
      // those'll be taken care of when the service iterates over the queue.
      if (empty($entity->__metadata['cause'])) {
        $entity_info = entity_get_info($entity->__metadata['type']);
        $id_key = $entity_info['entity keys']['id'];

        $entity->__metadata['id'] = $entity->{$id_key};
        $entity->__metadata['deployment_key'] = $deployment_key;
        $entity->__metadata['plan_name'] = $this->aggregator->plan->name;
        $entity->__metadata['endpoint_name'] = $endpoint->name;
        $entity->__metadata['lock_name'] = $lock_name;
        $queue->createItem($entity);
      }
    }
  }
}
