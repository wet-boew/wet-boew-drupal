api = 2
core = 7.x

projects[drupal][version] = 7.19
includes[] = drupal-org-core.make
	
; Drupal.org packaging standards
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/sylus/wet-boew-drupal.git
projects[wetkit][download][revision] = 74136766d3d4242cfe2441cc6f91408209aaebf9
