<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Event\StepEvent,
    Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;
use Drupal\Component\Utility\Random;
use Behat\Behat\Context\Step\Given;

// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

/**
 * Features context.
 */
class FeatureContext extends DrupalContext
{

  /**
   * Initializes context.
   * Every scenario gets it's own context object.
   *
   * @param array $parameters context parameters (set them up through behat.yml)
   */
  public function __construct(array $parameters) {
    // Initialize your context here
    $this->useContext('panels', new PanelsSubContext());
    $this->useContext('wysiwyg', new WysiwygSubContext());
    $this->useContext('media', new MediaSubContext());
    $this->useContext('linkit', new LinkitSubContext());
  }

  //
  // Place your definition and hook methods here:
  //
  //    /**
  //     * @Given /^I have done something with "([^"]*)"$/
  //     */
  //    public function iHaveDoneSomethingWith($argument)
  //    {
  //        doSomethingWith($argument);
  //    }
  //
  //

  /**
   * @Then /^I should see the "([^"]*)" button$/
   */
  public function assertButton($label) {
    $page = $this->getSession()->getPage();
    $results = $page->findAll('css', "input[type=submit],input[type=button],button");
    if (!empty($results)) {
      foreach ($results as $result) {
        if ($result->getTagName() == 'input' && $result->getAttribute('value') == $label) {
          return;
        }
        elseif ($result->getText() == $label) {
          return;
        }
      }
    }
    throw new \Exception(sprintf('The "%s" button was not found on the page %s', $label, $region, $this->getSession()->getCurrentUrl()));
  }

  /**
   * @Then /^I should see the "([^"]*)" button in the "([^"]*)" region$/
   */
  public function assertRegionButton($label, $region) {
    $regionObj = $this->getRegion($region);
    $results = $regionObj->findAll('css', "input[type=submit],input[type=button],button");
    if (!empty($results)) {
      foreach ($results as $result) {
        if ($result->getTagName() == 'input' && $result->getAttribute('value') == $label) {
          return;
        }
        elseif ($result->getText() == $label) {
          return;
        }
      }
    }
    throw new \Exception(sprintf('The "%s" button was not found in the "%s" region on the page %s', $label, $region, $this->getSession()->getCurrentUrl()));
  }

  /**
   * @Then /^I should see the "([^"]*)" element in the "([^"]*)" region$/
   */
  public function assertRegionElement($tag, $region) {
    $regionObj = $this->getRegion($region);
    $elements = $regionObj->findAll('css', $tag);
    if (!empty($elements)) {
      return;
    }
    throw new \Exception(sprintf('The element "%s" was not found in the "%s" region on the page %s', $tag, $region, $this->getSession()->getCurrentUrl()));
  }

  /**
   * @Then /^I should not see the "([^"]*)" element in the "([^"]*)" region$/
   */
  public function assertNotRegionElement($tag, $region) {
    $regionObj = $this->getRegion($region);
    $result = $regionObj->findAll('css', $tag);
    if (!empty($result)) {
      throw new \Exception(sprintf('Element "%s" was found in the "%s" region on the page %s', $tag, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then /^I should see "([^"]*)" in the "([^"]*)" element in the "([^"]*)" region$/
   */
  public function assertRegionElementText($text, $tag, $region) {
    $regionObj = $this->getRegion($region);
    $results = $regionObj->findAll('css', $tag);
    if (!empty($results)) {
      foreach ($results as $result) {
        if ($result->getText() == $text) {
          return;
        }
      }
    }
    throw new \Exception(sprintf('The text "%s" was not found in the "%s" element in the "%s" region on the page %s', $text, $tag, $region, $this->getSession()->getCurrentUrl()));
  }

  /**
   * @Then /^I should see "([^"]*)" in the "([^"]*)" element with the "([^"]*)" CSS property set to "([^"]*)" in the "([^"]*)" region$/
   */
  public function assertRegionElementTextCss($text, $tag, $property, $value, $region) {
    $regionObj = $this->getRegion($region);
    $elements = $regionObj->findAll('css', $tag);
    if (empty($elements)) {
      throw new \Exception(sprintf('The element "%s" was not found in the "%s" region on the page %s', $tag, $region, $this->getSession()->getCurrentUrl()));
    }

    $found = FALSE;
    foreach ($elements as $element) {
      if ($element->getText() == $text) {
        $found = TRUE;
        break;
      }
    }
    if (!$found) {
      throw new \Exception(sprintf('The text "%s" was not found in the "%s" element in the "%s" region on the page %s', $text, $tag, $region, $this->getSession()->getCurrentUrl()));
    }

    if (!empty($property)) {
      $style = $element->getAttribute('style');
      if (strpos($style, "$property: $value") === FALSE) {
        throw new \Exception(sprintf('The "%s" property does not equal "%s" on the element "%s" in the "%s" region on the page %s', $property, $value, $tag, $region, $this->getSession()->getCurrentUrl()));
      }
    }
  }

  /**
   * @Then /^I should not see "([^"]*)" in the "([^"]*)" element in the "([^"]*)" region$/
   */
  public function assertNotRegionElementText($text, $tag, $region) {
    $regionObj = $this->getRegion($region);
    $results = $regionObj->findAll('css', $tag);
    if (!empty($results)) {
      foreach ($results as $result) {
        if ($result->getText() == $text) {
          throw new \Exception(sprintf('The text "%s" was found in the "%s" element in the "%s" region on the page %s', $text, $tag, $region, $this->getSession()->getCurrentUrl()));
        }
      }
    }
  }

   /**
   * @Then /^I should see the image alt "(?P<link>[^"]*)" in the "(?P<region>[^"]*)"(?:| region)$/
   *
   * @throws \Exception
   *   If region or link within it cannot be found.
   */
  public function assertAltRegion($alt, $region) {
    $regionObj = $this->getRegion($region);

    $element = $regionObj->find('css', 'img');

    $tmp = $element->getAttribute('alt');

    if ($alt == $tmp) {
      $result = $alt;
    }

    if (empty($result)) {
      throw new \Exception(sprintf('No link to "%s" in the "%s" region on the page %s', $alt, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then /^the metatag attribute "(?P<attribute>[^"]*)" should have the value "(?P<value>[^"]*)"$/
   *
   * @throws \Exception
   *   If region or link within it cannot be found.
   */
  public function assertMetaRegion($metatag, $value) {
    $element = $this->getSession()->getPage()->find('xpath', '/head/meta[@name="' . $metatag . '"]/@content');

    if ($value == $element->getText()) {
      $result = $value;
    }

    if (empty($result)) {
      throw new \Exception(sprintf('No link to "%s" on the page %s', $metatag, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @AfterStep @javascript
   *
   * After every step in a @javascript scenario, we want to wait for AJAX
   * loading to finish.
   */
  public function afterStep(StepEvent $event) {
    if ($event->getResult() === 0) {
      $this->iWaitForAJAX();
    }
  }

  /**
   * @Then /^I should see the breadcrumb "([^"]*)"$/
   * @param string $breadcrumb
   *   Breadcrumb link on the current page
   * @param boolean $present
   *   Return True if success, false otherwise
   */
  public function checkBreadcrumb($breadcrumb, $present = true) {
    $result = $this->getSession()->getPage()->find('xpath', '//div[@id="wet-bc"]//div[@id="wet-bc-in"]//a[text()="' . $breadcrumb . '"]');
    if ($present && empty($result)) {
      throw new Exception("The breadcrumb \"" . $breadcrumb . "\" was not found on the page");
    }
    elseif (!$present && !empty($result)) {
      throw new Exception("The breadcrumb \"" . $breadcrumb . "\" was found on the page which should not be");
    }
  }

  /**
   * @Given /^I should not see the breadcrumb "([^"]*)"$/
   */
  public function iShouldNotSeeTheBreadcrumb($breadcrumb) {
    //To check for the breadcrumb link exists
    $this->checkBreadcrumb($breadcrumb, false);
  }

  /**
   * @Given /^Panopoly magic live previews are disabled$/
   *
   * Disable live previews via Panopoly Magic.
   */
  public function disablePanopolyMagicLivePreview() {
    $this->getDriver('drush')->vset('panopoly_magic_live_preview 0 --yes');
  }

  /**
   * @Given /^Panopoly magic live previews are automatic$/
   *
   * Enable live previews via Panopoly Magic.
   */
  public function enableAutomaticPanopolyMagicLivePreview() {
    $this->getDriver('drush')->vset('panopoly_magic_live_preview 1 --yes');
  }

  /**
   * @Given /^Panopoly magic live previews are manual$/
   *
   * Enable live previews via Panopoly Magic.
   */
  public function enableManualPanopolyMagicLivePreview() {
    $this->getDriver('drush')->vset('panopoly_magic_live_preview 2 --yes');
  }

  /**
   * Override MinkContext::fixStepArgument().
   *
   * Make it possible to use [random].
   * If you want to use the previous random value [random:1].
   */
  protected function fixStepArgument($argument) {
    $argument = str_replace('\\"', '"', $argument);

    // Token replace the argument.
    static $random = array();
    for ($start = 0; ($start = strpos($argument, '[', $start)) !== FALSE; ) {
      $end = strpos($argument, ']', $start);
      if ($end === FALSE) {
        break;
      }
      $name = substr($argument, $start + 1, $end - $start - 1);
      if ($name == 'random') {
        $this->vars[$name] = Random::name(8);
        $random[] = $this->vars[$name];
      }
      // In order to test previous random values stored in the form,
      // suppport random:n, where n is the number or random's ago
      // to use, i.e., random:1 is the previous random value.
      elseif (substr($name, 0, 7) == 'random:') {
        $num = substr($name, 7);
        if (is_numeric($num) && $num <= count($random)) {
          $this->vars[$name] = $random[count($random) - $num];
        }
      }
      if (isset($this->vars[$name])) {
        $argument = substr_replace($argument, $this->vars[$name], $start, $end - $start + 1);
        $start += strlen($this->vars[$name]);
      }
      else {
        $start = $end + 1;
      }
    }

    return $argument;
  }

  /**
   * @Given /^I log in with the One Time Login Url$/
   */
  public function iLogInWithTheOneTimeLoginUrl() {
    if ($this->loggedIn()) {
      $this->logOut();
    }
    // Create user (and project)
    $user = (object) array(
      'name' => Random::name(8),
      'pass' => Random::name(16),
      'role' => 'authenticated user',
    );
    $user->mail = "{$user->name}@example.com";

    // Create a new user.
    $this->getDriver()->userCreate($user);

    $this->users[$user->name] = $this->user = $user;

    $base_url = rtrim($this->locatePath('/'), '/');
    $login_link = $this->getMainContext()->getDriver('drush')->drush('uli', array(
      "'$user->name'",
      '--browser=0',
      "--uri=${base_url}",
    ));
    // Trim EOL characters. Required or else visiting the link won't work.
    $login_link = trim($login_link);
    $login_link = str_replace("/login", '', $login_link);
    $this->getSession()->visit($this->locatePath($login_link));
    return TRUE;
  }

  /**
   * @Given /^(?:|I )wait(?:| for) (\d+) seconds?$/
   *
   * Wait for the given number of seconds. ONLY USE FOR DEBUGGING!
   */
  public function iWaitForSeconds($arg1) {
    sleep($arg1);
  }

  /**
   * @Given /^(?:|I )wait for AJAX loading to finish$/
   *
   * Wait for the jQuery AJAX loading to finish. ONLY USE FOR DEBUGGING!
   */
  public function iWaitForAJAX() {
    $this->getSession()->wait(5000, 'jQuery.active === 0');
  }

  /**
   * @Given /^I switch to the frame "([^"]*)"$/
   */
  public function iSwitchToTheFrame($frame) {
    $this->getSession()->switchToIFrame($frame);
  }

  /**
   * @Given /^I switch out of all frames$/
   */
  public function iSwitchOutOfAllFrames() {
    $this->getSession()->switchToIFrame();
  }

  /**
   * A step to deal with slow loading pages.
   */
  public function spin ($lambda, $wait = 120) {
    for ($i = 0; $i < $wait; $i++) {
      try {
        if ($lambda($this)) {
          return true;
        }
      } catch (Exception $e) {
             // do nothing
      }
      sleep(1);
    }
    $backtrace = debug_backtrace();
    throw new Exception('Something took too long to load at ' . $this->getSession()->getCurrentUrl());
  }

  /**
   * @Then /^I should debug "([^"]*)" in the "([^"]*)" element$/
   */
  public function debugText($text, $tag) {
    $page = $this->getSession()->getPage();
    $results = $page->getContent();
    $this->printDebug($results);
  }

}
