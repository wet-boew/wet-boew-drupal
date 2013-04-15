<?php
/**
 * @file
 * wetkit_migrate_querypath.inc
 */

/**
 * This class is used to encapsulate a static HTML page that will be migrated
 * into the Drupal 7 WCMS.
 * Any HTML pre-processing or parsing logic that is common to all migrated
 * content can be placed into this class.
 */
class WetKitMigrationhtmlpage {

  protected $html;
  protected $qp;
  protected $filename;

  /**
   * Parsed contents of the page's body tag
   * @var string
   */
  public $body = '';

  /**
   * HTML page's title
   * @var string
   */
  public $title = '';

  /**
   * Single or Multiple Column present in the HTML page
   * @var bool Will be 0 or 1
   */
  public $columns = 0;

  /**
   * Language of the HTML page
   * @var string Will be either 'en' or 'fr'
   */
  public $language = '';

  /**
   * Date create timestamp for the HTML page
   * @var string
   */
  public $datestamp = '';

  /**
   * Constructor method that loads the page into QueryPath.
   *
   * @param array $data
   *   Return the parsed content derived by querypath.
   */
  public function __construct($data = NULL, $elements_to_remove = NULL) {
    if (($data != NULL) && (isset($data->filedata))) {
      $this->filename = $data->sourceid;

      // Fix the HTML so that libXML can work with the document.
      $this->html = $this->fixHTML($data->filedata);

      // Clean up carriage returns.
      $this->charTransform();

      // Double check the encoding. Probably this is not necessary, but...
      $this->fixEncoding();

      // If dealing with a HTML fragment we need to wrap it in html > body
      // For instance: $this->wrapHTML().
      // Parse the HTML using QueryPath.
      $this->initQP();

      if (isset($elements_to_remove['removeDOMElements'])) {
        $this->removeDOMElements($elements_to_remove['removeDOMElements']);
      }
      $this->stripCommonTags();
      $this->body = $this->getHTML('#wb-main-in');
      $this->title = $this->getTitle();
      $this->columns = $this->elementExists('#wb-sec');
      $this->language = $this->getPageLanguage();
      $this->datestamp = $this->getDate();
    }
  }

  /**
   * Return the HTML.
   */
  public function getHTML($element) {
    if ($this->qp->top()->is($element)) {
      $html = $this->qp->top()->find($element)->innerHTML();
      $html = trim($html);
      return $html;
    }
  }

  /**
   * Return the HTML.
   */
  public function elementExists($element) {
    if ($this->qp->top()->is($element)) {
      return 1;
    }
    else {
      return 0;
    }
  }

  /**
   * Replace characters.
   */
  protected function charTransform() {
    // We need to strip the Windows CR characters, because otherwise we end up
    // with &#13; in the output.
    // http://technosophos.com/content/querypath-whats-13-end-every-line
    $this->html = str_replace(chr(13), '', $this->html);
  }

  /**
   * Deal with encodings.
   */
  protected function fixEncoding() {
    // If the content is not UTF8, we assume it's WINDOWS-1252. This fixes
    // bogus character issues. Technically it could be ISO-8859-1 but it's safe
    // to convert this way.
    // http://en.wikipedia.org/wiki/Windows-1252
    $enc = mb_detect_encoding($this->html, 'UTF-8', TRUE);
    if (!$enc) {
      $this->html = mb_convert_encoding($this->html, 'UTF-8', 'ISO-8859-1, WINDOWS-1252');
    }
  }

  /**
   * Fix an HTML document in the correct head/meta tags to detect UTF-8.
   */
  protected function fixHTML($html_document) {
    // Need to clean up badly formated DOCTYPE headers. Many files have the
    // format:
    // <!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    //
    // "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
    //
    // It should be all on one line for QueryPath to work properly.
    $html_document = preg_replace('#XHTML 1.0 Strict//EN"(\s+)"http://www.w3.org/#',
        'XHTML 1.0 Strict//EN" "http://www.w3.org/', $html_document);

    // Assign a UTF-8 Meta Charset for libXML.
    return $this->html = preg_replace('#charset=iso-8859-1#', 'charset=utf-8', $html_document);
  }

  /**
   * Wrap an HTML fragment in the correct head/meta tags to detect UTF-8.
   */
  protected function wrapHTML($html_fragment) {
    // We add surrounding <html> and <head> tags.
    $html = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">';
    $html .= '<html xmlns="http://www.w3.org/1999/xhtml"><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /></head>';
    $html .= $html_fragment;
    $html .= '</html>';
    return $html;
  }

  /**
   * Create the QueryPath object.
   */
  protected function initQP() {
    $qp_options = array(
      'strip_low_ascii' => FALSE,
      'convert_from_encoding' => 'auto',
      'use_parser' => 'html',
    );

    // Include Querypath.
    require_once libraries_get_path('querypath', FALSE) . '/src/qp.php';
    $this->qp = htmlqp($this->html, NULL, $qp_options);
  }

  /**
   * Remove the comments from the HTML.
   */
  protected function stripCommonTags() {
    // Remove all comment tags.
    foreach ($this->qp->top()->xpath('//comment()')->get() as $comment) {
      $comment->parentNode->removeChild($comment);
    }

    // Remove all script tags from the body.
    foreach ($this->qp->top()->xpath('//script')->get() as $metatag) {
      $metatag->parentNode->removeChild($metatag);
    }

    // Remove all link tags from the body.
    foreach ($this->qp->top()->xpath('//link')->get() as $metatag) {
      $metatag->parentNode->removeChild($metatag);
    }

    // Remove the ubiquitous breadcrumb block.
    if ($this->qp->top('body')->is('p.breadcrumb')) {
      $this->qp->top('body')->find('p.breadcrumb')
        ->remove();
    }

    // Remove the top level H1 as it just duplicates the title.
    if ($this->qp->top('body')->is('h1')) {
      $this->qp->top('body')->find('h1')
        ->remove();
    }
  }

  /**
   * Get the contents of the title tag from the imported page.
   *
   * @return string
   *   Return the title of the imported page.
   */
  protected function getTitle() {
    $title = $this->qp->top('title')->innerHTML();
    $title = trim($title);
    if (strlen($title) > 255) {
      $title = substr($title, 0, 255);
    }
    return $title;
  }

  /**
   * Return various metatags of the imported page.
   *
   * @return string
   *   Return the specified metatag of the current page.
   */
  protected function getMetaTag($element) {
    $content = $this->qp->top()->find('meta[name="' . $element . '"]')->attr('content');
    return trim($content);
  }

  /**
   * Return the language of the imported page.
   *
   * @return string
   *   Return the language of the current page.
   */
  protected function getPageLanguage() {
    // First try to obtain the language from the HTML tag.
    $language = $this->qp->top('html')->attr('lang');
    $isenglish = strncasecmp($language, 'en', 2);
    $isfrench = strncasecmp($language, 'fr', 2);
    if ($isenglish != 0 && $isfrench != 0) {

      // No language yet, so try to parse the path name instead.
      $pathstats = pathinfo($this->filename);
      $filename_len = strlen($pathstats['filename']);
      $filecode = substr($pathstats['filename'], $filename_len - 3, 3);
      if (strcasecmp('eng', $filecode) == 0) {
        $language = 'en';
      }
      elseif (strcasecmp('fra', $filecode) == 0) {
        $language = 'fr';
      }
      else {
        $language = LANGUAGE_NONE;
      }
    }
    return $language;
  }

  /**
   * Get the created date from the HTML's meta data tag.
   *
   * @return string
   *   Return the created date Y-m-d.
   */
  protected function getDate() {
    $date = $this->qp->find('meta[name="date"]')->attr('content');
    if ((strlen($date) != 10) or ($date == "YYYY-MM-DD") or ($date == "AAAA-MM-JJ")) {
      $date = $this->qp->find('meta[name="dcterms.modified"]')->attr('content');
      if ((strlen($date) != 10) or ($date == "YYYY-MM-DD") or ($date == "AAAA-MM-JJ")) {
        $date = date('Y-m-d');
      }
    }
    return $date;
  }

  /**
   * Remove specific DOM Elements.
   *
   * @param array $elements
   *   The elements to remove from the DOM.
   */
  protected function removeDOMElements($elements) {
    foreach ($elements as $element) {
      if ($this->qp->top()->is($element)) {
        $this->qp->top()->find($element)->remove();
      }
    }
  }
}
