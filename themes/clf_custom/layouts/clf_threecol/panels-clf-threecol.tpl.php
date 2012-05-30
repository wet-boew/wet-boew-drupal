<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>

<div class="panel-display panel-3col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
      <?php if ($content['left']): ?>
			<!-- Primary navigation (left column) begins / Début de la navigation principale (colonne gauche) -->
			<div id="cn-left-col-gap"></div>
			<div id="cn-left-col">
				<div id="cn-left-col-inner">
					<nav role="navigation">
						<h2 id="cn-nav"><?php print t('Primary navigation (left column)'); ?></h2>
						<div class="cn-left-col-default">
							 <div class="panel-panel panel-col-first">
               <div class="inside"><?php print $content['left']; ?></div>
               </div>
						</div>
					</nav>
				</div>
			</div>
			<!-- Primary navigation (left column) ends / Fin de la navigation principale (colonne gauche) -->
      <?php endif; ?>
      
  <?php if ($content['middle']): ?>
  <!-- Main content begins / Début du contenu principal -->
		<div id="cn-centre-col-gap"></div>
		<div id="cn-centre-col" role="main">
			<div id="cn-centre-col-inner">

				<section>
            <div class="panel-panel panel-col">
						 <div class="inside"><?php print $content['middle']; ?></div>
            </div>
				</section>

			</div>
		</div>
    <!-- Main content ends / Fin du contenu principal -->
     <?php endif; ?>
    
      <?php if ($content['right'] && (strlen($content['right']) != 640)): ?>
			<!-- Supplemental content (right column) begins / Début du contenu supplémentaire (colonne droite) -->
			<div id="cn-right-col-gap"></div>
			<div id="cn-right-col" role="complementary">
				<div id="cn-right-col-inner">
					<section>
						<h2><?php print t('Supplemental content (right column)'); ?></h2>
						<div class="cn-right-col-default">
               <div class="panel-panel panel-col-last">
							 <div class="inside"><?php print $content['right']; ?></div>
               </div>
						</div>
					</section>
				</div>
			</div>
			<!-- Supplemental content (right column) ends / Fin du contenu supplémentaire (colonne droite) -->
      <?php endif; ?>
      
</div>