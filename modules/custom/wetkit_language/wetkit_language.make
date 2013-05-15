; WetKit Language Makefile

api = 2
core = 7.x

; Tailor app for WetKit

projects[entity_translation][version] = 1.x-dev
projects[entity_translation][type] = module
projects[entity_translation][subdir] = contrib
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = 50edb30
projects[entity_translation][download][branch] = 7.x-1.x
projects[entity_translation][patch][1516202] = http://drupal.org/files/translation-access-plugin-1516202-2.patch
projects[entity_translation][patch][1925848] = http://drupal.org/files/entitytranslation-incorrect_pathauto_pattern-1925848-8.patch

projects[title][version] = 1.x-dev
projects[title][type] = module
projects[title][subdir] = contrib
projects[title][download][type] = git
projects[title][download][revision] = 406103c
projects[title][download][branch] = 7.x-1.x

projects[i18n][version] = 1.x-dev
projects[i18n][type] = module
projects[i18n][subdir] = contrib
projects[i18n][download][type] = git
projects[i18n][download][revision] = 3e290cd
projects[i18n][download][branch] = 7.x-1.x

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
