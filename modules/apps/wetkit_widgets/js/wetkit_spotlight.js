Drupal.settings.spotlight_settings = Drupal.settings.spotlight_settings || {};

(function ($) {
 /**
   * Form behavior for Spotlight
   */
 Drupal.behaviors.wetkitSpotlight = {
   attach: function (context, settings) {
     if ($('.field-name-field-basic-spotlight-items').length) {
     	var rotation_time = Drupal.settings.spotlight_settings.rotation_time;
       $('.field-name-field-basic-spotlight-items').tabs().tabs("rotate", rotation_time, true);
       // $('.field-name-field-basic-spotlight-items').css('height', $('.field-name-field-basic-spotlight-items').height());
       // $('.field-name-field-basic-spotlight-items').css('overflow', 'hidden');
     }
   }
 }

})(jQuery);

