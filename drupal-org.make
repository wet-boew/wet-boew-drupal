api = 2
core = 7.x

;projects[drupal][version] = 7.x
;translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 02e0920
projects[panopoly_core][download][branch] = 7.x-1.x

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = eaf7a75
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = bad61fb
projects[panopoly_theme][download][branch] = 7.x-1.x

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 0df7c57
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = ec86618
projects[panopoly_widgets][download][branch] = 7.x-1.x

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = b5c3e49
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][6478508] = http://drupal.org/files/remove_admin_modules-6478508-05.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = eeab911
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation

includes[] = modules/custom/wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = modules/custom/wetkit_search/wetkit_search.make
includes[] = modules/custom/wetkit_language/wetkit_language.make
includes[] = modules/custom/wetkit_wetboew/wetkit_wetboew.make