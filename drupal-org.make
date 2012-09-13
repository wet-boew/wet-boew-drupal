api = 2
core = 7.x

;projects[drupal][version] = 7.x
;translations[] = fr

; WetKit Foundation

includes[] = modules/apps/wetkit_core/wetkit_core.make
includes[] = modules/apps/wetkit_images/wetkit_images.make
includes[] = modules/apps/wetkit_theme/wetkit_theme.make
;includes[] = modules/apps/wetkit_magic/wetkit_magic.make
includes[] = modules/apps/wetkit_widgets/wetkit_widgets.make
includes[] = modules/apps/wetkit_admin/wetkit_admin.make
;includes[] = modules/apps/wetkit_users/wetkit_users.make

; WetKit Toolset

;includes[] = modules/apps/wetkit_pages/wetkit_pages.make
includes[] = modules/apps/wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = modules/apps/wetkit_search/wetkit_search.make

; WetKit Custom

includes[] = modules/apps/wetkit_language/wetkit_language.make
includes[] = modules/apps/wetkit_wetboew/wetkit_wetboew.make