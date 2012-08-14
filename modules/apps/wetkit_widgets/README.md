WetKit Widgets
================
Creates generic widget functionality to customize wide and far

Important
* This App is based on and often pulls upstream upstream from Panopoly Widgets @ drupal.org/project/panopoly_widgets
* The latest upstream sync has been checked against commit: ab1ded0 (Verified)
* Panopoly Theme is the creation of a prolific drupaler with the handle Populist @ drupal.org/user/58600

Key Features (Panopoly Widgets)
* Implementation of basic field types (files, images, text) with Fieldable Panels Panes
* Integration with Tablefield module to provide a table Fieldable Panels Pane
* Integration with Link module to provide a links Fieldable Panels Pane
* Integration with Media module to provide a YouTube/Vimeo Fieldable Panels Pane
* Integration with Menu Block to provide a submenu Fieldable Panels Pane
* Integration with Simple GMap module to provide a map Fieldable Panels Pane
* Creation of a spotlight entity type/field formatter to provide a spotlight Fieldable Panels Pane
* Customization and styling of Views Slideshows
* UI/UX improvements for Fieldable Panels Panels editing/reusing experience
* UX/UX improvements for Menu Block adding/editing experience

To Do (Panopoly Widgets)
* Cleanup of Views Slideshow Theming + CSS
* Cleanup of Spotlight CSS
* Cleanup of Form API handling of File Fields for Fieldable Panels Panes

Key Features (WetKit Widgets)
* Addition of Field Formatter + Entity Type: Tabbed Interface
* Addition of Custom Plugin for CTools
* Addition to hook_entity_info_alter for Tabbed Interface
* Addition of hook_theme_registry_alter
* Addition to hook_theme for fieldable_panels_pane and wetkit_tab_interface_view
* Addition of dependency: Fences
* Addition of plugin folder
* Move templates for views slideshow into views folder
* Commented out media: vimeo + youtube
* Addition of Translation .po files
* Change of Namespace to WetKit
* Local Apps Support
* Rename of spotlight to plugins for namespace consistency







