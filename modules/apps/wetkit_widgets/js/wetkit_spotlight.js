(function ($) {
 /**
   * Form behavior for Spotlight
   */
 Drupal.behaviors.wetkitSpotlight = {
   attach: function (context, settings) {
     if ($('.field-name-field-basic-spotlight-items').length) {
       $('.field-name-field-basic-spotlight-items').tabs().tabs("rotate", 4000, true);
       // $('.field-name-field-basic-spotlight-items').css('height', $('.field-name-field-basic-spotlight-items').height());
       // $('.field-name-field-basic-spotlight-items').css('overflow', 'hidden');
     }
   }
 }

})(jQuery);

