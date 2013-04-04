(function ($) {

/**
 * JS related to the tabs in the Panels tabs.
 */
Drupal.behaviors.panelsTabs = {
  attach: function (context) {
    var tabsID = Drupal.settings.panelsTabs.tabsID;
    
    for (var key in Drupal.settings.panelsTabs.tabsID) {  
      $('#' + tabsID[key] +':not(.tabs-processed)', context)
        .addClass('tabs-processed')
        .tabs();
    } 
  }
};

})(jQuery);


