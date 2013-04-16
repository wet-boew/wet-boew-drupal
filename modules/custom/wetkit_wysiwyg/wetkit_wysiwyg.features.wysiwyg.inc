<?php
/**
 * @file
 * wetkit_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function wetkit_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: wetkit_html_text
  $profiles['wetkit_html_text'] = array(
    'format' => 'wetkit_html_text',
    'editor' => 'markitup',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'stroke' => 1,
          'link' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'h1,h2,h3,h4,h5,h6',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  // Exported profile: wetkit_wysiwyg_ckeditor_text
  $profiles['wetkit_wysiwyg_ckeditor_text'] = array(
    'format' => 'wetkit_wysiwyg_ckeditor_text',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'SelectAll' => 1,
          'Replace' => 1,
          'CreateDiv' => 1,
          'Maximize' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
          'Templates' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'templates' => array(
          'Templates' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'default_toolbar_grouping' => 1,
      'verify_html' => 1,
      'preformatted' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'h1,h2,h3,h4,h5,h6',
      'css_setting' => 'self',
      'css_path' => '',
      'css_classes' => 'module=div.module
module-related=div.module-related
module-billboard=div.module-billboard
module-event=div.module-event
module-menu-section=div.module-menu-section
module-table-contents=div.module-table-contents
module-poster=div.module-poster
module-contact=div.module-contact
module-news=div.module-news
module-spotlight=div.module-spotlight
module-comment=div.module-comment',
      'advanced__active_tab' => 'edit-css',
    ),
  );

  // Exported profile: wetkit_wysiwyg_text
  $profiles['wetkit_wysiwyg_text'] = array(
    'format' => 'wetkit_wysiwyg_text',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'undo' => 1,
          'redo' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'forecolor' => 1,
          'blockquote' => 1,
          'removeformat' => 1,
          'charmap' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
          'pasteword' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'spellchecker' => array(
          'spellchecker' => 1,
        ),
        'captionfilter' => array(
          'captionfilter' => 1,
        ),
        'wetkitcleanup' => array(
          'wetkitcleanup' => 1,
        ),
        'template' => array(
          'template' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'h1,h2,h3,h4,h5,h6',
      'css_setting' => 'self',
      'css_path' => '',
      'css_classes' => 'module=module
module-related=module-related
module-billboard=module-billboard
module-event=module-event
module-menu-section=module-menu-section
module-table-contents=module-table-contents
module-poster=module-poster
module-contact=module-contact
module-news=module-news
module-spotlight=module-spotlight
module-comment=module-comment',
    ),
  );

  return $profiles;
}
