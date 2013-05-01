<?php

/**
 * @file
 * Plugin to provide access control/visibility based on a defined visibility schedule.
 */

$plugin = array(
  'title' => t('Scheduled Date'),
  'description' => t('Control access based on scheduled date.'),
  'callback' => 'wetkit_core_schedule_ctools_access_check',
  'settings form' => 'wetkit_core_schedule_ctools_access_settings',
  'settings form submit' => 'wetkit_core_schedule_ctools_access_settings_submit',
  'settings form validate' => 'wetkit_core_schedule_ctools_access_settings_validate',
  'summary' => 'wetkit_core_schedule_ctools_access_summary',
);

/**
 * Settings form
 */
function wetkit_core_schedule_ctools_access_settings($form, &$form_state, $conf) {
  if (!isset($conf['preview_parameter'])) {
    $conf['preview_parameter'] = variable_get('wetkit_core_schedule_preview_param');
  }

  $form['settings']['start_date'] = array(
    '#type'          => 'date_popup',
    '#title'         => t('Start Date'),
    '#default_value' => $conf['start_date'],
    '#date_format'   => variable_get('date_format_short', 'm/d/Y - H:i'),
    '#description'   => t('Date and time to start visibility'),
    '#required'      => TRUE,
  );
  $form['settings']['end_date'] = array(
    '#type'          => 'date_popup',
    '#title'         => t('End Date'),
    '#default_value' => $conf['end_date'],
    '#date_format'   => variable_get('date_format_short', 'm/d/Y - H:i'),
    '#description'   => t('Date and time to end visibility (Optional)'),
    '#required'      => FALSE,
  );
  $form['settings']['allow_get_param'] = array(
    '#type'          => 'radios',
    '#title'         => t('Allow Live Preview'),
    '#description'   => t('Should previewing be allowed by providing a timestamp with a parameter on the url?'),
    '#options'       => array(
      1 => 'Yes',
      0 => 'No',
    ),
    '#default_value' => (!is_null($conf['allow_get_param'])) ? $conf['allow_get_param'] : 0,
  );
  $form['settings']['preview_parameter'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Preview Key'),
    '#description'   => t('Keyword to use for live preview.<br />This will be appended to the URL, example: http://example.com/node/12?preview=2011-09-12_15:30 (this would display the version that will appear at 3:30pm on September 12, 2011 <br /><strong>Note:</strong> This is a system-wide setting.'),
    '#default_value' => $conf['preview_parameter'],
  );

  return $form;
}

/**
 * Implements hook_validate().
 * Validation for plugin settings form.
 */
function wetkit_core_schedule_ctools_access_settings_validate($form, &$form_state) {
  // End Date validation. Ensure date occurs after start date if it's set.
  if ($form_state['values']['settings']['end_date']) {
    $end_date = strtotime($form_state['values']['settings']['end_date']);
    $start_date = strtotime($form_state['values']['settings']['start_date']);
    if ($end_date <= $start_date) {
      form_set_error('settings][end_date', t('End Date must occur after start date if set.'));
    }
  }
  
  // Preview validation. Ensure a preview keyword is specified if allow live preview is set.
  if ($form_state['values']['settings']['allow_get_param'] && !$form_state['values']['settings']['preview_parameter']) {
    form_set_error('settings][preview_parameter', t('A preview keyword is required if live preview is allowed.'));
  }
}

/**
 * Implements hook_submit().
 * Submit handler for plugin settings form to set system-wide preview parameter variable.
 */
function wetkit_core_schedule_ctools_access_settings_submit($form, &$form_state) {
  if(isset($form_state['values']['settings']['preview_parameter'])) {
    variable_set('wetkit_core_schedule_preview_param', $form_state['values']['settings']['preview_parameter']);
  }
}

/**
 * Check Request time (or preview time) against configured schedule.
 */
function wetkit_core_schedule_ctools_access_check($conf, $context) {
  // Set default request time to the actual request time.
  $request_time = REQUEST_TIME;

  // If configured to allow "live preview" check for the configured parameter, and adjust request time as appropriate
  if ($conf['allow_get_param']) {
    if (isset($_GET[variable_get('wetkit_core_schedule_preview_param')])) {
      // if the parameter is set, replace underscores with spaces, and convert to unix timestamp.
      $request_time = strtotime(str_replace('_', ' ', $_GET[variable_get('wetkit_core_schedule_preview_param')]));
    }
  }
  if ($conf['end_date']) {
    if ($request_time > strtotime($conf['end_date'])) {
      return FALSE;
    }
  }
  if ($request_time >= strtotime($conf['start_date'])) {
    return TRUE;
  }

  return FALSE;
}

/**
 * Provide a summary description.
 */
function wetkit_core_schedule_ctools_access_summary($conf, $context) {
  if ($conf['end_date']) {
    return t('The page request occurs within the scheduled range: @start_date - @end_date', 
      array(
        '@start_date' => $conf['start_date'],
        '@end_date' => $conf['end_date']
      ));
  }
  else {
    return t('The page request occurs on or after the scheduled start date: @start_date', 
      array(
        '@start_date' => $conf['start_date']
      ));
  }
}
