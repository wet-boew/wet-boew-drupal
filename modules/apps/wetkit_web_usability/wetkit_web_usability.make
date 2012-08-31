; WetKit Web Usability Makefile

api = 2
core = 7.x

; Tailor app for WetKit

projects[boxes][version] = 1.0
projects[boxes][subdir] = contrib

projects[context][version] = 3.0-beta2
projects[context][subdir] = contrib

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

projects[password_policy][version] = 1.0-rc3
projects[password_policy][subdir] = contrib

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

; MODIFICATION

projects[ds][version] = 2.0-beta1
projects[ds][subdir] = contrib

projects[rules][version] = 2.2
projects[rules][subdir] = contrib

projects[menu_views][version] = 1.3
projects[menu_views][subdir] = contrib

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 9106bcf
projects[better_formats][download][branch] = 7.x-1.x

libraries[wet-boew][download][type] = git
libraries[wet-boew][download][url] = https://github.com/wet-boew/wet-boew.git