<?php
/**
 * @file
 * migrate_wetkit_menu.inc
 */

/**
 * Migration class for the WetKit. 
 */
class WetKitMigrateMegaMenu extends XMLMigration {

  /**
   * Constructor.
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate the WetKit MegaMenu');

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

    $fields = array(
      'menu_name' => t('The Menu Name'),
      'title' => t('The human-readable name of the menu.'),
      'description' => t('A description of the menu'),
      'i18n_mode' => t('The i18n mode of the menu'),
    );

    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_menu') . '/import/';
    $items_url = $xml_folder . 'migrate_menu.xml';
    $item_xpath = '/menu_handler/menu/*/section';
    $item_id_xpath = 'source_id';

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_id_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationMenu();

    $this->addFieldMapping('i18n_mode', 'i18n_mode')
        ->defaultValue(5);
    $this->addFieldMapping('menu_name', 'menu_name')
        ->xpath('menu_name');
    $this->addFieldMapping('title', 'title')
        ->xpath('title');
    $this->addFieldMapping('description', 'description')
        ->xpath('description');
  }
}

/**
 * Migration class for the About Us module (Menus) on the Statcan website. 
 */
class WetKitMigrateMegaMenuLinks extends XMLMigration {

  /**
   * Constructor.
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate the WetKit Menu Links');
    $this->dependencies = array('WetKitMigrateMegaMenu');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sourceid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationMenuLinks::getKeySchema()
    );

    $fields = array(
      'menu_name' => t('The menu name. All links with the same menu name (such as \'navigation\') are part of the same menu.'),
      'mlid' => t('The menu link ID (mlid) is the integer primary key.'),
      'plid' => t('The parent link ID (plid) is the mlid of the link above in the hierarchy, or zero if the link is at the top level in its menu.'),
      'link_path' => t('The Drupal path or external path this link points to.'),
      'router_path' => t('For links corresponding to a Drupal path (external = 0), this connects the link to a {menu_router}.path for joins.'),
      'link_title' => t('The text displayed for the link, which may be modified by a title callback stored in {menu_router}.'),
      'options' => t('A serialized array of options to be passed to the url() or l() function, such as a query string or HTML attributes.'),
      'module' => t('The name of the module that generated this link.'),
      'external' => t('A flag to indicate if the link points to a full URL starting with a protocol, like http:// (1 = external, 0 = internal).'),
      'has_children' => t('Flag indicating whether any links have this link as a parent (1 = children exist, 0 = no children).'),
      'expanded' => t('Flag for whether this link should be rendered as expanded in menus - expanded links always have their child links displayed, instead of only when the link is in the active trail (1 = expanded, 0 = not expanded)'),
      'weight' => t('Link weight among links in the same menu at the same depth.'),
      'depth' => t('The depth relative to the top level. A link with plid == 0 will have depth == 1.'),
      'customized' => t('A flag to indicate that the user has manually created or edited the link (1 = customized, 0 = not customized).'),
      'language' => t('The language of the menu'),
    );

    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'wetkit_menu') . '/import/';
    $items_url = $xml_folder . 'migrate_menu.xml';
    $item_xpath = '/menu_handler/menu_links/*/section';
    $item_id_xpath = 'source_id';

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_id_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationMenuLinks();

    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('link_title', 'link_title')
        ->xpath('link_title');
    $this->addFieldMapping('link_path', 'link_path');
    $this->addFieldMapping('menu_name', 'menu_name')
         ->xpath('menu_name');
    $this->addFieldMapping('external', 'external')
        ->xpath('external');
    $this->addFieldMapping('options', 'options');
    $this->addFieldMapping('mlid', 'mlid');
    $this->addFieldMapping('weight', 'weight')
        ->xpath('weight');
    $this->addFieldMapping('customized', 'customized')
        ->defaultValue(1);
    $this->addFieldMapping('plid', 'plid');
  }

  /**
   * PrepareRow for the migration.
   */
  public function prepareRow($row) {
    // Set the Language.
    $lang = (preg_match("/eng/i", $row->sourceid)) ? 'en' : 'fr';
    $row->language = $lang;
    $xmlobj = $row->xml;

    // Set the Path.
    if (!isset($xmlobj->external)) {
      $link_path = strip_tags($xmlobj->link_path->asXML());
      if ($link_path == 'group') {
        $row->link_path = '<group>';
      }
      elseif ($link_path == 'front') {
        $row->link_path = '<front>';
      }
      elseif ($link_path == 'nolink') {
        $row->link_path = '<nolink>';
      }
      elseif ($link_path == 'separator') {
        $row->link_path = '<separator>';
      }
      elseif ($link_path == 'user') {
        $row->link_path = 'user';
      }
      else {
        $path = drupal_lookup_path('source', $link_path, $lang);
        if (!empty($path)) {
	        $row->link_path = $path;
        }
        else {
	        $row->link_path = $link_path;
        }
      }
    }
    else {
      $row->link_path = strip_tags($xmlobj->link_path->asXML());
      $row->external = 1;
    }

    // The mlid to parse.
    if (isset($xmlobj->mlid)) {
      $row->mlid = '2000';
    }

    // Set the Options.
    $options = array();
    $options += array(
      'attributes' => array(
        'title' => NULL,
      ),
    );

    // MiniPanel.
    if (isset($xmlobj->minipanel)) {
      $options += array(
        'minipanel' => strip_tags($xmlobj->minipanel->asXML()),
      );
    }

    $row->options = $options;

    // Set the Parent Menu.
    if (isset($xmlobj->parent)) {
      $result = db_query('SELECT n.destid1
            FROM {migrate_map_wetkitmigratemegamenulinks} n WHERE n.sourceid1 = :sourceid', array(':sourceid' => strip_tags($xmlobj->parent->asXML())));
      foreach ($result as $result_row) {
        $row->plid = $result_row->destid1;
      }
    }
  }

  /**
   * Post Import for the migration.
   */
  public function postImport() {
    parent::postImport();

    // i18n Translation Set.
    $result = db_query('SELECT n.sourceid1, n.destid1
      FROM {migrate_map_wetkitmigratemegamenulinks} n');
    foreach ($result as $record) {
      $sourceid_tmp = preg_replace('#_fra_#', '_eng_', $record->sourceid1);
      $source_mlid = 0;
      $translated_mlid = 0;
      if (preg_match('/_fra_/i', $record->sourceid1)) {
        $result = db_query('SELECT n.destid1
          FROM {migrate_map_wetkitmigratemegamenulinks} n WHERE n.sourceid1 = :sourceid', array(':sourceid' => $record->sourceid1));
        foreach ($result as $result_row) {
          $translated_mlid = $result_row->destid1;
          $result = db_query('SELECT n.destid1
          FROM {migrate_map_wetkitmigratemegamenulinks} n WHERE n.sourceid1 = :sourceid', array(':sourceid' => $sourceid_tmp));
          foreach ($result as $result_row) {
            $source_mlid = $result_row->destid1;
            break;
          }
          break;
        }
        if (($source_mlid != 0) && ($translated_mlid != 0)) {
          $translation_set = i18n_translation_set_create('menu_link');
          $translation_set->reset_translations();
          $item = menu_link_load($source_mlid);
          $translation_set->add_item($item, 'en');
          $item = menu_link_load($translated_mlid);
          $translation_set->add_item($item, 'fr');
          $translation_set->save(TRUE);
        }
      }
    }
  }
}
