api = 2
core = 7.x

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/wet-boew/wet-boew-drupal.git
projects[wetkit][download][branch] = 7.x-4.x
