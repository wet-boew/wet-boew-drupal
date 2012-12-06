<?php

/**
 * @file
 * migrate_wetkit_links.inc
 */

/**
 * Class that handles the checking (and replacing) of links
 */
class LinksParser {

    private $data = "";
    private $missingLinks = 0;
    private $missingFiles = 0;
    private $basePath = "";
    private $dirnamePath = "";
    private $changes = FALSE;

    /**
     * A list of attributes we want to search for URLs
     * @var type
     */
    private static $keyAttributes = array(
      array("tag" => "a", "attribute" => "href"),
      array("tag" => "img", "attribute" => "src"),
     // array("tag" => "link", "attribute" => "href"),
     // array("tag" => "embed", "attribute" => "src"),
     // array("tag" => "object", "attribute" => "data"),
     // array("tag" => "script", "attribute" => "src"),
     // array("tag" => "object param[name='movie']", "attribute" => "value")
    );

    /**
     * Construct an object
     * @param string $data The HTML data to process - this is NOT the complete HTML page - just a fragment 
     *    like <body...</body>
     * @param string $basePath The base URL that will be prepended to the local relative paths
     */
    public function __construct($data, $basePath, $dirnamePath = NULL) {
      $this->data = $data;
      $this->basePath = $this->encodeURL($basePath);
      $this->dirnamePath = $dirnamePath;
      $this->wrapHTML();
      $this->initQP();
    }

    /**
     * Processes the information looking for relevant links (does replace)
     */
    public function process() {
      $new_html = $this->data;
      $this->missingLinks = 0;
      $this->missingFiles = 0;
      if (!empty($this->data)) {
        // check all the attributes
        foreach (LinksParser::$keyAttributes as $entry) {
          $selector = $entry["tag"];
          
          $base = $this->basePath;
          $dirname = $this->dirnamePath;

          // <a> tags
          if ($selector == 'a') {
            $items = $this->qp->top()->find($selector)->each(function ($index, $item) use ($base, $dirname) {
              // $item is an instance of the DOMElement class
              // examine the URL
              $tag_url = $item->getAttribute('href');
              $isExternal = FALSE;

              // EXTERNAL LINKS
              // external links have :// in them
              if (strpos($tag_url, "://") !== FALSE) {
                // external links don't have wet-boew.github.com in them
                if (strpos($tag_url, "wet-boew.github.com") === FALSE) {
                  $isExternal = TRUE;
                }
              } 
              // mailto: links are "external"
              elseif (strpos($tag_url, "mailto:") === 0) {
                $isExternal = TRUE;
              }
              // javascript: links are "external"
              elseif (strpos($tag_url, "javascript:") === 0) {
                $isExternal = TRUE;
              }
              // otherwise, assume they are internal
              else {
                $isExternal =  FALSE;
              }

              // INTERNAL LINKS
              if (!$isExternal) {
                // strip the .htm or .html from the path and reset the attribute
                $new_href = preg_replace('/\.html$/', '', $tag_url);
                $new_href = preg_replace('/\.html(#[a-zA-Z0-1_-]*)$/', '\\1', $new_href);
                $new_href = preg_replace('/.htm$/', '', $new_href);
                $new_href = preg_replace('/\.htm(#[a-zA-Z0-1_-]*)$/', '\\1', $new_href);

                // set the attribute
                if (!empty($new_href)) {
                  $item->setAttribute('href', $new_href);
                }
              }         
            });
          }

          // <img> tags
          if ($selector == 'img') {
            $items = $this->qp->top()->find($selector)->each(function ($index, $item) use ($base, $dirname) {
                $tag_url = $item->getAttribute('src');
                $isExternal = FALSE;

                // external links start with ://
                if (strpos($tag_url, "://") !== FALSE) {
                  $isExternal = TRUE;
                } 
                // otherwise, assume they are internal
                else {
                  $isExternal =  FALSE;
                }

                if (!$isExternal) {
                  // Check if base path exists; if not assign it
                  $base_path_exist = drupal_substr($base, strrpos($base, '/'));
                  $base_path_stripped = drupal_substr($base, 0, strrpos($base, '/'));
                  $base_path_exist = drupal_substr($base_path_exist, 1);
                  if (preg_match("/{$base_path_exist}/i", $tag_url)) {
                    $item->setAttribute('src', $base_path_stripped . $tag_url);
                  }
                  else {
                    // If tag_url begins with a '/' remove it
                    if (substr($tag_url, 0, 1) == '/') {
                      $tag_url = substr($tag_url, 1);
                    }
                    // If tag_url begins with a '../' remove it
                    if (substr($tag_url, 0, 3) == '../') {
                      $tag_url = substr($tag_url, 3);
                    }

                    // Append a relevant directory
                    if (substr($tag_url, 0, 6) == 'images') {
                      $tag_url = $dirname . '/' . $tag_url;
                    }

                    // Return the tag url
                    if (!empty($tag_url)) {
                      $item->setAttribute('src', $base . '/' . $tag_url);
                    }
                  }
                }
            });
          }
          $new_html = $this->qp->top('body')->innerHTML();
        }
      }
      return $new_html;
    }

    /**
     * Wrap an HTML fragment in the correct head/meta tags so that UTF-8 is
     * correctly detected, and for the QueryPath parser and tidiers.
     */
    protected function wrapHTML() {
      // We add surrounding <html> and <head> tags.
      $html = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">';
      $html .= '<html xmlns="http://www.w3.org/1999/xhtml"><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8" /></head><body>';
      $html .= $this->data;
      $html .= '</body></html>';
      $this->data = $html;
    }

    /**
     * Create the QueryPath object.
     */
    protected function initQP() {
      $qp_options = array(
        'ignore_parser_warnings' => TRUE,
        'convert_to_encoding' => 'UTF-8',
        'convert_from_encoding' => 'auto',
        'use_parser' => 'html'
      );
      $this->qp = htmlqp($this->data, NULL, $qp_options);
    }

    /**
     * Encode the URL.
     */
    private function encodeURL($url) {
      $oldURL = $url;
      if (strpos($url, '%') !== FALSE) {
        $url = urldecode($url);
      }
      $test = parse_url($url);
      $url = '';
      if (!empty($test['host'])) {
        $url .= $test['host'];
      }
      if (!empty($test['path'])) {
        $pieces = explode('/', $test['path']);
        foreach ($pieces as $piece) {
          if (!empty($piece)) {
            $url .= '/' . str_replace('+', '%20', rawurlencode($piece));
          }
        }
      }
      if (!empty($test['scheme'])) {
        $url = $test['scheme'] . '://' . $url;
      }
      if (drupal_substr($url, 0, 1) == '/' && (drupal_substr($oldURL, 0, 1) != '/')) {
        $url = drupal_substr($url, 1);
      }
      if (!empty($test['query'])) {
        $test['query'] = str_replace('&amp;', '&', $test['query']);
        $params = explode('&', $test['query']);
        if (count($params)) {
          $url .= '?';
          $first = TRUE;
          foreach ($params as $param) {
            if ($first) {
              $first = FALSE;
            }
            else {
              $url .= '&';
            }
            $param_pieces = explode('=', $param);
            if (count($param_pieces) > 1) {
              $url .= $param_pieces[0] . '=' . str_replace('+', '%20', rawurlencode($param_pieces[1]));
            }
            else {
              $url .= $param_pieces[0];
            }
          }
        }
      }
      return $url;
    }

    /**
     * Attempts to fix any broken URLs so that they will process properly
     * @param string $url Original URL
     * @return string Fixed URL
     */
    private function fixURL($url) {
      $url = trim($url);
      $url = str_replace(array(
        "\t", "\r", "\n",
        '&#9;', '&#10;', '&#13;',
      ), '', $url);
      // check for email addresses without a mailto:
      if (strpos($url, "@") !== FALSE && strpos($url, "mailto:") === FALSE) {
        return "mailto:" . trim($url);
      }
      return $url;
    }

    /**
     * Checks to see if a URL is external or not
     * @param string $url The URL to check
     * @return boolean True if it is external, otherwise false
     */
    private function isExternal($url) {
      // external links start with :// and don't have .uottawa.ca in them
      if (strpos($url, "://") !== FALSE) {
        return TRUE;
      }
      // mailto: links are "external"
      if (strpos($url, "mailto:") === 0) {
        return TRUE;
      }
      // javascript: links are "external"
      if (strpos($url, "javascript:") === 0) {
        return TRUE;
      }
      // otherwise, assume they are internal
      return FALSE;
    }
  }