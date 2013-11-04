api = 2
core = 7.x

projects[drupal][version] = 7.23
projects[drupal][type] = core
projects[drupal][download][type] = get
projects[drupal][download][url] = http://ftp.drupal.org/files/projects/drupal-7.23.tar.gz

; Patches for Drupal Core
projects[drupal][patch][728702]  = http://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch
projects[drupal][patch][1470656] = http://drupal.org/files/drupal-1470656-14.patch
projects[drupal][patch][865536]  = http://drupal.org/files/drupal-865536-204.patch
projects[drupal][patch][1772316] = http://drupal.org/files/drupal7-allow_change_system-requirements-1772316-18.patch
projects[drupal][patch][2066275] = http://drupal.org/files/2066275-file-field-load-merge-order.patch
