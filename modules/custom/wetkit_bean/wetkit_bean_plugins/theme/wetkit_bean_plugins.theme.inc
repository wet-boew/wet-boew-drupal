<?php
/**
 * @file
 * Bean example plugin theme templates for article listing.
 */

/**
 * Define theme templates.
 */
function theme_wetkit_highlight_settings(&$variables) {
  return l($variables['text'], $variables['path'], array('attributes' => array('class' => array('more-link'))));
}
