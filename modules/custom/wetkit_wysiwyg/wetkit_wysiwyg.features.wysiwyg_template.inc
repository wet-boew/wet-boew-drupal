<?php
/**
 * @file
 * wetkit_wysiwyg.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function wetkit_wysiwyg_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['onglet_coulissant_francais'] = array(
    'title' => 'Onglet coulissant Francais',
    'description' => 'Onglet coulissant pour le Web Experience Toolkit (Français)',
    'body' => '<div class="wet-boew-slideout">
	<h2>Table des matières</h2>
	<ul>
	 <li><a href="#cn_ed2">Date d\'entrée en vigueur</a></li>
	 <li><a href="#cn_app2">Application</a></li>
	 <li><a href="#cn_cont2">Contexte</a></li>
	 <li><a href="#cn_acc2">Responsabilité</a></li>

	 <li><a href="#cn_req2">Exigences</a>
	 <ul>
	 <li><a href="#cn_1_cww">1.&#160;Conformité aux critères de
	 la Priorité 1 et de la Priorité 2 du <abbr lang="en" title="World Wide Web Consortium"><span lang="fr">W3C </span></abbr></a></li>
	 <li><a href="#cn_2_bt">2. Technologies de base</a></li>
	 <li><a href="#cn_3_aaf">3. Formats de rechange accessibles pour les documents
	 publiés sur les sites Web</a></li>
	 <li><a href="#cn_4_oii">4.&#160;Présentation de l\'information
	 dans plusieurs formats</a></li>

	 <li><a href="#cn_5_con">5. Contraste</a></li>
	 <li><a href="#cn_6_aai">6.&#160;Évaluation de l\'accessibilité,
	 de l\'interopérabilité et de la facilité d\'emploi</a></li>
	 </ul>
	 </li>
	</ul>
</div>',
    'name' => 'onglet_coulissant_francais',
  );
  $templates['slide_out_tab_english'] = array(
    'title' => 'Slide Out Tab English',
    'description' => 'Slide Out Tab for the Web Experience Toolkit (English)',
    'body' => '<div class="wet-boew-slideout">
	<h2>Table of Contents</h2>
	<ul>
		<li><a href="#cn_ed2">Effective date</a></li>
		<li><a href="#cn_app2">Application</a></li>
		<li><a href="#cn_cont2">Context</a></li>
		<li><a href="#cn_acc2">Accountability</a></li>
		<li><a href="#cn_req2">Requirements</a>
			<ul>
				<li><a href="#cn_1_cww">1. Compliance with World Wide Web Consortium<br />Priority 1 and Priority 2 checkpoints</a></li>
				<li><a href="#cn_2_bt">2. Baseline technologies</a></li>
				<li><a href="#cn_3_aaf">3. Accessible alternate format of documents on Web sites</a></li>
				<li><a href="#cn_4_oii">4. Offering information in multiple formats</a></li>
				<li><a href="#cn_5_con">5. Contrast</a></li>
			</ul>
		</li>
	</ul>
</div>',
    'name' => 'slide_out_tab_english',
  );
  return $templates;
}
