Drupal.settings.tabbed_interface_settings = Drupal.settings.tabbed_interface_settings || {};

(function ($) {
 /**
   * Form behavior for Tabbed Interface
   */
 Drupal.behaviors.wetkitTabbed_Interface = {
   attach: function (context, settings) {
     if ($('.ipe_tabs_interface').length) {
      var loading_finished = 'wb-loaded';
      $(document).on(loading_finished, function () {

      });
      pe.wb_load({'dep': ['resize', 'equalheights'], 'plugins': {'tabbedinterface': $(".ipe_tabs_interface")}}, loading_finished);
     }
   }
 }

})(jQuery);

