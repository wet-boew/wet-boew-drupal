api = 2
core = 7.x

projects[drupal][version] = 7.78
projects[drupal][type] = core

; Patches for Drupal Core
projects[drupal][patch][405360] = http://drupal.org/files/issues/aria-describedby_2.patch
projects[drupal][patch][460408] = http://drupal.org/files/issues/menu-access_unpublished-nodes_460408-157.patch
projects[drupal][patch][728702] = http://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch
; This needs to be rerolled to apply cleanly and work due to changes in 7.68 #
projects[drupal][patch][865536] = https://www.drupal.org/files/issues/2019-12-18/Drupal-core--865536-263--brower-key-for-js-do-not-test.patch
projects[drupal][patch][911354] = http://drupal.org/files/911354-drupal-profile-85.patch
projects[drupal][patch][998898] = http://drupal.org/files/issues/998898-63chars-identifier-limit-nomd5-D7-75.patch
projects[drupal][patch][1710656] = http://drupal.org/files/drupal-1710656-3-skip-hidden-menu-items-D7.patch
projects[drupal][patch][1772316] = http://drupal.org/files/drupal7-allow_change_system-requirements-1772316-18.patch
projects[drupal][patch][2383823] = https://www.drupal.org/files/issues/2383823-check_name_empty-26.patch
