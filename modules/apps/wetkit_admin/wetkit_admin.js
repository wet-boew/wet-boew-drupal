(function ($) {

 /**
   * UI Improvements for the Content Editing Form
   */
 Drupal.behaviors.wetkitAdmin = {
   attach: function (context, settings) {
     var width = $('#node-edit #edit-title').width() - $('#node-edit .form-item-path-alias label').width() - 5;
     $('#node-edit .form-item-path-alias input').css('width', width);

     if ($('#node-edit .form-item-body-und-0-value label').html() == 'Body <span class="form-required" title="This field is required.">*</span>') {
       $('#node-edit .form-item-body-und-0-value label').hide();
     }

     if ($('#node-edit .form-item-field-featured-image-und-0-alt label')) {
       $('#node-edit .form-item-field-featured-image-und-0-alt label').html('Alt Text');
     }
   }
 }

 /**
   * Automatically Upload Files/Images Attached
   */
 Drupal.behaviors.wetkitAutoUpload = {
    attach: function (context, settings) {
      $('input#edit-field-featured-image-und-0-upload').next('input[type="submit"]').hide();
      $('form', context).delegate('input#edit-field-featured-image-und-0-upload', 'change', function() {  
        $(this).next('input[type="submit"]').mousedown();
      }); 
    }
  };
})(jQuery);