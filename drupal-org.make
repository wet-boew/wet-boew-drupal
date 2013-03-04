api = 2
core = 7.x
projects[drupal][version] = 7.20
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 3bcd157
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][41220bd] = https://gist.github.com/raw/4724569/41220bd5f180ccfe0f61087ba08ce4db3fada6d5/panopoly_core_06022012.patch
projects[panopoly_core][patch][db3f615] = https://gist.github.com/raw/5054301/db3f61504581c50edfbe5315c33064d445fe3e2b/panopoly_core_02232013.patch

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
projects[panopoly_widgets][patch][66eefd5] = https://gist.github.com/raw/5050012/66eefd5dbd379122006b96c3a7c19549b6cffb6a/panopoly_widgets_02222013.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 165fafb
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][2293e1e] = https://gist.github.com/raw/4724882/2293e1ed9e9cea8c121258d3811875ffa6ba8dd3/panopoly_admin_06022012.patch
projects[panopoly_admin][patch][f0bf24a] = https://gist.github.com/raw/4751883/f0bf24aa1c612706e7b0164921c9cc6f204d5636/panopoly_admin-admin_menu_update.patch

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
