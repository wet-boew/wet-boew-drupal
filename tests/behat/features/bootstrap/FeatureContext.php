<?php

use Drupal\DrupalExtension\Context\DrupalContext;
use Behat\Behat\Context\Step\Given;

class FeatureContext extends DrupalContext
{

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
}
