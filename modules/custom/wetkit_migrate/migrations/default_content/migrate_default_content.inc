<?php
/**
 * @file
 * migrate_default_content.inc
 */

/**
 * Abstract Migration class for Default Content for the Web Experience Toolkit.
 */
abstract class WetKitDCMigration extends XMLMigration {

  /**
   * ProcessImport for WetKit Migration.
   *
   * @param array $options
   *   Process the import array.
   */
  public function processImport(array $options = array()) {
    parent::processImport($options = array());
    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // in each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);
  }
}

/**
 * Migration class for the Default Content for the Web Experience Toolkit
 */
class WetKitMigrateDefaultContent extends WetKitDCMigration {

  /**
   * Implements the migration constructor.
   */
  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('WetKit', array('default')));

    $this->description = t('Migrate the WET-BOEW default content into the Web Experience Toolkit');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationMenu::getKeySchema()
    );

    // Source fields available in the XML file.
    $fields = array(
      'id' => t('Source id'),
      'title' => t('Title'),
      'body' => t('Description'),
    );

    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_migrate') . '/migrations/default_content';
    $items_url = $xml_folder . '/migrate_default_content.xml';
    $item_xpath = '/default_content/*/content';
    $item_id_xpath = 'source_id';

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_id_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationNode('wetkit_page');

    // Main Fields.
    $this->addFieldMapping('title', 'title')
        ->xpath('title');
    $this->addFieldMapping('body', 'body')
        ->arguments(array('format' => 'wetkit_wysiwyg_text'))
        ->xpath('body');
    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('status')
        ->defaultValue(1);
    $this->addFieldMapping('path', 'path')
        ->xpath('path');
    $this->addFieldMapping('language', 'language');

    // Extra Fields.
    $this->addFieldMapping('field_featured_image', 'images')
        ->xpath('image');
    $this->addFieldMapping('field_featured_image:alt', 'image_alt')
        ->xpath('image_alt');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'wetkit_migrate') . '/migrations/default_content/images');

    // Unmapped destination fields.
    $this->addUnmigratedDestinations(array(
      'is_new',
      'promote',
      'revision',
      'sticky',
      'created',
      'changed',
      'revision_uid',
    ));
  }

  /**
   * Prepare and modify the source rows.
   *
   * @param array $row
   *   Row to import for the migration.
   */
  public function prepareRow($row) {
    // Set the Language.
    $lang = (preg_match("/eng/i", $row->sourceid)) ? 'en' : 'fr';
    $row->language = $lang;
    $xmlobject = $row->xml;
  }

  /**
   * Perform additional tasks after the initial import.
   */
  public function postImport() {
    parent::postImport();
    // i18n Translation Set.
    $result = db_query('SELECT n.sourceid1, n.destid1
      FROM {migrate_map_wetkitmigratedefaultcontent} n');
    foreach ($result as $record) {
      $sourceid_tmp = preg_replace('#_fra_#', '_eng_', $record->sourceid1);
      if (preg_match('/_fra_/i', $record->sourceid1)) {
        $source_nid = 0;
        $translated_nid = 0;
        $result = db_query('SELECT n.destid1
          FROM {migrate_map_wetkitmigratedefaultcontent} n WHERE n.sourceid1 = :sourceid', array(':sourceid' => $record->sourceid1));
        foreach ($result as $result_row) {
          $translated_nid = $result_row->destid1;
          $result = db_query('SELECT n.destid1
          FROM {migrate_map_wetkitmigratedefaultcontent} n WHERE n.sourceid1 = :sourceid', array(':sourceid' => $sourceid_tmp));
          foreach ($result as $result_row) {
            $source_nid = $result_row->destid1;
            break;
          }
          break;
        }
        if (($source_nid != 0) && ($translated_nid != 0)) {
          db_query('UPDATE {node} SET tnid = :tnid WHERE nid = :nid',
              array(':tnid' => $source_nid, ':nid' => $source_nid));
          db_query('UPDATE {node} SET tnid = :tnid WHERE nid = :nid',
              array(':tnid' => $source_nid, ':nid' => $translated_nid));
        }
      }
    }
  }
}
