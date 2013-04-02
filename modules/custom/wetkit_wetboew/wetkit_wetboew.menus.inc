<?php
/**
 * @file
 * wetkit_wetboew.features.menu_custom.inc
 */

/**
 * Implements _wetkit_wetboew_menu_load().
 */
function _wetkit_wetboew_menu_load() {
  // Menus Helpers.
  _wetkit_wetboew_menu_header_load();
  _wetkit_wetboew_menu_terms_load();
  _wetkit_wetboew_menu_midfooter_load();
  _wetkit_wetboew_menu_footer_load();

  // Clears all menu caches.
  menu_cache_clear_all();
}

/**
 * Implements _wetkit_wetboew_menu_header_load().
 */
function _wetkit_wetboew_menu_header_load() {
  /* Header Navigation */
  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/home.html', 'Canada.gc.ca', NULL, 'menu-wet-header', 0, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/accueil.html', 'Canada.gc.ca', NULL, 'menu-wet-header', 0, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.servicecanada.gc.ca/eng/home.shtml', 'Services', NULL, 'menu-wet-header', 1, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.servicecanada.gc.ca/fra/accueil.shtml', 'Services', NULL, 'menu-wet-header', 1, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/depts/major/depind-eng.html', 'Departments', NULL, 'menu-wet-header', 2, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/depts/major/depind-fra.html', 'Ministères', NULL, 'menu-wet-header', 2, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);
}

/**
 * Implements _wetkit_wetboew_menu_terms_load().
 */
function _wetkit_wetboew_menu_terms_load() {
  /* Terms and Transparency Navigation */
  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Terms and Conditions', NULL, 'menu-wet-terms', 0, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Avis', NULL, 'menu-wet-terms', 0, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Transparency', NULL, 'menu-wet-terms', 1, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Transparence', NULL, 'menu-wet-terms', 1, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);
}

/**
 * Implements _wetkit_wetboew_menu_midfooter_load().
 */
function _wetkit_wetboew_menu_midfooter_load() {
  /* Mid Footer Navigation */
  $source_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'About Us', NULL, 'menu-wet-mid-footer', 0, 'en');
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'À propos de nous', NULL, 'menu-wet-mid-footer', 0, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Our Mandate', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Notre mandat', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Our Minister', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Le ministre', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'News', NULL, 'menu-wet-mid-footer', 1, 'en');
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Média', NULL, 'menu-wet-mid-footer', 1, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'News Releases', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Communiqués', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Media Advisories', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Avis aux médias', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Multimedia', NULL, 'menu-wet-mid-footer', 2, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Multimedia', NULL, 'menu-wet-mid-footer', 2, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Contact Us', NULL, 'menu-wet-mid-footer', 2, 'en');
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Contactez-nous', NULL, 'menu-wet-mid-footer', 2, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Phone Numbers', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Numéros de téléphone', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Find an Employee', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Trouvez un(e) employé(e)', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Stay Connected', NULL, 'menu-wet-mid-footer', 3, 'en');
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Restez branchés', NULL, 'menu-wet-mid-footer', 3, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Youtube', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Youtube', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Twitter', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Twitter', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('<front>', 'Feeds', NULL, 'menu-wet-mid-footer', 2, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _wetkit_wetboew_custom_menu('<front>', 'Fils de nouvelles', NULL, 'menu-wet-mid-footer', 2, 'fr', 0, $translated_menu_item_depth);
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);
}

/**
 * Implements _wetkit_wetboew_menu_footer_load().
 */
function _wetkit_wetboew_menu_footer_load() {
  /* Footer Navigation */
  $source_menu_item = _wetkit_wetboew_custom_menu('http://healthycanadians.gc.ca/index-eng.php', 'Health', 'healthycanadians.gc.ca', 'menu-wet-footer', 0, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://canadiensensante.gc.ca/index-fra.php', 'Santé', 'canadiensensante.gc.ca', 'menu-wet-footer', 0, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.voyage.gc.ca/index-eng.asp', 'Travel', 'travel.gc.ca', 'menu-wet-footer', 1, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://voyage.gc.ca/index-fra.asp', 'Voyage', 'voyage.gc.ca', 'menu-wet-footer', 1, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.servicecanada.gc.ca/eng/home.shtml', 'Service Canada', 'servicecanada.gc.ca', 'menu-wet-footer', 2, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.servicecanada.gc.ca/fra/accueil.shtml', 'Service Canada', 'servicecanada.gc.ca', 'menu-wet-footer', 2, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.jobbank.gc.ca/intro-eng.aspx', 'Jobs', 'jobbank.gc.ca', 'menu-wet-footer', 3, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.guichetemplois.gc.ca/Intro-fra.aspx', 'Emplois', 'guichetemplois.gc.ca', 'menu-wet-footer', 3, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://actionplan.gc.ca/en', 'Economy', 'actionplan.gc.ca', 'menu-wet-footer', 4, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.plandaction.gc.ca/fr', 'Économie', 'plandaction.gc.ca', 'menu-wet-footer', 4, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/home.html', 'Canada.gc.ca', NULL, 'menu-wet-footer', 5, 'en');
  $translated_menu_item = _wetkit_wetboew_custom_menu('http://www.canada.gc.ca/accueil.html', 'Canada.gc.ca', NULL, 'menu-wet-footer', 5, 'fr');
  _wetkit_wetboew_translation_sets($source_menu_item, $translated_menu_item);
}

/* HELPER FUNCTIONS */

/**
 * Implements _wetkit_wetboew_custom_menu().
 */
function _wetkit_wetboew_custom_menu($link, $title, $desc, $menu, $weight, $language, $mlid = 0, $plid = 0) {
  $options = array();
  if ($desc != NULL) {
    $options += array(
      'attributes' => array(
        'title' => $desc,
      ),
    );
  }
  $item = array(
    'link_path' => $link,
    'link_title' => $title,
    'menu_name' => $menu,
    'weight' => $weight,
    'language' => $language,
    'customized' => 1,
    'options' => $options,
    'mlid' => $mlid,
    'plid' => $plid,
  );
  return menu_link_save($item);
}

/**
 * Implements _wetkit_wetboew_menu_attributes().
 */
function _wetkit_wetboew_menu_attributes($link, $title, $desc, $rel, $class, $menu, $weight, $language, $mlid = 0, $plid = 0) {
  $options = array();
  if ($desc != NULL) {
    $options += array(
      'attributes' => array(
        'title' => $desc,
      ),
    );
  }
  if ($rel != NULL) {
    $options += array(
      'attributes' => array(
        'rel' => $rel,
      ),
    );
  }
  if ($class != NULL) {
    $options += array(
      'attributes' => array(
        'class' => $class,
      ),
    );
  }
  $item = array(
    'link_path' => $link,
    'link_title' => $title,
    'menu_name' => $menu,
    'weight' => $weight,
    'language' => $language,
    'customized' => 1,
    'options' => $options,
    'mlid' => $mlid,
    'plid' => $plid,
  );
  return menu_link_save($item);
}

/**
 * Implements _add_custom_translation_set().
 */
function _wetkit_wetboew_translation_sets($source_mlid, $translated_mlid) {
  $translation_set = i18n_translation_set_create('menu_link');
  $translation_set->reset_translations();
  $item = menu_link_load($source_mlid);
  $translation_set->add_item($item, 'en');
  $item = menu_link_load($translated_mlid);
  $translation_set->add_item($item, 'fr');
  $translation_set->save(TRUE);
}
