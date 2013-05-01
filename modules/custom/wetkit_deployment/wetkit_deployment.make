; WetKit Deployment Makefile

api = 2
core = 7.x

; Modules for WetKit Deployment

projects[deploy][version] = 2.x-dev
projects[deploy][subdir] = contrib
projects[deploy][type] = module
projects[deploy][download][type] = git
projects[deploy][download][revision] = 5cc4fc2
projects[deploy][download][branch] = 7.x-2.x
projects[deploy][patch][1604938] = http://drupal.org/files/deploy-1604938_1.patch
projects[deploy][patch][1948186] = http://drupal.org/files/deploy_allow_revision_id-1948186-2.patch

projects[entity_dependency][version] = 1.x-dev
projects[entity_dependency][subdir] = contrib
projects[entity_dependency][type] = module
projects[entity_dependency][download][type] = git
projects[entity_dependency][download][revision] = 7ca711a
projects[entity_dependency][download][branch] = 7.x-1.x
projects[entity_dependency][patch][1538848] = http://drupal.org/files/dependencies_detect_empty_entity_1538848-1.patch
projects[entity_dependency][patch][1545278] = http://drupal.org/files/entity-dependency-entityreference-1545278-1.patch
projects[entity_dependency][patch][1772372] = http://drupal.org/files/documentation-1772372.patch
projects[entity_dependency][patch][1590280] = http://drupal.org/files/entity_dependency_comment_typos-1590280-1.patch
projects[entity_dependency][patch][1589794] = http://drupal.org/files/entity_dependency_iterator_documentation-1589794-1.patch
projects[entity_dependency][patch][1970760] = http://drupal.org/files/entity_dependency-keep-track-of-revision_id-1970760-1.patch

projects[quicktabs][version] = 3.x-dev
projects[quicktabs][subdir] = contrib
projects[quicktabs][type] = module
projects[quicktabs][download][type] = git
projects[quicktabs][download][revision] = 89f7fd0
projects[quicktabs][download][branch] = 7.x-3.x
