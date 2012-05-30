<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user module
 *     is responsible for handling the default user navigation block. In that case
 *     the class would be "block-user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 */
global $language;
?>
<div class="sectionblock">
<section>
  <div class="roundCorner roundCornerOrangeF1"> <!-- Space | Espace --></div>
  <div class="roundCorner roundCornerOrangeF2"> <!-- Space | Espace --></div>
  <div class="roundCorner roundCornerOrangeF3"> <!-- Space | Espace --></div>
  <div class="roundCorner roundCornerOrangeF4"> <!-- Space | Espace --></div>
  <div class="headerOrangeFIndex">
    <?php if ($block->subject && $language->language == 'en'): ?>
      <h2><a href="/about-apercu/about-apropos-eng">About us</a></h2>
    <?php elseif ($block->subject && $language->language == 'fr'): ?>
      <h2><a href="/about-apercu/about-apropos-fra">À propos de nous</a></h2>
    <?php endif;?>
  </div>
	<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?>">
      <?php print $content ?>
      <?php if ($language->language == 'en'): ?>
        <ul id="extrasample"class="nav">
          <li id="statblue" class="menucontent"><a class="menulink" href="/">Other information</a></li>
          <li class="menucontent"><a class="menulink" href="/">Site map</a></li>
          <li class="menucontent"><a class="menulink" href="/">Accessibility</a></li>
          <li class="menucontent"><a class="menulink" href="/">External links</a></li>
        </ul>
      <?php elseif ($language->language == 'fr'): ?>
        <ul id="extrasample"class="nav">
          <li id="statblue" class="menucontent"><a class="menulink" href="/">Autres renseignements</a></li>
          <li class="menucontent"><a class="menulink" href="/">Plan du site</a></li>
          <li class="menucontent"><a class="menulink" href="/">Accessibilité</a></li>
          <li class="menucontent"><a class="menulink" href="/">Liens externes</a></li>
        </ul>
      <?php endif;?>
	</div>
  
</section>
</div>