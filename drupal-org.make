api = 2
core = 7.x

projects[drupal][version] = 7.22

; Translations
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 192ed62
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1967250] = http://drupal.org/files/field_info_collate_fields-1967250-02.patch
projects[panopoly_core][patch][1967238] = http://drupal.org/files/panopoly_core_make-1967238-04.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = b57b48f
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = b8d3809
projects[panopoly_theme][download][branch] = 7.x-1.x
projects[panopoly_theme][patch][1967234] = http://drupal.org/files/panopoly_theme_make-1967234-01.patch

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 3a1f8f9
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 0dafe32
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][1967230] = http://drupal.org/files/panopoly_widgets_make-1967230-01.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 4d9d071
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][1967216] = http://drupal.org/files/panopoly_admin_make-1967216-01.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = cb4ca09
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation

includes[] = modules/custom/wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = modules/custom/wetkit_search/wetkit_search.make
includes[] = modules/custom/wetkit_language/wetkit_language.make
includes[] = modules/custom/wetkit_migrate/wetkit_migrate.make
includes[] = modules/custom/wetkit_bean/wetkit_bean.make
includes[] = modules/custom/wetkit_metatag/wetkit_metatag.make
includes[] = modules/custom/wetkit_core/wetkit_core.make
includes[] = modules/custom/wetkit_wetboew/wetkit_wetboew.make
includes[] = modules/custom/wetkit_breadcrumbs/wetkit_breadcrumbs.make
