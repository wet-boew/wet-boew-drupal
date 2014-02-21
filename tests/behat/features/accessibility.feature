Feature: Accessibility
  In order to know that images are providing meaningful text to screen readers
  As a website user
  When a screen reader detects an image it should state descriptive text

  @api
  Scenario: Screenreader interpreting an image alt link in wysiwyg media
    Given I am on "en/content/drupal-wxt"
    Then I should see the image alt "Web Experience Toolkit Logo" in the "Content Well"
    And I am on "fr/contenu/wxt-drupal"
    Then I should see the image alt "Boîte à outils de expérience Web Logo" in the "Content Well"

  @api
  Scenario: Screenreader interpreting an image alt link in wysiwyg field
    Given I am on "en/content/drupal-platform"
    Then I should see the image alt "Drupal Trademark Logo" in the "Content Well"
    And I am on "fr/contenu/application-drupal"
    Then I should see the image alt "Drupal logo de la marque" in the "Content Well"
