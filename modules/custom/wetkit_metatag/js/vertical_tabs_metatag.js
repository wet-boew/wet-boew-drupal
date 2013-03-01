/**
 * @file
 * Attaches the behaviors for the WetKit Metatags module.
 */

(function ($) {

/**
 * Update the summary for the module's vertical tab.
 */
Drupal.behaviors.vertical_tabs_metatagsFieldsetSummaries = {
  attach: function (context) {
    // Use the fieldset class to identify the vertical tab element
    $('fieldset#edit-vertical-tabs-wetkit', context).drupalSetSummary(function (context) {
      // Depending on the checkbox status, the settings will be customized, so
      // update the summary with the custom setting textfield string or a use a
      // default string.
      if ($('#edit-vertical-tabs-wetkit-enabled', context).attr('checked')) {
        return Drupal.checkPlain($('#edit-vertical-tabs-wetkit-custom-setting', context).val());
      }
      else {
        return Drupal.t('Using default');
      }
    });

    // Use the fieldset class to identify the vertical tab element
    $('fieldset#edit-vertical-tabs-metatags-advanced', context).drupalSetSummary(function (context) {
      // Depending on the checkbox status, the settings will be customized, so
      // update the summary with the custom setting textfield string or a use a
      // default string.
      if ($('#edit-vertical-tabs-metatags-advanced-enabled', context).attr('checked')) {
        return Drupal.checkPlain($('#edit-vertical-tabs-metatags-advanced-custom-setting', context).val());
      }
      else {
        return Drupal.t('Using default');
      }
    });
  }
};

})(jQuery);
