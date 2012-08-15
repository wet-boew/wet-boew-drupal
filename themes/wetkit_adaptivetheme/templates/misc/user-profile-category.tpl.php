<?php
/**
 * @file
 * Adaptivetheme implementation to present profile categories (groups of
 * profile items).
 *
 * Categories are defined when configuring user profile fields for the site.
 * It can also be defined by modules. All profile items for a category will be
 * output through the $profile_items variable.
 *
 * @see user-profile-item.tpl.php
 *      where each profile item is rendered. It is implemented as a definition
 *      list by default.
 * @see user-profile.tpl.php
 *      where all items and categories are collected and printed out.
 *
 * Adaptivetheme variables:
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 *
 * Available variables:
 * - $title: Category title for the group of items.
 * - $profile_items: All the items for the group rendered through
 *   user-profile-item.tpl.php.
 * - $attributes: HTML attributes. Usually renders classes.
 *
 * @see template_preprocess_user_profile_category()
 */
?>
<section class="<?php print drupal_html_class($title); ?>">

  <?php if ($title) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>

  <dl<?php print $attributes; ?>>
    <?php print $profile_items; ?>
  </dl>

</section>
