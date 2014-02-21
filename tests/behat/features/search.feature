Feature: Search
  In order to know search is working
  As a website user
  When I search for something I should see the results

  @api
  Scenario: Using site search
    Given I am logged in as a user with the "administrator" role
    And I am on the homepage
    And I enter "stuff" for "Search"
    And press "Search"
    Then I should see "Enter your keywords"
