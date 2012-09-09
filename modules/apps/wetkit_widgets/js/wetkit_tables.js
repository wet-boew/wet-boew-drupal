(function ($) {
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