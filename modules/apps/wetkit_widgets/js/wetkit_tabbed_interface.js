Drupal.settings.tabbed_interface_settings = Drupal.settings.tabbed_interface_settings || {};

(function ($) {
 /**
   * Form behavior for Tabbed Interface
   */
 Drupal.behaviors.wetkitTabbed_Interface = {
   attach: function (context, settings) {
     if ($('.ctools-modal-content .widget-preview .wet-boew-tabbedinterface').length) {
       pe.dance();
     }
   }
 }

})(jQuery);

