api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.15
includes[] = drupal-org-core.make
includes[] = drupal-org.make

; Add wetkit to the full Drupal distro build
projects[wetkit][type] = profile
projects[wetkit][download][type] = git
projects[wetkit][download][url] = https://github.com/wet-boew/wet-boew-drupal.git
projects[wetkit][download][branch] = master
projects[wetkit][download][revision] = e290e531
