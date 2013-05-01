<?php
/**
 * @file
 * Listing bean plugin.
 */

class WetKitHighlightBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      'title_settings' => array(
        'backgrounds' => 'background-accent',
      ),
      'image_settings' => array(
        'image_style' => 'medium',
      ),
    );

    return array_merge(parent::values(), $values);
  }
  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();

    $form['title_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Configure Title'),
      '#tree' => TRUE,
      '#weight' => -1,
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['title_settings']['backgrounds'] = array(
      '#type' => 'select',
      '#title' => t('Configure Backgrounds'),
      '#options' => array(
        '' => t('None'),
        'background-white' => t('Background White'),
        'background-light' => t('Background Light'),
        'background-medium' => t('Background Medium'),
        'background-dark' => t('Background Dark'),
        'background-accent' => t('Background Accent'),
        'background-highlight' => t('Background Highlight'),
      ),
      '#default_value' => isset($bean->title_settings['backgrounds']) ? $bean->title_settings['backgrounds'] : '',
    );

    $form['image_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Configure Image'),
      '#tree' => TRUE,
      '#weight' => 0,
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['image_settings']['image_style'] = array(
      '#type' => 'select',
      '#title' => t('Image style'),
      '#options' => array('<none>' => t('None')) + drupal_map_assoc(array_keys(image_styles())),
      '#default_value' => isset($bean->image_settings['image_style']) ? $bean->image_settings['image_style'] : '',
    );

    $form['caption_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Configure Caption'),
      '#tree' => TRUE,
      '#weight' => 2,
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['caption_settings']['backgrounds'] = array(
      '#type' => 'select',
      '#title' => t('Configure Backgrounds'),
      '#options' => array(
        '' => t('None'),
        'background-white' => t('Background White'),
        'background-light' => t('Background Light'),
        'background-medium' => t('Background Medium'),
        'background-dark' => t('Background Dark'),
        'background-accent' => t('Background Accent'),
        'background-highlight' => t('Background Highlight'),
      ),
      '#default_value' => isset($bean->caption_settings['backgrounds']) ? $bean->caption_settings['backgrounds'] : '',
    );

    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    foreach($content['bean'] as &$child) {
      $title_background = isset($bean->title_settings['backgrounds']) ? $bean->title_settings['backgrounds'] : '';

      // Wrap the title field in WET background styles.
      $child['title_field'][0]['#prefix'] =  '<h2 class="' . $title_background . '">';
      $child['title_field'][0]['#markup'] =  $child['title_field'][0]['#markup'];
      $child['title_field'][0]['#suffix'] =  '</h2>';
    }
    return $content;
  }
}
