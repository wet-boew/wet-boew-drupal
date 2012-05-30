<?php

/**
 * @file
 * Advanced migration examples. These serve two purposes:
 *
 */


/**
 * Class for HTML Migration.
 */
class HTML_DOCUMENTATIONMigration extends Migration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Data migration from static html.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $fields = array(
      'title' => t('Title'),
      'body' => t('Body'),
      'language' => t('Language'),
    );

    $list_url = array(DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_migrate') . '/html/documentation', );
    $base_dir = DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_migrate');

    $this->source = new MigrateSourceList(new MigrateListFiles($list_url, $base_dir, '/(.*\.htm$|.*\.html$)/i'),
      new MigrateItemFile($base_dir), $fields);
    $this->destination = new MigrateDestinationNode('documentation');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('status', 'status')
        ->defaultValue(1);
    $this->addFieldMapping('path', 'path')
        ->defaultValue(1);
    $this->addFieldMapping('body', 'body')
        ->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('pathauto')
        ->defaultValue(FALSE);
  }

  public function prepareRow($row) {
    require_once drupal_get_path('module', 'querypath') . '/QueryPath/QueryPath.php';
    $language_val = htmlqp($row->filedata)->find('meta[name*="dcterms.language"]')->attr('content');
    if ($language_val == 'eng') {
      $language_val = 'en';
    }
    elseif ($language_val == 'fra') {
      $language_val = 'fr';
    }

    //$row->filedata = mb_convert_encoding($row->filedata, 'utf-8', 'iso-8859-1');
    $row->title = htmlqp($row->filedata)->find('#cn-centre-col-inner h1#cn-cont')->text();
    $text_body = htmlqp($row->filedata)->find('#cn-centre-col-inner');

    //Remove DOM Elements
    $text_body->branch('h1#cn-cont')->remove();
    $text_body->branch('#cn-doc-dates')->remove();
    $text_body->attr('id', 'documentation');

    //Branch Query
    $branch_query = $text_body->branch('img[src^="images/"]');
    foreach ($branch_query as $item) {
      $string_temp = $item->attr('src');
      //$string_temp2 = '/' . variable_get('file_public_path', conf_path() . '/files/images/') . _wetkit_migrate_fixLink($row->sourceid)  . '/' . $string_temp;
      $string_temp2 = '/' . drupal_get_path('module', 'wetkit_migrate') . '/html/documentation/images/' . _wetkit_migrate_fixLink($row->sourceid) . '/' . $string_temp;
      $item->attr('src', $string_temp2);
    }
    //Branch Query2
    $branch_query = $text_body->branch('img[src^="mdl/"]');
    foreach ($branch_query as $item) {
      $string_temp = $item->attr('src');
      //$string_temp2 = '/' . variable_get('file_public_path', conf_path() . '/files/images/') . _wetkit_migrate_fixLink($row->sourceid)  . '/' . $string_temp;
      $string_temp2 = '/' . drupal_get_path('module', 'wetkit_migrate') . '/html/documentation/images/' . _wetkit_migrate_fixLink($row->sourceid) . '/' . $string_temp;
      $item->attr('src', $string_temp2);
    }
    //Branch Query3
    $branch_query2 = $text_body->branch('img[src^="../../../../../"]');
    foreach ($branch_query2 as $item) {
      $string_temp = $item->attr('src');
      //$string_temp2 = '/' . variable_get('file_public_path', conf_path() . '/files/images/') . _wetkit_migrate_fixLink($row->sourceid)  . '/' . substr($string_temp, 15);
      $string_temp2 = '/' . drupal_get_path('module', 'wetkit_migrate') . '/html/documentation/images/' . _wetkit_migrate_fixLink($row->sourceid) . '/' . drupal_substr($string_temp, 15);
      $item->attr('src', $string_temp2);
    }
    //Assignments
    $row->body = $text_body->html();
    $row->language = $language_val;
    $row->path = _wetkit_migrate_fixPath($row->sourceid);
  }

  public function postImport() {
    //Generate The Menu
    //CSS StyleGuide
    //$mlid = _wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css-e', 'CSS Styles', NULL, 'menu-documentation', 0, 'en', 1, 0);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css/snpsht-eng', 'CSS snapshot', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css/bscs-eng', 'Basic Styles', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css/grds-eng', 'Grids', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css/spclt-eng', 'Speciality effects', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/css/mdl-eng', 'Modules', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //Default Design
    //$mlid = _wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/dflt-e', 'Default Design', NULL, 'menu-documentation', 0, 'en', 1, 0);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/dflt/pprnc-eng', 'Default appearance of elements', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
    //_wetkit_migrate_add_custom_menu_item_depth('documentation/styleguide/dflt/clr-eng', 'Default colour scheme', NULL, 'menu-documentation', 0, 'en', 0, $mlid);
  }
  public function postRollback() {
    parent::postRollback();
    //_wetkit_migrate_delete_menu_docs('menu-documentation');
  }
}
