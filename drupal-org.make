api = 2
core = 7.x
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 3bcd157
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1953428] = http://drupal.org/files/hook_requirements-1953428-01.patch
projects[panopoly_core][patch][41220bd] = http://drupal.org/files/panopoly_core-field_info_collate_fields-1962742-01.patch
projects[panopoly_core][patch][fb01dee] = http://drupal.org/files/panopoly_core-update_modules-1962746-01.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = 98eb0f5
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 372aeb0
projects[panopoly_theme][download][branch] = 7.x-1.x 

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 64d984e
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 2a98c9e 
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][3b2fac8] = http://drupal.org/files/panopoly_widgets-update_modules-1962750-01.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 165fafb
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][2293e1e] = http://drupal.org/files/panopoly_admin-user-grand-rid-1962756-01.patch
projects[panopoly_admin][patch][f0bf24a] = http://drupal.org/files/panopoly_admin-admin_menu_update-1962760-01.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = cb4ca09
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation

includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_search/wetkit_search.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_language/wetkit_language.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_migrate/wetkit_migrate.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_bean/wetkit_bean.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_metatag/wetkit_metatag.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_core/wetkit_core.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_wetboew/wetkit_wetboew.make
includes[] = http://drupalcode.org/project/wet.git/blob/refs/heads/7.x-1.x:/modules/custom/wetkit_breadcrumbs/wetkit_breadcrumbs.make
