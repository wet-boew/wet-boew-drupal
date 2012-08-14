<?php

$plugin = array(
  'title' => t('WetKit Apps'),
  'description' => t('This is a list of the foundational apps for WetKit'),
  'content_types' => array('apps'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_wetkit_apps_apps_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('WetKit Apps');
  $pane->content = drupal_get_form('wetkit_admin_wetkit_apps_apps_selection_form');
  return $pane;
}

/**
 * Apps selection form
 */
function wetkit_admin_wetkit_apps_apps_selection_form($form, &$form_state) {
 
  // Kick us off
  $form = array();
  ctools_include('modal');
  ctools_modal_add_js();

  // Generate the apps information
  apps_include('manifest');
  $apps_manifests = array();
  foreach (apps_servers() as $app_server_name => $app_server) {
    $apps_manifests[$app_server_name] = apps_apps($app_server);
  }

  // Determine if we have a problem with the app server
  if (empty($apps_manifests['wetkit_apps'])) {
    $form['error']['#markup'] = '<b>Unable to contact to the Apps Server(s).</b><br> For some reason we were unable to contact to the apps server(s).';
  }
  else {
    // Build the options
    $app_defaults = array();
    $options = array();
    foreach ($apps_manifests['wetkit_apps'] as $name => $app) {
      $configure_links = array();
      if (module_exists($name)) {
        $app_defaults[] = $name;
      }
      if (function_exists($app['configure form'])) {
        $configure_links[] = array(
          'title' => t('Configure'),
          'href' => 'admin/wetkit_apps/configure/nojs/wetkit_apps/' . $name . '/configure',
          'attributes' => array('class' => 'ctools-use-modal'),
          'query' => array(),
        );
        $configure_links[] = array(
          'title' => t('Details'),
          'href' => 'admin/apps/wetkit_apps/app/' . $name,
          'query' => array(),
        );
      }
      $configure = (count($configure_links)) ? theme('links__ctools_dropbutton', array('links' => $configure_links, 'attributes' => array('class' => array('links', 'inline'))))  : '';
      $options[$name] = '<div class="clearfix"><div class="admin-apps-configure">' . $configure . '</div><div class="admin-apps-image">' . theme('image', array('path' => $app['logo']['path'], 'height' => '64')) . '</div><div class="admin-apps-information"><strong>' . $app['name'] . '</strong><br />' . $app['description'] . '</div></div>';
    }                                

    // Setup the administration forms
    ksort($options);
    $form['apps'] = array(
      '#type' => 'checkboxes',
      '#default_value' => $app_defaults,
      '#options' => $options,
      '#attributes' => array('disabled' => 'disabled'),
    );
  }

  // Close us out
  return $form;
}
