<?php
/**
 * @file
 * A panel plugin to provide administrative information about the site's
 * general widget panes.
 */

$plugin = array(
  'title' => t('Archived Widget Pane'),
  'description' => t('This will generate an archived status message when a piece of content is flagged as being archived.'),
  'content_types' => array('archived_widget'),
  'category' => t('WET-BOEW'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'render callback' => 'wetkit_wetboew_archived_widget_content_type_render',
  'edit form' => 'wetkit_wetboew_archived_widget_edit_form',
  'single' => TRUE,
);

/**
 * Custom Pane for Archived Messages.
 */
function wetkit_wetboew_archived_widget_content_type_render($subtype, $conf, $panel_args, $context) {

  // First check that we have a proper context.
  if (!empty($context) && empty($context->data)) {
    return;
  }

  // Get the Node and confirm whether it is flagged as archive.
  $node = isset($context->data) ? clone($context->data) : NULL;

  $title = t('Archived Content');
  $body = t('Information identified as archived is provided for reference, research or recordkeeping purposes. It is not subject to the Government of Canada Web Standards and has not been altered or updated since it was archived. Please contact us to request a format other than those available.');
  $span_class = (isset($conf['span_item'])) ? $conf['span_item'] : 'span-6';

  $field_archived = field_get_items('node', $node, 'field_archived_content');
  if ($field_archived['0']['value'] == '1') {
    $pane = new stdClass();
    $pane->content = '<div id="archived" class="wet-boew-archived ' . $span_class . '" data-load="archived"><section><h2>' . $title . '</h2><p>' . $body . '</p></section></div>';
    return $pane;
  }
  else {
    return;
  }

}

/**
 * Edit callback edit form for the content type.
 */
function wetkit_wetboew_archived_widget_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['span_item'] = array(
    '#type' => 'textfield',
    '#title' => t('Span Class for Archived Message'),
    '#size' => 50,
    '#description' => t('Setting for span class.'),
    '#default_value' => !empty($conf['span_item']) ? $conf['span_item'] : 'span-6',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

/**
 * Edit callback submit form for the content type.
 */
function wetkit_wetboew_archived_widget_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
