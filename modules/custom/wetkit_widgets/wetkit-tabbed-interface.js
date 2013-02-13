/**
 * @file
 * Attaches the behaviors for the WetKit Widgets module.
 */

Drupal.settings.tabbed_interface_settings = Drupal.settings.tabbed_interface_settings || {};

(function ($) {
 /**
   * Form behavior for Tabbed Interface
   */
 Drupal.behaviors.wetkitTabbed_Interface = {
   attach: function (context, settings) {
     if ($('.ipe_tabs_interface .tabs').length) {
      var loading_finished = 'wb-loaded';
      $(document).on(loading_finished, function () {

      });
      pe.wb_load({'plugins': {'tabbedinterface': $(".ipe_tabs_interface", context)}}, loading_finished);
     }
   }
 }
})(jQuery);
