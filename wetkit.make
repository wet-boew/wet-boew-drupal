api = 2
core = 7.x

;projects[drupal][version] = 7.x
;translations[] = fr

;;;;;;;;;;;;;;
; Foundation ;
;;;;;;;;;;;;;;

projects[boxes][version] = 1.0
projects[boxes][subdir] = contrib

projects[browscap][version] = 1.3
projects[browscap][subdir] = contrib
projects[browscap][type] = module

projects[context][version] = 3.0-beta2
projects[context][subdir] = contrib
projects[context][type] = module

projects[ctools][version] = 1.0
projects[ctools][subdir] = contrib
projects[ctools][type] = module
projects[ctools][patch][1444732] = http://drupal.org/files/1444732-exposed-sort-as-pane-config.patch
projects[ctools][patch][1198808] = http://drupal.org/files/1198808-work-around-jquery-bug-with-auto-submit-ctools-1.0.patch
projects[ctools][patch][1294478] = http://drupal.org/files/1294478-modal-dynamic-mode.patch

projects[diff][version] = 2.x-dev
projects[diff][subdir] = contrib
projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][revision] = 27c9185
projects[diff][download][branch] = 7.x-2.x
projects[diff][patch][1285090] = http://drupal.org/files/diff-hide-show-markup-372957-93.patch

projects[ds][version] = 2.0-beta1
projects[ds][subdir] = contrib
projects[ds][type] = module

projects[fences][version] = 1.0
projects[fences][subdir] = contrib
projects[fences][type] = module
projects[fences][download][type] = git
projects[fences][download][revision] = d9ca337
projects[fences][download][branch] = 7.x-1.x
projects[fences][patch][1561244] = http://drupal.org/files/undefined-index-1561244-7.patch

projects[fieldable_panels_panes][version] = 1.1
projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][type] = module
projects[fieldable_panels_panes][download][type] = git
projects[fieldable_panels_panes][download][revision] = a4ea924
projects[fieldable_panels_panes][download][branch] = 7.x-1.x
;projects[fieldable_panels_panes][patch][1536944] = http://drupal.org/files/translatable-panes-1536944-6.patch

projects[jquery_update][version] = 2.x-dev
projects[jquery_update][subdir] = contrib
projects[jquery_update][type] = module
projects[jquery_update][download][type] = git
projects[jquery_update][download][revision] = 5d2a4b2
projects[jquery_update][download][branch] = 7.x-2.x
projects[jquery_update][patch][1524944] = http://drupal.org/files/allow-different-version-for-admin-pages-1524944-6.patch

projects[libraries][version] = 2.0
projects[libraries][type] = module
projects[libraries][subdir] = contrib

projects[panels][version] = 3.x-dev
projects[panels][subdir] = contrib
projects[panels][type] = module
projects[panels][download][type] = git
projects[panels][download][revision] = 3f50718
projects[panels][download][branch] = 7.x-3.x
projects[panels][patch][1706936] = http://drupal.org/files/panels-ipe-no-css-image.patch
projects[panels][patch][1549660] = http://drupal.org/files/1549660-allow-region-style-settings.patch
;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/panels-add-hooks-to-integrate-i18n_panels-1179034-41.patch
;projects[panels][patch][] = http://drupalcode.org/sandbox/daspeter/1444130.git/blob_plain/refs/heads/7.x-1.x:/uuids-for-exported-pids-1277908-19.patch

projects[panels_breadcrumbs][version] = 2.x-dev
projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][type] = module
projects[panels_breadcrumbs][download][type] = git
projects[panels_breadcrumbs][download][revision] = 531f589
projects[panels_breadcrumbs][download][branch] = 7.x-2.x

projects[panelizer][version] = 3.x-dev
projects[panelizer][subdir] = contrib
projects[panelizer][type] = module
projects[panelizer][download][type] = git
projects[panelizer][download][revision] = c4022c5
projects[panelizer][download][branch] = 7.x-3.x
projects[panelizer][patch][1387634] = http://drupal.org/files/exporting_panelizer_defaults-1387634-9.patch

projects[password_policy][version] = 1.0-rc3
projects[password_policy][type] = module
projects[password_policy][subdir] = contrib

projects[pm_existing_pages][version] = 1.4
projects[pm_existing_pages][type] = module
projects[pm_existing_pages][subdir] = contrib

projects[rules][version] = 2.1
projects[rules][type] = module
projects[rules][subdir] = contrib
projects[rules][download][type] = git
projects[rules][download][revision] = 5273ea6
projects[rules][download][branch] = 7.x-2.x
projects[rules][patch][1329346] = http://drupal.org/files/remove-make-file-1329346-10.patch

projects[token][version] = 1.1
projects[token][type] = module
projects[token][subdir] = contrib

projects[views][version] = 3.3
projects[views][type] = module
projects[views][subdir] = contrib

projects[simple_gmap][version] = 1.0-rc1
projects[simple_gmap][type] = module
projects[simple_gmap][subdir] = contrib

;Marked for Removal
projects[views_slideshow][version] = 3.0
projects[views_slideshow][type] = module
projects[views_slideshow][subdir] = contrib

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Field UI and Content Types ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[date][version] = 2.5
projects[date][type] = module
projects[date][subdir] = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][type] = module
projects[file_entity][subdir] = contrib
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = ba18f8b
projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][patch][1553094] = http://drupal.org/files/Alt-and-Title-support-for-Images-1553094-62.patch

projects[field_group][version] = 1.1
projects[field_group][type] = module
projects[field_group][subdir] = contrib

projects[link][version] = 1.0
projects[link][type] = module
projects[link][subdir] = contrib

projects[tablefield][version] = 2.0
projects[tablefield][type] = module
projects[tablefield][subdir] = contrib

;;;;;;;;;;;;;;;;;;
; Menus and URLs ;
;;;;;;;;;;;;;;;;;;

projects[pathauto][version] = 1.1
projects[pathauto][subdir] = contrib
projects[pathauto][type] = module
projects[pathauto][download][type] = git
projects[pathauto][download][revision] = 75192ed
projects[pathauto][download][branch] = 7.x-1.x
projects[pathauto][patch][936222] = http://drupal.org/files/936222-pathauto-persist.patch

projects[menu_block][version] = 2.3
projects[menu_block][subdir] = contrib
projects[menu_block][type] = module

projects[menu_views][version] = 1.3
projects[menu_views][type] = module
projects[menu_views][subdir] = contrib

;;;;;;;;;;;;;;;;;;;
; User Experience ;
;;;;;;;;;;;;;;;;;;;

projects[admin][version] = 2.x-dev
projects[admin][subdir] = contrib
projects[admin][type] = module
projects[admin][download][type] = git
projects[admin][download][revision] = ad9aed4
projects[admin][download][branch] = 7.x-2.x
projects[admin][patch][1475074] = http://drupal.org/files/jquery17_undefined-1475074-1.patch

projects[admin_menu][version] = 3.0-rc3
projects[admin_menu][subdir] = contrib
projects[admin_menu][type] = module

projects[backports][version] = 1.0-alpha1
projects[backports][type] = module
projects[backports][subdir] = contrib

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 9106bcf
projects[better_formats][download][branch] = 7.x-1.x

projects[caption_filter][version] = 1.2
projects[caption_filter][type] = module
projects[caption_filter][subdir] = contrib

projects[date_popup_authored][version] = 1.1
projects[date_popup_authored][subdir] = contrib
projects[date_popup_authored][type] = module

projects[image_resize_filter][version] = 1.13
projects[image_resize_filter][type] = module
projects[image_resize_filter][subdir] = contrib

projects[linkchecker][version] = 1.0-beta1
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib

projects[media][version] = 2.x-dev
projects[media][type] = module
projects[media][subdir] = contrib
projects[media][download][type] = git
projects[media][download][revision] = cc55948
projects[media][download][branch] = 7.x-2.x
projects[media][patch][1307054] = http://drupal.org/files/1307054-d7-2.patch

projects[module_filter][version] = 1.7
projects[module_filter][type] = module
projects[module_filter][subdir] = contrib

projects[workbench][version] = 1.1
projects[workbench][subdir] = contrib
projects[workbench][type] = module

projects[workbench_moderation][version] = 1.x-dev
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][type] = module
projects[workbench_moderation][download][type] = git
projects[workbench_moderation][download][revision] = 6bdb20e
projects[workbench_moderation][download][branch] = 7.x-1.x
projects[workbench_moderation][patch][1285090] = http://drupal.org/files/playnicewithpanels-1285090-7.patch
projects[workbench_moderation][patch][1260112] = http://drupal.org/files/workbench_moderation-is_current-1260112-15.patch

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][type] = module
projects[wysiwyg][patch][356480] = http://drupal.org/files/lazy_wysiwyg-356480-137.patch
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = d17bf11
projects[wysiwyg][download][branch] = 7.x-2.x

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib
projects[wysiwyg_filter][type] = module

projects[references_dialog][version] = 1.0-alpha4
projects[references_dialog][type] = module
projects[references_dialog][subdir] = contrib

projects[views_bulk_operations][version] = 3.0-rc1
projects[views_bulk_operations][type] = module
projects[views_bulk_operations][subdir] = contrib

projects[views_autocomplete_filters][version] = 1.x-dev
projects[views_autocomplete_filters][subdir] = contrib
projects[views_autocomplete_filters][type] = module
projects[views_autocomplete_filters][download][type] = git
projects[views_autocomplete_filters][download][revision] = 7d85509
projects[views_autocomplete_filters][download][branch] = 7.x-1.x
projects[views_autocomplete_filters][patch][1151292] = http://drupal.org/files/views_autocomplete_filters-1151292-10_0.patch

;;;;;;;;
; Apps ;
;;;;;;;;

projects[apps][version] = 1.x-dev
projects[apps][subdir] = contrib
projects[apps][type] = module
projects[apps][download][type] = git
projects[apps][download][revision] = c435c95
projects[apps][download][branch] = 7.x-1.x
projects[apps][patch][1479164] = http://drupal.org/files/1479164-apps-permissions-check-modules-not-conf-reroll.patch
projects[apps][patch][1561652] = http://drupal.org/files/apps-allow-drush-site-install.patch

projects[defaultcontent][version] = 1.0-alpha5
projects[defaultcontent][type] = module
projects[defaultcontent][subdir] = contrib
projects[defaultcontent][patch][1263536] = http://drupal.org/files/base64_encode_files-1263536-1_0.patch

projects[entity][version] = 1.0-rc3
projects[entity][type] = module
projects[entity][subdir] = contrib

projects[features][version] = 1.0
projects[features][subdir] = contrib
projects[features][type] = module

projects[strongarm][version] = 2.0
projects[strongarm][type] = module
projects[strongarm][subdir] = contrib

projects[uuid][version] = 1.x-dev
projects[uuid][type] = module
projects[uuid][subdir] = contrib
projects[uuid][download][type] = git
projects[uuid][download][revision] = 806c301
projects[uuid][download][branch] = 7.x-1.x

projects[variable][version] = 2.1
projects[variable][type] = module
projects[variable][subdir] = contrib

;;;;;;;;;;;;
; Language ;
;;;;;;;;;;;;

projects[i18n][version] = 1.7
projects[i18n][subdir] = contrib
projects[i18n][type] = module

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib
projects[stringoverrides][type] = module

;;;;;;;;;;;;;;;;
; Experimental ;
;;;;;;;;;;;;;;;;

projects[entity_translation][version] = 1.x-dev
projects[entity_translation][type] = module
projects[entity_translation][subdir] = contrib
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = f396c23
projects[entity_translation][download][branch] = 7.x-1.x

projects[title][version] = 1.x-dev
projects[title][type] = module
projects[title][subdir] = contrib
projects[title][download][type] = git
projects[title][download][revision] = adec2dc
projects[title][download][branch] = 7.x-1.x

;projects[i18n_panels][type] = module
;projects[i18n_panels][subdir] = contrib
;projects[i18n_panels][download][type] = git
;projects[i18n_panels][download][url] = git://git.drupal.org/sandbox/daspeter/1444130.git
;projects[i18n_panels][download][branch] = 7.x-1.x

projects[i18nviews][version] = 3.x-dev
projects[i18nviews][subdir] = contrib
projects[i18nviews][type] = module

;;;;;;;;;;
; Search ;
;;;;;;;;;;

projects[facetapi][version] = 1.0
projects[facetapi][type] = module
projects[facetapi][subdir] = contrib

projects[metatag][version] = 1.0-alpha6
projects[metatag][subdir] = contrib
projects[metatag][type] = module

projects[search404][version] = 1.1
projects[search404][subdir] = contrib
projects[search404][type] = module

;;;;;;;;;;;;;
; LIBRARIES ;
;;;;;;;;;;;;;

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
libraries[markitup][directory_name] = markitup
libraries[markitup][type] = library

libraries[tinymce][download][type] = git
libraries[tinymce][download][url] = https://github.com/sylus/tinymce-cirkuit.git
libraries[tinymce][directory_name] = tinymce
libraries[tinymce][type] = library

libraries[wet-boew][download][type] = git
libraries[wet-boew][download][url] = https://github.com/wet-boew/wet-boew.git
libraries[wet-boew][directory_name] = wet-boew
libraries[wet-boew][type] = library

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; THEMES + THEME RELATED MODULES ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[adaptivetheme][version] = 3.0
projects[adaptivetheme][type] = theme

projects[rubik][version] = 4.0-beta8
projects[rubik][type] = theme

projects[tao][version] = 3.0-beta4
projects[tao][type] = theme
