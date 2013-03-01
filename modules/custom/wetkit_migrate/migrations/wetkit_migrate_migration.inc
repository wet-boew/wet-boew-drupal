<?php
/**
 * @file
 * wetkit_migrate_migration.inc
 */

/**
 * This Migration class will transfer content of an HTML page into Drupal
 */
abstract class WetKitMigration extends Migration {

  /**
   * Default class constructor.
   */
  public function __construct() {
    // Always call the parent constructor first for basic setup.
    parent::__construct();

    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default
    // the list in shared class; it can be overridden for specific migrations.
    $this->team = array(
      new MigrateTeamMember('Robert Turnbull', 'robert.turnbull@uottawa.ca', t('Web Developer')),
      new MigrateTeamMember('Gordon Guest', 'gordon.guest@statcan.gc.ca', t('Web Developer')),
      new MigrateTeamMember('Ross Thompson', 'ross.thompson@statcan.gc.ca', t('Web Developer')),
      new MigrateTeamMember('William Hearn', 'william.hearn@statcan.gc.ca', t('Web Developer')),
    );
  }

  /**
   * By default populate the data source row with fields parsed from the HTML.
   *
   * @param array $row
   *   The prepared row that will be modified.
   */
  public function prepareRow($row) {

    // Set to admin for now.
    $row->uid = 1;

    // Create a WetKit HTML Migration Page object. This object takes care of
    // parsing the raw html content.
    if (isset($this->elements_to_remove)) {
      $htmlpage = new WetKitMigrationhtmlpage($row, $this->elements_to_remove);
    }
    else {
      $htmlpage = new WetKitMigrationhtmlpage($row);
    }

    // Set some source fields.
    $row->body = $htmlpage->body;

    // If the body is empty, don't import this row.
    if (strlen(trim($row->body)) == 0) {
      return FALSE;
    }

    $row->title = $htmlpage->title;

    // If the title is empty, don't import this row.
    if (strlen(trim($row->title)) == 0) {
      return FALSE;
    }

    // Set the boolean for whether single or multiple columns.
    $row->columns = $htmlpage->columns;

    // Set the language of the content.
    $row->language = $htmlpage->language;

    // Set the status of the content to published.
    // The node status is 1 for published and 0 for unpublished.
    $row->status = 1;

    // The page promotion to front page flag.
    // 1 for promoted, 0 for not promoted.
    $row->promotion = 0;

    // Set the datestamp the value from the meta tag.
    $row->datestamp = $htmlpage->datestamp;

    // Set up the path - use the file path, but strip away the .htm or .html.
    $row->path = trim($row->sourceid, '\\/');
    $pathstats = pathinfo($row->path);
    $row->dirname = $pathstats['dirname'];
    $row->path = $pathstats['dirname'] . '/' . $pathstats['filename'];
    $row->sourceuri  = substr($row->path, 0, strlen($row->path) - 4);

    // Set up the TNID (the translated node id). To set the TNID, just ensure
    // that every node in the translation set uses the same node ID in the TNID
    // field. To do this, check to see if any other node has the same URI. If it
    // exists then set the TNID of the current row to the Node ID of the
    // matching node.
    $row->tnid = 0;
    $result = db_query('SELECT n.entity_id
      FROM {field_data_field_uri} n WHERE n.field_uri_value = :source_uri', array(':source_uri' => $row->sourceuri));
    foreach ($result as $result_row) {
      $row->tnid = $result_row->entity_id;
      break;
    }
    // If the TNID was set, it is also necessary to update the TNID field in the
    // matching node.
    if ($row->tnid != 0) {
      db_query('UPDATE {node} SET tnid = :tnid WHERE nid = :nid',
          array(':tnid' => $row->tnid, ':nid' => $row->tnid));
    }

    return TRUE;
  }

  /**
   * Perform a common initialization of the migration process.
   *
   * @param array $list_dirs
   *   This is an array containg a list of directories to be scanned
   * @param array $base_dir
   *   The base dir is the part of the path that will be excluded when making an
   *   ID for each file.
   * @param array $file_mask
   *   Passed on and used to filter for certain types of files. Use a regular
   *   expression.
   */
  public function initCommon($list_dirs, $base_dir, $file_mask) {

    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'sourceid' => array(
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
          ),
        ),
        MigrateDestinationNode::getKeySchema()
      );

    // The source fields.
    $fields = array(
      'title' => t('Title'),
      'body' => t('Body'),
      'uid' => t('User id'),
      'sourceuri' => t('Source URI'),
      'language' => t('Language'),
      'path' => t('URL Path Alias'),
      'tnid' => t('Translation set node ID'),
      'status' => t('Publication status'),
      'promotion' => t('Promotion to front page flag'),
      'datestamp' => t('The date and time from the Date meta tag'),
      'wetkit_term' => t('A taxonomy field for the migration classification'),
      'columns' => t('Whether the column should be set as either single or multiple'),
    );

    // Create a file source.
    $list_files = new MigrateListFiles($list_dirs, $base_dir, $file_mask);
    $item_file = new MigrateItemFile($base_dir);
    $this->source = new MigrateSourceList($list_files, $item_file, $fields);

    // Set the destination.
    $this->destination = new MigrateDestinationNode('wetkit_documentation');
  }

  /**
   * Perform a generic mapping of migration source to destination fields.
   */
  public function mapCommonFields() {

    // Map the fields from the source to the new node.
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body')
      ->arguments(array('format' => 'wetkit_wysiwyg_text'));
    $this->addFieldMapping('field_uri', 'sourceuri');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('path', 'path');
    $this->addFieldMapping('tnid', 'tnid');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('promote', 'promotion');
    $this->addFieldMapping('created', 'datestamp');
    $this->addFieldMapping('changed', 'datestamp');
    $this->addFieldMapping('comment')->defaultValue(FALSE);

    // Indicate which fields are explictly ignored.
    $this->addUnmigratedDestinations(array(
      'sticky',
      'revision',
      'log',
      'revision_uid',
      'is_new',
      'body:summary',
      'body:format',
      'body:language',
      'field_featured_categories:source_type',
      'field_featured_categories:create_term',
      'field_uri:format',
      'field_uri:language',
    ));
  }

  /**
   * Check to see if a migrated file is in a folder that is to be ignored.
   *
   * @param string $var_name
   *   Drupal Variable name that contains the colon-separated list of \
   *   directories to ignore.
   *
   * @return bool
   *   Return whether a file or folder should be ignored.
   */
  public function isIgnored($var_name, $file_path) {
    $isssi = FALSE;
    $ssi_dir_var = variable_get($var_name);
    $ssi_dirs = explode(":", $ssi_dir_var);
    foreach ($ssi_dirs as $ssi_dir) {
      $ssi_dir = trim($ssi_dir);
      $path_info = pathinfo($file_path);
      if (strcasecmp($ssi_dir, $path_info['dirname']) == 0) {
        $isssi = TRUE;
      }
    }
    return $isssi;
  }

  /**
   * This function is called after the migrated content node has been created.
   *
   * @param array $node
   *   The node object.
   * @param array $current_row
   *   The current row of the migration.
   */
  public function complete($node, $current_row) {

  }

}
