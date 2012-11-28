(function ($) {

 Drupal.behaviors.wetkitWetBoew = {
   attach: function (context, settings) {
     /**
      * Title Hax for WetKit
      *
      * Replaces the markup of a node title pane with
      * the h1.title page element
      */
     //if ($.trim($('.pane-page-title .block-content h1#wb-cont').html()) == $.trim($('.panels-title h1#wb-cont').html())) {
     //  $('.pane-page-title .block-content').html('');
     //  $('h1#wb-cont').hide().clone().prependTo('.pane-page-title .block-content');
     //  $('.pane-page-title h1#wb-cont').show();
     //}
   }
 }

})(jQuery);
