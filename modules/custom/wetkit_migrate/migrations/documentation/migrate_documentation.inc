<?php
/**
 * @file
 * migrate_documentation.inc
 */

/**
 * Migration class for the WET-BOEW docs on the Web Experience Toolkit website.
 */
class WetKitMigrateDocumentation extends WetKitMigration {

  /**
   * Implements the migration constructor.
   */
  public function __construct() {
    parent::__construct();

    // Human-friendly description of your migration process.
    $this->description = t('Migrate the WET-BOEW documentation from the Web Experience Toolkit');

    // Array of directory paths that will be scanned for files.
    $list_dirs = array(variable_get('WetKitMigrateDocumentation_listdir'));

    // The base dir is the part of the path that will be excluded when making
    // an ID for each file.
    $base_dir = variable_get('WetKitMigrateDocumentation_basedir');

    // Passed on and used to filter for certain types of files. Use a regular
    // expression.
    $file_mask = '/(.*\.htm$|.*\.html$)/i';

    parent::initCommon($list_dirs, $base_dir, $file_mask);

    parent::mapCommonFields();

    $this->addFieldMapping('field_column', 'columns');
    $this->addFieldMapping('field_featured_categories', 'wetkit_term');
  }

  /**
   * Process the file prior to the actual migration.
   *
   * @param array $row
   *   Row to import for the migration.
   */
  public function prepareRow($row) {

    // Check to see if this an SSI file - it so, do not migrate.
    if (parent::isIgnored('WetKitMigrateDocumentation_ignore_dirs', $row->sourceid)) {
      return FALSE;
    }

    // Array of DOM Elements to remove calls a Querypath Removal Function.
    $this->elements_to_remove = array(
      'removeDOMElements' => array(
        '0' => '#base-date-mod',
        '1' => '#gcwu-date-mod',
      ),
    );

    $rc = parent::prepareRow($row);

    // If the parent preparation failed, then abort this row.
    if ($rc == FALSE) {
      return $rc;
    }

    // Process all of the internal links
    // Coder Review says to use drupal_substr but this is faster.
    if (substr($row->dirname, 0, 6) == 'demos/') {
      $dirname = substr($row->dirname, 6);
    }

    $link_parser = new LinksParser($row->body, variable_get('WetKitMigrateDocumentation_files'), $dirname);

    // Paste the new body text.
    $row->body = $link_parser->process();
  }

  /**
   * Call this function after the node has been created.
   *
   * @param object $node
   *   The node the migration is based on.
   * @param array $current_row
   *   The current row being parsed.
   */
  public function complete($node, $current_row) {
    parent::complete($node, $current_row);
  }

}
