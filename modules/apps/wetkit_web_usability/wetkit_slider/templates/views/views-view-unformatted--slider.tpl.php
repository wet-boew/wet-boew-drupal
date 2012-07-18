<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
  
<?php $index = 1; ?>
<?php $counter = 0; ?>
  
<div class="tabs-panel">
  <?php foreach ($rows as $id => $row): ?>
    
    <div id="tab<?php print $index; ?>">
      <div class="<?php print $classes_array[$id]; ?>">
        <?php print $row; ?>
      </div>
    </div>
    
    <?php $index++; ?>
    <?php $counter++; ?>
  
  <?php endforeach; ?>
</div>