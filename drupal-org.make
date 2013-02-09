api = 2
core = 7.x

;Translations
projects[drupal][version] = 7.x
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 3bcd157
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][41220bd] = https://gist.github.com/raw/4724569/41220bd5f180ccfe0f61087ba08ce4db3fada6d5/panopoly_core_06022012.patch
projects[panopoly_core][patch][4559587] = https://gist.github.com/raw/4724524/45595878e00c9d0c4a03ec9de8330684000d3447/panopoly_core_06022012.patch

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
projects[panopoly_widgets][patch][1847912] = https://gist.github.com/raw/4724398/a3ff32aabbac1c19ca390474595d9938f23bad70/panopoly_widgets_06022012.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 165fafb
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][2293e1e] = https://gist.github.com/raw/4724882/2293e1ed9e9cea8c121258d3811875ffa6ba8dd3/panopoly_admin_06022012.patch

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
includes[] = modules/custom/wetkit_wetboew/wetkit_wetboew.make
includes[] = modules/custom/wetkit_wetboew/wetkit_breadcrumbs.make
