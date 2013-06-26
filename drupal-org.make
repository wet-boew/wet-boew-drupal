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

projects[wetkit_breadcrumbs][type] = module
projects[wetkit_breadcrumbs][subdir] = custom
projects[wetkit_breadcrumbs][download][type] = git
projects[wetkit_breadcrumbs][download][revision] = d487ab9
projects[wetkit_breadcrumbs][download][branch] = master
projects[wetkit_breadcrumbs][download][url] = https://github.com/wet-boew-wem/wetkit-breadcrumbs.git

projects[wetkit_core][type] = module
projects[wetkit_core][subdir] = custom
projects[wetkit_core][download][type] = git
projects[wetkit_core][download][revision] = d166257
projects[wetkit_core][download][branch] = master
projects[wetkit_core][download][url] = https://github.com/wet-boew-wem/wetkit-core.git

projects[wetkit_demo][type] = module
projects[wetkit_demo][subdir] = custom
projects[wetkit_demo][download][type] = git
projects[wetkit_demo][download][revision] = e8b3796
projects[wetkit_demo][download][branch] = master
projects[wetkit_demo][download][url] = https://github.com/wet-boew-wem/wetkit-demo.git

;projects[wetkit_deployment][type] = module
;projects[wetkit_deployment][subdir] = custom
;projects[wetkit_deployment][download][type] = git
;projects[wetkit_deployment][download][revision] = a6dbc80
;projects[wetkit_deployment][download][branch] = master
;projects[wetkit_deployment][download][url] = https://github.com/wet-boew-wem/wetkit-deployment.git

projects[wetkit_images][type] = module
projects[wetkit_images][subdir] = custom
projects[wetkit_images][download][type] = git
projects[wetkit_images][download][revision] = 6936f98
projects[wetkit_images][download][branch] = master
projects[wetkit_images][download][url] = https://github.com/wet-boew-wem/wetkit-wysiwyg.git

projects[wetkit_language][type] = module
projects[wetkit_language][subdir] = custom
projects[wetkit_language][download][type] = git
projects[wetkit_language][download][revision] = e23608b
projects[wetkit_language][download][branch] = master
projects[wetkit_language][download][url] = https://github.com/wet-boew-wem/wetkit-language.git

projects[wetkit_layouts][type] = module
projects[wetkit_layouts][subdir] = custom
projects[wetkit_layouts][download][type] = git
projects[wetkit_layouts][download][revision] = 6c9d225
projects[wetkit_layouts][download][branch] = master
projects[wetkit_layouts][download][url] = https://github.com/wet-boew-wem/wetkit-layouts.git

projects[wetkit_menu][type] = module
projects[wetkit_menu][subdir] = custom
projects[wetkit_menu][download][type] = git
projects[wetkit_menu][download][revision] = 3c02d49
projects[wetkit_menu][download][branch] = master
projects[wetkit_menu][download][url] = https://github.com/wet-boew-wem/wetkit-menu.git

projects[wetkit_metatag][type] = module
projects[wetkit_metatag][subdir] = custom
projects[wetkit_metatag][download][type] = git
projects[wetkit_metatag][download][revision] = 39882f4
projects[wetkit_metatag][download][branch] = master
projects[wetkit_metatag][download][url] = https://github.com/wet-boew-wem/wetkit-metatag.git

projects[wetkit_migrate][type] = module
projects[wetkit_migrate][subdir] = custom
projects[wetkit_migrate][download][type] = git
projects[wetkit_migrate][download][revision] = e251c80
projects[wetkit_migrate][download][branch] = master
projects[wetkit_migrate][download][url] = https://github.com/wet-boew-wem/wetkit-migrate.git

projects[wetkit_pages][type] = module
projects[wetkit_pages][subdir] = custom
projects[wetkit_pages][download][type] = git
projects[wetkit_pages][download][revision] = 04a2822
projects[wetkit_pages][download][branch] = master
projects[wetkit_pages][download][url] = https://github.com/wet-boew-wem/wetkit-pages.git

projects[wetkit_search][type] = module
projects[wetkit_search][subdir] = custom
projects[wetkit_search][download][type] = git
projects[wetkit_search][download][revision] = 5e44c19
projects[wetkit_search][download][branch] = master
projects[wetkit_search][download][url] = https://github.com/wet-boew-wem/wetkit-search.git

;projects[wetkit_solr][type] = module
;projects[wetkit_solr][subdir] = custom
;projects[wetkit_solr][download][type] = git
;projects[wetkit_solr][download][revision] = e58aa4e
;projects[wetkit_solr][download][branch] = master
;projects[wetkit_solr][download][url] = https://github.com/wet-boew-wem/wetkit-solr.git

projects[wetkit_wetboew][type] = module
projects[wetkit_wetboew][subdir] = custom
projects[wetkit_wetboew][download][type] = git
projects[wetkit_wetboew][download][revision] = 798f5bf
projects[wetkit_wetboew][download][branch] = master
projects[wetkit_wetboew][download][url] = https://github.com/wet-boew-wem/wetkit-wetboew.git

projects[wetkit_widgets][type] = module
projects[wetkit_widgets][subdir] = custom
projects[wetkit_widgets][download][type] = git
projects[wetkit_widgets][download][revision] = 11e52bf
projects[wetkit_widgets][download][branch] = master
projects[wetkit_widgets][download][url] = https://github.com/wet-boew-wem/wetkit-widgets.git

projects[wetkit_wysiwyg][type] = module
projects[wetkit_wysiwyg][version] = 1.x-dev
projects[wetkit_wysiwyg][subdir] = custom
projects[wetkit_wysiwyg][download][type] = git
projects[wetkit_wysiwyg][download][revision] = 165e230
projects[wetkit_wysiwyg][download][branch] = master
projects[wetkit_wysiwyg][download][url] = https://github.com/wet-boew-wem/wetkit-wysiwyg.git

; WetKit Foundation (DevTools)

projects[wetkit_git][type] = module
projects[wetkit_git][subdir] = devtools
projects[wetkit_git][download][type] = git
projects[wetkit_git][download][revision] = 43c9509
projects[wetkit_git][download][branch] = master
projects[wetkit_git][download][url] = https://github.com/wet-boew-wem/wetkit-git.git

; WetKit Foundation (Themes)

projects[wetkit_adaptivetheme][type] = theme
projects[wetkit_adaptivetheme][download][type] = git
projects[wetkit_adaptivetheme][download][revision] = e6f4d12
projects[wetkit_adaptivetheme][download][branch] = 7.x-3.x
projects[wetkit_adaptivetheme][download][url] = https://github.com/wet-boew-wem/wetkit-adaptivetheme.git

projects[wetkit_rubik][type] = theme
projects[wetkit_rubik][download][type] = git
projects[wetkit_rubik][download][revision] = d4a0b3e
projects[wetkit_rubik][download][branch] = 7.x-3.x
projects[wetkit_rubik][download][url] = https://github.com/wet-boew-wem/wetkit-adaptivetheme.git

projects[wetkit_shiny][type] = theme
projects[wetkit_shiny][download][type] = git
projects[wetkit_shiny][download][revision] = 69e7fa4
projects[wetkit_shiny][download][branch] = 7.x-3.x
projects[wetkit_shiny][download][url] = https://github.com/wet-boew-wem/wetkit-adaptivetheme.git
