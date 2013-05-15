; WetKit Core Makefile

api = 2
core = 7.x

; Modules for WetKit Core

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

;projects[breakpoints][version] = 1.x-dev
;projects[breakpoints][subdir] = contrib
;projects[breakpoints][type] = module
;projects[breakpoints][download][type] = git
;projects[breakpoints][download][revision] = 6170278
;projects[breakpoints][download][branch] = 7.x-1.x

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
projects[hierarchical_select][patch][1587570] = http://drupal.org/files/hierarchical_select-remove-array-to-string-error.patch

projects[linkchecker][version] = 1.x-dev
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib
projects[linkchecker][download][type] = git
projects[linkchecker][download][revision] = 0e7fc34
projects[linkchecker][download][branch] = 7.x-1.x

projects[menu_attributes][version] = 1.0-rc2
projects[menu_attributes][subdir] = contrib

projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][subdir] = contrib

;projects[navbar][version] = 1.x-dev
;projects[navbar][subdir] = contrib
;projects[navbar][type] = module
;projects[navbar][download][type] = git
;projects[navbar][download][revision] = 184ce30
;projects[navbar][download][branch] = 7.x-1.x

projects[password_policy][version] = 1.3
projects[password_policy][subdir] = contrib

projects[total_control][version] = 2.4
projects[total_control][subdir] = contrib

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
projects[workbench_moderation][patch][1969226] = http://drupal.org/files/workbench-pathauto-1969226-2.patch

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

;projects[ember][version] = 1.x-dev
;projects[ember][type] = theme
;projects[ember][download][type] = git
;projects[ember][download][revision] = 34027ec
;projects[ember][download][branch] = 7.x-1.x

;libraries[underscore][download][type] = get
;libraries[underscore][download][url] = https://github.com/documentcloud/underscore/archive/1.4.4.zip

;libraries[backbone][download][type] = get
;libraries[backbone][download][url] = https://github.com/documentcloud/backbone/archive/1.0.0.zip

libraries[querypath][download][type] = git
libraries[querypath][download][branch] = 3.x
libraries[querypath][download][revision] = eeb67cc
libraries[querypath][download][url] = https://github.com/technosophos/querypath.git
