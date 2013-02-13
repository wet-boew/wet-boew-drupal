/**
 * @file
 *
 * This is the hackiest part of WetKit Rubik;
 * add classes via JS to facilitate theming some links which, inexplicably
 * don't have any meaningful classes.
 */

(function($, Drupal){
  // Use strict mode to reduce development errors.
  // @link http://www.nczonline.net/blog/2012/03/13/its-time-to-start-using-javascript-strict-mode/
  "use strict";

  Drupal.behaviors.wetkit_rubik = {
    attach: function(context, settings) {
      var $body = $('body', context);

      if ($body.hasClass('page-admin-content-webform')) {
        $('#block-system-main', context).find('table.sticky-enabled').find('td').each(function() {
          var $link = $(this).find('a'),
          href = $link.attr('href');

          if (href.indexOf('analysis', 0) > 0) {
            $link.addClass('action-analyze');
          }
          else if (href.indexOf('table', 0) > 0) {
            $link.addClass('action-table');
          }
          else if (href.indexOf('download', 0) > 0) {
            $link.addClass('action-export');
          }
          else if (href.indexOf('edit', 0) > 0) {
            $link.addClass('action-edit');
          }
          else if (href.indexOf('clear', 0) > 0) {
            $link.addClass('action-delete');
          }
          else if (href.indexOf('webform-results', 0) > 0) {
            $link.addClass('action-view');
          }
        });
      }
    }
  };
})(jQuery, Drupal);
