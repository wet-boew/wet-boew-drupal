tinyMCEPopup.requireLangPack();
var acronymDialog = {
	init : function(ed) {
		var t = this;
		var f = document.forms[0];
		// Focus input field
		f['term'].focus();
	},

	expandTerm : function() {
		var t = this, ed = tinyMCEPopup.editor, se = ed.selection, r = se.getRng(), f, s, rs, b, fl = 0, w = ed.getWin(), wm = ed.windowManager, fo = 0;

		// Get input
		f = document.forms[0];
		s = f['term'].value;
		rs = f['expanded'].value;
		abbr = f['abbr'][0].checked;
		if (!s) return;
		if (tinymce.isIE) {
			ed.focus();
			if (t.acronymRunCount == 0)
				alert(Drupal.t("If this doesn't run, it's probably due to a bug in IE. Try running this again."));
			t.acronymRunCount = 1;
			r = ed.getDoc().selection.createRange();
		}

		function fix() {
			// Correct Firefox graphics glitches
			r = se.getRng().cloneRange();
			ed.getDoc().execCommand('SelectAll', false, null);
			se.setRng(r);
		};

		function replace(f,rs,abbr) {
			if (!confirm("Add "+(abbr?'abbr':'acronym')+" tag for \""+rs+"\"?")) {
				if (tinymce.isIE)
					ed.selection.getRng().duplicate().pasteHTML(f); // Needs to be duplicated due to selection bug in IE
				return;
			}
			rs = abbr ? '<abbr title="'+rs+'">'+f+'</abbr>' : '<acronym title="'+rs+'">'+f+'</acronym>';
			if (tinymce.isIE)
				ed.selection.getRng().duplicate().pasteHTML(rs); // Needs to be duplicated due to selection bug in IE
			else
				ed.selection.setContent(rs);
		};

		if (tinymce.isIE) {
			r = ed.getDoc().selection.createRange();
		}
		// IE flags
		var b = null;
		var fl = 4;
		// Move caret to beginning of text
		ed.execCommand('SelectAll');
		ed.selection.collapse(true);

		if (tinymce.isIE) {
			while (r.findText(s, 1, fl)) {
				r.scrollIntoView();
				r.select();
				replace(s,rs,abbr);
				fo = 1;
				if (b) {
					r.moveEnd("character", -(rs.length)); // Otherwise will loop forever
				}
			}

		//ed.windowManager.storeSelection();
		} else {
			while (w.find(s, true, b, false, false, false, false)) {
				replace(s,rs,abbr);
				fo = 1;
			}
		}
		tinyMCEPopup.close();
	}
};

tinyMCEPopup.onInit.add(acronymDialog.init, acronymDialog);
