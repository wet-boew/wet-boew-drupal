/**
 * @file
 * Custom JS for administering WetKit Menu.
 */

/**
 * In admin menu edit, this hides and closes the WET config depending on
 * whether a minipanel is selected.
 */
(function($) {
  Drupal.behaviors.menuMiniPanelsAdmin = {
    attach: function(context, settings) {
      // Hide hover settings unless a minipanel is selected.
      var toggleHoverSettings = function() {
        if ($('#edit-options-minipanel').val() == '' && $('#menu-minipanels-hover-settings').is(':visible')) {
          $('#menu-minipanels-hover-settings').slideUp(500);
        }
        else if ($('#edit-options-minipanel').val() != '') {
          $('#menu-minipanels-hover-settings').slideDown(500);
        }
      }

      $('#edit-options-minipanel').change(function(e) {
        toggleHoverSettings();
      });

      // Set appropriate on load.
      toggleHoverSettings();
    }
  };
})(jQuery);
