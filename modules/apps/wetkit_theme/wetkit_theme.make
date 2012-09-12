; WetKit Theme Makefile

api = 2
core = 7.x

; Summon the Power of Respond.js

projects[respondjs][version] = 1.1
projects[respondjs][subdir] = contrib

libraries[respondjs][download][type] = get
libraries[respondjs][download][url] = https://github.com/scottjehl/Respond/tarball/master

; Bundle a Few WetKit Approved Themes

;projects[responsive_bartik][version] = 1.x-dev
;projects[responsive_bartik][type] = theme
;projects[responsive_bartik][download][type] = git
;projects[responsive_bartik][download][revision] = 7853fee
;projects[responsive_bartik][download][branch] = 7.x-1.x

;projects[radix][version] = 1.x-dev
;projects[radix][type] = theme
;projects[radix][download][type] = git
;projects[radix][download][revision] = b873330
;projects[radix][download][branch] = 7.x-1.x

; Tailor WetKit Theme for WetKit

projects[adaptivetheme][version] = 3.1

projects[rubik][version] = 4.x-dev
projects[rubik][type] = theme
projects[rubik][download][type] = git
projects[rubik][download][revision] = e01c3d5
projects[rubik][download][branch] = 7.x-4.x
projects[rubik][patch][1623510] = http://drupal.org/files/1623510-6-rubik-widget-styling.patch
;projects[rubik][patch][1635790] = http://drupal.org/files/rubik-form-file-input-styling.patch
projects[rubik][patch][1645148] = http://drupal.org/files/rubik-ie9-box-sizing-1645148-1.patch
projects[rubik][patch][944534] = http://drupal.org/files/rubik-table_input_fluid-944534-5.patch
projects[rubik][patch][1445890] = http://drupal.org/files/editor-link-covered-1445890-2.patch
projects[rubik][patch][1003820] = http://drupal.org/files/1003820-rubik-5.patch
projects[rubik][patch][1440054] = http://drupal.org/files/patch_commit_96121294ba3b.patch

projects[tao][version] = 3.0-beta4