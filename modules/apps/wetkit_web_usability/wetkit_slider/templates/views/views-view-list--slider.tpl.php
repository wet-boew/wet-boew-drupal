<?php
/**
 * @file views-view-list.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php $index = 1; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php if ($index == 1) : ?>
      <li class="<?php print $classes_array[$id]; ?>">
        <a href="#tab<?php print $index; ?>">
      <?php else : ?>
      <li class="<?php print $classes_array[$id]; ?>">
        <a href="#tab<?php print $index; ?>">
      <?php endif; ?> 
        <?php print $row; ?>
        </a> 
      </li>
      <?php $index++; ?>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>