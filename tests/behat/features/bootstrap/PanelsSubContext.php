<?php
/**
 * @file
 * Provide Behat step-definitions for Panels.
 *
 * @todo This should become panels.behat.inc in the Panels module!
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class PanelsSubContext extends BehatContext implements DrupalSubContextInterface {
  /**
   * Initializes context.
   */
  public function __construct(array $parameters = array()) {
  }

  public static function getAlias() {
    return 'panels';
  }

  /**
   * Get the session from the parent context.
   */
  protected function getSession() {
    return $this->getMainContext()->getSession();
  }

  /**
   * @When /^(?:|I )wait for the Panels IPE to activate$/
   *
   * Wait until the Panels IPE is activated.
   */
  public function waitForIPEtoActivate() {
    $this->getSession()->wait(5000, 'jQuery(".panels-ipe-editing").length > 0');
  }

  /**
   * @When /^(?:|I )wait for the Panels IPE to deactivate$/
   *
   * Wait until the Panels IPE is deactivated.
   */
  public function waitForIPEtoDeactivate() {
    $this->getSession()->wait(5000, 'jQuery(".panels-ipe-editing").length === 0');
  }

  /**
   * @When /^(?:|I )customize this page with the Panels IPE$/
   *
   * Enable the Panels IPE if it's available on the current page.
   */
  public function customizeThisPageIPE() {
    $this->getSession()->getPage()->clickLink('Customize this page');
    $this->waitForIPEtoActivate();
  }

 /**
   * @When /^(?:|I )wait for live preview to finish$/
   *
   * Wait until the live preview to finish.
   */
  public function waitForLivePreview() {
    $this->getSession()->wait(5000, 'jQuery(".form-submit").value == "Save"');
  }

}
