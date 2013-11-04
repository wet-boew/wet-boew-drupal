Feature: Search
  In order to know that multilingualism is working
  As a website user
  When I change the language of content I should see results

  @api
  Scenario: Using language toggle
    Given I am on "en/content/drupal-wxt"
    When I click "Français"
    Then I should not see "Page non trouvée"
