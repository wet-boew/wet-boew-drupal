<?php
/**
 * @file
 * wetkit_bean.default_content.inc
 */

/**
 * Implements _wetkit_bean_load().
 */
function _wetkit_bean_load() {
  // If functionality available. Create some beans.
  if (function_exists('wetkit_bean_save_bean')) {

    // Minister Bean.
    $fields_en = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Minister',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<h3>Meet the Minister</h3>
<div class="gcwu-minister-in">
	<div class="gcwu-minister-img">
    <img alt="The Honourable minister name" height="149" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/minister.jpg" width="99" />
	</div>
	<div class="gcwu-minister-info">
    <p>The&nbsp;Honourable<br />
    <strong>minister name</strong></p>
    <ul>
      <li><a href="#">About the minister</a></li>
      <li><a href="#">His portfolio</a></li>
    </ul>
	</div>
</div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    $fields_fr = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Ministéré',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<h3>Rencontrez le ministre</h3>
<div class="gcwu-minister-in">
	<div class="gcwu-minister-img">
    <img alt="Le nom de l&#39;honorable ministre" height="149" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/minister.jpg" width="99" />
	</div>
	<div class="gcwu-minister-info">
    <p>L&#39;honorable<br />
    <strong>nom du minist&egrave;re</strong></p>
    <ul>
      <li><a href="#">A propos de la ministre</a></li>
      <li><a href="#">Son portefeuille</a></li>
    </ul>
	</div>
</div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    wetkit_bean_save_bean('wetkit_bean', 'Minister', 'Provides "Minister" bean for the front page.', 'Minister', $fields_en, $fields_fr);

    // Priorities Bean.
    $fields_en = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Priorities',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="cn-gc-priorities-inner">
	<ul>
    <li><img alt="Image 1" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio1-eng.png" /></li>
    <li><img alt="Image 2" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio2-eng.png" /></li>
    <li><img alt="Image 3" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio3-eng.png" /></li>
	</ul>
</div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    $fields_fr = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Priorités',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="cn-gc-priorities-inner">
	<ul>
    <li><img alt="Image 1" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio1-fra.png" /></li>
    <li><img alt="Image 2" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio2-fra.png" /></li>
    <li><img alt="Image 3" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/prio3-fra.png" /></li>
	</ul>
</div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    wetkit_bean_save_bean('wetkit_bean', 'Priorities', 'Provides "Priorities" bean for the front page.', 'Priorities', $fields_en, $fields_fr);

    // Stay Connected Bean.
    $fields_en = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Stay Connected',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="gcwu-connect" class="span-6"><h2>Stay Connected</h2><ul>
  <li><a href="http://twitter.com/#!/"><img alt="Twitter" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_twitter.png" /></a></li>
  <li><a href="http://www.youtube.com/"> <img alt="YouTube" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_youtube.png" /></a></li>
  <li><a href="/rss.xml"> <img alt="RSS" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_rss.png" /></a></li>
</ul></div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    $fields_fr = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Restez branchés',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="gcwu-connect" class="span-6"><h2>Restez branchés</h2><ul>
  <li><a href="http://twitter.com/#!/"><img alt="Twitter" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_twitter.png" /></a></li>
  <li><a href="http://www.youtube.com/"> <img alt="YouTube" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_youtube.png" /></a></li>
  <li><a href="/rss.xml"> <img alt="RSS" class="image-actual" src="/profiles/wetkit/modules/custom/wetkit_wetboew/images/sl_rss.png" /></a></li>
</ul></div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    wetkit_bean_save_bean('wetkit_bean', 'Stay Connected', 'Provides "Stay Connected" bean for the front page.', '', $fields_en, $fields_fr);

    $file_path = drupal_get_path('module', 'wetkit_demo') . '/video/demo.mp4';
    $file = file_save_data(file_get_contents($file_path), file_default_scheme() . '://' . basename($file_path));
    $file_path = file_create_url($file->uri);

    // Videos Bean.
    $fields_en = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Videos',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="gcwu-video"><div id="gcwu-bg-dark">
<div class="wet-boew-multimedia span-3 media-element file-default" data-file_info="%7B%22fid%22:%22' . $file->fid . '%22,%22view_mode%22:%22default%22,%22type%22:%22media%22%7D">
  <video poster="/profiles/wetkit/modules/custom/wetkit_demo/video/thumbnail.png" height="270" width="480">
    <source src="' . '/' . conf_path() . '/files/' . basename($file_path) . '" type="video/mp4">
    <track data-type="text/html" kind="captions" src="/profiles/wetkit/modules/custom/wetkit_demo/video/mediaplayer-transcript_captions-eng.html"></track>
  </video>
</div>
	<strong>Web Experience Toolkit Video</strong>
	<p>This section is for video related content. Often this is the best place to introduce your department or organization.</p>
</div>
<ul class="list-bullet-none indent-none">
  <li><a href="#">Multimedia Help</a></li>
  <li><a href="#">Transcripts and Alternative Formats</a></li>
</ul></div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    $fields_fr = array(
      'title_field' => array(
        '0' => array(
          'value' => 'Vidéos',
        ),
      ),
      'field_bean_wetkit_body' => array(
        '0' => array(
          'value' => '<div id="gcwu-video"><div id="gcwu-bg-dark">
<div class="wet-boew-multimedia span-3 media-element file-default" data-file_info="%7B%22fid%22:%22' . $file->fid . '%22,%22view_mode%22:%22default%22,%22type%22:%22media%22%7D">
  <video poster="/profiles/wetkit/modules/custom/wetkit_demo/video/thumbnail.png" height="270" width="480">
    <source src="' . '/' . conf_path() . '/files/' . basename($file_path) . '" type="video/mp4">
    <track data-type="text/html" kind="captions" src="/profiles/wetkit/modules/custom/wetkit_demo/video/mediaplayer-transcript_captions-fra.html"></track>
  </video>
</div>
	<strong>Exp&eacute;rience Web Toolkit Vid&eacute;o</strong>
	<p>Cette section est pour le contenu vid&eacute;o li&eacute;. Souvent c&#39;est le meilleur endroit pour introduire votre minist&egrave;re ou organisme.</p>
</div>
<ul class="list-bullet-none indent-none">
  <li><a href="#">Aide multim&eacute;dia</a></li>
  <li><a href="#">Les transcriptions et les formats de rechange</a></li>
</ul></div>',
          'format' => 'wetkit_wysiwyg_text',
        ),
      ),
    );
    wetkit_bean_save_bean('wetkit_bean', 'Videos', 'Provides "Videos" bean for the front page.', 'Videos', $fields_en, $fields_fr);
  }
}
