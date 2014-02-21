Feature: Metatags
  In order to know that metatags are providing meaningful text for search engines
  As a website user
  When a search engine crawls a website it should recieve the correct text

  @api
  Scenario: Search engine interpreting the metatags from head
    Given I am on "en/content/drupal-wxt"
    Then the metatag attribute "dcterms.title" should have the value "Drupal WxT"
    And I am on "fr/contenu/wxt-drupal"
    Then the metatag attribute "dcterms.title" should have the value "WxT Drupal"
