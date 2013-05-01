; WetKit WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = d9c3f65
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format-1489096-7.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch

projects[wysiwyg_filter][version] = 1.x-dev
projects[wysiwyg_filter][type] = module
projects[wysiwyg_filter][subdir] = contrib
projects[wysiwyg_filter][download][type] = git
projects[wysiwyg_filter][download][revision] = 6cbb1f4
projects[wysiwyg_filter][download][branch] = 7.x-1.x
projects[wysiwyg_filter][patch][1687794] = http://drupal.org/files/wysiwyg_filter-1687794-1-skip-validation-if-filter-disabled.patch
projects[wysiwyg_filter][patch][1543044] = http://drupal.org/files/wysiwyg_filter-missing-argument-1543044-2_1.patch

projects[wysiwyg_template][version] = 2.7
projects[wysiwyg_template][subdir] = contrib

; The WYSIWYG Helpers

projects[linkit][version] = 1.x-dev
projects[linkit][type] = module
projects[linkit][subdir] = contrib
projects[linkit][download][type] = git
projects[linkit][download][revision] = 11c50b8
projects[linkit][download][branch] = 7.x-2.x
projects[linkit][patch][1793896] = http://drupal.org/files/entitylanguages-1793896-1.patch

projects[image_resize_filter][version] = 1.x-dev
projects[image_resize_filter][type] = module
projects[image_resize_filter][subdir] = contrib
projects[image_resize_filter][download][type] = git
projects[image_resize_filter][download][revision] = da3bbd6
projects[image_resize_filter][download][branch] = 7.x-1.x
projects[image_resize_filter][patch][1708366] = http://drupal.org/files/1708366-7.patch

projects[caption_filter][version] = 1.x-dev
projects[caption_filter][type] = module
projects[caption_filter][subdir] = contrib
projects[caption_filter][download][type] = git
projects[caption_filter][download][revision] = c9794cf
projects[caption_filter][download][branch] = 7.x-1.x
projects[caption_filter][patch][1432092] = http://drupal.org/files/1432092-button-and-image.patch

; Include our Editors

libraries[ckeditor][download][type] = git
libraries[ckeditor][download][revision] = a9514c2
libraries[ckeditor][download][url] = https://github.com/ckeditor/ckeditor-releases.git

libraries[markitup][download][type] = git
libraries[markitup][download][revision] = 4b77626
libraries[markitup][download][url] = https://github.com/sylus/markitup-wetkit.git
