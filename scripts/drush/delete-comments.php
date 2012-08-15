<?php
// Custom PHP script to delete comments made by a user id
// Usage: drush php-script --script-path=locationofthisfile delete-comments

$uid = 100; // The user id (uid). Set this to the uid of the user whose comments you want to delete.

$result = db_select('comment', 'c')
  ->fields('c', array('cid'))
  ->condition('uid', $uid)
  ->execute();

$counter = 0;
foreach ($result as $record) {
  comment_delete($record['cid']);
  $counter++;
}

print "Deleted " . $counter . " comments.";
