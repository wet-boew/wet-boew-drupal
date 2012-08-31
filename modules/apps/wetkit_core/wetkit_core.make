; WetKit Core Makefile

api = 2
core = 7.x

; The WetKit Foundation

includes[] = ../wetkit_images/wetkit_images.make
includes[] = ../wetkit_theme/wetkit_theme.make
;includes[] = ../wetkit_magic/wetkit_magic.make
includes[] = ../wetkit_widgets/wetkit_widgets.make
includes[] = ../wetkit_admin/wetkit_admin.make
;includes[] = ../wetkit_pages/wetkit_pages.make
;includes[] = ../wetkit_users/wetkit_users.make
includes[] = ../wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = ../wetkit_search/wetkit_search.make

;projects[panopoly_images][version] = 1.x-dev
;projects[panopoly_images][subdir] = panopoly
;projects[panopoly_images][type] = module
;projects[panopoly_images][download][type] = git
;projects[panopoly_images][download][revision] = ec67b7d
;projects[panopoly_images][download][branch] = 7.x-1.x

;projects[panopoly_theme][version] = 1.x-dev
;projects[panopoly_theme][subdir] = panopoly
;projects[panopoly_theme][type] = module
;projects[panopoly_theme][download][type] = git
;projects[panopoly_theme][download][revision] = b328854
;projects[panopoly_theme][download][branch] = 7.x-1.x

;projects[panopoly_magic][version] = 1.x-dev
;projects[panopoly_magic][subdir] = panopoly
;projects[panopoly_magic][type] = module
;projects[panopoly_magic][download][type] = git
;projects[panopoly_magic][download][revision] = 87e4144
;projects[panopoly_magic][download][branch] = 7.x-1.x

;projects[panopoly_widgets][version] = 1.x-dev
;projects[panopoly_widgets][subdir] = panopoly
;projects[panopoly_widgets][type] = module
;projects[panopoly_widgets][download][type] = git
;projects[panopoly_widgets][download][revision] = e3e64a5
;projects[panopoly_widgets][download][branch] = 7.x-1.x

;projects[panopoly_admin][version] = 1.x-dev
;projects[panopoly_admin][subdir] = panopoly
;projects[panopoly_admin][type] = module
;projects[panopoly_admin][download][type] = git
;projects[panopoly_admin][download][revision] = 4e43773
;projects[panopoly_admin][download][branch] = 7.x-1.x

;projects[panopoly_pages][version] = 1.x-dev
;projects[panopoly_pages][subdir] = panopoly
;projects[panopoly_pages][type] = module
;projects[panopoly_pages][download][type] = git
;projects[panopoly_pages][download][revision] = 07b3875
;projects[panopoly_pages][download][branch] = 7.x-1.x

;projects[panopoly_users][version] = 1.x-dev
;projects[panopoly_users][subdir] = panopoly
;projects[panopoly_users][type] = module
;projects[panopoly_users][download][type] = git
;projects[panopoly_users][download][revision] = 906a438
;projects[panopoly_users][download][branch] = 7.x-1.x

; The Panopoly Toolset

;projects[panopoly_wysiwyg][version] = 1.x-dev
;projects[panopoly_wysiwyg][subdir] = panopoly
;projects[panopoly_wysiwyg][type] = module
;projects[panopoly_wysiwyg][download][type] = git
;projects[panopoly_wysiwyg][download][revision] = 12f970d
;projects[panopoly_wysiwyg][download][branch] = 7.x-1.x

;projects[panopoly_search][version] = 1.x-dev
;projects[panopoly_search][subdir] = panopoly
;projects[panopoly_search][type] = module
;projects[panopoly_search][download][type] = git
;projects[panopoly_search][download][revision] = 1c1d97c
;projects[panopoly_search][download][branch] = 7.x-1.x

; Panels and Chaos Tools Magic

projects[ctools][version] = 1.2
projects[ctools][subdir] = contrib
projects[ctools][download][type] = git
projects[ctools][download][revision] = 10a2674
projects[ctools][download][branch] = 7.x-1.x
projects[ctools][patch][1294478] = http://drupal.org/files/dynamic-modal-1294478-34.patch
projects[ctools][patch][1494860] = http://drupal.org/files/ctools-dependent-js-broken-with-jquery-1.7-1494860-30.patch
projects[ctools][patch][1739718] = http://drupal.org/files/ctools-fix-warning-message-1739718-32.patch

projects[panels][version] = 3.x-dev
projects[panels][subdir] = contrib
projects[panels][download][type] = git
projects[panels][download][revision] = 6662e3b
projects[panels][download][branch] = 7.x-3.x
projects[panels][patch][1735336] = http://drupal.org/files/1735336-repaint-draghandle-ipe-initial.patch
;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/panels-add-hooks-to-integrate-i18n_panels-1179034-41.patch
;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/uuids-for-exported-pids-1277908-19.patch

projects[panels_breadcrumbs][version] = 2.x-dev
projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][download][type] = git
projects[panels_breadcrumbs][download][revision] = 531f589
projects[panels_breadcrumbs][download][branch] = 7.x-2.x

projects[panelizer][version] = 3.0-rc1
projects[panelizer][subdir] = contrib

projects[fieldable_panels_panes][version] = 1.2
projects[fieldable_panels_panes][subdir] = contrib
;projects[fieldable_panels_panes][patch][1536944] = http://drupal.org/files/translatable-panes-1536944-6.patch

projects[pm_existing_pages][version] = 1.4
projects[pm_existing_pages][subdir] = contrib

; Views Magic

projects[views][version] = 3.3
projects[views][subdir] = contrib

projects[views_autocomplete_filters][version] = 1.0-beta1
projects[views_autocomplete_filters][subdir] = contrib

projects[views_bulk_operations][version] = 3.0-rc1
projects[views_bulk_operations][subdir] = contrib


; The Usual Suspects

projects[jquery_update][version] = 2.x-dev
projects[jquery_update][subdir] = contrib
projects[jquery_update][type] = module
projects[jquery_update][download][type] = git
projects[jquery_update][download][revision] = 5d2a4b2
projects[jquery_update][download][branch] = 7.x-2.x
projects[jquery_update][patch][1524944] = http://drupal.org/files/allow-different-version-for-admin-pages-1524944-6.patch

projects[pathauto][version] = 1.2
projects[pathauto][subdir] = contrib
projects[pathauto][patch][936222] = http://drupal.org/files/936222-pathauto-persist.patch

projects[token][version] = 1.2
projects[token][subdir] = contrib

projects[entity][version] = 1.0-rc3
projects[entity][subdir] = contrib

projects[libraries][version] = 2.0
projects[libraries][subdir] = contrib

projects[devel][version] = 1.3
projects[devel][subdir] = contrib

; Harness the Power of Features and Apps

projects[apps][version] = 1.0-beta7
projects[apps][subdir] = contrib

projects[features][version] = 1.0
projects[features][subdir] = contrib

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

; Allow for Default Content

projects[defaultcontent][version] = 1.x-dev
projects[defaultcontent][subdir] = contrib
projects[defaultcontent][download][type] = git
projects[defaultcontent][download][revision] = d8806d8
projects[defaultcontent][download][branch] = 7.x-1.x

projects[uuid][version] = 1.x-dev
projects[uuid][subdir] = contrib
projects[uuid][download][type] = git
projects[uuid][download][revision] = 806c301
projects[uuid][download][branch] = 7.x-1.x