Feature: Use rich text editor
  In order to format the content of my pages
  As a site builder
  I need to be able to use a WYSIWYG editor

  Background:
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/wetkit-page"
      And I fill in the following:
        | Title                | Testing WYSIWYG       |
        | body[und][0][format] | wetkit_wysiwyg_text |

  @api @javascript
  Scenario Outline: Format text in the editor (first toolbar)
    When I click the "<Action>" button in the "edit-body-und-0-value" WYSIWYG editor
      And I type "Testing body" in the "edit-body-und-0-value" WYSIWYG editor
      And I press "Save"
    Then I should see "Testing body" in the "<Element>" element with the "<Property>" CSS property set to "<Value>" in the "Pearson Content" region

    Examples:
      | Action                         | Element    | Property        | Value        |
      # | Bold                         | strong     |                 |              |
      # | Italic                       | em         |                 |              |
      | Strike through                 | span       | text-decoration | line-through |
      | Insert/Remove Bulleted List    | ul > li    |                 |              |
      | Insert/Remove Numbered List    | ol > li    |                 |              |
      | Block Quote                    | blockquote |                 |              |
      | Align Left                     | p          | text-align      | left         |
      | Align Center                   | p          | text-align      | center       |
      | Align Right                    | p          | text-align      | right        |

  @api @javascript
  Scenario Outline: Format text in the editor (advanced toolbar)
    When I click the "<Action>" button in the "edit-body-und-0-value" WYSIWYG editor
      And I type "Testing body" in the "edit-body-und-0-value" WYSIWYG editor
      And I press "Save"
    Then I should see "Testing body" in the "<Element>" element with the "<Property>" CSS property set to "<Value>" in the "Pearson Content" region

    Examples:
      | Action          | Element | Property        | Value     |
      | Underline       | span    | text-decoration | underline |
      | Align Full      | p       | text-align      | justify   |
      | Increase Indent | p       | padding-left    | 30px      |

  # TODO: About 10% of the time this test will hang with Firefox, so for now,
  # we will run in Chrome only on Travis-CI to get consistent builds.
  @api @javascript @chrome
  Scenario: Add an image with format and alt text
    When I type "Testing body" in the "edit-body-und-0-value" WYSIWYG editor
    # Upload the file.
    When I click the "Add media" button in the "edit-body-und-0-value" WYSIWYG editor
      And I switch to the frame "mediaBrowser"
      And I attach the file "wetkit.png" to "files[upload]"
      And I press "Next"
    Then I should see "Destination"
    # Select the destination (public/private files).
    When I select the radio button "Public local files served by the webserver."
      And I press "Next"
    Then I should see a "#edit-submit" element
    # Fields for the image.
    When I fill in the following:
        | Alt Text   | Sample alt text   |
        | Title Text | Sample title text |
      And I press "Save"
    # The media style selector.
    When I wait 2 seconds
      And I switch to the frame "mediaStyleSelector"
      And I select "WYSIWYG" from "format"
    Then the "Alt Text" field should contain "Sample Alt text"
      And the "Title Text" field should contain "Sample Title text"
      And I click the fake "Submit" button
      And I switch out of all frames
    # Save the whole node.
    When I press "Save"
    # See the image on the view page.
    Then I should see the "img" element in the "Pearson Content" region
      And I should see the image alt "Sample alt text" in the "Pearson Content" region
