<?php

/**
 * @file
 * Advanced migration examples. These serve two purposes:
 *
 */

/**
 * Class for XML Mult file.
 */
class XML_Default_ContentMigration extends XMLMigration {

  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('wetkit'));
    $this->description = t('XML Import of Default Content for the Web Experience Toolkit');
    $this->team = array(
      new MigrateTeamMember('William Hearn', 'william.hearn@statcan.gc.ca', t('Administrator')),
    );
    $this->issuePattern = 'http://drupal.org/node/:id:';
    // There isn't a consistent way to automatically identify appropriate "fields"
    // from an XML feed, so we pass an explicit list of source fields
    $fields = array(
      'name' => t('Document name'),
      'description' => t('Description of document'),
      'authorid' => t('UID of the author'),
    );

    // The source ID here is the one retrieved from each data item in the XML file, and
    // used to identify specific items
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array(
          'type' => 'varchar',
          'length' => 25,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    // This can also be an URL instead of a file path.
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_migrate') . '/xml/';
    $list_url = $xml_folder . 'default_content.xml';
    // Each ID retrieved from the list URL will be plugged into :id in the
    // item URL to fetch the specific objects.
    $item_url = $xml_folder . 'default_content/' . ':id.xml';
    // We use the MigrateSourceList class for any source where we obtain the list
    // of IDs to process separately from the data for each item. The listing
    // and item are represented by separate classes, so for example we could
    // replace the XML listing with a file directory listing, or the XML item
    // with a JSON item.
    $this->source = new MigrateSourceList(new MigrateListXML($list_url),
      new MigrateItemXML($item_url), $fields);

    $this->destination = new MigrateDestinationNode('article', array('text_format' => 'full_html'));

    $this->addFieldMapping('title', 'name')
        ->xpath('name');
    $this->addFieldMapping('uid', 'authorid')
        ->xpath('authorid')
        ->defaultValue(1);
    $this->addFieldMapping('language', 'langcode')
        ->xpath('langcode');
    $this->addFieldMapping('status', 'status')
        ->defaultValue(1);
    $this->addFieldMapping('path', 'path')
        ->xpath('path');
    $this->addFieldMapping('body', 'description')
        ->xpath('description')
        ->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('pathauto')
        ->defaultValue(FALSE);
  }

  public function postImport() {
    //Fix Translation ID
    $result = db_query("SELECT destid1 FROM {migrate_map_xml_default_content}");
    $currentRowCount = 0;
    $current_translateid = 0;
    foreach ($result as $record) {
      if ($currentRowCount % 2 == 0) {
        db_query('UPDATE {node} SET tnid = :tnid WHERE nid = :nid',
            array( ':tnid' => $record->destid1, ':nid' => $record->destid1));
        $current_translateid = $record->destid1;
      }
      else {
        db_query('UPDATE {node} SET tnid = :tnid WHERE nid = :nid',
            array( ':tnid' => $current_translateid, ':nid' => $record->destid1));
      }
      $currentRowCount++;
    }
  }
}