; WetKit Language Makefile

api = 2
core = 7.x

; Tailor app for WetKit

projects[entity_translation][version] = 1.x-dev
projects[entity_translation][type] = module
projects[entity_translation][subdir] = contrib
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = f396c23
projects[entity_translation][download][branch] = 7.x-1.x

projects[i18n][version] = 1.7
projects[i18n][subdir] = contrib

;projects[i18n_panels][type] = module
;projects[i18n_panels][subdir] = contrib
;projects[i18n_panels][download][type] = git
;projects[i18n_panels][download][url] = git://git.drupal.org/sandbox/daspeter/1444130.git
;projects[i18n_panels][download][branch] = 7.x-1.x

projects[i18nviews][version] = 3.x-dev
projects[i18nviews][subdir] = contrib

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

projects[title][version] = 1.x-dev
projects[title][type] = module
projects[title][subdir] = contrib
projects[title][download][type] = git
projects[title][download][revision] = adec2dc
projects[title][download][branch] = 7.x-1.x

projects[variable][version] = 2.1
projects[variable][subdir] = contrib
