<?php

/**
 * Get notes for referring_url/current url and
 * return as list including edit/delete etc...
 *
 * @param $variables -> contains:
 *             $variables['referring_url'] = url for notes
 *             $variables['notes'] = an array of all notes for referring url
 *             $variables['can_edit'] = a flag with permission to edit
 *             $variables['can_delete'] = a flag with permission to delete *
 * @TODO: Customize include better themeing for listing.
 */
function wetkit_adaptivetheme_stickynote_list($variables) {
  $output = '';
  // In this case, $result is a list of nodes returned from a database query.
  $list = array();
  $list['type'] = 'ol';
  $list['title'] = '';
  $list['attributes'] = array();
  $list['items'] = array();
  if (isset($variables['notes'])) {
    foreach($variables['notes'] as $key=>$note) {
      $item = '<span class="note-' . $key. '">';
      $item .= $note['data']['created']['data'] . ': ';
      $item .= $note['data']['note']['data'];
      if ($variables['can_edit']) {
        $item .= $note['data']['edit']['data'];
      }
      if ($variables['can_delete']) {
        $token = drupal_get_token($key);
       // $str = str_replace('delete_confirm', 'delete&token=' . $token, $note['data']['delete']['data']);
       // $item .= '<span class="sticknote-delete">' . $str . '</span>';
        $item .= $note['data']['delete']['data'];
      }
      $item .= '</span>';
      $list['items'][] = array('data' => $item, 'id' => 'note-' . $key);
    }
  }
  $output = theme_item_list($list);

  return $output;
}

/**
 * Return confirmation links for deletion
 *
 * @param $stickynote
 */
function wetkit_adaptivetheme_stickynote_confirm($variables) {
  $stickynote = $variables['stickynote'];
  $token = drupal_get_token($stickynote->snid);
  
  $output .= '<span id="confirm-delete-' . $stickynote->snid . '" style="text-align: left;">';
  $output .= 'Are you sure?&nbsp;';
  $output .= l(t('Delete'), 'stickynote/' . $stickynote->snid . '/delete', array(
    'attributes' => array('class' => array('use-ajax')),
    'query' => array('token' => $token),
  ));
  $output .= '&nbsp;&nbsp;&nbsp;&nbsp;';
  $output .= l(t('Cancel'), 'stickynote/' . $stickynote->snid . '/cancel', array(
    'attributes' => array('class' => array('use-ajax'))));
  $output .= '</span>';
  

  return $output;
}

