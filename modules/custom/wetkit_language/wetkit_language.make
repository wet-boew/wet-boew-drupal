; WetKit Language Makefile

api = 2
core = 7.x

; Tailor app for WetKit

projects[entity_translation][version] = 1.x-dev
projects[entity_translation][type] = module
projects[entity_translation][subdir] = contrib
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = a49eda0
projects[entity_translation][download][branch] = 7.x-1.x
projects[entity_translation][patch][1437976] = http://drupal.org/files/et-node_translation-1437976-19.patch

projects[i18n][version] = 1.7
projects[i18n][subdir] = contrib

;projects[i18n_panels][type] = module
;projects[i18n_panels][subdir] = contrib
;projects[i18n_panels][download][type] = git
;projects[i18n_panels][download][url] = git://git.drupal.org/sandbox/daspeter/1444130.git
;projects[i18n_panels][download][branch] = 7.x-1.x

projects[i18nviews][version] = 3.x-dev
projects[i18nviews][type] = module
projects[i18nviews][subdir] = contrib
projects[i18nviews][download][type] = git
projects[i18nviews][download][revision] = 26bd52c
projects[i18nviews][download][branch] = 7.x-3.x
projects[i18nviews][patch][1788832] = http://drupal.org/files/fixed-1788832-1.patch

projects[l10n_client][version] = 1.1
projects[l10n_client][type] = module
projects[l10n_client][subdir] = contrib
projects[l10n_client][download][type] = git
projects[l10n_client][download][revision] = df71809
projects[l10n_client][download][branch] = 7.x-1.x
projects[l10n_client][patch][1181356] = http://drupal.org/files/l10n_client-1181356-6.patch
projects[l10n_client][patch][1026048] = http://drupal.org/files/issues/l10n_client.module_0.patch
projects[l10n_client][patch][862590] = http://drupal.org/files/l10n_client-optimization-862590-48.patch
projects[l10n_client][patch][1195948] = http://drupal.org/files/issues/l10_client_css-2.patch
projects[l10n_client][patch][1161204] = http://drupal.org/files/issues/css_42.patch

projects[l10n_update][version] = 1.0-beta3
projects[l10n_update][subdir] = contrib

projects[potx][version] = 1.0
projects[potx][subdir] = contrib

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

projects[title][version] = 1.x-dev
projects[title][type] = module
projects[title][subdir] = contrib
projects[title][download][type] = git
projects[title][download][revision] = 2299dd5
projects[title][download][branch] = 7.x-1.x

projects[variable][version] = 2.1
projects[variable][subdir] = contrib
