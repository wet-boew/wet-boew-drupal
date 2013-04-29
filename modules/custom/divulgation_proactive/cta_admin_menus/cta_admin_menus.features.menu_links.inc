<?php
/**
 * @file
 * cta_admin_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cta_admin_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin
  $menu_links['management:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
  );
  // Exported menu link: management:admin/content/disclosures/all
  $menu_links['management:admin/content/disclosures/all'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/disclosures/all',
    'router_path' => 'admin/content',
    'link_title' => 'PD Admin',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/content/disclosures/contracts
  $menu_links['management:admin/content/disclosures/contracts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/disclosures/contracts',
    'router_path' => 'admin/content',
    'link_title' => 'Contracts',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:admin/content/disclosures/contracts-editors
  $menu_links['management:admin/content/disclosures/contracts-editors'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/disclosures/contracts-editors',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Contracts',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:admin/content/disclosures/reclassifies
  $menu_links['management:admin/content/disclosures/reclassifies'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/disclosures/reclassifies',
    'router_path' => 'admin/content',
    'link_title' => 'Reclassification',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:admin/content/disclosures/travel
  $menu_links['management:admin/content/disclosures/travel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/disclosures/travel',
    'router_path' => 'admin/content',
    'link_title' => 'Travel',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:admin/content/rulings/members
  $menu_links['management:admin/content/rulings/members'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/rulings/members',
    'router_path' => 'admin/content/rulings/members',
    'link_title' => 'Manage Members',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'admin/content/rulings/manage',
  );
  // Exported menu link: management:admin/structure/taxonomy/member/add
  $menu_links['management:admin/structure/taxonomy/member/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy/member/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add a Member',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:node/add/pd-contract
  $menu_links['management:node/add/pd-contract'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pd-contract',
    'router_path' => 'node/add/pd-contract',
    'link_title' => 'Add Contract Expense',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:node/add/pd-hospitality
  $menu_links['management:node/add/pd-hospitality'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pd-hospitality',
    'router_path' => 'node/add/pd-hospitality',
    'link_title' => 'Add Hospitality Expense',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:node/add/pd-reclassification
  $menu_links['management:node/add/pd-reclassification'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pd-reclassification',
    'router_path' => 'node/add/pd-reclassification',
    'link_title' => 'Add a Reclassification',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Exported menu link: management:node/add/pd-travel
  $menu_links['management:node/add/pd-travel'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/pd-travel',
    'router_path' => 'node/add/pd-travel',
    'link_title' => 'Add Travel Expense',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'admin/content/disclosures/all',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Contract Expense');
  t('Add Hospitality Expense');
  t('Add Travel Expense');
  t('Add a Member');
  t('Add a Reclassification');
  t('Administration');
  t('Contracts');
  t('Manage Contracts');
  t('Manage Members');
  t('PD Admin');
  t('Reclassification');
  t('Travel');


  return $menu_links;
}
