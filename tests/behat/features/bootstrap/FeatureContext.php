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
}
