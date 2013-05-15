<?php
/**
 * @file
 * Listing bean plugin.
 */

class WetKitTwitterBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      'twitter_settings' => array(
        'configure_twitter_widget' => 'span-2',
        'custom_css' => '',
      ),
    );

    return array_merge(parent::values(), $values);
  }
  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();

    $form['twitter_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Configure Twitter Widget'),
      '#tree' => TRUE,
      '#weight' => -8,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['twitter_settings']['configure_twitter_widget'] = array(
      '#type' => 'select',
      '#title' => t('Configure Share Span'),
      '#options' => array(
        'span-2' => t('Span 2'),
        'span-3' => t('Span 3'),
        'span-4' => t('Span 4'),
        'span-5' => t('Span 5'),
        'span-6' => t('Span 6'),
        'span-7' => t('Span 7'),
        'span-8' => t('Span 8'),
      ),
      '#default_value' => isset($bean->twitter_settings['configure_twitter_widget']) ? $bean->twitter_settings['configure_twitter_widget'] : '',
    );
    $form['twitter_settings']['custom_css'] = array(
      '#type' => 'textfield',
      '#title' => t('Configure Twitter Custom CSS'),
      '#default_value' => isset($bean->twitter_settings['custom_css']) ? $bean->twitter_settings['custom_css'] : '',
      '#size' => 60,
      '#maxlength' => 128,
      '#required' => FALSE,
    );

    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {

    // Span
    $span = isset($bean->twitter_settings['configure_twitter_widget']) ? $bean->twitter_settings['configure_twitter_widget'] : '';
    $custom_css = isset($bean->twitter_settings['custom_css']) ? $bean->twitter_settings['custom_css'] : '';

    $title = field_get_items('bean', $bean, 'title_field');
    $title = field_view_value('bean', $bean, 'title_field', $title[0], array());
    $title = render($title);

    $content = array();
    $markup = '<div class="wet-boew-webwidget ' . $span . '"><div class="widget-container">
                <section>
                  <h3 class="background-accent">' . $title . '</h3>
                  <ul class="widget-content">
                  <li><a href="https://twitter.com/search?q=%23WxT" data-widget-id="329066756620566528">Tweets about "#WxT"</a></li>
                  </ul>
                </section>
              </div></div>';
    $content['share_twitter']['#markup'] = $markup;

    return $content;
  }
}
