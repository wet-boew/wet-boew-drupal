api = 2
core = 7.x

projects[drupal][version] = 7.19
includes[] = drupal-org-core.make
	
; Drupal.org packaging standard
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/wet-boew/wet-boew-drupal.git
projects[wetkit][download][revision] = master
