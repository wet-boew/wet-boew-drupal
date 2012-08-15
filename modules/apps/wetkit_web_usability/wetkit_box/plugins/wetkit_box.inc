<?php
/**
 * @file
 * wetkit_box.inc
 */

/**
 * Multilingual custom text box.
 */
class wetkit_box extends boxes_box {
  /**
   * Implementation of boxes_box::options_defaults().
   */
  public function options_defaults() {
    $defaults = array();
    // get a list of enabled languages
    $languages = language_list('enabled');
    foreach ($languages[1] as $language) {
      $defaults[$language->language . '-title'] = array(
        'value' => '',
      );
      $defaults[$language->language . '-body'] = array(
        'value' => '',
        'format' => filter_default_format(),
      );
    }
    return $defaults;
  }

  /**
   * Implementation of boxes_box::options_form().
   */
  public function options_form(&$form_state) {
    $format = filter_format_load($this->options['en-body']['format']);
    $form = array();
    $languages = language_list('enabled');
    // wrap each language's fields in a fieldset
    foreach ($languages[1] as $language) {
      $form[$language->language] = array(
        '#type' => 'fieldset',
        '#title' => check_plain($language->name),
      );
      $form[$language->language][$language->language . '-title'] = array(
        '#type' => 'textfield',
        '#title' => t('Title'),
        '#default_value' => $this->options[$language->language . '-title'],
        '#description' => t('The title of the box as shown to the user.'),
      );
      $form[$language->language][$language->language . '-body'] = array(
        '#type' => 'text_format',
        '#base_type' => 'textarea',
        '#title' => t('Body'),
        '#default_value' => $this->options[$language->language . '-body']['value'],
        '#rows' => 6,
        '#format' => $this->options[$language->language . '-body']['format'] ? $this->options[$language->language . '-body']['format'] : NULL,
        '#description' => t('The content of the block as shown to the user.'),
      );
    }
    return $form;
  }

  /**
   * Implementation of boxes_box::options_form().
   */
  public function render() {
    global $language;
    // Title. English is fallback.
    if (!empty($this->options[$language->language . '-title'])) {
      $title = check_plain($this->options[$language->language . '-title']);
    }
    elseif (!empty($this->options['en-title'])) {
      $title = check_plain($this->options['en-title']);
    }
    else {
      $title = NULL;
    }
    //Body. English is fallback
    if (!empty($this->options[$language->language . '-body'])) {
      // Filter full HTML.
      $content = check_markup($this->options[$language->language . '-body']['value'], $this->options[$language->language . '-body']['format'], FALSE);
    }
    elseif (!empty($this->options['en-body'])) {
      $content = check_markup($this->options['en-body']['value'], $this->options['en-body']['format'], FALSE);
    }
    else {
      $content = '';
    }
    return array(
      'delta' => $this->delta,
      'title' => $title,
      'subject' => $title,
      'content' => $content,
    );
  }
}