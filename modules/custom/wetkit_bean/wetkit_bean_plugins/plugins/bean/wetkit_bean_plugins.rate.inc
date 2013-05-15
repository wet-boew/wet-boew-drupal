<?php
/**
 * @file
 * Listing bean plugin.
 */

class WetKitRateBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      'rate_settings' => array(
        'configure_rate_widget_span' => 'span-4',
        'rate_machine_name' => '',
      ),
    );

    return array_merge(parent::values(), $values);
  }
  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();

    $form['rate_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Configure Rate Widget'),
      '#tree' => TRUE,
      '#weight' => -8,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['rate_settings']['configure_rate_widget_span'] = array(
      '#type' => 'select',
      '#title' => t('Configure the Rate Widget Span'),
      '#options' => array(
        'span-2' => t('Span 2'),
        'span-3' => t('Span 3'),
        'span-4' => t('Span 4'),
        'span-5' => t('Span 5'),
        'span-6' => t('Span 6'),
        'span-7' => t('Span 7'),
        'span-8' => t('Span 8'),
      ),
      '#default_value' => isset($bean->rate_settings['configure_rate_widget_span']) ? $bean->rate_settings['configure_rate_widget_span'] : '',
    );
    $form['rate_settings']['rate_machine_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Enter the machine name for the Rate widget'),
      '#default_value' => isset($bean->rate_settings['rate_machine_name']) ? $bean->rate_settings['rate_machine_name'] : '',
      '#size' => 60,
      '#maxlength' => 128,
      '#required' => FALSE,
    );

    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {

    // Settings
    $span = isset($bean->rate_settings['configure_rate_widget_span']) ? $bean->rate_settings['configure_rate_widget_span'] : '';
    $machine_name = isset($bean->rate_settings['rate_machine_name']) ? $bean->rate_settings['rate_machine_name'] : '';

    $content = array();
    if (arg(0) == 'node' && is_numeric(arg(1)) && ($node = node_load(arg(1))) && ($machine_name != '')) { 
      $markup = rate_embed($node, $machine_name); 
    }
    else {
      $markup = '<p>' . t('There is no node context for the rate widget to leverage.') . '</p>';
    }
    $content['rate_bean']['#markup'] = $markup;

    return $content;
  }
}
