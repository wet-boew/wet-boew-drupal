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
projects[better_formats][download][revision] = 9106bcf
projects[better_formats][download][branch] = 7.x-1.x

projects[diff][version] = 3.x-dev
projects[diff][subdir] = contrib
projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][revision] = adb4304
projects[diff][download][branch] = 7.x-3.x

projects[ds][version] = 2.0
projects[ds][subdir] = contrib

projects[fences][version] = 1.0
projects[fences][subdir] = contrib
projects[fences][type] = module
projects[fences][download][type] = git
projects[fences][download][revision] = d9ca337
projects[fences][download][branch] = 7.x-1.x
projects[fences][patch][1561244] = http://drupal.org/files/undefined-index-1561244-7.patch

projects[hierarchical_select][version] = 3.x-dev
projects[hierarchical_select][subdir] = contrib
projects[hierarchical_select][type] = module
projects[hierarchical_select][download][type] = git
projects[hierarchical_select][download][revision] = 1da92c0
projects[hierarchical_select][download][branch] = 7.x-3.x
projects[hierarchical_select][patch][1457252] = http://drupal.org/files/hierarchical_select-config_not_defined_1457252-2.patch
projects[hierarchical_select][patch][1649706] = http://drupal.org/files/hs-menu-with-taxonomy-fix.patch

projects[linkchecker][version] = 1.x-dev
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib
projects[linkchecker][download][type] = git
projects[linkchecker][download][revision] = a920eb0
projects[linkchecker][download][branch] = 7.x-1.x

projects[menu_attributes][version] = 1.0-rc2
projects[menu_attributes][subdir] = contrib

projects[menu_views][version] = 1.3
projects[menu_views][subdir] = contrib

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

projects[rules][version] = 2.2
projects[rules][subdir] = contrib

projects[transliteration][version] = 3.1
projects[transliteration][subdir] = contrib

; Themes for WetKit

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

projects[tao][version] = 3.0-beta4

; Libraries for WetKit

libraries[querypath][download][type] = git
libraries[querypath][download][branch] = 3.x
libraries[querypath][download][revision] = 2320739
libraries[querypath][download][url] = https://github.com/technosophos/querypath.git
