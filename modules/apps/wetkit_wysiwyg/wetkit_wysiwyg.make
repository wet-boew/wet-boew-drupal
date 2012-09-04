; WetKit WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format.patch
projects[wysiwyg][patch][356480] = http://drupal.org/files/lazy_wysiwyg-356480-150.patch
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = d17bf11
projects[wysiwyg][download][branch] = 7.x-2.x

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib

; Include our WYSIWYG editors

libraries[tinymce][download][type] = git
libraries[tinymce][download][revision] = 30e5055
libraries[tinymce][download][url] = https://github.com/tinymce/tinymce.git
libraries[tinymce][patch][1561882] = http://drupal.org/files/1561882-cirkuit-theme-tinymce-3.5.2.patch
libraries[tinymce][patch][] = https://raw.github.com/gist/3613982/71c734b952f98354f7a8bd5e2cb77a8e1fbc17d6/wysiwyg_fr

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch