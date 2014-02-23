Feature: Breadcrumb
  In order to know that the breadcrumb is functional and correctly displaying
  As a website user
  I need to be able to see the breadcrumb

  @api
  Scenario: User leveraging the breadcrumbs to navigate the site
    Given I am on "en/content/drupal-wxt"
    Then I should see the breadcrumb "Drupal WxT"
    And I am on "fr/contenu/wxt-drupal"
    Then I should see the breadcrumb "WxT Drupal"
