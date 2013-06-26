api = 2
core = 7.x

projects[drupal][version] = 7.22

; Translations
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 6a257ac
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1967238] = http://drupal.org/files/panopoly_core_make-1967238-07.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = b57b48f
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 7715ded
projects[panopoly_theme][download][branch] = 7.x-1.x
projects[panopoly_theme][patch][1967234] = http://drupal.org/files/panopoly_theme_make-1967234-01.patch

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 623c6ff
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 6ca2f97
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][1967230] = http://drupal.org/files/panopoly_widgets_make-1967230-03.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 4d9d071
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][1967216] = http://drupal.org/files/panopoly_admin_make-1967216-03.patch
projects[panopoly_admin][patch][1891482] = http://drupal.org/files/panopoly_pathauto-1891482-03.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = cb4ca09
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation (Custom)

projects[wetkit_bean][type] = module
projects[wetkit_bean][subdir] = custom
projects[wetkit_bean][download][type] = git
projects[wetkit_bean][download][revision] = 252b596
projects[wetkit_bean][download][branch] = master
projects[wetkit_bean][download][url] = https://github.com/wet-boew-wem/wetkit-bean.git
