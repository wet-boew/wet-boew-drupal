<?php
/**
 * @file
 * WetKitDeployAggregatorManaged.inc
 */

/**
 * Managed deployment aggregator.
 */
class WetKitDeployAggregatorManaged extends DeployAggregatorBase {

  public $config = array();

  /**
   * Holds a reference to the plan object that initiated it.
   *
   * @var DeployPlan
   */
  public $plan;

  /**
   * Constructor.
   */
  public function __construct(DeployPlan $plan = NULL, Array $config = array()) {
    global $user;
    $this->config += array(
      'debug' => FALSE,
      'delete_post_deploy' => FALSE,
    );
    $this->config = array_merge($this->config, $config);

    // Lets allow deployment by user.
    $plan->deploy_by_user = $user->uid;
    $this->plan = $plan;
  }

  /**
   * Get aggregated entities.
   */
  public function getEntities() {
    return deploy_manager_get_entities($this->plan->name);
  }

  /**
   * Configuration for aggregation.
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['delete_post_deploy'] = array(
      '#type' => 'checkbox',
      '#title' => t('Delete successfully deployed entities from the plan'),
      '#description' => t('If checked, each successfully deployed entity will be automatically deleted from the plan.'),
      '#default_value' => $this->config['delete_post_deploy'],
    );
    return $form;
  }
}
