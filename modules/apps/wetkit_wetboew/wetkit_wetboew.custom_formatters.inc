<?php
/**
 * @file
 * wetkit_wetboew.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function wetkit_wetboew_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'wetkit_lightbox';
  $formatter->label = 'WetKit Lightbox';
  $formatter->description = 'Creates the Web Experience Toolkit\'s Lightbox based on images specified during the content creation phase.';
  $formatter->mode = 'php';
  $formatter->field_types = 'image';
  $formatter->code = '// Formatter settings.
$settings = $variables[\'#display\'][\'settings\'];
$output = \'\';

drupal_add_css(".wet-boew-lightbox ul {margin-left:0 !important;}
  .wet-boew-lightbox ul li {list-style-type:none;float:left;margin: 0 5px 0 0;}
  .wet-boew-lightbox ul li.box {margin-bottom: 0.4em;}
  .wet-boew-lightbox li img {margin-bottom:0;}
  .wet-boew-lightbox ul li a {text-decoration: none;}", \'inline\');
foreach (element_children($variables[\'#items\']) as $delta) {
  $item = $variables[\'#items\'][$delta];
  $source = theme(\'image_style\', array(\'style_name\' => $settings[\'image_style_source\'], \'path\' => $item[\'uri\']));
  $destination = image_style_path($settings[\'image_style_destination\'], $item[\'uri\']);
  $output .= \'<li>\' . l($source, file_create_url($destination), array(\'html\' => TRUE, \'attributes\' => array(\'class\' => array(\'lb-item\')))) . \'</li>\';
}
$class = $settings[\'custom_class\'];
return \'<div class="wet-boew-lightbox \' . $class . \'"><ul>\' . $output . \'</ul></div><div class="clear"></div>\';';
  $formatter->fapi = '$form = array();
$form[\'image_style_destination\'] = array(
  \'#title\' => t(\'Destination image style\'),
  \'#default_value\' => \'large\',
  \'#options\' => array(
    \'thumbnail\' => t(\'thumbnail\'),
    \'medium\' => t(\'medium\'),
    \'large\' => t(\'large\'),
  ),
  \'#type\' => \'select\',
  \'#key_type_toggled\' => \'1\',
  \'#multiple_toggle\' => \'1\',
  \'#weight\' => \'1\',
);
$form[\'image_style_source\'] = array(
  \'#key_type_toggled\' => \'1\',
  \'#multiple_toggle\' => \'1\',
  \'#title\' => t(\'Source image style\'),
  \'#weight\' => \'1\',
  \'#type\' => \'select\',
  \'#options\' => array(
    \'thumbnail\' => t(\'thumbnail\'),
    \'two\' => t(\'medium\'),
    \'large\' => t(\'large\'),
  ),
  \'#default_value\' => \'thumbnail\',
);
$form[\'custom_class\'] = array(
  \'#size\' => \'20\',
  \'#description\' => t(\'Should you wish to define a custom class for this element such as a span please declare it here.\'),
  \'#weight\' => \'2\',
  \'#type\' => \'textfield\',
  \'#required\' => \'0\',
  \'#title\' => t(\'Custom Class\'),
);
';
  $export['wetkit_lightbox'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'wetkit_share_widget';
  $formatter->label = 'WetKit Share Widget';
  $formatter->description = 'Creates the Web Experience Toolkit\'s Share Widget based on values specified during the content creation phase.';
  $formatter->mode = 'php';
  $formatter->field_types = 'list_text';
  $formatter->code = '// Formatter settings.
$settings = $variables[\'#display\'][\'settings\'];
$sites = \'\';
foreach ($variables[\'#items\'] as $item) {
  $sites[] = "\'" . $item[\'value\'] . "\'";
}
$class = $settings[\'custom_class\'];
return \'<div class="wet-boew-share \' .  $class . \'" data-wet-boew="{sites:[\' . implode(",", $sites) . \']}"></div><div class="clear"></div>\';';
  $formatter->fapi = '$form = array();
$form[\'custom_class\'] = array(
  \'#size\' => \'20\',
  \'#title\' => t(\'Custom Class\'),
  \'#type\' => \'textfield\',
  \'#description\' => t(\'Should you wish to define a custom class for this element such as a span please declare it here.\'),
  \'#weight\' => \'0\',
  \'#required\' => \'0\',
);
';
  $export['wetkit_share_widget'] = $formatter;

  return $export;
}
