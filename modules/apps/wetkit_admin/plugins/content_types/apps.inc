<?php

$plugin = array(
  'title' => t('Apps'),
  'description' => t('This is a standard list of apps that are available'),
  'content_types' => array('apps'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you content type in the blocks content.
  */
function wetkit_admin_apps_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Installed Apps');
  $pane->content = drupal_get_form('wetkit_admin_apps_selection_form');
  return $pane;
}

/**
 * Apps selection form
 */
function wetkit_admin_apps_selection_form($form, &$form_state) {
 
  // Kick us off
  $form = array();
  ctools_include('modal');
  ctools_modal_add_js();

  // Generate the apps information
  apps_include('manifest');
  $apps_manifests = array();
  foreach(apps_servers() as $app_server_name => $app_server) {
    $apps_manifests[$app_server_name] = apps_apps($app_server);
  }

  // Determine if we have a problem with the app server
  if (!count($apps_manifests)) {
    $form['error']['#markup'] = '<b>Unable to contact to the Apps Server(s).</b><br> For some reason we were unable to contact to the apps server(s).';
  }
  else {
    // Build the options
    $app_defaults = array();
    foreach($apps_manifests as $app_server => $app_manifest) {
      $options = array();
      foreach($app_manifest as $name => $app) {
        if (module_exists($name)) {
          $app_defaults[$name] = $name;
          $configure_links = array();
          if (function_exists($app['configure form'])) {
            $configure_links[] = array(
              'title' => t('Configure'),
              'href' => 'admin/wetkit_apps/configure/nojs/' . $app_server . '/' . $name . '/configure',
              'attributes' => array('class' => 'ctools-use-modal'),
              'query' => array(),
            );
            $configure_links[] = array(
              'title' => t('Details'),
              'href' => 'admin/apps/' . $app_server . '/app/' . $name,
              'query' => array(),
            );
          }
          $configure = (count($configure_links)) ? theme('links__ctools_dropbutton', array('links' => $configure_links, 'attributes' => array('class' => array('links', 'inline'))))  : '';
          $options[$name] = '<div class="clearfix"><div class="admin-apps-configure">' . $configure . '</div><div class="admin-apps-image">' . theme('image', array('path' => $app['logo']['path'], 'height' => '64')). '</div><div class="admin-apps-information"><strong>' . $app['name'] . '</strong><br />' . $app['description'] . '</div></div>';
        }
      }                                 

      // Setup the administration forms
      if (count($options)) {
        $app_server_info = apps_servers($app_server);
        $form[$app_server] = array(
          '#type' => 'fieldset',
          '#title' => $app_server_info['title'],
        );
        ksort($options);
        $form[$app_server]['apps'] = array(
          '#type' =>'checkboxes',
          '#default_value' => $app_defaults,
          '#options' => $options,
          '#attributes' => array('disabled' => 'disabled'),
        );
      }
    }

    $form['apps_add'] = array(
      '#markup' => '<p>' . l('Add more apps', 'admin/apps', array('attributes' => array('class' => 'action-link'))) . '</p>',
    );
  }

  // Close us out
  return $form;
}
