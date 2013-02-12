<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal,
 * often used as an alternative to directly editing or adding code to templates.
 * Its worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE:
 * http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "wetkit_adaptivetheme" to match
 *    your subthemes name, for example, if your theme name is "footheme" then
 *    the function name will be "footheme_preprocess_hook". Tip - you can
 *    search/replace on "wetkit_adaptivetheme".
 * 2. Uncomment the required function to use.
 */

$path_to_wetkit_theme = drupal_get_path('theme', 'wetkit_adaptivetheme');

require_once $path_to_wetkit_theme . '/templates/inc/template-preprocess.inc';
require_once $path_to_wetkit_theme . '/templates/inc/template-process.inc';
require_once $path_to_wetkit_theme . '/templates/inc/template-theme-links.inc';
require_once $path_to_wetkit_theme . '/templates/inc/template-menu-blocks.inc';
require_once $path_to_wetkit_theme . '/templates/inc/template-breadcrumb.inc';
