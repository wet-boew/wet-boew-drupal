; WetKit Widgets Makefile

api = 2
core = 7.x

; WetKit - Contrib - Fields

projects[date][version] = 2.6
projects[date][subdir] = contrib

projects[tablefield][version] = 2.0
projects[tablefield][subdir] = contrib

projects[link][version] = 1.0
projects[link][subdir] = contrib

projects[simple_gmap][version] = 1.0-rc1
projects[simple_gmap][subdir] = contrib

projects[field_group][version] = 1.1
projects[field_group][subdir] = contrib

projects[entityreference][version] = 1.0-rc3
projects[entityreference][subdir] = contrib

; WetKit - Contrib - Widgets

projects[menu_block][version] = 2.3
projects[menu_block][subdir] = contrib

; WetKit - Contrib - Files & Media

projects[file_entity][version] = 2.x-dev
projects[file_entity][subdir] = contrib
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = a8986e5
projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][patch][1553094] = http://drupal.org/files/Alt-and-Title-support-for-Images-1553094-68.patch

projects[media][version] = 2.x-dev
projects[media][subdir] = contrib
projects[media][download][type] = git
projects[media][download][revision] = 1a0304d
projects[media][download][branch] = 7.x-2.x
projects[media][patch][1307054] = http://drupal.org/files/1307054-d7-2.patch
projects[media][patch][1311828] = http://drupal.org/files/media-n1311828.patch

projects[media_youtube][version] = 1.0-beta3
projects[media_youtube][subdir] = contrib

projects[media_vimeo][version] = 1.0-beta5
projects[media_vimeo][subdir] = contrib