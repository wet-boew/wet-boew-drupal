<?php
/**
 *
 * Web Experience Toolkit (WET) / Boite d'outils de l'expèrience Web (BOEW)
 * Terms and conditions of use: http://tbs-sct.ircan.gc.ca/projects/gcwwwtemplates/wiki/Terms
 * Conditions régissant l'utilisation : http://tbs-sct.ircan.gc.ca/projects/gcwwwtemplates/wiki/Conditions
 *
 * Implementation of THEMEHOOK_settings() function.
 *
 * @param $saved_settings
 *   An array of saved settings for this theme.
 * @return
 *   A form array.
 */
function clf_form_system_theme_settings_alter(&$form, $form_state) {
  $form['block_editing'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Show block editing on hover'),
    '#description'   => t('When hovering over a block, privileged users will see block editing links.'),
    '#default_value' => theme_get_setting('clf_block_editing'),
  );

  $form['breadcrumb'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Breadcrumb settings'),
    '#attributes'    => array('id' => 'breadcrumb'),
  );
  
  $form['breadcrumb']['clf_breadcrumb'] = array(
    '#type'          => 'select',
    '#title'         => t('Display breadcrumb'),
    '#default_value' => theme_get_setting('clf_breadcrumb'),
    '#options'       => array(
                          'yes'   => t('Yes'),
                          'admin' => t('Only in admin section'),
                          'no'    => t('No'),
                        ),
  );
  
  $form['breadcrumb']['breadcrumb_options'] = array(
    '#type' => 'container',
    '#states' => array(
      'invisible' => array(
        ':input[name="clf_breadcrumb"]' => array('value' => 'no'),
      ),
    ),
  );
  
  $form['breadcrumb']['breadcrumb_options']['clf_breadcrumb_separator'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Breadcrumb separator'),
    '#description'   => t('Text only. Don’t forget to include spaces.'),
    '#default_value' => theme_get_setting('clf_breadcrumb_separator'),
    '#size'          => 5,
    '#maxlength'     => 10,
  );
  
  $form['breadcrumb']['breadcrumb_options']['clf_breadcrumb_home'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Show home page link in breadcrumb'),
    '#default_value' => theme_get_setting('clf_breadcrumb_home'),
  );
  
  $form['breadcrumb']['breadcrumb_options']['clf_breadcrumb_trailing'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append a separator to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('clf_breadcrumb_trailing'),
    '#description'   => t('Useful when the breadcrumb is placed just before the title.'),
    '#states' => array(
      'disabled' => array(
        ':input[name="clf_breadcrumb_title"]' => array('checked' => TRUE),
      ),
      'unchecked' => array(
        ':input[name="clf_breadcrumb_title"]' => array('checked' => TRUE),
      ),
    ),
  );
  
  $form['breadcrumb']['breadcrumb_options']['clf_breadcrumb_title'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append the content title to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('clf_breadcrumb_title'),
    '#description'   => t('Useful when the breadcrumb is not placed just before the title.'),
  );

  $form['themedev'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Theme development settings'),
  );
  
  $form['themedev']['clf_rebuild_registry'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Rebuild theme registry on every page.'),
    '#default_value' => theme_get_setting('clf_rebuild_registry'),
    '#description'   => t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>. WARNING: this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
    '#prefix'        => '<div id="div-registry"><strong>' . t('Theme registry:') . '</strong>',
    '#suffix'        => '</div>',
  );
  
  $form['themedev']['clf_jump_link_target'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Anchor ID for “Jump to Navigation” link'),
    '#default_value' => theme_get_setting('clf_jump_link_target'),
    '#field_prefix'  => '#',
    '#description'   => t('Specify the HTML ID of the main navigation menu; this will be used by the accessible-but-hidden “Jump to Navigation" link at the top of each page.'),
  );
  
  $form['themedev']['clf_wireframes'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Add wireframes around main layout elements'),
    '#default_value' => theme_get_setting('clf_wireframes'),
    '#description'   => t('<a href="!link">Wireframes</a> are useful when prototyping a website.', array('!link' => 'http://www.boxesandarrows.com/view/html_wireframes_and_prototypes_all_gain_and_no_pain')),
    '#prefix'        => '<div id="div-wireframes"><strong>' . t('Wireframes:') . '</strong>',
    '#suffix'        => '</div>',
  );
}