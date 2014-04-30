<?php
/**
 * @file
 * Provide Behat step-definitions for the Linkit module.
 *
 * @todo Also, add a cleanup function to delete files uploaded.
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class LinkitSubContext extends BehatContext implements DrupalSubContextInterface {
  /**
   * Initializes context.
   */
  public function __construct(array $parameters = array()) {
  }

  public static function getAlias() {
    return 'linkit';
  }

  /**
   * Get the session from the parent context.
   */
  protected function getSession() {
    return $this->getMainContext()->getSession();
  }

  /**
   * @When /^I click on the linkit result with selector "([^"]*)"$/
   */
  public function iClickTheLinkitResult($cssSelector)
  {
    $session = $this->getSession();
    $element = $session->getPage()->find('xpath', $session->getSelectorsHandler()->selectorToXpath('css', $cssSelector));
    if (null === $element) {
      throw new \InvalidArgumentException(sprintf('Could not evaluate CSS Selector: "%s"', $cssSelector));
    }
    $element->click();
  }
}
