(function ($) {

 Drupal.behaviors.wetkitMagic = {
   attach: function (context, settings) {

     /**
      * Title Hax for WetKit
      *
      * Replaces the markup of a node title pane with
      * the h1.title page element
      */
     if ($.trim($('.pane-node-title .pane-content').html()) == $.trim($('h1.title').html())) {
       $('.pane-node-title .pane-content').html('').prepend($('h1.title'));
     }

     /**
      * Submitted Hax for WetKit
      *
      * Replaces the markup of a node created pane with
      * the submitted node value
      */
     if ($('.pane-node-created')) {
       $('.pane-node-created .pane-content').html('').prepend($('.pane-node-content .submitted'));
     }

   }
 }

})(jQuery);


