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
      'show_toggle' => 0,
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

  // Exported profile: wetkit_wysiwyg_text
  $profiles['wetkit_wysiwyg_text'] = array(
    'format' => 'wetkit_wysiwyg_text',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
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
