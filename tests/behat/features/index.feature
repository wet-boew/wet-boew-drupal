Feature: Homepage
  In order to know the website is running
  As a website user
  I need to be able to view the site title and login

  Scenario: Viewing the site title
    Given I am on the homepage
    Then I should see "Web Experience Toolkit"

  @api
  Scenario: Logging into the site
    Given I am logged in as a user with the "administrator" role
    And I am on the homepage
    Then I should see "Log out"
