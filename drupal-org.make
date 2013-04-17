api = 2
core = 7.22

; Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 192ed62
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1967250] = http://drupal.org/files/field_info_collate_fields-1967250-02.patch
projects[panopoly_core][patch][1967238] = http://drupal.org/files/panopoly_core_make-1967238-02.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = b57b48f
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = b8d3809
projects[panopoly_theme][download][branch] = 7.x-1.x
projects[panopoly_theme][patch][1967234] = http://drupal.org/files/panopoly_theme_make-1967234-01.patch

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 3a1f8f9
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 0dafe32
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][1967230] = http://drupal.org/files/panopoly_widgets_make-1967230-01.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 4d9d071
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][1967216] = http://drupal.org/files/panopoly_admin_make-1967216-01.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = cb4ca09
projects[panopoly_users][download][branch] = 7.x-1.x

; WetKit Foundation (Disabled on D.O)
; Waiting for this patch to get committed to Drupal Packager
; Instead have to include all other make files into this one for now

;includes[] = modules/custom/wetkit_wysiwyg/wetkit_wysiwyg.make
;includes[] = modules/custom/wetkit_search/wetkit_search.make
;includes[] = modules/custom/wetkit_language/wetkit_language.make
;includes[] = modules/custom/wetkit_migrate/wetkit_migrate.make
;includes[] = modules/custom/wetkit_bean/wetkit_bean.make
;includes[] = modules/custom/wetkit_metatag/wetkit_metatag.make
;includes[] = modules/custom/wetkit_core/wetkit_core.make
;includes[] = modules/custom/wetkit_wetboew/wetkit_wetboew.make
;includes[] = modules/custom/wetkit_breadcrumbs/wetkit_breadcrumbs.make

; WetKit Foundation (Temporary method for D.O)

; WetKit Bean

projects[bean][version] = 1.x-dev
projects[bean][subdir] = contrib
projects[bean][type] = module
projects[bean][download][type] = git
projects[bean][download][revision] = d4038e7
projects[bean][download][branch] = 7.x-1.x

projects[bean_panels][version] = 1.x-dev
projects[bean_panels][subdir] = contrib
projects[bean_panels][type] = module
projects[bean_panels][download][type] = git
projects[bean_panels][download][revision] = 3a7d7f2
projects[bean_panels][download][branch] = 7.x-1.x

; WetKit Breadcrumbs

projects[path_breadcrumbs][version] = 3.x-dev
projects[path_breadcrumbs][subdir] = contrib
projects[path_breadcrumbs][type] = module
projects[path_breadcrumbs][download][type] = git
projects[path_breadcrumbs][download][revision] = 2c36d27
projects[path_breadcrumbs][download][branch] = 7.x-3.x

; WetKit Core

projects[advanced_help][version] = 1.x-dev
projects[advanced_help][subdir] = contrib
projects[advanced_help][type] = module
projects[advanced_help][download][type] = git
projects[advanced_help][download][revision] = 26437d8
projects[advanced_help][download][branch] = 7.x-1.x

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 3b4a8c9
projects[better_formats][download][branch] = 7.x-1.x

projects[diff][version] = 3.x-dev
projects[diff][subdir] = contrib
projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][revision] = adb4304
projects[diff][download][branch] = 7.x-3.x

projects[fences][version] = 1.x-dev
projects[fences][subdir] = contrib
projects[fences][type] = module
projects[fences][download][type] = git
projects[fences][download][revision] = 67206b5
projects[fences][download][branch] = 7.x-1.x

projects[hierarchical_select][version] = 3.x-dev
projects[hierarchical_select][subdir] = contrib
projects[hierarchical_select][type] = module
projects[hierarchical_select][download][type] = git
projects[hierarchical_select][download][revision] = 1da92c0
projects[hierarchical_select][download][branch] = 7.x-3.x
projects[hierarchical_select][patch][1457252] = http://drupal.org/files/hierarchical_select-config_not_defined_1457252-2.patch
projects[hierarchical_select][patch][1649706] = http://drupal.org/files/hs-menu-with-taxonomy-fix.patch
projects[hierarchical_select][patch][1315192] = http://drupal.org/files/1315192-fix-syntax-error-8.patch

projects[linkchecker][version] = 1.x-dev
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib
projects[linkchecker][download][type] = git
projects[linkchecker][download][revision] = 0e7fc34
projects[linkchecker][download][branch] = 7.x-1.x

projects[menu_attributes][version] = 1.0-rc2
projects[menu_attributes][subdir] = contrib

projects[password_policy][version] = 1.3
projects[password_policy][subdir] = contrib

projects[total_control][version] = 2.4
projects[total_control][subdir] = contrib

projects[views_atom][version] = 1.x-dev
projects[views_atom][type] = module
projects[views_atom][subdir] = contrib
projects[views_atom][download][type] = git
projects[views_atom][download][revision] = 96e735a2
projects[views_atom][download][branch] = 7.x-1.x
projects[views_atom][patch][1632362] = http://drupal.org/files/views_atom-Update_feeds_item_table_name-1632362-1.patch

projects[webform][version] = 3.18
projects[webform][subdir] = contrib

projects[workbench][version] = 7.x-dev
projects[workbench][subdir] = contrib
projects[workbench][type] = module
projects[workbench][download][type] = git
projects[workbench][download][revision] = 16a8fff
projects[workbench][download][branch] = 7.x-1.x

projects[workbench_moderation][version] = 1.x-dev
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][type] = module
projects[workbench_moderation][download][type] = git
projects[workbench_moderation][download][revision] = d196989
projects[workbench_moderation][download][branch] = 7.x-1.x
projects[workbench_moderation][patch][1285090] = http://drupal.org/files/playnicewithpanels-1285090-12.patch
projects[workbench_moderation][patch][1260112] = http://drupal.org/files/workbench_moderation-is_current-1260112-28.patch
projects[workbench_moderation][patch][1875700] = http://drupal.org/files/workbench_moderation-allow-unpublish-live-revision-1875700_0.patch
projects[workbench_moderation][patch][1919706] = http://drupal.org/files/1919706-1-no-node.patch
projects[workbench_moderation][patch][1919706] = http://drupal.org/files/workbench_moderation-revision-moderation-edit-link-1785798-14.patch
projects[workbench_moderation][patch][1946392] = http://drupal.org/files/et_language-1946392-1.patch
projects[workbench_moderation][patch][1969226] = http://drupal.org/files/workbench-pathauto-1969226-1.patch

projects[rules][version] = 2.3
projects[rules][subdir] = contrib

projects[transliteration][version] = 3.1
projects[transliteration][subdir] = contrib

projects[adaptivetheme][version] = 3.1

projects[rubik][version] = 4.x-dev
projects[rubik][type] = theme
projects[rubik][download][type] = git
projects[rubik][download][revision] = e936b82
projects[rubik][download][branch] = 7.x-4.x
projects[rubik][patch][1730844] = http://drupal.org/files/rubik_inline_field_desc-1730844-06.patch
projects[rubik][patch][944534] = http://drupal.org/files/rubik-table_input_fluid-944534-5.patch
projects[rubik][patch][1445890] = http://drupal.org/files/editor-link-covered-1445890-2.patch
projects[rubik][patch][1003820] = http://drupal.org/files/1003820-rubik-5.patch
projects[rubik][patch][1440054] = http://drupal.org/files/patch_commit_96121294ba3b.patch
projects[rubik][patch][1645148] = http://drupal.org/files/rubik-ie9-box-sizing-1645148-1.patch

projects[tao][version] = 3.x-dev
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][revision] = f06452b
projects[tao][download][branch] = 7.x-3.x
projects[tao][patch][1016844] = http://drupal.org/files/tao_taxonomy_manager-1016844-12.patch

libraries[querypath][download][type] = git
libraries[querypath][download][branch] = 3.x
libraries[querypath][download][revision] = eeb67cc
libraries[querypath][download][url] = https://github.com/technosophos/querypath.git

; WetKit Languages

projects[entity_translation][version] = 1.x-dev
projects[entity_translation][type] = module
projects[entity_translation][subdir] = contrib
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = e110c7a
projects[entity_translation][download][branch] = 7.x-1.x
projects[entity_translation][patch][1516202] = http://drupal.org/files/translation-access-plugin-1516202-2.patch

projects[title][version] = 1.x-dev
projects[title][type] = module
projects[title][subdir] = contrib
projects[title][download][type] = git
projects[title][download][revision] = b7a8663
projects[title][download][branch] = 7.x-1.x
projects[title][patch][1907078] = http://drupal.org/files/undefined_index_field_name-1907078-2.patch

projects[i18n][version] = 1.8
projects[i18n][subdir] = contrib

;projects[i18n_panels][type] = module
;projects[i18n_panels][subdir] = contrib
;projects[i18n_panels][download][type] = git
;projects[i18n_panels][download][url] = http://git.drupal.org/sandbox/daspeter/1444130.git
;projects[i18n_panels][download][revision] = 9380b11
;projects[i18n_panels][download][branch] = 7.x-1.x

projects[i18nviews][version] = 3.x-dev
projects[i18nviews][type] = module
projects[i18nviews][subdir] = contrib
projects[i18nviews][download][type] = git
projects[i18nviews][download][revision] = 26bd52c
projects[i18nviews][download][branch] = 7.x-3.x
projects[i18nviews][patch][1788832] = http://drupal.org/files/fixed-1788832-1.patch

projects[l10n_client][version] = 1.x-dev
projects[l10n_client][type] = module
projects[l10n_client][subdir] = contrib
projects[l10n_client][download][type] = git
projects[l10n_client][download][revision] = 99dcad7
projects[l10n_client][download][branch] = 7.x-1.x

projects[l10n_update][version] = 1.0-beta3
projects[l10n_update][subdir] = contrib

projects[potx][version] = 1.0
projects[potx][subdir] = contrib

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

projects[variable][version] = 2.x-dev
projects[variable][type] = module
projects[variable][subdir] = contrib
projects[variable][download][type] = git
projects[variable][download][revision] = b188010
projects[variable][download][branch] = 7.x-2.x

; WetKit Metatag

projects[metatag][version] = 1.x-dev
projects[metatag][subdir] = contrib
projects[metatag][type] = module
projects[metatag][download][type] = git
projects[metatag][download][revision] = cf6f5d1
projects[metatag][download][branch] = 7.x-1.x

; WetKit Migrate

projects[migrate][version] = 2.x-dev
projects[migrate][type] = module
projects[migrate][subdir] = contrib
projects[migrate][download][type] = git
projects[migrate][download][revision] = 1d092a1
projects[migrate][download][branch] = 7.x-2.x

projects[migrate_extras][version] = 2.5
projects[migrate_extras][type] = module
projects[migrate_extras][subdir] = contrib

; WetKit Search

projects[facetapi][version] = 1.x-dev
projects[facetapi][subdir] = contrib
projects[facetapi][type] = module
projects[facetapi][download][type] = git
projects[facetapi][download][revision] = ed38b53
projects[facetapi][download][branch] = 7.x-1.x

projects[search_api][version] = 1.x-dev
projects[search_api][subdir] = contrib
projects[search_api][type] = module
projects[search_api][download][type] = git
projects[search_api][download][revision] = 606b895
projects[search_api][download][branch] = 7.x-1.x

projects[search_api_solr][version] = 1.x-dev
projects[search_api_solr][subdir] = contrib
projects[search_api_solr][type] = module
projects[search_api_solr][download][type] = git
projects[search_api_solr][download][revision] = b40a0d0
projects[search_api_solr][download][branch] = 7.x-1.x
projects[search_api_solr][patch][1407282] = http://drupal.org/files/1407282-variable_solr_connection_class-37.patch

projects[search_api_db][version] = 1.x-dev
projects[search_api_db][subdir] = contrib
projects[search_api_db][type] = module
projects[search_api_db][download][type] = git
projects[search_api_db][download][revision] = 9ab3b08
projects[search_api_db][download][branch] = 7.x-1.x

projects[custom_search][version] = 1.11
projects[custom_search][subdir] = contrib

projects[search404][version] = 1.2
projects[search404][subdir] = contrib

libraries[SolrPhpClient][download][type] = get
libraries[SolrPhpClient][download][url] = http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip

; WetKit WET-BOEW

libraries[wet-boew][download][type] = git
libraries[wet-boew][download][branch] = master-dist
libraries[wet-boew][download][revision] = 44ae375
libraries[wet-boew][download][url] = https://github.com/wet-boew/wet-boew-dist.git

; WetKit WYSIWYG

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = b0d16f2
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format-1489096-7.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch

projects[wysiwyg_filter][version] = 1.x-dev
projects[wysiwyg_filter][type] = module
projects[wysiwyg_filter][subdir] = contrib
projects[wysiwyg_filter][download][type] = git
projects[wysiwyg_filter][download][revision] = 6cbb1f4
projects[wysiwyg_filter][download][branch] = 7.x-1.x
projects[wysiwyg_filter][patch][1687794] = http://drupal.org/files/wysiwyg_filter-1687794-1-skip-validation-if-filter-disabled.patch
projects[wysiwyg_filter][patch][1543044] = http://drupal.org/files/wysiwyg_filter-missing-argument-1543044-2_1.patch

projects[wysiwyg_template][version] = 2.7
projects[wysiwyg_template][subdir] = contrib

projects[linkit][version] = 1.x-dev
projects[linkit][type] = module
projects[linkit][subdir] = contrib
projects[linkit][download][type] = git
projects[linkit][download][revision] = 11c50b8
projects[linkit][download][branch] = 7.x-2.x
projects[linkit][patch][1793896] = http://drupal.org/files/entitylanguages-1793896-1.patch

projects[image_resize_filter][version] = 1.x-dev
projects[image_resize_filter][type] = module
projects[image_resize_filter][subdir] = contrib
projects[image_resize_filter][download][type] = git
projects[image_resize_filter][download][revision] = da3bbd6
projects[image_resize_filter][download][branch] = 7.x-1.x
projects[image_resize_filter][patch][1708366] = http://drupal.org/files/1708366-7.patch

projects[caption_filter][version] = 1.x-dev
projects[caption_filter][type] = module
projects[caption_filter][subdir] = contrib
projects[caption_filter][download][type] = git
projects[caption_filter][download][revision] = c9794cf
projects[caption_filter][download][branch] = 7.x-1.x
projects[caption_filter][patch][1432092] = http://drupal.org/files/1432092-button-and-image.patch

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1/ckeditor_4.1_standard.zip"

libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = https://github.com/downloads/tinymce/tinymce/tinymce_3.5.8.zip
libraries[tinymce][patch][1561882] = http://drupal.org/files/1561882-cirkuit-theme-tinymce-3.5.8.patch

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch
