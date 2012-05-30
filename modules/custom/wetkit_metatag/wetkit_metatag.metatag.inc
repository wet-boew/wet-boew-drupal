<?php

/**
 * @file
 * Metatag integration for the wetkit_metatag module.
 */

/**
 * Implements hook_metatag_config_default_alter().
 */
function wetkit_metatag_metatag_config_default_alter(array &$configs) {
  global $language;
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array(
          'tmp.title' => array('value' => '[current-page:title]'),
          'dc.title' => array('value' => '[current-page:title]'),
          'dc.site_name' => array('value' => '[site:name]'),
          'dc.url' => array('value' => '[current-page:url]'),
          'dc.creator' => array('value' => i18n_variable_get('sitename', $language->language)),
          'dc.language' => array('value' => wetkit_current_lang()),
        );
        break;
      case 'global:frontpage':
        $config->config += array(
          'tmp.title' => array('value' => '[site:name]'),
          'dc.title' => array('value' => '[site:name]'),
          'dc.url' => array('value' => '[site:url]'),
        );
        break;
      case 'node':
        $config->config += array(
          'dc.title' => array('value' => '[node:title]'),
          'dc.description' => array('value' => '[node:summary]'),
          'dc.url' => array('value' => '[current-page:url]'),
          'date' => array('value' => '[node:changed]'),
          'dcterms.issued' => array('value' => '[node:created]'),
          'dcterms.modified' => array('value' => '[node:changed]'),
          'author' => array('value' => '[node:author]'),
        );
        break;
      case 'taxonomy_term':
        $config->config += array(
          'dc.title' => array('value' => '[term:name]'),
          'dc.description' => array('value' => '[term:description]'),
        );
        break;
      case 'user':
        $config->config += array(
          'dc.title' => array('value' => '[user:name]'),
        );
        break;
    }
  }
}

/**
 * Implements hook_metatag_info().
 */
function wetkit_metatag_metatag_info() {
  $info['groups']['wetkit-metadata'] = array(
    'label' => t('WetKit Metadata'),
  );
  $info['tags']['tmp.title'] = array(
    'label' => t('WetKit Metadata title'),
    'description' => t('The main title of your object as it should appear within the display.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag_title',
    ),
  );
  $info['tags']['dc.title'] = array(
    'label' => t('WetKit Metadata title'),
    'description' => t('The title of your object as it should appear within the display.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.site_name'] = array(
    'label' => t('WetKit Metadata site name'),
    'description' => t('A human-readable name for your site, e.g., <em>Web Experience Toolkit</em>.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'context' => array('global'),
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.url'] = array(
    'label' => t('WetKit Metadata URL'),
    'description' => t('The canonical URL of your object that will be used as its permanent ID in the website.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.language'] = array(
    'label' => t('WetKit Metadata Language'),
    'description' => t('The language of your object'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag_language',
    ),
  );
  $info['tags']['dc.creator'] = array(
    'label' => t('WetKit Metadata Creator'),
    'description' => t('The creator of the overall site content'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.description'] = array(
    'label' => t('WetKit Metadata description'),
    'description' => t('A one to two sentence description of your page.'),
    'group' => 'wetkit-metadata',
    'class' => 'DrupalTextMetaTag',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['date'] = array(
    'label' => t('WetKit Metadata date'),
    'description' => t('The date of your object as it was most recently changed.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dcterms.issued'] = array(
    'label' => t('WetKit Metadata Date Created'),
    'description' => t('The date of your object as it was created.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag_scheme',
    ),
  );
  $info['tags']['dcterms.modified'] = array(
    'label' => t('WetKit Metadata Date Modified'),
    'description' => t('The date of your object as it was modified.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag_scheme',
    ),
  );
  $info['tags']['author'] = array(
    'label' => t('WetKit Metadata Author'),
    'description' => t('The main Author of the page.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.type'] = array(
    'label' => t('WetKit Metadata type'),
    'description' => t('The type of your object, for example:, <em>Graph</em>.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'form' => array(
      '#type' => 'select',
      '#options' => _wetkit_metatag_type_options(),
      '#empty_option' => t('- None -'),
    ),
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  $info['tags']['dc.image'] = array(
    'label' => t('WetKit Metadata image'),
    'description' => t('An image URL which should represent your object within the page. (PNG, JPEG and GIF formats)'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'wetkit-metadata',
    'element' => array(
      '#theme' => 'wetkit_metatag',
    ),
  );
  return $info;
}

function _wetkit_metatag_type_options() {
  $options = array(
    t('Graph') => array(
      'bar' => t('bar'),
      'line' => t('line'),
    ),
    t('Media') => array(
      'image' => t('Image'),
      'video' => t('Video'),
      'diagram' => t('Diagram'),
      'audio' => t('Audio'),
      'text' => t('Text'),
    ),
  );
  return $options;
}
