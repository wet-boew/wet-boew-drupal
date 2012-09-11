api = 2
core = 7.x

includes[] = https://raw.github.com/sylus/wet-boew-drupal/master/drupal-org-core.make

; Add wetkit to the full Drupal distro build
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/sylus/wet-boew-drupal.git
projects[wetkit][download][revision] = master
