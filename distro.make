api = 2
core = 7.x
projects[drupal][version] = 7.14
includes[] = https://github.com/wet-boew/wet-boew-drupal/raw/master/webexp-core.make

; Add webexp to the full Drupal distro build
projects[webexp][type] = profile
projects[webexp][download][type] = git
projects[webexp][download][url] = http://github.com/wet-boew/wet-boew-drupal.git