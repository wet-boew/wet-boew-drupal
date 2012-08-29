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

projects[context][version] = 3.0-beta2
projects[context][subdir] = contrib

projects[ctools][version] = 1.1
projects[ctools][subdir] = contrib
projects[ctools][type] = module
projects[ctools][download][type] = git
projects[ctools][download][revision] = 116c49e
projects[ctools][download][branch] = 7.x-1.x
projects[ctools][patch][1294478] = http://drupal.org/files/1294478-modal-dynamic-mode.patch
projects[ctools][patch][1708438] = http://drupal.org/files/1708438-blur-event.patch

projects[custom_formatters][version] = 2.2
projects[custom_formatters][subdir] = contrib
projects[custom_formatters][type] = module
projects[custom_formatters][download][type] = git
projects[custom_formatters][download][revision] = 08bcc00
projects[custom_formatters][download][branch] = 7.x-2.x
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[diff][version] = 2.x-dev
projects[diff][subdir] = contrib
projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][revision] = 27c9185
projects[diff][download][branch] = 7.x-2.x
projects[diff][patch][1285090] = http://drupal.org/files/diff-hide-show-markup-372957-93.patch

projects[ds][version] = 2.0-beta1
projects[ds][subdir] = contrib

projects[fences][version] = 1.0
projects[fences][subdir] = contrib
projects[fences][type] = module
projects[fences][download][type] = git
projects[fences][download][revision] = d9ca337
projects[fences][download][branch] = 7.x-1.x
projects[fences][patch][1561244] = http://drupal.org/files/undefined-index-1561244-7.patch

projects[fieldable_panels_panes][version] = 1.2
projects[fieldable_panels_panes][subdir] = contrib
;projects[fieldable_panels_panes][patch][1536944] = http://drupal.org/files/translatable-panes-1536944-6.patch

projects[jquery_update][version] = 2.x-dev
projects[jquery_update][subdir] = contrib
projects[jquery_update][type] = module
projects[jquery_update][download][type] = git
projects[jquery_update][download][revision] = 5d2a4b2
projects[jquery_update][download][branch] = 7.x-2.x
projects[jquery_update][patch][1524944] = http://drupal.org/files/allow-different-version-for-admin-pages-1524944-6.patch

projects[libraries][version] = 2.0
projects[libraries][subdir] = contrib

;projects[json2][version] = 1.0
;projects[json2][subdir] = contrib

projects[panels][version] = 3.x-dev
projects[panels][subdir] = contrib
projects[panels][type] = module
projects[panels][download][type] = git
projects[panels][download][revision] = 6662e3b
projects[panels][download][branch] = 7.x-3.x
projects[panels][patch][1735336] = http://drupal.org/files/1735336-repaint-draghandle-ipe-initial.patch
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
projects[panelizer][download][revision] = 34b7d4ef
projects[panelizer][download][branch] = 7.x-3.x
projects[panelizer][patch][1737766] = http://drupal.org/files/1737766-remove-cache-info.patch

projects[password_policy][version] = 1.0-rc3
projects[password_policy][subdir] = contrib

projects[pm_existing_pages][version] = 1.4
projects[pm_existing_pages][subdir] = contrib

projects[rules][version] = 2.1
projects[rules][type] = module
projects[rules][subdir] = contrib
projects[rules][download][type] = git
projects[rules][download][revision] = 5273ea6
projects[rules][download][branch] = 7.x-2.x
projects[rules][patch][1329346] = http://drupal.org/files/remove-make-file-1329346-10.patch

projects[token][version] = 1.2
projects[token][subdir] = contrib

projects[layout][version] = 1.0-alpha3
projects[layout][subdir] = contrib

projects[gridbuilder][version] = 1.0-alpha2
projects[gridbuilder][subdir] = contrib

projects[views][version] = 3.3
projects[views][subdir] = contrib

projects[simple_gmap][version] = 1.0-rc1
projects[simple_gmap][subdir] = contrib

;Marked for Removal
projects[views_slideshow][version] = 3.0
projects[views_slideshow][subdir] = contrib

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Field UI and Content Types ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[date][version] = 2.6
projects[date][subdir] = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][type] = module
projects[file_entity][subdir] = contrib
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = a8986e5
projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][patch][1553094] = http://drupal.org/files/Alt-and-Title-support-for-Images-1553094-68.patch

projects[field_group][version] = 1.1
projects[field_group][subdir] = contrib

projects[entityreference][version] = 1.0-rc3
projects[entityreference][subdir] = contrib

projects[link][version] = 1.0
projects[link][subdir] = contrib

projects[tablefield][version] = 2.0
projects[tablefield][subdir] = contrib

;;;;;;;;;;;;;;;;;;
; Menus and URLs ;
;;;;;;;;;;;;;;;;;;

projects[pathauto][version] = 1.2
projects[pathauto][subdir] = contrib
projects[pathauto][type] = module
projects[pathauto][download][type] = git
projects[pathauto][download][revision] = 75192ed
projects[pathauto][download][branch] = 7.x-1.x
projects[pathauto][patch][936222] = http://drupal.org/files/936222-pathauto-persist.patch

projects[menu_block][version] = 2.3
projects[menu_block][subdir] = contrib

projects[menu_views][version] = 1.3
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

projects[backports][version] = 1.0-alpha1
projects[backports][subdir] = contrib

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 9106bcf
projects[better_formats][download][branch] = 7.x-1.x

projects[caption_filter][version] = 1.2
projects[caption_filter][subdir] = contrib

projects[date_popup_authored][version] = 1.1
projects[date_popup_authored][subdir] = contrib

projects[image_resize_filter][version] = 1.13
projects[image_resize_filter][subdir] = contrib

projects[linkchecker][version] = 1.x-dev
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib
projects[linkchecker][download][type] = git
projects[linkchecker][download][revision] = a920eb0
projects[linkchecker][download][branch] = 7.x-1.x

projects[media][version] = 2.x-dev
projects[media][type] = module
projects[media][subdir] = contrib
projects[media][download][type] = git
projects[media][download][revision] = 1a0304d
projects[media][download][branch] = 7.x-2.x
projects[media][patch][1307054] = http://drupal.org/files/1307054-d7-2.patch

projects[media_youtube][version] = 1.0-beta3
projects[media_youtube][subdir] = contrib

projects[media_vimeo][version] = 1.0-beta5
projects[media_vimeo][subdir] = contrib

projects[module_filter][version] = 1.7
projects[module_filter][subdir] = contrib

projects[workbench][version] = 1.1
projects[workbench][subdir] = contrib

projects[workbench_moderation][version] = 1.x-dev
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][type] = module
projects[workbench_moderation][download][type] = git
projects[workbench_moderation][download][revision] = 6bdb20e
projects[workbench_moderation][download][branch] = 7.x-1.x
projects[workbench_moderation][patch][1285090] = http://drupal.org/files/playnicewithpanels-1285090-7.patch
projects[workbench_moderation][patch][1260112] = http://drupal.org/files/workbench_moderation-is_current-1260112-15.patch

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.x-dev 
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format.patch
projects[wysiwyg][patch][356480] = http://drupal.org/files/lazy_wysiwyg-356480-150.patch
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = d17bf11
projects[wysiwyg][download][branch] = 7.x-2.x

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib
projects[wysiwyg_filter][type] = module

projects[references_dialog][version] = 1.0-alpha4
projects[references_dialog][subdir] = contrib

projects[views_bulk_operations][version] = 3.0-rc1
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
projects[apps][patch][1479164] = http://drupal.org/files/1479164-apps-has-write-access-check.patch
projects[apps][patch][1561652] = http://drupal.org/files/1561652-apps-allow-drush-site-install-patch-reroll-1479164.patch
projects[apps][patch][1721538] = http://drupal.org/files/1721538-rename-app-images-not-replace.patch
projects[apps][patch][1721548] = http://drupal.org/files/1721548-silent-success-condition-profile.patch
projects[apps][patch][1665048] = http://drupal.org/files/reject-broken-images-1665048-2.patch

projects[defaultcontent][version] = 1.x-dev
projects[defaultcontent][type] = module
projects[defaultcontent][subdir] = contrib
projects[defaultcontent][download][type] = git
projects[defaultcontent][download][revision] = d8806d8
projects[defaultcontent][download][branch] = 7.x-1.x

projects[entity][version] = 1.0-rc3
projects[entity][subdir] = contrib

projects[features][version] = 1.0
projects[features][subdir] = contrib

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[uuid][version] = 1.x-dev
projects[uuid][type] = module
projects[uuid][subdir] = contrib
projects[uuid][download][type] = git
projects[uuid][download][revision] = 806c301
projects[uuid][download][branch] = 7.x-1.x

projects[variable][version] = 2.1
projects[variable][subdir] = contrib

;;;;;;;;;;;;
; Language ;
;;;;;;;;;;;;

projects[i18n][version] = 1.7
projects[i18n][subdir] = contrib

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

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

;;;;;;;;;;
; Search ;
;;;;;;;;;;

projects[custom_search][version] = 1.10
projects[custom_search][subdir] = contrib

projects[facetapi][version] = 1.1
projects[facetapi][subdir] = contrib

;projects[search_api][version] = 1.2
;projects[search_api][subdir] = contrib
;projects[search_api][patch][1698098] = http://drupal.org/files/search-api-disabled-index-configure-link.patch

;projects[search_api_solr][version] = 1.0-rc2
;projects[search_api_solr][subdir] = contrib
;projects[search_api_solr][patch][1407282] = http://drupal.org/files/1407282--variable_solr_connection_class-27.patch

;projects[search_api_db][version] = 1.0-beta3
;projects[search_api_db][subdir] = contrib

projects[metatag][version] = 1.0-alpha8
projects[metatag][subdir] = contrib
projects[metatag][type] = module
projects[metatag][download][type] = git
projects[metatag][download][revision] = 11012b12
projects[metatag][download][branch] = 7.x-1.x
projects[metatag][patch][1491616] = http://drupal.org/files/metatag-dublin_core_metatags-1491616-28.patch

projects[search404][version] = 1.1
projects[search404][subdir] = contrib

;;;;;;;;;;;;;
; LIBRARIES ;
;;;;;;;;;;;;;

;libraries[json2][download][type] = file
;libraries[json2][download][url] = https://raw.github.com/douglascrockford/JSON-js/fc535e9cc8fa78bbf45a85835c830e7f799a5084/json2.js

;libraries[markitup][download][type] = file
;libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
;libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch

;libraries[SolrPhpClient][download][type] = file
;libraries[SolrPhpClient][download][url] = http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip

libraries[tinymce][download][type] = git
libraries[tinymce][download][url] = https://github.com/sylus/tinymce-cirkuit.git

libraries[wet-boew][download][type] = git
libraries[wet-boew][download][url] = https://github.com/wet-boew/wet-boew.git

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; THEMES + THEME RELATED MODULES ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[adaptivetheme][version] = 3.0

projects[rubik][version] = 4.x-dev
projects[rubik][type] = theme
projects[rubik][download][type] = git
projects[rubik][download][revision] = e01c3d5
projects[rubik][download][branch] = 7.x-4.x
projects[rubik][patch][1623510] = http://drupal.org/files/1623510-6-rubik-widget-styling.patch
;projects[rubik][patch][1635790] = http://drupal.org/files/rubik-form-file-input-styling.patch
projects[rubik][patch][1645148] = http://drupal.org/files/rubik-ie9-box-sizing-1645148-1.patch
projects[rubik][patch][944534] = http://drupal.org/files/rubik-table_input_fluid-944534-5.patch
projects[rubik][patch][1445890] = http://drupal.org/files/editor-link-covered-1445890-2.patch
projects[rubik][patch][1003820] = http://drupal.org/files/1003820-rubik-5.patch
projects[rubik][patch][1440054] = http://drupal.org/files/patch_commit_96121294ba3b.patch

projects[tao][version] = 3.0-beta4
