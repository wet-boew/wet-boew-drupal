<?php

/**
 * Spit out the item list
 * 
 * TODO - is this the right way to create this output?
 */
$items = array();
foreach($element as $key => $value) {
  if (is_numeric($key)) {
    $items[] = $value['#markup'];
   }
}
print theme('item_list', array('items' => $items));
