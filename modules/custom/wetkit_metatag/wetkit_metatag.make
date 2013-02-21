; WetKit Metatag Makefile

api = 2
core = 7.x

; Modules for WetKit Metatag

projects[metatag][version] = 1.x-dev
projects[metatag][subdir] = contrib
projects[metatag][type] = module
projects[metatag][download][type] = git
projects[metatag][download][revision] = 0648e28
projects[metatag][download][branch] = 7.x-1.x
projects[metatag][patch][1845326] = http://drupal.org/files/metatag-n1845326-83.patch

projects[metatag_panels][version] = 1.x-dev
projects[metatag_panels][subdir] = contrib
projects[metatag_panels][type] = module
projects[metatag_panels][download][type] = git
projects[metatag_panels][download][revision] = deaf71c
projects[metatag_panels][download][branch] = 7.x-1.x