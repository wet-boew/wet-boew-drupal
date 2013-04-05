api = 2
core = 7.x

projects[drupal][version] = 7.22
includes[] = drupal-org-core.make
	
; Drupal.org packaging standards
projects[wet][type] = profile 
projects[wet][download][type] = git
projects[wet][download][branch] = 7.x-1.x