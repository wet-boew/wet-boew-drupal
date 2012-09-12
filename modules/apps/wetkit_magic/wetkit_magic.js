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
       $('.pane-node-title .pane-content').html('');
       $('h1.title').hide().clone().prependTo('.pane-node-title .pane-content');
       $('.pane-node-title h1.title').show();
     }

   }
 }

})(jQuery);

(function ($) {

  /**
   * Improves the Auto Submit Experience for CTools Modals
   */
  Drupal.behaviors.wetkitMagicAutosubmit = {
    attach: function (context, settings) {
      // 'this' references the form element
      function triggerSubmit (e) {
        var $this = $(this);
        if (!$this.hasClass('ctools-ajaxing')) {
          $this.addClass('ctools-ajaxing');
          $this.find('.ctools-auto-submit-click').click();
        }
      }

      function triggerDisable (e) {
        var $this = $(this);
        $this.find(':submit:not(.ctools-auto-submit-click)').val(Drupal.t('Updating...')).addClass('form-disabled').attr('disabled', 'disabled');
      }

      // e.keyCode: key
      var discardKeyCode = [
        16, // shift
        17, // ctrl
        18, // alt
        20, // caps lock
        33, // page up
        34, // page down
        35, // end
        36, // home
        37, // left arrow
        38, // up arrow
        39, // right arrow
        40, // down arrow
         9, // tab
        13, // enter
        27  // esc
      ];

      // Disable save button and update label on auto submit. 
      $(':submit.ctools-auto-submit-click', context).bind('click', function (e) {
        triggerDisable.call(e.target.form);
      });

      // Special handling for link field widgets. This ensures content which is ahah'd in still properly autosubmits.
      $('.field-widget-link-field input:text', context).addClass('wetkit-textfield-autosubmit').addClass('ctools-auto-submit-exclude');

      // Handle title fields.
      var timer;
      $('.wetkit-textfield-autosubmit', context).bind('keyup keydown blur', function (e) {
        var $element;
        $element = $('.widget-preview .pane-title', context);

        // Special handling for title elements.
        if (($element.length || !$.inArray(e.keycode, discardKeyCode)) && $(e.target).parent().hasClass('form-item-title')) {

          // If all text was removed, remove the existing title markup from the dom.
          if (!$(e.target).val().length) {
            $('.widget-preview .pane-title', context).remove();
          }
          // Insert as link title text if the title is a link.
          else if ($('a', $element).length) {
            $('a', $element).html($(e.target).val());
          }
          // Otherwise just insert the form value as-is.
          else {
            $element.html($(e.target).val());
          }
        } 
        // Automatically submit the field on blur. This won't happen if title markup is already present.
        else if (e.type == 'blur') {
          clearTimeout(timer);
          triggerSubmit.call(e.target.form)
        }
        // If all else fails, just trigger a timer to submit the form a second after the last activity.
        else {
          clearTimeout(timer);
          timer = setTimeout(function () { triggerSubmit.call(e.target.form); }, 1000)
        }
      });
  
      // Handle autocomplete fields.
      $('.wetkit-autocomplete-autosubmit', context).blur(function (e) {
        triggerSubmit.call(e.target.form);
      });

      // Handle textarea fields.
      $('.wetkit-textarea-autosubmit', context).bind('keyup keydown blur', function (e) {
        // On blur just autosubmit the form.
        if (e.type == 'blur') {
          clearTimeout(timer);
          triggerSubmit.call(e.target.form)
        }
        // Otherwise set a 1 second delay on anything that's a valid keypress.
        else {
          clearTimeout(timer);
          timer = setTimeout(function () { triggerSubmit.call(e.target.form); }, 1000)
        }
      });

    }
  }
})(jQuery);