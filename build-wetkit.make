api = 2
core = 7.x

projects[drupal][version] = 7.20
includes[] = drupal-org-core.make
	
; Drupal.org packaging standards
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/wet-boew/wet-boew-drupal.git
projects[wetkit][download][revision] = master
