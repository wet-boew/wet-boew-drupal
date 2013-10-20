Feature: Content
  In order to know my content workflow is functional
  As a website user
  When I save a piece of content it should be created

  Scenario: Create and view a node with fields
    Given I am viewing an "wetkit_page" node:
    | title | My article with fields! |
    | body  | A placeholder           |
    Then I should see the heading "My article with fields!"
    And I should see the text "A placeholder"
