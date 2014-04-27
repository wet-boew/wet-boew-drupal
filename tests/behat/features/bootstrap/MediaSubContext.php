<?php
/**
 * @file
 * Provide Behat step-definitions for the Media module.
 *
 * @todo Also, add a cleanup function to delete files uploaded.
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class MediaSubContext extends BehatContext implements DrupalSubContextInterface {
  /**
   * Initializes context.
   */
  public function __construct(array $parameters = array()) {
  }

  public static function getAlias() {
    return 'media';
  }

  /**
   * Get the session from the parent context.
   */
  protected function getSession() {
    return $this->getMainContext()->getSession();
  }

  /**
   * @Given /^I click the fake "([^"]*)" button$/
   */
  public function iClickTheFakeButton($text) {
    // Media style selector "buttons" are A tags with no href, so not findable
    // by normal steps.
    $driver = $this->getSession()->getDriver();
    $buttons = $driver->find("//a[text()='$text']");
    $buttons[0]->click();
  }
}
