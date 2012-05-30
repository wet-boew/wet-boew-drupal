<?php
/**
 * @file
 * wetkit_wysiwyg_feature.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function wetkit_wysiwyg_feature_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: advanced_text_editor
  $profiles['advanced_text_editor'] = array(
    'format' => 'advanced_text_editor',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Scayt' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4,h5,h6,pre',
      'css_setting' => 'self',
      'css_path' => '/profiles/webexp/themes/wetkit_web_usability/css/wet/css/core.css, /profiles/webexp/themes/wetkit_web_usability/css/wet/css/util.css',
      'css_classes' => 'title=h2.node-title
  subtitle=h3.node-subtitle
  section=h3.node-section
  sub-section=h4.node-subsection
  image left=div.img-left
  image right=div.img-right
  image center=div.img-center
  container=div.clearfix',
    ),
  );

  // Exported profile: text_editor
  $profiles['text_editor'] = array(
    'format' => 'text_editor',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Styles' => 1,
          'Scayt' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4,h5,h6,pre',
      'css_setting' => 'self',
      'css_path' => '/profiles/webexp/themes/wetkit_web_usability/css/wet/css/core.css, /profiles/webexp/themes/wetkit_web_usability/css/wet/css/util.css',
      'css_classes' => 'title=h2.node-title
  subtitle=h3.node-subtitle
  section=h3.node-section
  sub-section=h4.node-subsection
  image left=div.img-left
  image right=div.img-right
  image center=div.img-center
  container=div.clearfix',
    ),
  );

  return $profiles;
}
