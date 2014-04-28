Feature: Test pathauto
  In order to get nice urls
  As a site administrator
  I need to be able to trust that pathauto works consistently

  Background:
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/wetkit-page"
      And I fill in the following:
        | Title               | Testing title |
        | Editor              | plain_text    |
        | body[und][0][value] | Testing body  |
      And I press "Save"
    Then the "h1" element should contain "Testing title"

  @api
  Scenario: Pathauto should automatically assign an url
    Then the url should match "testing-title"

  @api
  Scenario: Pathauto should keep old url when changing the title
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Title               | Completely other title |
      And I press "Save"
    Then the url should match "testing-title"
    Given I go to "completely-other-title"
    Then the response status code should be 404

  @api
  Scenario: My own permalink should be kept even if changing title
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Permalink           | my-custom-permalink |
      And I press "Save"
    Then the url should match "my-custom-permalink"
    When I click "Edit" in the "Tabs" region
      And I fill in the following:
        | Title               | Saving Title Again  |
      And I press "Save"
    Then the url should match "my-custom-permalink"
    Given I go to "my-custom-permalink"
    Then the response status code should be 200
    # Original Permalink should forward to new permalink
    # Given I go to "testing-title"
    # Then the response status code should be 301
