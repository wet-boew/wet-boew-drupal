Feature: Test Bean Types
  In order to know that Beans are functioning as expected
  As a site administrator
  I need to be able to trust that bean types work consistently

  @api @javascript
  Scenario: User save Twitter Bean
    Given I am logged in as a user with the "administrator" role
    When I visit "/block/add/wetkit-twitter"
      And I fill in the following:
        | Title                         | Testing title      |
        | label                         | WxT Feed           |
        | title_field[en][0][value]     | WxT Feed           |
        | twitter_settings[username]    | WebExpToolkit      |
        | twitter_settings[widget_id]   | 461316119865737216 |
        | twitter_settings[tweet_limit] | 5                  |
      And I press "Save"
      And I wait 2 seconds
  Then I should see a ".wet-boew-webwidget" element
