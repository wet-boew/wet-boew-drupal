<?php

/**
 * @file
 * Contains Batch API callbacks used during installation.
 */

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_import($operation, $type, &$context) {
  $context['message'] = t('@operation', array('@operation' => $type));
  $migration = Migration::getInstance($operation);
  $migration->processImport();
}

/**
 * BatchAPI callback.
 *
 * @see wetkit_import_content()
 */
function _wetkit_bean_import($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
  $entity_translation_entity_types = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'bean' => 'bean',
    'node' => 0,
    'file' => 0,
    'taxonomy_term' => 0,
    'user' => 0,
  );
  variable_set('entity_translation_entity_types', $entity_translation_entity_types);
  entity_info_cache_clear();
  _wetkit_bean_load();

  // Fix Panels Edit Page on Browser Install.
  variable_set('page_manager_node_edit_disabled', 0);
  menu_rebuild();
}
