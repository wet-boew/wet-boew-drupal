<?php
/**
 * @file
 * wetkit_wetboew.libraries.inc
 */

/**
 * Implements hook_libraries_info().
 */
function wetkit_wetboew_libraries_info() {
  // A very simple library. No changing APIs (hence, no versions), no variants.
  // Expected to be extracted into 'sites/all/libraries/wet-boew'.
  $libraries['wet-boew'] = array(
    'name' => 'WET-BOEW JS',
    'vendor url' => 'https://github.com/wet-boew/wet-boew',
    'download url' => 'https://github.com/wet-boew/wet-boew/downloads',
    'version' => '3.0',
    'files' => array(
      'css' => array(
        'dist/grids/css/util-ie-min.css' => array(
          'browsers' => array(
            'IE' => 'lte IE 8',
            '!IE' => FALSE,
          ),
          'group' => CSS_DEFAULT,
          'every_page' => TRUE,
          'preprocess' => FALSE,
          'weight' => 5,
        ),
        'dist/grids/css/util-min.css' => array(
          'browsers' => array(
            'IE' => 'gt IE 8',
            '!IE' => TRUE,
          ),
          'preprocess' => FALSE,
          'weight' => 5,
        ),
        'dist/js/css/pe-ap-ie-min.css' => array(
          'browsers' => array(
            'IE' => 'lte IE 8',
            '!IE' => FALSE,
          ),
          'group' => CSS_DEFAULT,
          'every_page' => TRUE,
          'preprocess' => FALSE,
          'weight' => 5,
        ),
        'dist/js/css/pe-ap-min.css' => array(
          'browsers' => array(
            'IE' => 'gt IE 8',
            '!IE' => TRUE,
          ),
          'preprocess' => FALSE,
          'weight' => 5,
        ),
        'dist/theme-gcwu-fegc/css/theme-ie-min.css' => array(
          'browsers' => array(
            'IE' => 'lte IE 8',
            '!IE' => FALSE,
          ),
          'group' => CSS_DEFAULT,
          'every_page' => TRUE,
          'preprocess' => FALSE,
          'weight' => 5,
        ),
        'dist/theme-gcwu-fegc/css/theme-min.css' => array(
          'browsers' => array(
            'IE' => 'gt IE 8',
            '!IE' => TRUE,
          ),
          'preprocess' => FALSE,
          'weight' => 5,
        ),
      ),
      'js' => array(
        'dist/theme-gcwu-fegc/js/theme-min.js' => array(
          'preprocess' => FALSE,
          'scope' => 'footer',
          'weight' => 5,
        ),
        'dist/js/settings.js' => array(
          'preprocess' => FALSE,
          'scope' => 'footer',
          'weight' => 5,
        ),
        'dist/js/pe-ap-min.js' => array(
          'preprocess' => FALSE,
          'scope' => 'footer',
          'weight' => 5,
        ),
      ),
    ),
    // Optional: Specify alternative variants of the library, if available.
    'variants' => array(
      // All properties defined for 'base_theme' override top-level properties.
      'base_theme' => array(
        'files' => array(
          'css' => array(
            'dist/grids/css/util-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/grids/css/util-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/js/css/pe-ap-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/js/css/pe-ap-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/theme-base/css/theme-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/theme-base/css/theme-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
          ),
          'js' => array(
            'dist/theme-base/js/theme-min.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
            'dist/js/settings.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
            'dist/js/pe-ap-min.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
          ),
        ),
        'variant callback' => 'wetkit_wetboew_check_variant',
        'variant arguments' => array(
          'variant' => 'base-theme',
        ),
      ),
      // All properties defined for 'intranet' override top-level properties.
      'intranet' => array(
        'files' => array(
          'css' => array(
            'dist/grids/css/util-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/grids/css/util-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/js/css/pe-ap-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/js/css/pe-ap-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/theme-gcwu-intranet/css/theme-ie-min.css' => array(
              'browsers' => array(
                'IE' => 'lte IE 8',
                '!IE' => FALSE,
              ),
              'group' => CSS_DEFAULT,
              'every_page' => TRUE,
              'preprocess' => FALSE,
              'weight' => 5,
            ),
            'dist/theme-gcwu-intranet/css/theme-min.css' => array(
              'browsers' => array(
                'IE' => 'gt IE 8',
                '!IE' => TRUE,
              ),
              'preprocess' => FALSE,
              'weight' => 5,
            ),
          ),
          'js' => array(
            'dist/theme-gcwu-intranet/js/theme-min.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
            'dist/js/settings.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
            'dist/js/pe-ap-min.js' => array(
              'preprocess' => FALSE,
              'scope' => 'footer',
              'weight' => 5,
            ),
          ),
        ),
        'variant callback' => 'wetkit_wetboew_check_variant',
        'variant arguments' => array(
          'variant' => 'intranet',
        ),
      ),
    ),
  );
  return $libraries;
}

/**
 * Implements wetkit_wetboew_check_variant().
 *
 * @param string $libary
 *   The name of the library
 * @param string $variant
 *   The name of the variant for the specified library
 *
 * @return bool
 *   Whether or not the variant can be manipulated
 */
function wetkit_wetboew_check_variant($libary, $variant) {
  if ((variable_get('wetkit_wetboew_theme', 0) == 1) && ($variant == 'intranet')) {
    return TRUE;
  }
  elseif ((variable_get('wetkit_wetboew_theme', 0) == 2) && ($variant == 'base_theme')) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}
