api = 2
core = 7.x

;projects[drupal][version] = 7.x
;translations[] = fr

; WetKit Foundation

includes[] = modules/apps/wetkit_core/wetkit_core.make
includes[] = ../wetkit_images/wetkit_images.make
includes[] = ../wetkit_theme/wetkit_theme.make
;includes[] = ../wetkit_magic/wetkit_magic.make
includes[] = ../wetkit_widgets/wetkit_widgets.make
includes[] = ../wetkit_admin/wetkit_admin.make
;includes[] = ../wetkit_users/wetkit_users.make

; WetKit Toolset

;includes[] = ../wetkit_pages/wetkit_pages.make
includes[] = ../wetkit_wysiwyg/wetkit_wysiwyg.make
includes[] = ../wetkit_search/wetkit_search.make

; WetKit Custom

includes[] = ../wetkit_language/wetkit_language.make
includes[] = ../wetkit_wetboew/wetkit_wetboew.make