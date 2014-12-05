api = 2
core = 7.x

projects[drupal][version] = 7.34
projects[drupal][type] = core

; Patches for Drupal Core
projects[drupal][patch][405360] = http://drupal.org/files/issues/aria-describedby_2.patch
projects[drupal][patch][728702]  = http://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch
projects[drupal][patch][1470656] = http://drupal.org/files/drupal-1470656-14.patch
projects[drupal][patch][865536]  = http://drupal.org/files/drupal-865536-204.patch
projects[drupal][patch][1772316] = http://drupal.org/files/drupal7-allow_change_system-requirements-1772316-18.patch
projects[drupal][patch][2289867] = http://drupal.org/files/issues/D7_port_fix_w3c_url_validation_html5_changes-2289867-1.patch
projects[drupal][patch][1081266] = http://drupal.org/files/drupal-1081266-102-drupal_get_filename-D7.patch
projects[drupal][patch][2383823] = http://drupal.org/files/issues/2383823-check_name_empty-1.patch
