; USAGE:
; =========
; .make files inside a profile will recurse and cannot contain the drupal project itself
; $ drush make webexp.make wet_d7_distro

core = 7.x
api = 2
projects[drupal][version] = "7.x"
translations[] = "fr"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Contributed Modules                                           ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Patches:
; =========
; WYSIWYG: we need the dev version for Features exportable support
; WYSIWYG: as per http://drupal.org/node/746524#comment-4730732 adds font styles to CKeditor
; FILEFIELD_PATHS: as per http://drupal.org/node/1017830 we require dev

;;;;;;;;;;;
; WYSIWYG ;
;;;;;;;;;;;

projects[better_formats][version] = "1.x-dev"
projects[better_formats][subdir] = "contrib"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][patch][746524] = "http://drupal.org/files/wysiwyg-746524-184.patch"

projects[wysiwyg_filter][version] = "1.6-rc2"
projects[wysiwyg_filter][subdir] = "contrib"

;;;;;;;;;;;;;;;;;
; FILE HANDLING ;
;;;;;;;;;;;;;;;;;

projects[imageapi][subdir] = "contrib"
projects[imageapi][version] = "1.x-dev"

projects[image_resize_filter][version] = "1.12"
projects[image_resize_filter][subdir] = "contrib"

projects[imce][version] = "1.5"
projects[imce][subdir] = "contrib"

projects[imce_wysiwyg][version] = "1.0"
projects[imce_wysiwyg][subdir] = "contrib"

projects[insert][version] = "1.1"
projects[insert][subdir] = "contrib"

projects[filefield_sources][version] = "1.4"
projects[filefield_sources][subdir] = "contrib"

;;;;;;;;;;;;;;;
; SEO & PATHS ;
;;;;;;;;;;;;;;;

projects[filefield_paths][subdir] = "contrib"
projects[filefield_paths][version] = "1.x-dev"

projects[pathauto][version] = "1.0"
projects[pathauto][subdir] = "contrib"

projects[pathologic][version] = "1.3"
projects[pathologic][subdir] = "contrib"

projects[token][version] = "1.0-rc1"
projects[token][subdir] = "contrib"

projects[transliteration][version] = "3.0"
projects[transliteration][subdir] = "contrib"

;;;;;;;;;;;;;;;
; DEVELOPMENT ;
;;;;;;;;;;;;;;;

projects[coder][version] = "1.x-dev"
projects[coder][subdir] = "contrib"

projects[defaultcontent][version] = "1.0-alpha6"
projects[defaultcontent][subdir] = "contrib"
projects[defaultcontent][patch][1446714] = "http://drupal.org/files/defaultcontent-1446714-16.patch"

projects[devel][version] = "1.x-dev"
projects[devel][subdir] = "contrib"

projects[features][version] = "1.0-rc2"
projects[features][subdir] = "contrib"

projects[features_override][version] = "2.0-alpha1"
projects[features_override][subdir] = "contrib"

projects[features_plumber][version] = "1.0-alpha3"
projects[features_plumber][subdir] = "contrib"

projects[strongarm][version] = "2.0-rc1"
projects[strongarm][subdir] = "contrib"

projects[querypath][version] = "2.0"
projects[querypath][subdir] = "contrib"

;;;;;;;;;;
; SEARCH ;
;;;;;;;;;;

projects[apachesolr][version] = "1.0-beta19"
projects[apachesolr][subdir] = "contrib"

projects[apachesolr_attachments][version] = "1.x-dev"
projects[apachesolr_attachments][subdir] = "contrib"

projects[apachesolr_views][version] = "1.0-beta1"
projects[apachesolr_views][subdir] = "contrib"

projects[search404][version] = "1.1"
projects[search404][subdir] = "contrib"

;;;;;;;;;;;;;;;;
; EXPERIMENTAL ;
;;;;;;;;;;;;;;;;

projects[entity_translation][version] = "1.x-dev"
projects[entity_translation][subdir] = "experimental"

projects[title][version] = "1.x-dev"
projects[title][subdir] = "experimental"

;;;;;;;;;
; OTHER ;
;;;;;;;;;

projects[absolute_messages][version] = "1.3"
projects[absolute_messages][subdir] = "contrib"

projects[admin][version] = "2.x-dev"
projects[admin][subdir] = "contrib"
projects[admin][patch][1475074] = "http://drupal.org/files/jquery17_undefined-1475074-1.patch"

projects[apps][version] = 1.x-dev
projects[apps][subdir] = contrib
projects[apps][type] = module
projects[apps][patch][1479164] = http://drupal.org/files/1479164-apps-permissions-check-modules-not-conf-reroll.patch
projects[apps][patch][1561652] = http://drupal.org/files/apps-allow-drush-site-install.patch

projects[boxes][version] = "1.0"
projects[boxes][subdir] = "contrib"

projects[ckeditor][version] = "1.8"
projects[ckeditor][subdir] = "contrib"

projects[ctools][version] = "1.0"
projects[ctools][subdir] = "contrib"

projects[conditional_styles][version] = "2.1"
projects[conditional_styles][subdir] = "contrib"

projects[context][version] = "3.0-beta2"
projects[context][subdir] = "contrib"

projects[custom_breadcrumbs][version] = "1.0-alpha1"
projects[custom_breadcrumbs][subdir] = "contrib"

projects[custom_formatters][version] = "2.0"
projects[custom_formatters][subdir] = "contrib"

projects[custom_search][version] = "1.9"
projects[custom_search][subdir] = "contrib"

projects[delta][version] = "3.0-beta9"
projects[delta][subdir] = "contrib"

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"

projects[ds][version] = "1.5"
projects[ds][subdir] = "contrib"

projects[elements][version] = "1.2"
projects[elements][subdir] = "contrib"

projects[entity][version] = "1.0-rc1"
projects[entity][subdir] = "contrib"

projects[entity_autocomplete][version] = "1.0-beta1"
projects[entity_autocomplete][subdir] = "contrib"

projects[entitycache][version] = "1.1"
projects[entitycache][subdir] = "contrib"

projects[facetapi][version] = "1.0-rc4"
projects[facetapi][subdir] = "contrib"

projects[fences][version] = "1.0"
projects[fences][subdir] = "contrib"

projects[html5_tools][version] = "1.1"
projects[html5_tools][subdir] = "contrib"

projects[i18n][version] = "1.5"
projects[i18n][subdir] = "contrib"

projects[l10n_update][version] = "1.0-beta3"
projects[l10n_update][subdir] = "contrib"

projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][subdir] = "contrib"

projects[imce][version] = "1.5"
projects[imce][subdir] = "contrib"

projects[jquery_update][version] = "2.x-dev"
projects[jquery_update][subdir] = "contrib"
projects[jquery_update][patch][1524944] = "http://drupal.org/files/allow-different-version-for-admin-pages-1524944-6.patch"

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.x-dev"
projects[link][subdir] = "contrib"

projects[linkchecker][version] = "1.0-beta1"
projects[linkchecker][subdir] = "contrib"

projects[metatag][version] = "1.0-alpha6"
projects[metatag][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[migrate][version] = "2.x-dev"
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = "2.x-dev"
projects[migrate_extras][subdir] = "contrib"

projects[module_filter][version] = "1.6"
projects[module_filter][subdir] = "contrib"

projects[password_policy][version] = "1.0-rc3"
projects[password_policy][subdir] = "contrib"

projects[relation][version] = "1.0-rc2"
projects[relation][subdir] = "contrib"

projects[rules][version] = "2.0"
projects[rules][subdir] = "contrib"

projects[skinr][version] = "2.0-beta1"
projects[skinr][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[variable][version] = "1.2"
projects[variable][subdir] = "contrib"

projects[views][version] = "3.3"
projects[views][subdir] = "contrib"

projects[workbench][version] = "1.1"
projects[workbench][subdir] = "contrib"

projects[workbench_moderation][version] = "1.x-dev"
projects[workbench_moderation][subdir] = "contrib"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Themes                                                        ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

projects[zen][version] = "5.0"
projects[rubik][version] = "4.0-beta8"
projects[tao][version] = "3.0-beta4"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Libraries                                                     ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

libraries[wet-boew][download][type] = "git"
libraries[wet-boew][download][url] = "https://github.com/wet-boew/wet-boew.git"
libraries[wet-boew][directory_name] = "wet-boew"
libraries[wet-boew][patch][] = https://raw.github.com/gist/2766372/ba8fe6f86eb4e5645fa8e35a285bf9074da3c0c0/patch-001-wet-boew
libraries[wet-boew][type] = "library"