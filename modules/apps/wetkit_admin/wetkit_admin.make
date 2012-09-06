; WetKit Admin Makefile

api = 2
core = 7.x

; An Administration Helper Module

;projects[admin][version] = 2.0-beta3
;projects[admin][subdir] = contrib

projects[admin_menu][version] = 3.x-dev
projects[admin_menu][subdir] = contrib
projects[admin_menu][download][type] = git
projects[admin_menu][download][revision] = ed6295c
projects[admin_menu][download][branch] = 7.x-3.x
projects[admin_menu][patch][1772766] = http://drupal.org/files/admin_menu_toolbar_ctools_automodal-1772766_01.patch

; UX/UI Improvements

projects[backports][version] = 1.0-alpha1
projects[backports][subdir] = contrib

projects[module_filter][version] = 1.7
projects[module_filter][subdir] = contrib

;projects[simplified_menu_admin][version] = 1.0-beta2
;projects[simplified_menu_admin][subdir] = contrib

projects[date_popup_authored][version] = 1.1
projects[date_popup_authored][subdir] = contrib

projects[ctools_automodal][version] = 1.1
projects[ctools_automodal][subdir] = contrib

projects[admin_views][version] = 1.0-alpha1
projects[admin_views][subdir] = contrib
