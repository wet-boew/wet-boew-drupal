Feature: Test Bean Types
  In order to know that Beans are functioning as expected
  As a site administrator
  I need to be able to trust that bean types work consistently

  Background:
    Given I am logged in as a user with the "administrator" role
    When I visit "/block/add/wetkit-twitter"
      And I fill in the following:
        | Title                         | Testing title      |
        | label                         | WxT Feed           |
        | title_field[en][0][value]     | WxT Feed           |
        | twitter_settings[username]    | WebExpToolkit      |
        | twitter_settings[widget_id]   | 461316119865737216 |
      And I press "Save"
    Then I should see the ".twitter-timeline-rendered" element in the "Content Well" region
