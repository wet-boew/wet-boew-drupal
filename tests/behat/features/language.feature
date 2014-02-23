Feature: Search
  In order to know that multilingualism is working
  As a website user
  When I change the language of content I should see the expected results

  @api
  Scenario: Using the language toggle
    Given I am on "en/content/drupal-wxt"
    When I click "Français"
    Then I should not see "Page non trouvée"

  @api
  Scenario: Using the breadcrumb for navigation
    Given I am on "en/content/drupal-platform"
    Then I should see "Drupal Platform" in the "Breadcrumb"
    And I am on "fr/contenu/application-drupal"
    Then I should see "Application Drupal" in the "Breadcrumb"
