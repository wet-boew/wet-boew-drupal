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

 /**
  * Automagically set te height of the Video Widget
  */
 Drupal.behaviors.wetkitWidgetVideo = {
   attach: function (context, settings) {

     $('.media-vimeo-outer-wrapper').each(function() {
       var width = $(this).width();
       var height = width / 16 * 9;
       $(this).css('height', height);
       $(this).find('iframe.vimeo-player').css('height', height);
     }); 
 
     $('.media-youtube-outer-wrapper').each(function() {
       var width = $(this).width();
       var height = width / 16 * 9;
       $(this).css('height', height);
     });

   }
 }

 /**
  * Create responsive magic for Table Widget
  */
 Drupal.behaviors.wetkitWidgetTables = {
   attach: function (context, settings) {

     $('table.tablefield', context).each(function() {
       var table = $(this); // cache table object.
       var head = table.find('thead th');
       var rows = table.find('tbody tr').clone(); // appending afterwards does not break original table.

       // create new table
       var newtable = $(
         '<table class="mobile-table">' +
         '  <tbody>' +
         '  </tbody>' +
         '</table>'
       );

       // cache tbody where we'll be adding data.
       var newtable_tbody = newtable.find('tbody');

       rows.each(function(i) {
         var cols = $(this).find('td');
         var classname = i % 2 ? 'even' : 'odd';
         cols.each(function(k) {
           var new_tr = $('<tr class="' + classname + '"></tr>').appendTo(newtable_tbody);
           new_tr.append(head.clone().get(k));
           new_tr.append($(this));
         });
       });

       $(this).after(newtable);
     });

   }
 }
})(jQuery);