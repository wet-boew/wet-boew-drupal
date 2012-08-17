Drupal.settings.tabbed_interface_settings = Drupal.settings.tabbed_interface_settings || {};

(function ($) {
 /**
   * Form behavior for Tabbed Interface
   */
 Drupal.behaviors.wetkitTabbed_Interface = {
   attach: function (context, settings) {
     if ($('.ipe_tabs_interface').length) {
      $(document).on('wb-pcalldeps-loaded', function () {
        pe.fn['tabbedinterface']._exec($('.ipe_tabs_interface'));
      });
      pe.add._load_arr(pe.add.depends(['metadata', 'easytabs', 'equalheights']), "wb-pcalldeps-loaded");
     }
   }
 }

})(jQuery);

