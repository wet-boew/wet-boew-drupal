api = 2
core = 7.x
projects[drupal][version] = 7.18

; Patches for Core
projects[drupal][patch][] = "http://drupal.org/files/drupal-provide_exclusive_property_install_profiles-1727430-35-d7.patch"
projects[drupal][patch][] = "http://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch"
projects[drupal][patch][] = "http://drupal.org/files/drupal-1470656-14.patch"
projects[drupal][patch][] = "http://drupal.org/files/drupal-865536-204.patch"
projects[drupal][patch][] = "http://drupal.org/files/allow_change_system-requirements-1772316-4.patch"