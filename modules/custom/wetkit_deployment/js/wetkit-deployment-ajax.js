/**
* Provide the HTML to create the modal dialog.
*/
Drupal.theme.prototype.CToolsWetKitModal = function () {
  var html = '';

  html += '  <div id="ctools-modal">'
  html += '    <div class="ctools-modal-content">'
  html += '      <div class="modal-header">';
  html += '        <a class="close" href="#">';
  html += Drupal.CTools.Modal.currentSettings.closeText + Drupal.CTools.Modal.currentSettings.closeImage;
  html += '        </a>';
  html += '        <span id="modal-title" class="modal-title">&nbsp;</span>';
  html += '      </div>';
  html += '      <div id="modal-content" class="modal-content">';
  html += '      </div>';
  html += '    </div>';
  html += '  </div>';

  return html;

}
