<?php

$plugin = array(
  'title' => t('Users'),
  'description' => t('This is a standard list of users that are available'),
  'content_types' => array('users'),
  'category' => t('Admin'),
  'all contexts' => TRUE,
  'single' => TRUE,
);

/**
  * Put the output for you users type in the blocks users.
  */
function wetkit_admin_users_content_type_render($subtype, $conf, $panel_args, $context) {
  $pane = new stdClass();
  $pane->title = t('Users');

  // Build the users
  $users = array();
  foreach (user_roles(TRUE) as $rid => $role) {
    // Do not show roles we dont care about
    if (!in_array($rid, array(1))) {
      $user_links = array();
      $user_count = ($rid == 2) ? db_query("SELECT count(*) FROM {users} WHERE uid > :uid", array(':uid' => 0))->fetchField() : db_query("SELECT count(*) FROM {users} u INNER JOIN {users_roles} r on u.uid = r.uid WHERE r.rid = :rid", array(':rid' => $rid))->fetchField();
      if (user_access('administer permissions')) {
        $user_links[] = array(
          'title' => t('Configure'),
          'href' => 'admin/people/permissions/' . $rid,
          'query' => array(),                         
        );
      }
      if (user_access('administer users')) {
        $user_links[] = array(
          'title' => t('Add new'),
          'href' => 'admin/people/create',
          'query' => array(),
        );
      }
      $user_links = (count($user_links)) ? theme('links__ctools_dropbutton', array('links' => $user_links, 'attributes' => array('class' => array('links', 'inline')))) : '';
      $users[] = '<div class="user-links-wrapper clearfix"><div class="user-links">' . $user_links . '</div><strong>' . ucwords(str_replace(' user', '', $role)) . '</strong><br /><em>' . format_plural($user_count, '1 user' , '@count users') . '</em></div>';
    }
  }
  $pane->content = theme('item_list', array('items' => $users));
  return $pane;
}
