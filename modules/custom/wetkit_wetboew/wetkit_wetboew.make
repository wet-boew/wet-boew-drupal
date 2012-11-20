; WetKit Web Usability Makefile

api = 2
core = 7.x

; Modules for WetKit

projects[advanced_help][version] = 1.0
projects[advanced_help][subdir] = contrib

projects[boxes][version] = 1.0
projects[boxes][subdir] = contrib

projects[context][version] = 3.0-beta2
projects[context][subdir] = contrib

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 9106bcf
projects[better_formats][download][branch] = 7.x-1.x

projects[custom_formatters][version] = 2.2
projects[custom_formatters][subdir] = contrib
projects[custom_formatters][type] = module
projects[custom_formatters][download][type] = git
projects[custom_formatters][download][revision] = 08bcc00
projects[custom_formatters][download][branch] = 7.x-2.x
projects[custom_formatters][patch][1721294] = http://drupal.org/files/no_makefile-1721294-1.patch

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

projects[linkchecker][version] = 1.x-dev
projects[linkchecker][type] = module
projects[linkchecker][subdir] = contrib
projects[linkchecker][download][type] = git
projects[linkchecker][download][revision] = a920eb0
projects[linkchecker][download][branch] = 7.x-1.x

projects[menu_views][version] = 1.3
projects[menu_views][subdir] = contrib

projects[metatag][version] = 1.0-beta4
projects[metatag][subdir] = contrib

projects[password_policy][version] = 1.0-rc3
projects[password_policy][subdir] = contrib

projects[views_atom][version] = 1.x-dev
projects[views_atom][type] = module
projects[views_atom][subdir] = contrib
projects[views_atom][download][type] = git
projects[views_atom][download][revision] = 96e735a2
projects[views_atom][download][branch] = 7.x-1.x
projects[views_atom][patch][1632362] = http://drupal.org/files/views_atom-Update_feeds_item_table_name-1632362-1.patch

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
projects[rubik][patch][944534] = http://drupal.org/files/rubik-table_input_fluid-944534-5.patch
projects[rubik][patch][1445890] = http://drupal.org/files/editor-link-covered-1445890-2.patch
projects[rubik][patch][1003820] = http://drupal.org/files/1003820-rubik-5.patch
projects[rubik][patch][1440054] = http://drupal.org/files/patch_commit_96121294ba3b.patch
projects[rubik][patch][1645148] = http://drupal.org/files/rubik-ie9-box-sizing-1645148-1.patch
;projects[rubik][patch][1730844] = http://drupal.org/files/rubik-inline_field_descriptions-1730844-05.patch

projects[tao][version] = 3.0-beta4

; Libraries for WetKit (Tagged 3.0.2)

libraries[wet-boew][download][type] = git
libraries[wet-boew][download][revision] = f8e62c0011
libraries[wet-boew][download][url] = https://github.com/wet-boew/wet-boew.git