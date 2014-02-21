Feature: Add landing page
  In order to create a fully customizable page
  As a site administrator
  I need to be able to create a landing page

  # @javascript is needed for the machine name
  @api @javascript
  Scenario: Add a landing page
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/landing_page"
      And I fill in the following:
        | Title | Testing [random] landing page title |
        | URL   | lp-[random:1]             |
      And I press "Create Page"
    Then the "title" element should contain "Testing [random:1] landing page title"
