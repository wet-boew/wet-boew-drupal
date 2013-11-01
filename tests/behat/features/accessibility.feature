Feature: Accessibility
  In order to know that images are providing meaningful text to screen readers
  As a website user
  When a screen reader detects an image it should state descriptive text

  @api
  Scenario: Screenreader interpreting an image alt link
    Given I am on "en/content/wetkit-demo"
    Then I should see the link "Photo of Drupal WxT on GitHub" in the "Content Well"
    And I am on "fr/contenu/wetkit-demo"
    Then I should see the link "Photo de Drupal WxT sur ​​GitHub" in the "Content Well"
