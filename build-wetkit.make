api = 2
core = 7.x

projects[drupal][version] = 7.17
includes[] = https://raw.github.com/wet-boew/wet-boew-drupal/master/drupal-org-core.make
includes[] = https://raw.github.com/wet-boew/wet-boew-drupal/master/drupal-org.make

; Add wetkit to the full Drupal distro build
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/wet-boew/wet-boew-drupal.git
projects[wetkit][download][branch] = master
projects[wetkit][download][revision] = master