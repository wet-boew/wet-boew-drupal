; WetKit Migrate Makefile

api = 2
core = 7.x

; Modules needed for Migration

projects[migrate][version] = 2.x-dev
projects[migrate][type] = module
projects[migrate][subdir] = contrib
projects[migrate][download][type] = git
projects[migrate][download][revision] = 268a386
projects[migrate][download][branch] = 7.x-2.x
projects[migrate][patch][1839534] = http://drupal.org/files/migrate-undefined-index-file-inc-1839534-2.patch

projects[migrate_extras][version] = 2.5
projects[migrate_extras][type] = module
projects[migrate_extras][subdir] = contrib

;projects[querypath][version] = 2.x-dev
;projects[querypath][type] = module
;projects[querypath][subdir] = contrib
;projects[querypath][download][type] = git
;projects[querypath][download][revision] = ca5c928
;projects[querypath][download][branch] = 7.x-1.x