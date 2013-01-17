api = 2
core = 7.x

;Translations
projects[drupal][version] = 7.x
translations[] = fr

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = acbb2bb
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][e697565] = https://gist.github.com/raw/4263428/17764bdeb4428317ca7e1ae58a3d2e77defa2145/panopoly-18n_ctools-context_panels.patch
projects[panopoly_core][patch][d118f90] = https://gist.github.com/raw/4444971/d118f90fdb352234bd94817d94c03880414b9727/panopoly-default_content.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = ba8c36e
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 4f45887
projects[panopoly_theme][download][branch] = 7.x-1.x 

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 9590324
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 06359b8
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][1847912] = https://gist.github.com/raw/4497146/c3bf7c4b75b1e858bc027b3bd307dc76480b53ef/file_entity_html5.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 58ad88b
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][[patch][4553027] = https://gist.github.com/raw/4553027/2293e1ed9e9cea8c121258d3811875ffa6ba8dd3/panopoly_admin-rid.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = 25642d7
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation

includes[] = modules/custom/wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = modules/custom/wetkit_search/wetkit_search.make
includes[] = modules/custom/wetkit_language/wetkit_language.make
includes[] = modules/custom/wetkit_migrate/wetkit_migrate.make
includes[] = modules/custom/wetkit_wetboew/wetkit_wetboew.make
