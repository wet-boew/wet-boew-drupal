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
includes[] = ../wetkit_language/wetkit_language.make
includes[] = ../wetkit_wetboew/wetkit_wetboew.make

; Panels and Chaos Tools Magic

projects[ctools][version] = 1.2
projects[ctools][subdir] = contrib
projects[ctools][download][type] = git
projects[ctools][download][revision] = 10a2674
projects[ctools][download][branch] = 7.x-1.x
projects[ctools][patch][1294478] = http://drupal.org/files/dynamic-modal-1294478-34.patch
projects[ctools][patch][1494860] = http://drupal.org/files/ctools-dependent-js-broken-with-jquery-1.7-1494860-30.patch
projects[ctools][patch][1739718] = http://drupal.org/files/ctools-fix-warning-message-1739718-32.patch
projects[ctools][patch][1774434] = http://drupal.org/files/1774434-ctools-allow-string-context-ui.patch
;projects[ctools][patch][1754770] = http://drupal.org/files/blocks_dependency_issue-1754770-1.patch

projects[panels][version] = 3.x-dev
projects[panels][subdir] = contrib
projects[panels][download][type] = git
projects[panels][download][revision] = 7a8bd4e
projects[panels][download][branch] = 7.x-3.x
projects[panels][patch][1735336] = http://drupal.org/files/1735336-repaint-draghandle-ipe-initial.patch
projects[panels][patch][1572202] = http://drupal.org/files/1572202-panels-ipe-panel-emptied-on-second-save.patch

;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/panels-add-hooks-to-integrate-i18n_panels-1179034-41.patch
;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/uuids-for-exported-pids-1277908-19.patch

projects[panels_breadcrumbs][version] = 2.x-dev
projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][download][type] = git
projects[panels_breadcrumbs][download][revision] = 531f589
projects[panels_breadcrumbs][download][branch] = 7.x-2.x

projects[panelizer][version] = 3.x-dev
projects[panelizer][subdir] = contrib
projects[panelizer][download][type] = git
projects[panelizer][download][revision] = 1238e8c
projects[panelizer][download][branch] = 7.x-3.x
projects[panelizer][patch][1572202] = http://drupal.org/files/1572202-panelizer-panel-emptied-on-second-save_0.patch

projects[fieldable_panels_panes][version] = 1.2
projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][patch][1536944] = http://drupal.org/files/Fieldable_Panels_Pane-translatable_panes-1536944-11.patch

projects[pm_existing_pages][version] = 1.4
projects[pm_existing_pages][subdir] = contrib

projects[fape][version] = 1.1
projects[fape][subdir] = contrib

; Views Magic

projects[views][version] = 3.5
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