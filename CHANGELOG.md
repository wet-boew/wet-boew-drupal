# CHANGELOG.md

## v4.4 (In Development)

Features:

  - PHP7 fix for migrate module
  - Resolved issue with Bootstrap + Splash pages
  - Further metatag improvements

Fixes:
  - (Commit: [ba72306][R4.4-Commit-ba72306]) Fixed WetKit Language for #[1967692][R4.4-Issue-1967692] - Make a release (i18nviews).
  - (Commit: [961aec9][R4.4-Commit-961aec9]) Fixed WetKit Core for Wrong patch for features module for PHP 7 features manage page.
  - (Commit: [a055bff][R4.4-Commit-a055bff]) Fixed WetKit Core for #[2288395][R4.4-Issue-2288395] - Manage Features page empty in PHP 7.
  - (Commit: [c86f093][R4.4-Commit-c86f093]) Fixed WetKit Migration for #[2654222][R4.4-Issue-2654222] - PHP7 Uniform Variable Syntax.
  - (Commit: [ce68535][R4.4-Commit-ce68535]) Fixed WetKit Metatag for Update metatag to 1.11 release for minor bug fixes.
  - (Commit: [255c645][R4.4-Commit-255c645]) Fixed WetKit Theme for #[2658276][R4.4-Issue-2658276] - Disable rendering of the mb main link inside the mega menu option gone in 4.0
  - (Commit: [8c0725c][R4.4-Commit-8c0725c]) Fixed WetKit Bootstrap for #[2658276][R4.4-Issue-2658276] - Disable rendering of the mb main link inside the mega menu option gone in 4.0
  - (Commit: [622dcf1][R4.4-Commit-622dcf1]) Fixed WetKit Admin for #[2658366][R4.4-Issue-2658366] - Content-type names not translated in Navbar
  - (Commit: [45bbc8f][R4.4-Commit-45bbc8f]) Fixed WetKit WYSIWYG for #[2658336][R4.4-Issue-2658336] - Body background image being added to wetkit wysiwyg
  - (Commit: [bf345dc][R4.4-Commit-bf345dc]) Fixed WetKit Core for #[2657866][R4.4-Issue-2657866] - ctools_context_optional() not usable since "Deprecating PHP4 style constructors" was commited
  - (Commit: [0c0a2e3][R4.4-Commit-0c0a2e3]) Fixed WetKit Bootstrap for #[2658376][R4.4-Issue-2658376] - Splash Pages broken with Bootstrap Update
  - (Commit: [a790cb8][R4.4-Commit-a790cb8]) Start work on next release.

## v4.3

Performance Update(s)

  - Improved caching with Metatag (issue in 1.9)

Features:

  - Metatag + i18n translate regressions have been addressed as of update to 1.10
  - Regression in Code Mirror + CKEditor 4.3+
  - PHP7 fix for logging out and _ drupal_session_destroy().

Fixes:
  - (Commit: [145e6bd][R4.3-Commit-145e6bd]) Fixed WetKit WYSIWYG for #[2654658][R4.3-Issue-2654658] - Codemirror incompatible with more recent versions of CKEditor
  - (Commit: [c84a8e1][R4.3-Commit-c84a8e1]) Fixed WetKit Test for Switch test from chrome to firefox.
  - (Commit: [f65a038][R4.3-Commit-f65a038]) Fixed WetKit Test for Remove debug logic from tests.
  - (Commit: [887bea7][R4.3-Commit-887bea7]) Update changelog.md file.
  - (Commit: [99cce5f][R4.3-Commit-99cce5f]) #[2460833][R4.3-Issue-2460833] - _ drupal_session_destroy() should return boolean
  - (Commit: [d784bb2][R4.3-Commit-d784bb2]) Fixed WetKit Bootstrap for Missing container_class in maintenance pages.
  - (Commit: [e867374][R4.3-Commit-e867374]) Update changelog.md file.
  - (Commit: [4e03add][R4.3-Commit-4e03add]) Fixed WetKit Deployment for #[2655888][R4.3-Issue-2655888] - Fix version contraint for deploy
  - (Commit: [21cc956][R4.3-Commit-21cc956]) Fixed WetKit Metatag for #[2615858][R4.3-Issue-2615858] - Patch metatag for 1.7 release caused metatag translation deletions.
  - (Commit: [95e303d][R4.3-Commit-95e303d]) Fixed WetKit Metatag for Minor correction to text.
  - (Commit: [4d25f0b][R4.3-Commit-4d25f0b]) Remove Schema correction resolved directly in Workbench Moderation.
  - (Commit: [067bf46][R4.3-Commit-067bf46]) Start work for next release.

## v4.2

Security Update(s):

  - Field Group

Performance Update(s)

  - title_field_replacement_info calls entity_get_info twice
  - Bootstrap (3.4) theme registry improvements
  - PHP7 is now officially supported

Features:

  - Bootstrap has been updated to v3.4
  - Support for container-fluid across panels and regular pages
  - Deploy improvements + integration with Deploy Plus
  - jQuery Update is now using v1.10
  - Sidebar menu option chevrons support
  - Field Collection updated to latest official with updated Entity Translation patch
  - Workbench Moderation updated to latest official with added Behat tests
  - PHP7 code style fixes to CTools + Field Group + Views (constructor + uniform var syntax)
  - WxT jQuery Framework updated to v4.0.20
  - Simpletest fixes to allow for tests to be run in install profile
  - Additional UI refinements for common admin pages
  - Menu block CTools plugin for blockreference (Provides additional menu workflow)

Fixes:
  - (Commit: [e417990][R4.2-Commit-e417990]) Fixed WetKit Theme for Update default settings for wetkit_bootstrap + sub themes.
  - (Commit: [8e41fa4][R4.2-Commit-8e41fa4]) Fixed WetKit Theme for Update default settings for wetkit_bootstrap + sub themes.
  - (Commit: [c8311ba][R4.2-Commit-c8311ba]) Fixed WetKit Theme for Update default settings for wetkit_bootstrap + sub themes.
  - (Commit: [1396b13][R4.2-Commit-1396b13]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [066e333][R4.2-Commit-066e333]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [08c13dd][R4.2-Commit-08c13dd]) Fixed WetKit Theme for Update default settings for wetkit_bootstrap + sub themes.
  - (Commit: [fe92e2a][R4.2-Commit-fe92e2a]) Fixed WetKit Core for Resolve temporary errors in workbench moderation run before data model change in hook_update_n().
  - (Commit: [256279a][R4.2-Commit-256279a]) Fixed WetKit Deployment for #[2638916][R4.2-Issue-2638916] - Align deployment interface with Deploy Plus
  - (Commit: [e19aa2f][R4.2-Commit-e19aa2f]) Fixed WetKit Core for #[2635876][R4.2-Issue-2635876] - PHP7 - Uniform Variable Syntax updates are causing exported pages to not have names
  - (Commit: [d28928f][R4.2-Commit-d28928f]) Update changelog.md file.
  - (Commit: [ce2cab7][R4.2-Commit-ce2cab7]) Fixed WetKit Core for Patch for link field type + language prefix + relative links.
  - (Commit: [37ccf89][R4.2-Commit-37ccf89]) Fixed WetKit Theme for Pointing to incorrect module admin form in wetkit_emberx.
  - (Commit: [c66c7a7][R4.2-Commit-c66c7a7]) Fixed WetKit Bean for Set better defaults for media + slide image styles.
  - (Commit: [2c02bfd][R4.2-Commit-2c02bfd]) Fixed WetKit Theme for Disable popover by default.
  - (Commit: [8b92a01][R4.2-Commit-8b92a01]) Fixed WetKit Migration for Fix for missing taxonomy item.
  - (Commit: [edf00f7][R4.2-Commit-edf00f7]) Fixed WetKit Bean for Update wetkit_bean export and remove default image style highlighted.
  - (Commit: [5ac7039][R4.2-Commit-5ac7039]) Fixed WetKit Core for Update link module from 1.3 to 1.4.
  - (Commit: [86c4326][R4.2-Commit-86c4326]) Fixed WetKit Core for #[1344672][R4.2-Issue-1344672] - Field translation (entity_translation) support
  - (Commit: [48a8ea0][R4.2-Commit-48a8ea0]) Update changelog.md file.
  - (Commit: [ccbe539][R4.2-Commit-ccbe539]) Fixed WetKit Metatag for #[2615858][R4.2-Issue-2615858] - Metatag 1.7 release caused metatag translation deletions.
  - (Commit: [45f742e][R4.2-Commit-45f742e]) Fixed WetKit Bootstrap for Adjust padding-left for .input-group-addon .icon
  - (Commit: [9c0cfde][R4.2-Commit-9c0cfde]) Update changelog.md file.
  - (Commit: [a0c6855][R4.2-Commit-a0c6855]) Fixed WetKit Bootstrap for #[2649916][R4.2-Issue-2649916] - Support for Container-Fluid
  - (Commit: [a2870c3][R4.2-Commit-a2870c3]) Fixed WetKit Panel Layouts for #[2649916][R4.2-Issue-2649916] - Support for Container-Fluid
  - (Commit: [c7d5fae][R4.2-Commit-c7d5fae]) Update changelog.md file.
  - (Commit: [4ac3c4e][R4.2-Commit-4ac3c4e]) Fixed WetKit Test for Update Behat tests for Wysiwyg to align with linkit updates.
  - (Commit: [8eafea2][R4.2-Commit-8eafea2]) Fixed WetKit Core for PHP Uniform Variable Syntax for Field Group + PHP7.
  - (Commit: [45d8a9c][R4.2-Commit-45d8a9c]) Fixed WetKit Core for Field Group DRUPAL-SA-CONTRIB-2016-001.
  - (Commit: [9dd28ec][R4.2-Commit-9dd28ec]) Fixed WetKit WYSIWYG for Update linkit to the latest official version 3.5.
  - (Commit: [15a5529][R4.2-Commit-15a5529]) Fixed WetKit Breadcrumbs for #[2614240][R4.2-Issue-2614240] - Remove "Bootstrap 3 compatibility"
  - (Commit: [cbda96a][R4.2-Commit-cbda96a]) Update TravisCI Drush runner to 8.0.2.
  - (Commit: [90a8a25][R4.2-Commit-90a8a25]) Drush versions + make put themes into modules folder (drush #1781).
  - (Commit: [8f497d6][R4.2-Commit-8f497d6]) Fixed WetKit Test for Update Drupal Extension for Behat.
  - (Commit: [7ccf29f][R4.2-Commit-7ccf29f]) Fixed WetKit Test for Update Drupal Extension for Behat.
  - (Commit: [6b61c96][R4.2-Commit-6b61c96]) Increment tests by version to support PHP7
  - (Commit: [493dbf0][R4.2-Commit-493dbf0]) Increment tests by version to support PHP7
  - (Commit: [5e5f7a8][R4.2-Commit-5e5f7a8]) Fixed WetKit Core for #[2635876][R4.2-Issue-2635876] - PHP7 - Uniform Variable Syntax + exported pages
  - (Commit: [1801de0][R4.2-Commit-1801de0]) Update changelog.md file.
  - (Commit: [b91f450][R4.2-Commit-b91f450]) Patch for install profiles + simpletests not detecting modules.
  - (Commit: [437b954][R4.2-Commit-437b954]) Fixed WetKit Language for #[2647048][R4.2-Issue-2647048] - make it possible to disable l10n_client
  - (Commit: [ac026a2][R4.2-Commit-ac026a2]) Fixed WetKit Bootstrap for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [b4cb261][R4.2-Commit-b4cb261]) Fixed WetKit Bootstrap for Add contextual links region for path breadcrumbs to breadcrumb region.
  - (Commit: [c66ae44][R4.2-Commit-c66ae44]) Fixed WetKit Bootstrap for Adjust admin-index to be split as per drupal default.
  - (Commit: [6c116a5][R4.2-Commit-6c116a5]) Fixed WetKit Bootstrap for Adjust admin-page to be split as per drupal default.
  - (Commit: [263f808][R4.2-Commit-263f808]) Fixed WetKit Core for Add descriptions to dashboard + help in admin screen.
  - (Commit: [9d5f614][R4.2-Commit-9d5f614]) Fixed WetKit Admin for Add description to hook_menu for caches.
  - (Commit: [2686959][R4.2-Commit-2686959]) Fixed WetKit Admin for Remove escape_admin disabled and uninstalled in earlier release.
  - (Commit: [ed53dc1][R4.2-Commit-ed53dc1]) Fixed WetKit Bootstrap for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [a321812][R4.2-Commit-a321812]) Fixed WetKit Migration for Remove data specifics for migrated content.
  - (Commit: [4a5b1cc][R4.2-Commit-4a5b1cc]) Fixed WetKit Deployment for Use wetkit_deployment_source form_alter().
  - (Commit: [5463abd][R4.2-Commit-5463abd]) Fixed WetKit Core for #[2644630][R4.2-Issue-2644630] - Menu Block + Block Reference Integration
  - (Commit: [cc4db9d][R4.2-Commit-cc4db9d]) Fixed WetKit Bootstrap for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [debd83e][R4.2-Commit-debd83e]) Fixed WetKit Bootstrap for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [62944cf][R4.2-Commit-62944cf]) Fixed WetKit Test for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [3cd83d9][R4.2-Commit-3cd83d9]) Fixed WetKit Theme for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [f171aaa][R4.2-Commit-f171aaa]) Fixed WetKit Bootstrap for Minor string update for Theme.
  - (Commit: [076fe3a][R4.2-Commit-076fe3a]) Fixed WetKit Breadcrumbs for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [236e61b][R4.2-Commit-236e61b]) Fixed WetKit Test for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [951187a][R4.2-Commit-951187a]) Fixed WetKit Bootstrap for #[2556733][R4.2-Issue-2556733] - Update to latest bootstrap 7.x-3.4
  - (Commit: [ab4e0a4][R4.2-Commit-ab4e0a4]) Fixed WetKit Test for (behat) Expand tags for @standard_login.
  - (Commit: [21b17f6][R4.2-Commit-21b17f6]) Updates to changelog.md file.
  - (Commit: [2ac4938][R4.2-Commit-2ac4938]) Fixed WetKit WET-BOEW for #[2628456][R4.2-Issue-2628456] - WET-BOEW v4.0.20 Release
  - (Commit: [14d379e][R4.2-Commit-14d379e]) Fixed WetKit Core for #[2635072][R4.2-Issue-2635072] - wetkit_media related to upgrading to jQuery 1.10
  - (Commit: [77ea0ad][R4.2-Commit-77ea0ad]) Fixed WetKit Theme for #[2635072][R4.2-Issue-2635072] - wetkit_media related to upgrading to jQuery 1.10
  - (Commit: [24e3f8f][R4.2-Commit-24e3f8f]) Fixed WetKit Core for Minor code cleanup and update of features export.
  - (Commit: [3f0f460][R4.2-Commit-3f0f460]) Fixed WetKit Deployment for #[2638916][R4.2-Issue-2638916] - Align deployment interface with Deploy Plus
  - (Commit: [5968c7b][R4.2-Commit-5968c7b]) Fixed WetKit Deployment for #[2638916][R4.2-Issue-2638916] - Align deployment interface with Deploy Plus
  - (Commit: [2be065b][R4.2-Commit-2be065b]) Fixed WetKit Deployment for #[2638916][R4.2-Issue-2638916] - Align deployment interface with Deploy Plus
  - (Commit: [e497898][R4.2-Commit-e497898]) Fixed WetKit Deployment for #[2638916][R4.2-Issue-2638916] - Align deployment interface with Deploy Plus
  - (Commit: [7485743][R4.2-Commit-7485743]) Fixed WetKit Core for #[2635072][R4.2-Issue-2635072] - wetkit_media related to upgrading to jQuery 1.10
  - (Commit: [351fb22][R4.2-Commit-351fb22]) Fixed WetKit Core for #[2638868][R4.2-Issue-2638868] - panels mini_panel notices on deploy
  - (Commit: [da0347e][R4.2-Commit-da0347e]) Fixed WetKit Core for Views Bulk Operations and multiple views on same page.
  - (Commit: [ac632d0][R4.2-Commit-ac632d0]) Remove deprecated link.
  - (Commit: [4911597][R4.2-Commit-4911597]) Fixed WetKit Deployment for #[2638446][R4.2-Issue-2638446] - Update deploy module to beta release
  - (Commit: [9e5b831][R4.2-Commit-9e5b831]) Fixed WetKit Deployment for #[2626830][R4.2-Issue-2626830] - Allow editor role to use deployment dashboard
  - (Commit: [69fc91d][R4.2-Commit-69fc91d]) Update changelog.md file.
  - (Commit: [abacd8d][R4.2-Commit-abacd8d]) Fixed WetKit Search for Update custom search to version 1.20.
  - (Commit: [ee083e6][R4.2-Commit-ee083e6]) Fixed WetKit Images for Update breakpoints module to version 1.4.
  - (Commit: [b4ae197][R4.2-Commit-b4ae197]) Fixed WetKit WYSIWYG for #[2637340][R4.2-Issue-2637340] - Wysiwyg CKEditor plugin interferes with  some void element tags
  - (Commit: [9773ceb][R4.2-Commit-9773ceb]) Fixed WetKit Core for #[2637324][R4.2-Issue-2637324] - Add patch to uuid_features for taxonomy terms in a feature that doesn't contain the vocabulary
  - (Commit: [20a3722][R4.2-Commit-20a3722]) Fixed WetKit Core for Update hierarchical select from 3.0-beta2 to 3.0-beta3
  - (Commit: [b86e765][R4.2-Commit-b86e765]) Fixed WetKit Language for #[2627812][R4.2-Issue-2627812] - Undefined index: nid in webform_localization_preprocess_webform_components_form()
  - (Commit: [25201b0][R4.2-Commit-25201b0]) Fixed WetKit Language for #[2627812][R4.2-Issue-2627812] - Undefined index: nid in webform_localization_preprocess_webform_components_form()
  - (Commit: [5732c55][R4.2-Commit-5732c55]) Fixed WetKit Panel Layouts for #[2635054][R4.2-Issue-2635054] - No "Greene" opposite Layout
  - (Commit: [440a253][R4.2-Commit-440a253]) Fixed WetKit Core for #[2631348][R4.2-Issue-2631348] - views view save performance clear only related cache
  - (Commit: [a076436][R4.2-Commit-a076436]) Fixed WetKit Deployment for Fix for Taxonomy deploy doesn't need language specific endpoint.
  - (Commit: [e948ed3][R4.2-Commit-e948ed3]) Fixed WetKit Widgets for #[2635106][R4.2-Issue-2635106] - media bean file display in media browser
  - (Commit: [50d715c][R4.2-Commit-50d715c]) Fixed WetKit Widgets for #[2635106][R4.2-Issue-2635106] - media bean file display in media browser
  - (Commit: [3a1f7af][R4.2-Commit-3a1f7af]) Fixed WetKit Deployment for #[2634328][R4.2-Issue-2634328] - Updates to Field Collection module + UUID / Deploy
  - (Commit: [d28e869][R4.2-Commit-d28e869]) Fixed WetKit Core for #[2634328][R4.2-Issue-2634328] - Updates to Field Collection module + UUID / Deploy
  - (Commit: [2f6e226][R4.2-Commit-2f6e226]) Fixed WetKit Deployment for Missing filed_share_content for wetkit_video on source + dest sites.
  - (Commit: [e22cd6b][R4.2-Commit-e22cd6b]) Fixed WetKit Admin for Update navbar module to latest official.
  - (Commit: [cd74a9a][R4.2-Commit-cd74a9a]) Fixed WetKit Core for Update fences module to latest stable.
  - (Commit: [f61a48f][R4.2-Commit-f61a48f]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [6ffda5c][R4.2-Commit-6ffda5c]) Fixed WetKit Deployment for #[2630538][R4.2-Issue-2630538] - wetkit_deployment_source sort bean content by changed date
  - (Commit: [5cc787f][R4.2-Commit-5cc787f]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [47696c6][R4.2-Commit-47696c6]) Fixed WetKit Bootstrap for Remove file handled in base bootstrap theme.
  - (Commit: [73ac8bd][R4.2-Commit-73ac8bd]) Fixed WetKit Core for Move panelizer patch from workbench_moderation to panels itself.
  - (Commit: [bac7c98][R4.2-Commit-bac7c98]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [1d8e887][R4.2-Commit-1d8e887]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [9641160][R4.2-Commit-9641160]) Fixed WetKit Test for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [33179df][R4.2-Commit-33179df]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [98c354b][R4.2-Commit-98c354b]) Fixed WetKit Test for Move test from chrome to firefox.
  - (Commit: [f87a31d][R4.2-Commit-f87a31d]) Remove patch for ignore frontend directories till stabilizes.
  - (Commit: [f005858][R4.2-Commit-f005858]) Fixed WetKit Test for Update Behat tests for Workbench Moderation improvements.
  - (Commit: [ee28025][R4.2-Commit-ee28025]) Fixed WetKit Test for Update test for Draft creation.
  - (Commit: [6e47c3e][R4.2-Commit-6e47c3e]) Fixed WetKit Test for Update test for Draft creation.
  - (Commit: [21fa3c8][R4.2-Commit-21fa3c8]) Fixed WetKit Core for #[2633456][R4.2-Issue-2633456] - Workbench Moderation bring back to stable
  - (Commit: [7900382][R4.2-Commit-7900382]) Fixed WetKit Core for Updates to Workbench Moderation.
  - (Commit: [f0cee56][R4.2-Commit-f0cee56]) Fixed WetKit Bean for #[2632736][R4.2-Issue-2632736] - media bean Media span 10 and 12 (100% width) are missing
  - (Commit: [c14d4b7][R4.2-Commit-c14d4b7]) Fixed WetKit Bootstrap for Resolve W3C error div inside of span.
  - (Commit: [8eae1cc][R4.2-Commit-8eae1cc]) Fixed WetKit Bootstrap for Resolve W3C error div inside of span.
  - (Commit: [4ea1302][R4.2-Commit-4ea1302]) Fixed WetKit Bootstrap for W3C validation duplicate charset fix.
  - (Commit: [5f32c7b][R4.2-Commit-5f32c7b]) Fixed WetKit Deployment for #[2630504][R4.2-Issue-2630504] - Support for entity_menu_links faux unpublish (hidden)
  - (Commit: [e262d50][R4.2-Commit-e262d50]) Fixed WetKit Deployment for #[2629996][R4.2-Issue-2629996] - Deploy + Queue Run not appearing in Drush
  - (Commit: [b734ff6][R4.2-Commit-b734ff6]) Update changelog.md file.
  - (Commit: [8d1274a][R4.2-Commit-8d1274a]) Fixed WetKit Bootstrap for #[2628538][R4.2-Issue-2628538] - Missing theme_file_file_link function in 4.x? field_document_name
  - (Commit: [7fee403][R4.2-Commit-7fee403]) Fixed WetKit Widgets for #[2628538][R4.2-Issue-2628538] - Missing theme_file_file_link function in 4.x? field_document_name
  - (Commit: [ecb55b2][R4.2-Commit-ecb55b2]) Fixed WetKit Deployment for #[2629958][R4.2-Issue-2629958] - Better handling of deployment failures
  - (Commit: [c0e41b6][R4.2-Commit-c0e41b6]) Fixed WetKit Language for #[2629092][R4.2-Issue-2629092] - title_field_replacement_info calls entity_get_info twice
  - (Commit: [ec8e3a9][R4.2-Commit-ec8e3a9]) Fixed WetKit Bean for #[2628698][R4.2-Issue-2628698] - Save Delete in English, Supprimmer Sauvegarder in french
  - (Commit: [d30a0e9][R4.2-Commit-d30a0e9]) Fixed WetKit Core for #[2557061][R4.2-Issue-2557061] - deprecated constructor in PHP 7
  - (Commit: [646f637][R4.2-Commit-646f637]) Fixed WetKit Core for #[2528736][R4.2-Issue-2528736] - Deprecating PHP4 style constructors
  - (Commit: [92baa52][R4.2-Commit-92baa52]) Test Distro against PHP 7.0.
  - (Commit: [2c6800f][R4.2-Commit-2c6800f]) Fixed WetKit Test for Ensure Selenium doesn't factor mobile menu "Add new pane".
  - (Commit: [f80d45a][R4.2-Commit-f80d45a]) Fixed WetKit Bootstrap for Fix aspects of Panel Panes being injected in mobile menu with updated wet-boew/menu.js logic.
  - (Commit: [6d39701][R4.2-Commit-6d39701]) Fixed WetKit WET-BOEW for #[2628456][R4.2-Issue-2628456] - WET-BOEW v4.0.19 Release
  - (Commit: [5b9927c][R4.2-Commit-5b9927c]) Fixed WetKit Bootstrap for #[2628394][R4.2-Issue-2628394] - noscript handling changed since move to wet-boew cdn repositories
  - (Commit: [6dcf312][R4.2-Commit-6dcf312]) Fixed WetKit WET-BOEW for #[2628394][R4.2-Issue-2628394] - noscript handling changed since move to wet-boew cdn repositories
  - (Commit: [70b3c10][R4.2-Commit-70b3c10]) Fixed WetKit Bootstrap for #[2628370][R4.2-Issue-2628370] - Overly broad p:last-child override?
  - (Commit: [3b7a137][R4.2-Commit-3b7a137]) Fixed WetKit Core for #[2628380][R4.2-Issue-2628380] - Hierarchical Select: Untranslated root level terms
  - (Commit: [52b7a22][R4.2-Commit-52b7a22]) Update changelog.md file.
  - (Commit: [c7278b1][R4.2-Commit-c7278b1]) Fixed WetKit Language for #[2628254][R4.2-Issue-2628254] - RTBC "$.browser is undefined" for jQuery >= 1.9
  - (Commit: [84a7a9b][R4.2-Commit-84a7a9b]) Fixed WetKit Deployment for #[2628240][R4.2-Issue-2628240] - Syndicated to: site doesn't take into account current language
  - (Commit: [041b225][R4.2-Commit-041b225]) Update changelog.md file.
  - (Commit: [35b720c][R4.2-Commit-35b720c]) Fixed WetKit Search for Update apachesolr legacy suite of modules.
  - (Commit: [16a7f29][R4.2-Commit-16a7f29]) Fixed WetKit Language for #[2627812][R4.2-Issue-2627812] - Undefined index: nid in webform_localization_preprocess_webform_components_form()
  - (Commit: [dbc7c7c][R4.2-Commit-dbc7c7c]) Fixed WetKit Ember for Remove error messages till #2062365 resolved.
  - (Commit: [be2f1f5][R4.2-Commit-be2f1f5]) Update changelog.md file.
  - (Commit: [fbaec3d][R4.2-Commit-fbaec3d]) Fixed WetKit Core for Update panopoly_magic to 1.29 version.
  - (Commit: [b2b9f20][R4.2-Commit-b2b9f20]) Fixed WetKit Deployment for Update environment indicator to version 2.8.
  - (Commit: [2b3de32][R4.2-Commit-2b3de32]) Fixed WetKit Deployment for #[2627756][R4.2-Issue-2627756] - Update Entity Menu Links
  - (Commit: [3f717fc][R4.2-Commit-3f717fc]) Fixed WetKit Admin for #[2617966][R4.2-Issue-2617966] - media bean example mp4 and example caption
  - (Commit: [2e0ce16][R4.2-Commit-2e0ce16]) Fixed WetKit Bootstrap for #[2627614][R4.2-Issue-2627614] - Canada FIP not showing up in mobile
  - (Commit: [c0afa16][R4.2-Commit-c0afa16]) Fixed WetKit Panel Layouts for #[2627392][R4.2-Issue-2627392] - wetkit_layouts polley tpl missing container class
  - (Commit: [3d16cfc][R4.2-Commit-3d16cfc]) Fixed WetKit Deployment for #[2626830][R4.2-Issue-2626830] - Allow editor role to use deployment dashboard
  - (Commit: [f361675][R4.2-Commit-f361675]) Add slack integration.
  - (Commit: [4a69a39][R4.2-Commit-4a69a39]) Fixed WetKit Bean for #[2623858][R4.2-Issue-2623858] - Destination error EntityMalformedException when deploying a newly created bean from source
  - (Commit: [2950069][R4.2-Commit-2950069]) Adjust slack notifications.
  - (Commit: [12af774][R4.2-Commit-12af774]) Fixed WetKit Test for Refactor metatag tests.
  - (Commit: [2dfa74a][R4.2-Commit-2dfa74a]) Add slack notifications.
  - (Commit: [db4b89f][R4.2-Commit-db4b89f]) Fixed WetKit Panel Layouts for #[2625780][R4.2-Issue-2625780] - Pearson layout missing row in Bottom element
  - (Commit: [b271cb1][R4.2-Commit-b271cb1]) Fixed WetKit Ember for #[2625316][R4.2-Issue-2625316] - File Entity edit screen from CKEditor missing title
  - (Commit: [7b8a9fa][R4.2-Commit-7b8a9fa]) Fixed WetKit Bootstrap for Tidy up entranslation translation field in modal window.
  - (Commit: [5d33257][R4.2-Commit-5d33257]) Fixed WetKit Widgets for #[2625308][R4.2-Issue-2625308] - menu_translate errors on file structure types screen
  - (Commit: [fbfcada][R4.2-Commit-fbfcada]) Fixed WetKit Bootstrap for #[2624520][R4.2-Issue-2624520] - Bean WYSIWYG internal uuid links for images/media/file
  - (Commit: [30f90f6][R4.2-Commit-30f90f6]) Fixed WetKit Theme for #[2624456][R4.2-Issue-2624456] - Make chevrons configurable from Sidebar
  - (Commit: [3178307][R4.2-Commit-3178307]) Fixed WetKit Menu for #[2624456][R4.2-Issue-2624456] - Make chevrons configurable from Sidebar
  - (Commit: [e042e47][R4.2-Commit-e042e47]) Fixed WetKit Bootstrap for #[2624456][R4.2-Issue-2624456] - Make chevrons configurable from Sidebar
  - (Commit: [dd46bc2][R4.2-Commit-dd46bc2]) Start work on next release.

## v4.1

Security Update(s):

  - Drupal Core

Performance Update(s)

  - Add static cache to module_load_include

Features:

  - Improved webform translations
  - Updated wb share widget with latest filters
  - Sidebar menu now supports up to 4 levels

Fixes:

  - (Commit: [725b2c2][R4.1-Commit-725b2c2]) Fixed WetKit Deployment for #[2622202][R4.1-Issue-2622202] - wetkit_deployment entity_menu_links PDOException for sqlsrv
  - (Commit: [263058e][R4.1-Commit-263058e]) Fixed WetKit Deployment for #[2621604][R4.1-Issue-2621604] - admin/dashboard/deployment redirects to home page instead of itself
  - (Commit: [77ac467][R4.1-Commit-77ac467]) Fixed WetKit Core for #[2619078][R4.1-Issue-2619078] - Tokens: Dropdown arrow for Replacement Patterns not working correctly
  - (Commit: [5759ff7][R4.1-Commit-5759ff7]) Fixed WetKit Bootstrap for Correct label.
  - (Commit: [4bd25db][R4.1-Commit-4bd25db]) Fixed WetKit Bootstrap for #[2622216][R4.1-Issue-2622216] - Webforms Inline Label not working ( with CSS fix )
  - (Commit: [779dd53][R4.1-Commit-779dd53]) Fixed WetKit Core for #[2619268][R4.1-Issue-2619268] - Patch for Views-based search
  - (Commit: [b2dcea0][R4.1-Commit-b2dcea0]) Fixed WetKit Bootstrap for Override some deploy module css adjustments to deploy layout.
  - (Commit: [e119bc9][R4.1-Commit-e119bc9]) Fixed WetKit Deployment for #[2621604][R4.1-Issue-2621604] - admin/dashboard/deployment redirects to home page instead of it'self
  - (Commit: [558fae8][R4.1-Commit-558fae8]) #[2617576][R4.1-Issue-2617576] - Strong tag HTML showing when deleting node
  - (Commit: [f871102][R4.1-Commit-f871102]) Fixed WetKit Deployment for #[2434461][R4.1-Issue-2434461] - bean workflow (published-deploy, unpublished-nodeploy)
  - (Commit: [05fb6a6][R4.1-Commit-05fb6a6]) Fixed WetKit Bean for Undefined index wetkit_bean_link $settings.
  - (Commit: [8faaf9b][R4.1-Commit-8faaf9b]) Fixed WetKit Webform for #[2617408][R4.1-Issue-2617408] - Update webform to 4.12 version
  - (Commit: [de7f6d8][R4.1-Commit-de7f6d8]) Fixed WetKit Widgets for #[2357309][R4.1-Issue-2357309] - JS error when pasting HTML code into a WYSIWYG textarea
  - (Commit: [696a311][R4.1-Commit-696a311]) Addition of wetkit_webform module.
  - (Commit: [7a54af8][R4.1-Commit-7a54af8]) Fixed WetKit Menu for #[2485817][R4.1-Issue-2485817] - sidebar menu 4 levels deep in 4.x
  - (Commit: [c7e13ce][R4.1-Commit-c7e13ce]) Update changelog.md file.
  - (Commit: [05aa4d8][R4.1-Commit-05aa4d8]) Fixed WetKit Bean for Add none to share widget grid columns.
  - (Commit: [f393fbd][R4.1-Commit-f393fbd]) Fixed WetKit Menu for #[2485817][R4.1-Issue-2485817] - sidebar menu 4 levels deep in 4.x
  - (Commit: [a68fce4][R4.1-Commit-a68fce4]) Fixed WetKit Core for Patch for fontawesome favoring status report messaging.
  - (Commit: [78b396d][R4.1-Commit-78b396d]) Fixed WetKit Deployment for Remove duplicate services module.
  - (Commit: [2e94132][R4.1-Commit-2e94132]) Fixed WetKit Menu for #[2485817][R4.1-Issue-2485817] - sidebar menu 4 levels deep in 4.x
  - (Commit: [72e0097][R4.1-Commit-72e0097]) Fixed WetKit Metatag for #[2615858][R4.1-Issue-2615858] - Patch metatag for 1.7 release caused metatag translation deletions.
  - (Commit: [553a860][R4.1-Commit-553a860]) Update patch for user password reset.
  - (Commit: [1ecf9ae][R4.1-Commit-1ecf9ae]) #[2594333][R4.1-Issue-2594333] - D7.41 released
  - (Commit: [b5aeecb][R4.1-Commit-b5aeecb]) Fixed WetKit Core for Remove fontawesome patch.
  - (Commit: [85d2dee][R4.1-Commit-85d2dee]) Fixed WetKit Core for Update fontawesome to 2.5 version.
  - (Commit: [a7cf1cb][R4.1-Commit-a7cf1cb]) Fixed WetKit Admin for Update jquery update to 2.7 version.
  - (Commit: [25581dc][R4.1-Commit-25581dc]) Fixed WetKit Core for Update panopoly_magic to 1.28 version.
  - (Commit: [f41a01a][R4.1-Commit-f41a01a]) Fixed WetKit Core for Update views module to 3.13 version.
  - (Commit: [12c6eb7][R4.1-Commit-12c6eb7]) #[2590817][R4.1-Issue-2590817] - wetkit Add static cache to module_load_include
  - (Commit: [002a0b2][R4.1-Commit-002a0b2]) Fixed WetKit Images for #[2590491][R4.1-Issue-2590491] - wetkit_core defaultconfig, pathauto, picture, uuid releases
  - (Commit: [aa0ffe2][R4.1-Commit-aa0ffe2]) Fixed WetKit Test for Update share widget field test.
  - (Commit: [e343da6][R4.1-Commit-e343da6]) Fixed WetKit Pages for Update features export.
  - (Commit: [f825cd4][R4.1-Commit-f825cd4]) Fixed WetKit Core for Fix bad version.
  - (Commit: [227d548][R4.1-Commit-227d548]) Fixed WetKit Language for Fix bad version.
  - (Commit: [96cc861][R4.1-Commit-96cc861]) Fixed WetKit Core for #[2590491][R4.1-Issue-2590491] - wetkit_core defaultconfig, pathauto, picture, uuid releases
  - (Commit: [f12cd58][R4.1-Commit-f12cd58]) Fixed WetKit Core for #[2590491][R4.1-Issue-2590491] - wetkit_core defaultconfig, pathauto, picture, uuid releases
  - (Commit: [eadc9de][R4.1-Commit-eadc9de]) Fixed WetKit Core for #[2590491][R4.1-Issue-2590491] - wetkit_core defaultconfig, pathauto, picture, uuid releases
  - (Commit: [f0da4c8][R4.1-Commit-f0da4c8]) Fixed WetKit Core for #[2606628][R4.1-Issue-2606628] - wetkit_core Features version 7.x-2.7 released
  - (Commit: [40d68b4][R4.1-Commit-40d68b4]) Fixed WetKit Language for #[2382607][R4.1-Issue-2382607] - Module to make webform translations easier
  - (Commit: [deded82][R4.1-Commit-deded82]) Fixed WetKit Core for #[2615018][R4.1-Issue-2615018] - wetkit_share4x share this NONE throws warnings
  - (Commit: [27df9aa][R4.1-Commit-27df9aa]) Fixed WetKit Bean for #[2615018][R4.1-Issue-2615018] - wetkit_share4x share this NONE throws warnings
  - (Commit: [efa71ea][R4.1-Commit-efa71ea]) Fixed WetKit Core for #[2604368][R4.1-Issue-2604368] - wetkit_core Fix incorrect hook name in libraries.api.php
  - (Commit: [481a330][R4.1-Commit-481a330]) Fixed WetKit Bootstrap for #[2610244][R4.1-Issue-2610244] - wet-boew.min.js not found.
  - (Commit: [af39a5b][R4.1-Commit-af39a5b]) Fixed WetKit Bootstrap for #[2585085][R4.1-Issue-2585085] - Multilingual variables + Bootstrap Theme Wizard
  - (Commit: [b379dfd][R4.1-Commit-b379dfd]) Fixed WetKit Panel Layouts for #[2610234][R4.1-Issue-2610234] - mccrae layout missing css
  - (Commit: [78253a7][R4.1-Commit-78253a7]) Start work on next release.

## v4.0

Security Update(s):

  - Password Policy

Performance Update(s)

  - Improved parsing of .info files
  - Improved registry build performance further
  - Updated Travis tests to container based infrastructure
  - Updated Travis tests to run against php 5.4 -> 5.6

Features:

  - Convert to upstream wet-boew cdn format for smaller library sizes (important)
  - Proper nolink support for all custom menu block configurations
  - Official release

Fixes:
  - (Commit: [63a66ed][R4.0-Commit-63a66ed]) Fixed WetKit Ember for #[2576461][R4.0-Issue-2576461] - Ember logic causing issues with views multiple fields
  - (Commit: [69271e7][R4.0-Commit-69271e7]) Fixed WetKit Bootstrap for #[2556745][R4.0-Issue-2556745] - Chrome/IE throw JavaScript exception on wetkit slideshow since rc2
  - (Commit: [5aaeabb][R4.0-Commit-5aaeabb]) #[2573945][R4.0-Issue-2573945] - D7 core -Speed up drupal_parse_info_format() 3x and reduce memory 95%
  - (Commit: [bbf9cdc][R4.0-Commit-bbf9cdc]) Fixed WetKit Core for #[2574027][R4.0-Issue-2574027] - webforms release 4.11
  - (Commit: [48449d3][R4.0-Commit-48449d3]) #[2339447][R4.0-Issue-2339447] - Improve theme registry build performance by 85%
  - (Commit: [6fe88f9][R4.0-Commit-6fe88f9]) Fixed WetKit Bootstrap for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [e8658ee][R4.0-Commit-e8658ee]) Fixed WetKit Core for Remove Quail since Accessibility module reviewed.
  - (Commit: [c4b2409][R4.0-Commit-c4b2409]) Fixed WetKit Theme for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [d54873a][R4.0-Commit-d54873a]) Fixed WetKit Bootstrap for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [a72e325][R4.0-Commit-a72e325]) Fixed WetKit Migration for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [bda15d7][R4.0-Commit-bda15d7]) Fixed WetKit Bootstrap for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [b3ba849][R4.0-Commit-b3ba849]) Fixed WetKit Test for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [70fcf54][R4.0-Commit-70fcf54]) Fixed WetKit WET-BOEW for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [a4bc93e][R4.0-Commit-a4bc93e]) Fixed WetKit Test for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [ca52b4d][R4.0-Commit-ca52b4d]) Fixed WetKit Bootstrap for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [924e38b][R4.0-Commit-924e38b]) Fixed WetKit WYSIWYG for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [6aa07b4][R4.0-Commit-6aa07b4]) Fixed WetKit WET-BOEW for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [02e9a54][R4.0-Commit-02e9a54]) Fixed WetKit Menu for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [71eb62e][R4.0-Commit-71eb62e]) Fixed WetKit Breadcrumbs for #[2570419][R4.0-Issue-2570419] - Changes in WxT upstream packaging
  - (Commit: [4552c97][R4.0-Commit-4552c97]) Fixed WetKit Bootstrap for #[2569025][R4.0-Issue-2569025] - Pagination last-child span is misaligned
  - (Commit: [2d81cd8][R4.0-Commit-2d81cd8]) Fixed WetKit Bootstrap for Clean up Bean admin overview display.
  - (Commit: [6ac9910][R4.0-Commit-6ac9910]) Fixed WetKit Test for Test Panels Preview for View Panes functionality.
  - (Commit: [06b368b][R4.0-Commit-06b368b]) Fixed WetKit Bootstrap for #[2567879][R4.0-Issue-2567879] - Update Navbar to 1.6 version
  - (Commit: [f4a45c1][R4.0-Commit-f4a45c1]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [7be7109][R4.0-Commit-7be7109]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [433268f][R4.0-Commit-433268f]) Fixed WetKit Admin for #[2567879][R4.0-Issue-2567879] - Update Navbar to 1.6 version
  - (Commit: [f789153][R4.0-Commit-f789153]) Fixed WetKit Core for #[2567875][R4.0-Issue-2567875] - Support Menu Block Title Embed + Theme Overrides
  - (Commit: [007b8f6][R4.0-Commit-007b8f6]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [2eec764][R4.0-Commit-2eec764]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [b924771][R4.0-Commit-b924771]) Fixed WetKit Core for Update fontawesome to latest stable release.
  - (Commit: [404b134][R4.0-Commit-404b134]) Fixed WetKit Core for Update fontawesome to latest stable release.
  - (Commit: [a03f686][R4.0-Commit-a03f686]) Fixed WetKit WYSIWYG for Update Linkit to 3.4 release.
  - (Commit: [6138a92][R4.0-Commit-6138a92]) Fixed WetKit Metatag for #[2560649][R4.0-Issue-2560649] - Translate meta tags after tokens are replaced
  - (Commit: [df13772][R4.0-Commit-df13772]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [cdcb1e7][R4.0-Commit-cdcb1e7]) Fixed WetKit Test for Debug why Travis is failing.
  - (Commit: [d9478cc][R4.0-Commit-d9478cc]) Fixed WetKit Test for Change password to align with Password Policy update.
  - (Commit: [5077e02][R4.0-Commit-5077e02]) Fixed WetKit Core for #[2566663][R4.0-Issue-2566663] - Point release for ICON API module
  - (Commit: [23676ea][R4.0-Commit-23676ea]) Fixed WetKit Images for Update Picture module.
  - (Commit: [0c42ca1][R4.0-Commit-0c42ca1]) Fixed WetKit Core for #[2566659][R4.0-Issue-2566659] - Point release for Password Policy
  - (Commit: [1e2393e][R4.0-Commit-1e2393e]) Fixed WetKit Core for #[2566657][R4.0-Issue-2566657] - Point release for Date module
  - (Commit: [8155b24][R4.0-Commit-8155b24]) Test multiple versions of PHP.
  - (Commit: [de67c6a][R4.0-Commit-de67c6a]) Update testing infra to align with DRUPAL_TI
  - (Commit: [5c95841][R4.0-Commit-5c95841]) Fixed WetKit Test for Update Behat from v1 to v3.
  - (Commit: [fc616ef][R4.0-Commit-fc616ef]) Fixed WetKit Test for Update Behat from v1 to v3.
  - (Commit: [2f5876c][R4.0-Commit-2f5876c]) Fixed WetKit Menu for #[2325495][R4.0-Issue-2325495] - Does <nolink> work for menu items?
  - (Commit: [26f1f2e][R4.0-Commit-26f1f2e]) Fixed WetKit Bootstrap for #[2325495][R4.0-Issue-2325495] - Does <nolink> work for menu items?
  - (Commit: [f5200cb][R4.0-Commit-f5200cb]) Fixed WetKit Metatag for #[2563779][R4.0-Issue-2563779] - Update metatag from 1.4 -> 1.7
  - (Commit: [10a7e17][R4.0-Commit-10a7e17]) Fixed WetKit WET-BOEW for Minor naming change to CTools Plugin.
  - (Commit: [e2e77b5][R4.0-Commit-e2e77b5]) Fixed WetKit Theme for Minor naming change to CTools Style.
  - (Commit: [c393d01][R4.0-Commit-c393d01]) Fixed WetKit Core for #[2528658][R4.0-Issue-2528658] - Removing deprecated Accessibility module
  - (Commit: [79ccde3][R4.0-Commit-79ccde3]) Fixed WetKit Metatag for #[2563779][R4.0-Issue-2563779] - Update metatag from 1.4 -> 1.7
  - (Commit: [edf4f50][R4.0-Commit-edf4f50]) Fixed WetKit Widgets for #[2537314][R4.0-Issue-2537314] - Media wysiwyg embed issue with apostrophe in title/alt attribute
  - (Commit: [b202d0f][R4.0-Commit-b202d0f]) Fixed WetKit Language for #[2563251][R4.0-Issue-2563251] - Allow for Language Switcher to use drupal_alter
  - (Commit: [e76160e][R4.0-Commit-e76160e]) Fixed WetKit Widgets for #[2537802][R4.0-Issue-2537802] - wetkit_widgets file_entity AND media upgrade
  - (Commit: [ba1fb3b][R4.0-Commit-ba1fb3b]) Fixed WetKit Deployment for #[2555451][R4.0-Issue-2555451] - Deploy dashboard show content always linked to ID 1
  - (Commit: [c963619][R4.0-Commit-c963619]) Fixed WetKit Images for #[2556759][R4.0-Issue-2556759] - Picture "Use of undefined constant "PICTURE_IMPLEMENTATION_PICTUREFILL"
  - (Commit: [31be88b][R4.0-Commit-31be88b]) Fixed WetKit Language for #[2557443][R4.0-Issue-2557443] - Edit Draft functionality broken in Entity Translation Beta4 due to static cache change
  - (Commit: [6f00347][R4.0-Commit-6f00347]) Fixed WetKit Test for Minor typo in basic page behat test.
  - (Commit: [69b5932][R4.0-Commit-69b5932]) Fixed WetKit Test for #[2557443][R4.0-Issue-2557443] - Edit Draft functionality broken in Entity Translation
  - (Commit: [2ae7cab][R4.0-Commit-2ae7cab]) Start work on next release.

## v4.0-RC3

Security Update(s):

  - Drupal Core
  - CTools

Fixes:
  - (Commit: [7168c0c][R4.0-rc3-Commit-7168c0c]) Fixed WetKit Core for #[2554209][R4.0-rc3-Issue-2554209] - CTools SA-CONTRIB-2015-141
  - (Commit: [4fa3d0f][R4.0-rc3-Commit-4fa3d0f]) #[2554195][R4.0-rc3-Issue-2554195] - DRUPAL-SA-CORE-2015-003 (Critical)
  - (Commit: [cc16c08][R4.0-rc3-Commit-cc16c08]) Fixed WetKit Bootstrap for Fix for wetkit_bean search input fields.
  - (Commit: [b432db8][R4.0-rc3-Commit-b432db8]) Fixed WetKit Bootstrap for Fix for wetkit_bean search input fields.
  - (Commit: [528a768][R4.0-rc3-Commit-528a768]) Fixed WetKit Bootstrap for Fix for extra padding on hamburger icon in mobile view.
  - (Commit: [653578c][R4.0-rc3-Commit-653578c]) Fixed WetKit Core for #[2298877][R4.0-rc3-Issue-2298877] - Migration doesn't take into account language of host entity
  - (Commit: [d4d626c][R4.0-rc3-Commit-d4d626c]) Fixed WetKit Search for Remove patch breaking make build for dependencies.
  - (Commit: [fe457a5][R4.0-rc3-Commit-fe457a5]) Fixed WetKit Search for Update Search API makefile + associated features to Solr 5.21
  - (Commit: [97b5b17][R4.0-rc3-Commit-97b5b17]) Fix for incorrect SHA for wetkit_bootstrap.
  - (Commit: [91d8029][R4.0-rc3-Commit-91d8029]) Fixed WetKit Language for #[2547781][R4.0-rc3-Issue-2547781] - i18nviews update for plugin fix
  - (Commit: [942a08b][R4.0-rc3-Commit-942a08b]) Fixed WetKit Bootstrap for #[2552591][R4.0-rc3-Issue-2552591] - preg_grep in (_)bootstrap_process_theme_registry_suggestions slow
  - (Commit: [65d9136][R4.0-rc3-Commit-65d9136]) Fixed WetKit Bootstrap for #[2552591][R4.0-rc3-Issue-2552591] - preg_grep in (_)bootstrap_process_theme_registry_suggestions slow
  - (Commit: [8c56ad2][R4.0-rc3-Commit-8c56ad2]) Fixed WetKit Bean for #[2545682][R4.0-rc3-Issue-2545682] - Better drupal_alter on wetkit_slide_collection
  - (Commit: [bdfafc6][R4.0-rc3-Commit-bdfafc6]) Start work on next release.

## v4.0-RC2

Security Update(s):

  - Drupal Core
  - Admin Views
  - jQuery
  - Path Breadcrumbs
  - Services
  - Views Bulk Operations

Performance Update(s)

  - Improved theme registry performance
  - Render caching for computation heavy functions in hook_preprocess_page()
  - Hierarchical Taxonomy performance on Edit Draft page
  - Path Breadcrumbs caching enabled by default

Features:

  - Update Panel Layout icons + markup
  - Improved Tabbed Interface support
  - Updates to WxT jQuery Framework
  - Aggresive caching to hook_preprocess_page for improved page performance
  - Date Modified CTools plugin is now working as expected
  - Improved base theme logic when handling subtheme logo settings

Fixes:

  - (Commit: [0e3f6cf][R4.0-rc2-Commit-0e3f6cf]) Fixed WetKit WYSIWYG for Enable line wrapping in Wysiwyg by default.
  - (Commit: [1ef9c25][R4.0-rc2-Commit-1ef9c25]) Fixed WetKit Images for Update breakpoint performance patch.
  - (Commit: [b4c747d][R4.0-rc2-Commit-b4c747d]) Fixed WetKit Core for Update panopoly_magic to latest official release.
  - (Commit: [bb9754f][R4.0-rc2-Commit-bb9754f]) Fixed WetKit Migration for #[2543762][R4.0-rc2-Issue-2543762] - Convert wetkit slider to WET 4 and make it more versatile
  - (Commit: [bb4cfc8][R4.0-rc2-Commit-bb4cfc8]) Fixed WetKit Migration for #[2543762][R4.0-rc2-Issue-2543762] - Convert wetkit slider to WET 4 and make it more versatile
  - (Commit: [d1fd844][R4.0-rc2-Commit-d1fd844]) Fixed WetKit Bean for #[2543762][R4.0-rc2-Issue-2543762] - Convert wetkit slider to WET 4 and make it more versatile
  - (Commit: [716ea83][R4.0-rc2-Commit-716ea83]) Fixed WetKit Bean for #[2543762][R4.0-rc2-Issue-2543762] - Convert wetkit slider to WET 4 and make it more versatile
  - (Commit: [f8f44f5][R4.0-rc2-Commit-f8f44f5]) Attempt to resolve Chrome issues.
  - (Commit: [b54db53][R4.0-rc2-Commit-b54db53]) Fixed WetKit Test for Test with just firefox and no chrome exception.
  - (Commit: [b44918d][R4.0-rc2-Commit-b44918d]) Fix for missing selenium.
  - (Commit: [fef9df4][R4.0-rc2-Commit-fef9df4]) Update Selenium to latest version.
  - (Commit: [f6da1a4][R4.0-rc2-Commit-f6da1a4]) Update Selenium to latest version.
  - (Commit: [a4a190d][R4.0-rc2-Commit-a4a190d]) Fixed WetKit Migration for Add support for latest Entity Translation revision addition.
  - (Commit: [402c9bc][R4.0-rc2-Commit-402c9bc]) Fixed WetKit Bootstrap for Fix for cache issue with Custom Search.
  - (Commit: [ece283d][R4.0-rc2-Commit-ece283d]) Fixed WetKit Language for #[2537760][R4.0-rc2-Issue-2537760] - wetkit_language ET and FT upgrade
  - (Commit: [2e52684][R4.0-rc2-Commit-2e52684]) Fixed WetKit Admin for Add missing title to Panes layout.
  - (Commit: [939e69b][R4.0-rc2-Commit-939e69b]) Fixed WetKit Panel Layouts for Minor markup adjustments for Boxton layout.
  - (Commit: [39e22bb][R4.0-rc2-Commit-39e22bb]) Fixed WetKit Bean for Fix for Code style issue.
  - (Commit: [c4fbaeb][R4.0-rc2-Commit-c4fbaeb]) Fixed WetKit Language for Update Features Translation to latest stable.
  - (Commit: [7e72c20][R4.0-rc2-Commit-7e72c20]) Fix WetKit Layouts for #[2532600][R4.0-rc2-Issue-2532600] - Update Icons for layouts to be understandable, and cleaner.
  - (Commit: [4c9c53a][R4.0-rc2-Commit-4c9c53a]) Fixed WetKit Bootstrap for #[2533860][R4.0-rc2-Issue-2533860] - disabling "Show 'Home' breadcrumb link" in wetkit_bootstrap arbitrarily pops off first breadcrumb element
  - (Commit: [f872756][R4.0-rc2-Commit-f872756]) Fixed WetKit Bootstrap for #[2530288][R4.0-rc2-Issue-2530288] - Logo settings in sub-theme not working
  - (Commit: [6ef6131][R4.0-rc2-Commit-6ef6131]) Adjust Travis env params.
  - (Commit: [cb7d1f6][R4.0-rc2-Commit-cb7d1f6]) Fixed WetKit Language for #[2533850][R4.0-rc2-Issue-2533850] - use i18n_variables to set Home / Accueil translation
  - (Commit: [79dd079][R4.0-rc2-Commit-79dd079]) Fixed WetKit Breadcrumbs for Enable temporary caching by default.
  - (Commit: [290cf2d][R4.0-rc2-Commit-290cf2d]) Fixed WetKit Core for #[2537780][R4.0-rc2-Issue-2537780] - wetkit_core features and webforms upgrade
  - (Commit: [88164b3][R4.0-rc2-Commit-88164b3]) Fixed WetKit Core for #[2484927][R4.0-rc2-Issue-2484927] - Display entity label and UUID in dialog
  - (Commit: [d51c391][R4.0-rc2-Commit-d51c391]) Streamline Password Reset process for Issue #889772.
  - (Commit: [7e33550][R4.0-rc2-Commit-7e33550]) Fixed WetKit Admin for #[2537750][R4.0-rc2-Issue-2537750] - admin_views SA-CONTRIB-2015-132
  - (Commit: [3c42eb9][R4.0-rc2-Commit-3c42eb9]) Fixed WetKit Panel Layouts for Cleanup of Panel Layouts.
  - (Commit: [aefabd1][R4.0-rc2-Commit-aefabd1]) Fixed WetKit Breadcrumbs for Update path breadcrumbs to latest official (SA-CONTRIB-2015-133)
  - (Commit: [8af7e3e][R4.0-rc2-Commit-8af7e3e]) Fixed WetKit Panel Layouts for Cleanup of Panel Layouts.
  - (Commit: [594765f][R4.0-rc2-Commit-594765f]) Fixed WetKit Test for Update Behat for Date Modified improvements.
  - (Commit: [f773c17][R4.0-rc2-Commit-f773c17]) Fixed WetKit Theme for #[2530288][R4.0-rc2-Issue-2530288] - Logo settings in sub-theme not working
  - (Commit: [9610eee][R4.0-rc2-Commit-9610eee]) Fixed WetKit Bootstrap for #[2530288][R4.0-rc2-Issue-2530288] - Logo settings in sub-theme not working
  - (Commit: [81e22f7][R4.0-rc2-Commit-81e22f7]) Fixed WetKit Panel Layouts for #[2530220][R4.0-rc2-Issue-2530220] - Mackenzie layout is missing the bootstrap container class
  - (Commit: [179bfcc][R4.0-rc2-Commit-179bfcc]) Fixed WetKit Core for #[2529722][R4.0-rc2-Issue-2529722] - The UUIDs of cloned variant and relative panes are the same of original ones
  - (Commit: [cfa7a1f][R4.0-rc2-Commit-cfa7a1f]) Fixed WetKit WET-BOEW for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [c64fec2][R4.0-rc2-Commit-c64fec2]) Fixed WetKit Migration for Fix for slow Taxonomy import related to Pathauto.
  - (Commit: [4f19cfe][R4.0-rc2-Commit-4f19cfe]) Fixed WetKit Bootstrap for #[2527832][R4.0-rc2-Issue-2527832] - Additional caching for hook_preprocess_page()
  - (Commit: [5b19e48][R4.0-rc2-Commit-5b19e48]) Fixed WetKit Bean for #[2528454][R4.0-rc2-Issue-2528454] - Render Caching for slideout_bean
  - (Commit: [23fb291][R4.0-rc2-Commit-23fb291]) Fixed WetKit Test for Fix for removed accessibility permissions causing failed test.
  - (Commit: [92b5862][R4.0-rc2-Commit-92b5862]) Fixed WetKit Deployment for #[2528666][R4.0-rc2-Issue-2528666] - Removal of unused xautoload + configuration
  - (Commit: [65bf07d][R4.0-rc2-Commit-65bf07d]) Fixed WetKit WYSIWYG for #[2528658][R4.0-rc2-Issue-2528658] - Removing deprecated Accessibility module
  - (Commit: [daa7976][R4.0-rc2-Commit-daa7976]) Fixed WetKit Core for #[2528658][R4.0-rc2-Issue-2528658] - Removing deprecated Accessibility module
  - (Commit: [80c26a2][R4.0-rc2-Commit-80c26a2]) Fixed WetKit Core for #[2528658][R4.0-rc2-Issue-2528658] - Removing deprecated Accessibility module
  - (Commit: [05d2a58][R4.0-rc2-Commit-05d2a58]) Fixed WetKit Bean for #[2528454][R4.0-rc2-Issue-2528454] - Render Caching for slideout_bean
  - (Commit: [439eb5a][R4.0-rc2-Commit-439eb5a]) Fixed WetKit Core for Allow for more granular control to flush WxT render caches.
  - (Commit: [28aabac][R4.0-rc2-Commit-28aabac]) Fixed WetKit Bean for #[2528454][R4.0-rc2-Issue-2528454] - Render Caching for slideout_bean
  - (Commit: [07755b3][R4.0-rc2-Commit-07755b3]) Fixed WetKit Bootstrap for #[2527832][R4.0-rc2-Issue-2527832] - Additional caching for hook_preprocess_page()
  - (Commit: [621f9a9][R4.0-rc2-Commit-621f9a9]) Fixed WetKit WET-BOEW for Support for cache clearing when switching WxT themes.
  - (Commit: [e7e14e6][R4.0-rc2-Commit-e7e14e6]) Fixed WetKit Menu for Remove expensive calls in WetKit Menu relating to custom css.
  - (Commit: [55b818f][R4.0-rc2-Commit-55b818f]) Fixed WetKit Migration for Enforce description for every Migration class.
  - (Commit: [a868925][R4.0-rc2-Commit-a868925]) Fixed WetKit Migration for Attempt to improve Taxonomy insert speed.
  - (Commit: [23ac052][R4.0-rc2-Commit-23ac052]) Fixed WetKit Migration for Update the Migrate module to latest stable release.
  - (Commit: [f1932b2][R4.0-rc2-Commit-f1932b2]) Fixed WetKit Users for #[2522698][R4.0-rc2-Issue-2522698] - Wetkit users image style settings for profile picture
  - (Commit: [3d36e18][R4.0-rc2-Commit-3d36e18]) Fixed WetKit Test for Remove check for active-trail as conflicts with caching introduced in #2527832
  - (Commit: [6673a57][R4.0-rc2-Commit-6673a57]) Fixed WetKit Bootstrap for #[2527832][R4.0-rc2-Issue-2527832] - Additional caching for hook_preprocess_page()
  - (Commit: [c318e50][R4.0-rc2-Commit-c318e50]) Fixed WetKit Breadcrumbs for #[2511662][R4.0-rc2-Issue-2511662] - Changing the wetkit breadcrumb/path breadcrumb home link title doesn't work when not using path breadcrumbs
  - (Commit: [3ce3f08][R4.0-rc2-Commit-3ce3f08]) Fixed WetKit Core for #[2516906][R4.0-rc2-Issue-2516906] - SA-CONTRIB-2015-131 upgrade to views_bulk_operations v 3.3
  - (Commit: [9a9b2ce][R4.0-rc2-Commit-9a9b2ce]) Fixed WetKit Bean for #[2521828][R4.0-rc2-Issue-2521828] - Wetkit bean twitter block renders an empty h2
  - (Commit: [2a7e9c4][R4.0-rc2-Commit-2a7e9c4]) Fixed WetKit Bootstrap for Fix for logging wrapper collapsed.
  - (Commit: [5106eb8][R4.0-rc2-Commit-5106eb8]) Fixed WetKit Theme for Small css adjustments for Modal.
  - (Commit: [32566fd][R4.0-rc2-Commit-32566fd]) Fixed WetKit Theme for Small css adjustments for Modal.
  - (Commit: [f88b321][R4.0-rc2-Commit-f88b321]) Fixed WetKit Theme for Small css adjustments for Modal.
  - (Commit: [bd5bce2][R4.0-rc2-Commit-bd5bce2]) Fixed WetKit Widgets for Fix for media exposed filter on libraries tab.
  - (Commit: [f756176][R4.0-rc2-Commit-f756176]) Fixed WetKit Theme for Small css adjustments for Modal.
  - (Commit: [5a70e6b][R4.0-rc2-Commit-5a70e6b]) Fixed WetKit WET-BOEW for #[2509414][R4.0-rc2-Issue-2509414] - Updating WxT from v4.0.10 to v4.0.14
  - (Commit: [dcf704d][R4.0-rc2-Commit-dcf704d]) Fixed WetKit WET-BOEW for #[2509414][R4.0-rc2-Issue-2509414] - Updating WxT from v4.0.10 to v4.0.14
  - (Commit: [67254bb][R4.0-rc2-Commit-67254bb]) Fixed WetKit Bean for Fix for Tabbed Interface adding active to every tablist liste item.
  - (Commit: [afc918d][R4.0-rc2-Commit-afc918d]) Fixed WetKit Images for Update picture module to the 2.9 version.
  - (Commit: [fb47e1a][R4.0-rc2-Commit-fb47e1a]) Fixed WetKit Demo for Remove bad contexts that shouldn't be assigned.
  - (Commit: [32a4350][R4.0-rc2-Commit-32a4350]) Fixed WetKit Core for Updates to advanced_help, hierarchical_select, and panopoly_magic.
  - (Commit: [1747ca3][R4.0-rc2-Commit-1747ca3]) Fixed WetKit Bean for Update Bean module to 1.9 version.
  - (Commit: [7ea771d][R4.0-rc2-Commit-7ea771d]) Fixed WetKit Theme for Adjustments for modifications made to advanced help menu path.
  - (Commit: [fa5f8c7][R4.0-rc2-Commit-fa5f8c7]) Fixed WetKit Bootstrap for Fix for visual regression on fieldsets leveraging bootstrap panel class
  - (Commit: [9201285][R4.0-rc2-Commit-9201285]) Fixed WetKit Admin for #[2508399][R4.0-rc2-Issue-2508399] - JQuery  SA-CONTRIB-2015-123 - Open Redirect
  - (Commit: [754a6e4][R4.0-rc2-Commit-754a6e4]) Fixed WetKit Search for #[2302955][R4.0-rc2-Issue-2302955] - Unable to search from 404 page
  - (Commit: [44ab705][R4.0-rc2-Commit-44ab705]) Fixed WetKit Theme for Fix for option text-aligner using inline-block instead of float.
  - (Commit: [ff1342d][R4.0-rc2-Commit-ff1342d]) Fixed WetKit Core for Removal of legacy CSS causing issues with Modal.
  - (Commit: [4e961fc][R4.0-rc2-Commit-4e961fc]) Fixed WetKit Theme for Small css adjustments for Modal.
  - (Commit: [f087f04][R4.0-rc2-Commit-f087f04]) Fixed WetKit WET-BOEW for #[2509414][R4.0-rc2-Issue-2509414] - Updating WxT from v4.0.10 to v4.0.14
  - (Commit: [f1b5d5a][R4.0-rc2-Commit-f1b5d5a]) Fixed WetKit Theme for #[2400083][R4.0-rc2-Issue-2400083] - Horizontal tab region on front page always has title "Search"
  - (Commit: [e19387f][R4.0-rc2-Commit-e19387f]) Fixed WetKit Widgets for Small accessibility improvement to Media + Minor alt handling updates.
  - (Commit: [b776797][R4.0-rc2-Commit-b776797]) Fixed WetKit Bootstrap for LinkIT styling issues on dialog open.
  - (Commit: [b1e6849][R4.0-rc2-Commit-b1e6849]) Fixed WetKit Core for #[2484927][R4.0-rc2-Issue-2484927] - Display entity label and UUID in dialog
  - (Commit: [c326c65][R4.0-rc2-Commit-c326c65]) Fixed WetKit Admin for #[2508399][R4.0-rc2-Issue-2508399] - JQuery  SA-CONTRIB-2015-123 - Open Redirect
  - (Commit: [cb65092][R4.0-rc2-Commit-cb65092]) Fixed WetKit Core for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [0bb2cf5][R4.0-rc2-Commit-0bb2cf5]) Fixed WetKit WET-BOEW for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [eb3b23f][R4.0-rc2-Commit-eb3b23f]) Fixed WetKit Test for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [13917f3][R4.0-rc2-Commit-13917f3]) Fixed WetKit Core for #[2503341][R4.0-rc2-Issue-2503341] - Region title for wetkit tabs
  - (Commit: [bea4e37][R4.0-rc2-Commit-bea4e37]) Fixed WetKit Test for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [3d03d6d][R4.0-rc2-Commit-3d03d6d]) Fixed WetKit Core for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [cbd2bf8][R4.0-rc2-Commit-cbd2bf8]) Fixed WetKit WET-BOEW for #[2434721][R4.0-rc2-Issue-2434721] - Date modified - bugs
  - (Commit: [28fe52d][R4.0-rc2-Commit-28fe52d]) Fixed WetKit Menu for #[2506647][R4.0-rc2-Issue-2506647] -  Call to undefined function wetkit_menu_requirements()
  - (Commit: [2ff38bf][R4.0-rc2-Commit-2ff38bf]) Fixed WetKit Language for #[2508465][R4.0-rc2-Issue-2508465] - i18n 7.x-1.13 drupal core compatibility update
  - (Commit: [0598438][R4.0-rc2-Commit-0598438]) #[2508275][R4.0-rc2-Issue-2508275] - Drupal 7.38 released with SA critical
  - (Commit: [43852be][R4.0-rc2-Commit-43852be]) Fixed WetKit Test for #[2494539][R4.0-rc2-Issue-2494539] - WxT Behat tests expansion
  - (Commit: [ddb2985][R4.0-rc2-Commit-ddb2985]) Fixed WetKit Test for #[2494539][R4.0-rc2-Issue-2494539] - WxT Behat tests expansion
  - (Commit: [33bd0d5][R4.0-rc2-Commit-33bd0d5]) Fixed WetKit Test for #[2494539][R4.0-rc2-Issue-2494539] - WxT Behat tests expansion
  - (Commit: [5198c58][R4.0-rc2-Commit-5198c58]) Update WetKit Test for more Behat additions.
  - (Commit: [0e072c6][R4.0-rc2-Commit-0e072c6]) Fixed WetKit Core for Update panopoly magic to show single preview mode.
  - (Commit: [11522b6][R4.0-rc2-Commit-11522b6]) Fixed WetKit Menu for #[2496495][R4.0-rc2-Issue-2496495] - New group-list menu theme functions
  - (Commit: [43242f8][R4.0-rc2-Commit-43242f8]) Fixed WetKit Core for #[2482943][R4.0-rc2-Issue-2482943] - upgrade to views v 3.11
  - (Commit: [09a48e7][R4.0-rc2-Commit-09a48e7]) Fixed WetKit Bootstrap for wetkit bootstrap breadcrumbs showing duplicate titles
  - (Commit: [8a507db][R4.0-rc2-Commit-8a507db]) Fixed WetKit Bootstrap for #[2496481][R4.0-rc2-Issue-2496481] - Need menu_tree wrapper for a new group-list menu
  - (Commit: [4240873][R4.0-rc2-Commit-4240873]) Fixed WetKit Panel Layouts for #[2496453][R4.0-rc2-Issue-2496453] - Some layouts not ported to 4.x correctly
  - (Commit: [1a1c4e6][R4.0-rc2-Commit-1a1c4e6]) Fixed WetKit Bootstrap for #[2498363][R4.0-rc2-Issue-2498363] - WxT Bootstrap Settings instructions for Search box visibility fixed
  - (Commit: [fc62047][R4.0-rc2-Commit-fc62047]) Fixed WetKit Bootstrap for #[2499125][R4.0-rc2-Issue-2499125] - Customization Overrides - Disable rendering of menu items instructions fixed
  - (Commit: [cf55b77][R4.0-rc2-Commit-cf55b77]) Fixed WetKit Panel Layouts for #[2500369][R4.0-rc2-Issue-2500369] - Boxton layout is missing the bootstrap container class
  - (Commit: [57b7247][R4.0-rc2-Commit-57b7247]) Fixed WetKit Theme for #[2500585][R4.0-rc2-Issue-2500585] - wetkit theme change text 2x to 4x
  - (Commit: [932b8a3][R4.0-rc2-Commit-932b8a3]) Fixed WetKit Bootstrap for #[2492305][R4.0-rc2-Issue-2492305] - button theme function needs an accessible icon only option
  - (Commit: [089578a][R4.0-rc2-Commit-089578a]) Second loop in module_implements() being repeated for no reason
  - (Commit: [d792752][R4.0-rc2-Commit-d792752]) Fixed WetKit Test for Fix for Bean Follow link.
  - (Commit: [ef7fb5a][R4.0-rc2-Commit-ef7fb5a]) Fixed WetKit Bean for Remove unneeded dependency.
  - (Commit: [088d936][R4.0-rc2-Commit-088d936]) Fixed WetKit Bean for Missing body in search bean (field definition).
  - (Commit: [6414a8c][R4.0-rc2-Commit-6414a8c]) Fixed WetKit Core for Update panopoly_magic and webform to latest stable.
  - (Commit: [f532905][R4.0-rc2-Commit-f532905]) Fixed WetKit Bean for Missing body in search bean.
  - (Commit: [ab869e6][R4.0-rc2-Commit-ab869e6]) Fixed WetKit Core for Update features to 2.5 version.
  - (Commit: [83e4044][R4.0-rc2-Commit-83e4044]) Fixed WetKit Deployment for #[2482837][R4.0-rc2-Issue-2482837] - distinct query fix bulk deployment view
  - (Commit: [be9bcdd][R4.0-rc2-Commit-be9bcdd]) Fixed WetKit Core for #[2482943][R4.0-rc2-Issue-2482943] - upgrade to views v 3.11
  - (Commit: [a311c83][R4.0-rc2-Commit-a311c83]) Fixed WetKit Core for #[2480345][R4.0-rc2-Issue-2480345] - "Edit Draft" hs_taxonomy performance fix for wetkit 1.9 and 4.0 rc1
  - (Commit: [3de578a][R4.0-rc2-Commit-3de578a]) #[2487085][R4.0-rc2-Issue-2487085] - Wetkit Improve theme registry build performance by 85%
  - (Commit: [865c06a][R4.0-rc2-Commit-865c06a]) Fixed WetKit Deployment for #[2485619][R4.0-rc2-Issue-2485619] - Resolve SA for services module
  - (Commit: [2430f17][R4.0-rc2-Commit-2430f17]) Fixed WetKit Language for #[2479349][R4.0-rc2-Issue-2479349] - Language switcher does not preserve query parameters
  - (Commit: [5462b10][R4.0-rc2-Commit-5462b10]) Fixed WetKit Core for #[2145567][R4.0-rc2-Issue-2145567] - CTools Contexts are missing UUID support
  - (Commit: [166414b][R4.0-rc2-Commit-166414b]) Prepare for next release.

## v4.0-RC1

Security Update(s):

  - Drupal Core
  - Linkit
  - Services

Performance Update(s)

  - Addition of core patch for module_implements() verified static cache.
  - Performance improvements (Panels Plugins and i18n)

Features:

  - Minor UX improvements to Panels IPE
  - Stabilization of deployment related modules to official release
  - Small Bootstrap adjustments
  - Workbench Moderation improvements

Fixes:

  - (Commit: [76d7793][R4.0-rc1-Commit-76d7793]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [55f8702][R4.0-rc1-Commit-55f8702]) Prepare for 4.0-rc1 release.
  - (Commit: [e8a7269][R4.0-rc1-Commit-e8a7269]) Fixed WetKit Admin for Fix for invalid patch format.
  - (Commit: [50a5678][R4.0-rc1-Commit-50a5678]) Fixed WetKit Test for #[2457949][R4.0-rc1-Issue-2457949] - Behat tests expansion
  - (Commit: [5e5be8c][R4.0-rc1-Commit-5e5be8c]) Fixed WetKit Pages for #[2460287][R4.0-rc1-Issue-2460287] - Landing page creation confirmation message always says Sutherland
  - (Commit: [7747838][R4.0-rc1-Commit-7747838]) Fixed WetKit Core for #[2464421][R4.0-rc1-Issue-2464421] - Password Policy Security Release
  - (Commit: [473d043][R4.0-rc1-Commit-473d043]) Fixed WetKit Bootstrap for #[2464413][R4.0-rc1-Issue-2464413] - Add support for GCWeb cdn for Megamenu + Footer
  - (Commit: [18b4762][R4.0-rc1-Commit-18b4762]) Fixed WetKit WET-BOEW for Missing logic for theme.min.js.
  - (Commit: [2a51bca][R4.0-rc1-Commit-2a51bca]) Fixed WetKit Bootstrap for Minor CSS adjustment for Dashboard screen.
  - (Commit: [1d00d8f][R4.0-rc1-Commit-1d00d8f]) Fixed WetKit Menu for Remove deprecated WxT requirements functionality.
  - (Commit: [d9d2fe3][R4.0-rc1-Commit-d9d2fe3]) Fixed WetKit Bootstrap for Improve display of status report table.
  - (Commit: [62cd71a][R4.0-rc1-Commit-62cd71a]) Fixed WetKit Admin for Fix for invalid contexts causing ctools missing string.
  - (Commit: [664fde7][R4.0-rc1-Commit-664fde7]) Fixed WetKit Theme for Fix for hidden themes displaying on install.
  - (Commit: [f04bc92][R4.0-rc1-Commit-f04bc92]) Fixed WetKit Pages for Fix use of hardcoded layout name.
  - (Commit: [b90eb27][R4.0-rc1-Commit-b90eb27]) Fixed WetKit Images for Fix incorrect label for view modes.
  - (Commit: [bd07962][R4.0-rc1-Commit-bd07962]) Fixed WetKit Core for Remove patch for CTools string context.
  - (Commit: [b45d657][R4.0-rc1-Commit-b45d657]) Update CHANGELOG.md file.
  - (Commit: [9a29304][R4.0-rc1-Commit-9a29304]) Update CHANGELOG.md file.
  - (Commit: [596a470][R4.0-rc1-Commit-596a470]) Fixed WetKit Core for #[2352895][R4.0-rc1-Issue-2352895] - Pathauto Persist?
  - (Commit: [a34f8ac][R4.0-rc1-Commit-a34f8ac]) Update CHANGELOG.md file.
  - (Commit: [9a0da7b][R4.0-rc1-Commit-9a0da7b]) Fixed WetKit Test for #[2457949][R4.0-rc1-Issue-2457949] - Behat tests expansion
  - (Commit: [6f14f60][R4.0-rc1-Commit-6f14f60]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [28e9c20][R4.0-rc1-Commit-28e9c20]) Fixed WetKit Test for #[2457949][R4.0-rc1-Issue-2457949] - Behat tests expansion
  - (Commit: [129d38b][R4.0-rc1-Commit-129d38b]) Fixed WetKit Widgets for #[2458841][R4.0-rc1-Issue-2458841] - Features Module 2.4 changes
  - (Commit: [360898f][R4.0-rc1-Commit-360898f]) Fixed WetKit Users for #[2458841][R4.0-rc1-Issue-2458841] - Features Module 2.4 changes
  - (Commit: [20da48e][R4.0-rc1-Commit-20da48e]) Fixed WetKit Images for #[2458841][R4.0-rc1-Issue-2458841] - Features Module 2.4 changes
  - (Commit: [48c500a][R4.0-rc1-Commit-48c500a]) Fixed WetKit Core for #[2458841][R4.0-rc1-Issue-2458841] - Features Module 2.4 changes
  - (Commit: [043506a][R4.0-rc1-Commit-043506a]) Fixed WetKit Bean for #[2458841][R4.0-rc1-Issue-2458841] - Features Module 2.4 changes
  - (Commit: [3532424][R4.0-rc1-Commit-3532424]) Fixed WetKit Panel Layouts for #[2453387][R4.0-rc1-Issue-2453387] - missing submenu for dashboard in 4x
  - (Commit: [42aef39][R4.0-rc1-Commit-42aef39]) Fixed WetKit Deployment for #[2453387][R4.0-rc1-Issue-2453387] - missing submenu for dashboard in 4x
  - (Commit: [0795c9d][R4.0-rc1-Commit-0795c9d]) Fixed WetKit Core for #[2453387][R4.0-rc1-Issue-2453387] - missing submenu for dashboard in 4x
  - (Commit: [6f1d84d][R4.0-rc1-Commit-6f1d84d]) Fixed WetKit Bootstrap for CSS fix for Panels backend hidden title.
  - (Commit: [07dcb0b][R4.0-rc1-Commit-07dcb0b]) Fixed WetKit Deployment for #[2449043][R4.0-rc1-Issue-2449043] - batch deployment regression > wetkit 1.2 < 4.x dev
  - (Commit: [cc30d18][R4.0-rc1-Commit-cc30d18]) Fixed WetKit Deployment for #[2450967][R4.0-rc1-Issue-2450967] - remove conflicting css
  - (Commit: [e4117bd][R4.0-rc1-Commit-e4117bd]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [465e27b][R4.0-rc1-Commit-465e27b]) Fixed WetKit Deployment for #[2136621][R4.0-rc1-Issue-2136621] - improve usability of wetkit_deployment
  - (Commit: [5e91e8f][R4.0-rc1-Commit-5e91e8f]) Fixed WetKit Core for #[2447305][R4.0-rc1-Issue-2447305] - add new term reference of type hierarchical_select
  - (Commit: [ad1ae08][R4.0-rc1-Commit-ad1ae08]) Fixed WetKit WET-BOEW for #[2454123][R4.0-rc1-Issue-2454123] - WETKIT Configure Panes using wetboew 3.1
  - (Commit: [18a332d][R4.0-rc1-Commit-18a332d]) Fixed WetKit Bean for #[2449759][R4.0-rc1-Issue-2449759] - Wetkit Share Bean - remove unused functions Email and Source tag
  - (Commit: [acabf10][R4.0-rc1-Commit-acabf10]) Fixed WetKit Bean for #[2449791][R4.0-rc1-Issue-2449791] - Wetkit Share Bean - old Span classes no longer work
  - (Commit: [9a26b3c][R4.0-rc1-Commit-9a26b3c]) #[2456355][R4.0-rc1-Issue-2456355] - Drupal 7.35 released
  - (Commit: [4e5fcb3][R4.0-rc1-Commit-4e5fcb3]) Fixed WetKit Test for #[2450369][R4.0-rc1-Issue-2450369] - Make Bean behat tests more in-depth
  - (Commit: [579f15a][R4.0-rc1-Commit-579f15a]) Fixed WetKit Bean for #[2450311][R4.0-rc1-Issue-2450311] - Wetkit Rate Bean - old Span classes no longer work
  - (Commit: [9c44f2a][R4.0-rc1-Commit-9c44f2a]) Fixed WetKit Bean for #[2450275][R4.0-rc1-Issue-2450275] - Wetkit Twitter Bean - Span options not implemented and using old span classes
  - (Commit: [e11a210][R4.0-rc1-Commit-e11a210]) Fixed WetKit Bean for #[2450217][R4.0-rc1-Issue-2450217] - Wetkit Search Bean - old Title and Title backgrounds no longer used
  - (Commit: [755191e][R4.0-rc1-Commit-755191e]) Fixed WetKit Bean for #[2449035][R4.0-rc1-Issue-2449035] - Wetkit Search Bean - Placeholder text not working
  - (Commit: [4b3f177][R4.0-rc1-Commit-4b3f177]) Fixed WetKit Bean for Remove invalid addtion to info file.
  - (Commit: [86c2847][R4.0-rc1-Commit-86c2847]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [fa4e8a0][R4.0-rc1-Commit-fa4e8a0]) Fixed WetKit Test for #[2447503][R4.0-rc1-Issue-2447503] - Add Link and Search beans to bean.feature Behat test
  - (Commit: [5add9f5][R4.0-rc1-Commit-5add9f5]) Fixed WetKit Bean for #[2447445][R4.0-rc1-Issue-2447445] - Create new bean Link or bean Search gives WSOD
  - (Commit: [3face54][R4.0-rc1-Commit-3face54]) Fixed WetKit WYSIWYG for #[2447395][R4.0-rc1-Issue-2447395] - Allow linkit for taxonomy terms
  - (Commit: [97c5f70][R4.0-rc1-Commit-97c5f70]) Fixed WetKit Ember for #[2447297][R4.0-rc1-Issue-2447297] - admin/modules screen and Ember theme
  - (Commit: [85c8280][R4.0-rc1-Commit-85c8280]) Delete .gitignore file.
  - (Commit: [51f3f76][R4.0-rc1-Commit-51f3f76]) Update CHANGELOG.md file.
  - (Commit: [9e5ca8d][R4.0-rc1-Commit-9e5ca8d]) Fixed WetKit Test for #[2442817][R4.0-rc1-Issue-2442817] - Update twitter bean behat test
  - (Commit: [3ecaea3][R4.0-rc1-Commit-3ecaea3]) Fixed WetKit Bean for #[2442909][R4.0-rc1-Issue-2442909] - Highlight bean custom CSS not rendered
  - (Commit: [3b04c83][R4.0-rc1-Commit-3b04c83]) Fixed WetKit Test for #[2444543][R4.0-rc1-Issue-2444543] - Expand behat testing to include many bean types
  - (Commit: [26b1124][R4.0-rc1-Commit-26b1124]) Fixed WetKit Admin for #[2445137][R4.0-rc1-Issue-2445137] - Clear link placement problem on Modules admin page
  - (Commit: [533f6b5][R4.0-rc1-Commit-533f6b5]) Fixed WetKit WYSIWYG for #[2444357][R4.0-rc1-Issue-2444357] - Codemirror Activeline not displaying correctly
  - (Commit: [1c7cd15][R4.0-rc1-Commit-1c7cd15]) Fixed WetKit Deployment for #[2142137][R4.0-rc1-Issue-2142137] - menu link deployment - correctly deploying menu items in a language other than the current interface or current context
  - (Commit: [04ae9ca][R4.0-rc1-Commit-04ae9ca]) Fixed WetKit Bean for #[2442793][R4.0-rc1-Issue-2442793] - Twitter bean custom CSS does not render
  - (Commit: [2dd7b4a][R4.0-rc1-Commit-2dd7b4a]) Fixed WetKit Core for #[2442731][R4.0-rc1-Issue-2442731] - Entity API 7.x-1.6 released
  - (Commit: [9443627][R4.0-rc1-Commit-9443627]) Fixed WetKit Core for #[2432913][R4.0-rc1-Issue-2432913] - warning messages from hierarchical_select and features
  - (Commit: [aa3eeb1][R4.0-rc1-Commit-aa3eeb1]) Fixed WetKit Admin for #[2423955][R4.0-rc1-Issue-2423955] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [41f1935][R4.0-rc1-Commit-41f1935]) Fixed WetKit Search for #[2423961][R4.0-rc1-Issue-2423961] - Updates for WetKit Widgets (1.9, 4.0-beta2)
  - (Commit: [678f55e][R4.0-rc1-Commit-678f55e]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [8c2812d][R4.0-rc1-Commit-8c2812d]) Fixed WetKit Admin for #[2423955][R4.0-rc1-Issue-2423955] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [16414aa][R4.0-rc1-Commit-16414aa]) Fixed WetKit Test for Remove webform till submodule is added.
  - (Commit: [b18b6f8][R4.0-rc1-Commit-b18b6f8]) Update wetkit_test suite.
  - (Commit: [8959cc0][R4.0-rc1-Commit-8959cc0]) Fixed WetKit Deployment for #[2089133][R4.0-rc1-Issue-2089133] - Cannot create a new menu when Wetkit Deployment Source is enabled and configured
  - (Commit: [f89f5e7][R4.0-rc1-Commit-f89f5e7]) #[2427429][R4.0-rc1-Issue-2427429] - Drupal core performance if menu item is hidden skip it
  - (Commit: [28c65cc][R4.0-rc1-Commit-28c65cc]) #[2427399][R4.0-rc1-Issue-2427399] - drupal core performance inline-file_uri_scheme
  - (Commit: [52afae9][R4.0-rc1-Commit-52afae9]) Fixed WetKit Core for #[2427411][R4.0-rc1-Issue-2427411] - wetkit core performance link why is reloading the entity
  - (Commit: [b9cda4a][R4.0-rc1-Commit-b9cda4a]) Populate changelog preparing for release.
  - (Commit: [5dcbd6d][R4.0-rc1-Commit-5dcbd6d]) Fixed WetKit Core for Fix for CTools undefined string context.
  - (Commit: [788cfc6][R4.0-rc1-Commit-788cfc6]) Fixed WetKit Menu for Improve performance with minipanels + theme registry.
  - (Commit: [b61df24][R4.0-rc1-Commit-b61df24]) Addition of core patch for module_implements() verified static cache.
  - (Commit: [9537824][R4.0-rc1-Commit-9537824]) Fixed WetKit Theme for Further expand bootstraps realm.
  - (Commit: [697dcb5][R4.0-rc1-Commit-697dcb5]) Fixed WetKit Theme for Sane css defaults for Panels screen.
  - (Commit: [056f422][R4.0-rc1-Commit-056f422]) Fixed WetKit Deployment for Minor features update for environment indicators.
  - (Commit: [fed8f6a][R4.0-rc1-Commit-fed8f6a]) Fixed WetKit Bootstrap for Update bootstrap for template.php invocation patch.
  - (Commit: [d7873c4][R4.0-rc1-Commit-d7873c4]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [b6c359b][R4.0-rc1-Commit-b6c359b]) Fixed WetKit Bootstrap for Add handling for modal sizing + navbar.
  - (Commit: [ca0415e][R4.0-rc1-Commit-ca0415e]) Fixed WetKit Theme for #[2424821][R4.0-rc1-Issue-2424821] - Improvements to contextual display and panels ipe
  - (Commit: [5cd1db1][R4.0-rc1-Commit-5cd1db1]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [282520f][R4.0-rc1-Commit-282520f]) Fixed WetKit Admin for #[2423955][R4.0-rc1-Issue-2423955] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [c5d2436][R4.0-rc1-Commit-c5d2436]) Fixed WetKit Language for #[2394485][R4.0-rc1-Issue-2394485] - Menu link translations are not being linked together
  - (Commit: [8588fb5][R4.0-rc1-Commit-8588fb5]) Fixed WetKit Bootstrap for #[2424717][R4.0-rc1-Issue-2424717] - WxT theme improvements for node.tpl.php to better match panels-pages.tpl.php
  - (Commit: [927f3d1][R4.0-rc1-Commit-927f3d1]) Fixed WetKit Deployment for #[2424241][R4.0-rc1-Issue-2424241] - Updates for WetKit Deployment (1.9, 4.0-beta2)
  - (Commit: [0f100e0][R4.0-rc1-Commit-0f100e0]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [5faf74c][R4.0-rc1-Commit-5faf74c]) Fixed WetKit Deployment for #[2424241][R4.0-rc1-Issue-2424241] - Updates for WetKit Deployment (1.9, 4.0-beta2)
  - (Commit: [12196a2][R4.0-rc1-Commit-12196a2]) Fixed WetKit Deployment for #[2424241][R4.0-rc1-Issue-2424241] - Updates for WetKit Deployment (1.9, 4.0-beta2)
  - (Commit: [ae86516][R4.0-rc1-Commit-ae86516]) Fixed WetKit Deployment for #[2424241][R4.0-rc1-Issue-2424241] - Updates for WetKit Deployment (1.9, 4.0-beta2)
  - (Commit: [dea9cc9][R4.0-rc1-Commit-dea9cc9]) Fixed WetKit Deployment for #[2424241][R4.0-rc1-Issue-2424241] - Updates for WetKit Deployment (1.9, 4.0-beta2)
  - (Commit: [93405de][R4.0-rc1-Commit-93405de]) Fixed WetKit Admin for #[2423955][R4.0-rc1-Issue-2423955] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [1b8d552][R4.0-rc1-Commit-1b8d552]) Fixed WetKit Core for Update features from version 2.2 to 2.3
  - (Commit: [d82e1c0][R4.0-rc1-Commit-d82e1c0]) Fixed WetKit Search for #[2423961][R4.0-rc1-Issue-2423961] - Updates for WetKit Widgets (1.9, 4.0-beta2)
  - (Commit: [bdc1535][R4.0-rc1-Commit-bdc1535]) Fixed WetKit Widgets for #[2423959][R4.0-rc1-Issue-2423959] - Updates for WetKit Widgets (1.9, 4.0-beta2)
  - (Commit: [2568010][R4.0-rc1-Commit-2568010]) Fixed WetKit WYSIWYG for #[2423955][R4.0-rc1-Issue-2423955] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [21fe779][R4.0-rc1-Commit-21fe779]) Fixed WetKit Core for #[2423861][R4.0-rc1-Issue-2423861] - Updates for WetKit Core (1.9, 4.0-beta2)
  - (Commit: [3035ca1][R4.0-rc1-Commit-3035ca1]) Fixed WetKit Admin for #[2423855][R4.0-rc1-Issue-2423855] - Updates for WetKit Admin (1.9, 4.0-beta2)
  - (Commit: [08cfa78][R4.0-rc1-Commit-08cfa78]) Fixed WetKit Language for #[2423755][R4.0-rc1-Issue-2423755] - Update i18n to recent version 1.12
  - (Commit: [4e5ed81][R4.0-rc1-Commit-4e5ed81]) Fixed WetKit Bean for #[2404271][R4.0-rc1-Issue-2404271] - Patch for bean as entity reference
  - (Commit: [4674db5][R4.0-rc1-Commit-4674db5]) Fixed WetKit Breadcrumbs for #[2423763][R4.0-rc1-Issue-2423763] - Update Path Breadcrumbs to version 3.2
  - (Commit: [2d9bca6][R4.0-rc1-Commit-2d9bca6]) Fixed WetKit Images for #[2423755][R4.0-rc1-Issue-2423755] - Update i18n to recent version 1.12
  - (Commit: [10d4f61][R4.0-rc1-Commit-10d4f61]) Fixed WetKit Language for #[2423755][R4.0-rc1-Issue-2423755] - Update i18n to recent version 1.12
  - (Commit: [5b1d97d][R4.0-rc1-Commit-5b1d97d]) Fixed WetKit Core for #[2423703][R4.0-rc1-Issue-2423703] - Update CTools to 1.6 and Panels to 3.5
  - (Commit: [9cb426f][R4.0-rc1-Commit-9cb426f]) Fixed WetKit Core for #[2423703][R4.0-rc1-Issue-2423703] - Update CTools to 1.6 and Panels to 3.5
  - (Commit: [be07bb6][R4.0-rc1-Commit-be07bb6]) Fixed WetKit Core for #[2418803][R4.0-rc1-Issue-2418803] - Fatal error when using with CTools 1.6 and Panels 3.5
  - (Commit: [fcdb00f][R4.0-rc1-Commit-fcdb00f]) Fixed WetKit Core for #[2145555][R4.0-rc1-Issue-2145555] - CTools Contexts are missing UUID support
  - (Commit: [5a94c3a][R4.0-rc1-Commit-5a94c3a]) Fixed WetKit Theme for #[2412513][R4.0-rc1-Issue-2412513] - wet-boew library 4.0.9 breaks slideshow, reverting to 4.0.7 fixes it
  - (Commit: [97820cf][R4.0-rc1-Commit-97820cf]) Fixed WetKit Test for Indent for login.feature.
  - (Commit: [e8a1348][R4.0-rc1-Commit-e8a1348]) Fixed WetKit WYSIWYG for #[2421111][R4.0-rc1-Issue-2421111] - Line Wrapping in WYSISWYG codemirror
  - (Commit: [8251e8a][R4.0-rc1-Commit-8251e8a]) Fixed WetKit Images for #[2378449][R4.0-rc1-Issue-2378449] - Performance issue with Breakpoints doubling time for drush cc all
  - (Commit: [7b598d0][R4.0-rc1-Commit-7b598d0]) Fixed WetKit Core for Update default config to latest release.
  - (Commit: [6d32713][R4.0-rc1-Commit-6d32713]) Fixed WetKit Bean for missing slideout plugin.
  - (Commit: [9abe0fd][R4.0-rc1-Commit-9abe0fd]) Fixed WetKit Core for #[2363135][R4.0-rc1-Issue-2363135] - upgrade uuid
  - (Commit: [6c5d056][R4.0-rc1-Commit-6c5d056]) Fixed WetKit WET-BOEW for Update wet-boew libraries to v4.0.10
  - (Commit: [3475fa4][R4.0-rc1-Commit-3475fa4]) Fixed WetKit Widgets for #[2416811][R4.0-rc1-Issue-2416811] - Media module recent commits forces z-index .ui-front
  - (Commit: [fad89b5][R4.0-rc1-Commit-fad89b5]) Fixed WetKit Core for #[2418725][R4.0-rc1-Issue-2418725] - Multiple taxonomies lost when using preview button
  - (Commit: [325d773][R4.0-rc1-Commit-325d773]) Fixed WetKit Core for #[2149943][R4.0-rc1-Issue-2149943] - View Draft not displaying correct revision
  - (Commit: [6c5ee41][R4.0-rc1-Commit-6c5ee41]) Update WetKit Menu for Fix for invalid #delta preventing panels preprocess.
  - (Commit: [cc767d7][R4.0-rc1-Commit-cc767d7]) Update WetKit WYSIWYG for Fix for empty tag support for span + i elements.
  - (Commit: [23f19a0][R4.0-rc1-Commit-23f19a0]) Update WetKit Core for #[2344227][R4.0-rc1-Issue-2344227] - zindex of navbar is higher than zindex of translation bar and overlaps the translation bar
  - (Commit: [460e183][R4.0-rc1-Commit-460e183]) Update WetKit Bootstrap for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [d7d0283][R4.0-rc1-Commit-d7d0283]) Update WetKit WYSIWYG for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [ec0ea25][R4.0-rc1-Commit-ec0ea25]) Update WetKit Theme for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [3b5b803][R4.0-rc1-Commit-3b5b803]) Update WetKit Search for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [30bcf2b][R4.0-rc1-Commit-30bcf2b]) Update WetKit Migration for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [dc04e1c][R4.0-rc1-Commit-dc04e1c]) Update WetKit Metatag for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [80f2e20][R4.0-rc1-Commit-80f2e20]) Update WetKit Deployment for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [d40e66d][R4.0-rc1-Commit-d40e66d]) Update WetKit Core for #[2399603][R4.0-rc1-Issue-2399603] - Wetkit translation patches
  - (Commit: [ba6bb4e][R4.0-rc1-Commit-ba6bb4e]) Update WetKit Bootstrap for Convert tabs to spaces.
  - (Commit: [fc845c1][R4.0-rc1-Commit-fc845c1]) Update WetKit Bootstrap for #[2385319][R4.0-rc1-Issue-2385319] - Clean up theme selection appearance.
  - (Commit: [9d4a548][R4.0-rc1-Commit-9d4a548]) Update WetKit Core for #[2282933][R4.0-rc1-Issue-2282933] - Menu Block support UUID
  - (Commit: [21e22bf][R4.0-rc1-Commit-21e22bf]) Update WetKit Core for Fix for custom views url.
  - (Commit: [8d5719e][R4.0-rc1-Commit-8d5719e]) Update WetKit Ember for FIx for ember images not being compressed.
  - (Commit: [ca912cb][R4.0-rc1-Commit-ca912cb]) Update WetKit Theme for #[2402785][R4.0-rc1-Issue-2402785] - Views - On change - "add" button prints out all buttons instead of keeping in a dropdown
  - (Commit: [936df64][R4.0-rc1-Commit-936df64]) Update WetKit Bootstrap for #[2406063][R4.0-rc1-Issue-2406063] - The Canada wordmark should be linking to Canada.ca
  - (Commit: [500e9d1][R4.0-rc1-Commit-500e9d1]) Update WetKit Core for #[2405993][R4.0-rc1-Issue-2405993] - Hierarchical select on edit form in bootstrap fails - server error
  - (Commit: [525c234][R4.0-rc1-Commit-525c234]) Update WetKit Bootstrap for #[2405831][R4.0-rc1-Issue-2405831] - 404 image not found - wetkit_bootstrap/images/list-item.png
  - (Commit: [0c63ede][R4.0-rc1-Commit-0c63ede]) Update WetKit Core for #[2389507][R4.0-rc1-Issue-2389507] - Reverting a revision publishes it (workbench_moderation)
  - (Commit: [cfa95cf][R4.0-rc1-Commit-cfa95cf]) Update WetKit Core for Fix for references from 2.x to 4.x version.
  - (Commit: [6b9ab7e][R4.0-rc1-Commit-6b9ab7e]) Update WetKit Test for Fix Workbench Moderation Behat.
  - (Commit: [3505255][R4.0-rc1-Commit-3505255]) Update WetKit Test for Fix Workbench Moderation Behat.
  - (Commit: [c272653][R4.0-rc1-Commit-c272653]) Update WetKit Test for Addition of workbench moderation behat test.
  - (Commit: [ec30dce][R4.0-rc1-Commit-ec30dce]) Update WetKit Panel Layouts for Remove redundant CSS for Change Layout screen.
  - (Commit: [267db10][R4.0-rc1-Commit-267db10]) Update WetKit Test for Update Pathauto Behat test.
  - (Commit: [02911b9][R4.0-rc1-Commit-02911b9]) Fix for incorrect '$' in make file.
  - (Commit: [2f4c52b][R4.0-rc1-Commit-2f4c52b]) Update WetKit WYSIWYG for #[2400039][R4.0-rc1-Issue-2400039] - Wysiwyg template inconsistency between EN and FR
  - (Commit: [113aeda][R4.0-rc1-Commit-113aeda]) Update WetKit Metatag for #[2399609][R4.0-rc1-Issue-2399609] - type textfield in wetkit_metatag.module
  - (Commit: [c3e9688][R4.0-rc1-Commit-c3e9688]) Update WetKit Migration for #[2400451][R4.0-rc1-Issue-2400451] - type textfield in wetkit_migrate.pages_default.inc
  - (Commit: [f10d6a6][R4.0-rc1-Commit-f10d6a6]) Update WetKit Menu for #[2399597][R4.0-rc1-Issue-2399597] - Fix sidebar menu heading h3 close tag
  - (Commit: [e4929c5][R4.0-rc1-Commit-e4929c5]) Update WetKit Images for #[2395449][R4.0-rc1-Issue-2395449] - picture module was updated to 2.8 release
  - (Commit: [dca2e56][R4.0-rc1-Commit-dca2e56]) Update WetKit Bootstrap for Fix for icon padding-left being overriden by WxT.
  - (Commit: [2808999][R4.0-rc1-Commit-2808999]) Update WetKit WET-BOEW for Fix for missing CSS file for IE splash page.
  - (Commit: [1909d4f][R4.0-rc1-Commit-1909d4f]) Update WetKit WET-BOEW for Fix for preprocess of CSS file breaking IE8 support.
  - (Commit: [3afe015][R4.0-rc1-Commit-3afe015]) Update WetKit Bootstrap for For for IE not recognizing initial.
  - (Commit: [1b94d53][R4.0-rc1-Commit-1b94d53]) Update WetKit WET-BOEW for Update WxT to latest v4.0.9 version.
  - (Commit: [e79f62c][R4.0-rc1-Commit-e79f62c]) Update WetKit Language for #[2394391][R4.0-rc1-Issue-2394391] - Performance improvements (Panels Plugins and i18n)
  - (Commit: [f066239][R4.0-rc1-Commit-f066239]) Update WetKit Core for #[2394391][R4.0-rc1-Issue-2394391] - Performance improvements (Panels Plugins and i18n)
  - (Commit: [c8b1276][R4.0-rc1-Commit-c8b1276]) Gear up for development.
  - (Commit: [ac2c1dd][R4.0-rc1-Commit-ac2c1dd]) Point responsinator to live demo site.
  - (Commit: [0fc2202][R4.0-rc1-Commit-0fc2202]) Point responsinator to live demo site.

<!-- Links Referenced -->

<!-- Commits R4.4 -->

[R4.4-Commit-fda2833]: http://drupalcode.org/project/wetkit.git/commit/fda2833
[R4.4-Commit-ba72306]: http://drupalcode.org/project/wetkit.git/commit/ba72306
[R4.4-Commit-dff8552]: http://drupalcode.org/project/wetkit.git/commit/dff8552
[R4.4-Commit-961aec9]: http://drupalcode.org/project/wetkit.git/commit/961aec9
[R4.4-Commit-a055bff]: http://drupalcode.org/project/wetkit.git/commit/a055bff
[R4.4-Commit-c86f093]: http://drupalcode.org/project/wetkit.git/commit/c86f093
[R4.4-Commit-ce68535]: http://drupalcode.org/project/wetkit.git/commit/ce68535
[R4.4-Commit-255c645]: http://drupalcode.org/project/wetkit.git/commit/255c645
[R4.4-Commit-8c0725c]: http://drupalcode.org/project/wetkit.git/commit/8c0725c
[R4.4-Commit-622dcf1]: http://drupalcode.org/project/wetkit.git/commit/622dcf1
[R4.4-Commit-45bbc8f]: http://drupalcode.org/project/wetkit.git/commit/45bbc8f
[R4.4-Commit-bf345dc]: http://drupalcode.org/project/wetkit.git/commit/bf345dc
[R4.4-Commit-0c0a2e3]: http://drupalcode.org/project/wetkit.git/commit/0c0a2e3
[R4.4-Commit-a790cb8]: http://drupalcode.org/project/wetkit.git/commit/a790cb8

<!-- Issues R4.4 -->

[R4.4-Issue-1967692]: http://drupal.org/node/1967692
[R4.4-Issue-2288395]: http://drupal.org/node/2288395
[R4.4-Issue-2654222]: http://drupal.org/node/2654222
[R4.4-Issue-2658276]: http://drupal.org/node/2658276
[R4.4-Issue-2658276]: http://drupal.org/node/2658276
[R4.4-Issue-2658366]: http://drupal.org/node/2658366
[R4.4-Issue-2658336]: http://drupal.org/node/2658336
[R4.4-Issue-2657866]: http://drupal.org/node/2657866
[R4.4-Issue-2658376]: http://drupal.org/node/2658376
<!-- Commits R4.4 --> \n
\n <!-- Issues R4.4 --> \n
<!-- Commits R4.3 -->

[R4.3-Commit-145e6bd]: http://drupalcode.org/project/wetkit.git/commit/145e6bd
[R4.3-Commit-c84a8e1]: http://drupalcode.org/project/wetkit.git/commit/c84a8e1
[R4.3-Commit-f65a038]: http://drupalcode.org/project/wetkit.git/commit/f65a038
[R4.3-Commit-887bea7]: http://drupalcode.org/project/wetkit.git/commit/887bea7
[R4.3-Commit-99cce5f]: http://drupalcode.org/project/wetkit.git/commit/99cce5f
[R4.3-Commit-d784bb2]: http://drupalcode.org/project/wetkit.git/commit/d784bb2
[R4.3-Commit-e867374]: http://drupalcode.org/project/wetkit.git/commit/e867374
[R4.3-Commit-4e03add]: http://drupalcode.org/project/wetkit.git/commit/4e03add
[R4.3-Commit-21cc956]: http://drupalcode.org/project/wetkit.git/commit/21cc956
[R4.3-Commit-95e303d]: http://drupalcode.org/project/wetkit.git/commit/95e303d
[R4.3-Commit-fa8eab5]: http://drupalcode.org/project/wetkit.git/commit/fa8eab5
[R4.3-Commit-4d25f0b]: http://drupalcode.org/project/wetkit.git/commit/4d25f0b
[R4.3-Commit-067bf46]: http://drupalcode.org/project/wetkit.git/commit/067bf46

<!-- Issues R4.3 -->

[R4.3-Issue-2654658]: http://drupal.org/node/2654658
[R4.3-Issue-2460833]: http://drupal.org/node/2460833
[R4.3-Issue-2655888]: http://drupal.org/node/2655888
[R4.3-Issue-2615858]: http://drupal.org/node/2615858

<!-- Commits R4.2 -->

[R4.2-Commit-e417990]: http://drupalcode.org/project/wetkit.git/commit/e417990
[R4.2-Commit-8e41fa4]: http://drupalcode.org/project/wetkit.git/commit/8e41fa4
[R4.2-Commit-c8311ba]: http://drupalcode.org/project/wetkit.git/commit/c8311ba
[R4.2-Commit-1396b13]: http://drupalcode.org/project/wetkit.git/commit/1396b13
[R4.2-Commit-066e333]: http://drupalcode.org/project/wetkit.git/commit/066e333
[R4.2-Commit-08c13dd]: http://drupalcode.org/project/wetkit.git/commit/08c13dd
[R4.2-Commit-fe92e2a]: http://drupalcode.org/project/wetkit.git/commit/fe92e2a
[R4.2-Commit-256279a]: http://drupalcode.org/project/wetkit.git/commit/256279a
[R4.2-Commit-e19aa2f]: http://drupalcode.org/project/wetkit.git/commit/e19aa2f
[R4.2-Commit-d28928f]: http://drupalcode.org/project/wetkit.git/commit/d28928f
[R4.2-Commit-ce2cab7]: http://drupalcode.org/project/wetkit.git/commit/ce2cab7
[R4.2-Commit-37ccf89]: http://drupalcode.org/project/wetkit.git/commit/37ccf89
[R4.2-Commit-c66c7a7]: http://drupalcode.org/project/wetkit.git/commit/c66c7a7
[R4.2-Commit-2c02bfd]: http://drupalcode.org/project/wetkit.git/commit/2c02bfd
[R4.2-Commit-8b92a01]: http://drupalcode.org/project/wetkit.git/commit/8b92a01
[R4.2-Commit-edf00f7]: http://drupalcode.org/project/wetkit.git/commit/edf00f7
[R4.2-Commit-5ac7039]: http://drupalcode.org/project/wetkit.git/commit/5ac7039
[R4.2-Commit-86c4326]: http://drupalcode.org/project/wetkit.git/commit/86c4326
[R4.2-Commit-48a8ea0]: http://drupalcode.org/project/wetkit.git/commit/48a8ea0
[R4.2-Commit-ccbe539]: http://drupalcode.org/project/wetkit.git/commit/ccbe539
[R4.2-Commit-45f742e]: http://drupalcode.org/project/wetkit.git/commit/45f742e
[R4.2-Commit-b728630]: http://drupalcode.org/project/wetkit.git/commit/b728630
[R4.2-Commit-9c0cfde]: http://drupalcode.org/project/wetkit.git/commit/9c0cfde
[R4.2-Commit-a0c6855]: http://drupalcode.org/project/wetkit.git/commit/a0c6855
[R4.2-Commit-a2870c3]: http://drupalcode.org/project/wetkit.git/commit/a2870c3
[R4.2-Commit-c7d5fae]: http://drupalcode.org/project/wetkit.git/commit/c7d5fae
[R4.2-Commit-00bfa47]: http://drupalcode.org/project/wetkit.git/commit/00bfa47
[R4.2-Commit-4ac3c4e]: http://drupalcode.org/project/wetkit.git/commit/4ac3c4e
[R4.2-Commit-8eafea2]: http://drupalcode.org/project/wetkit.git/commit/8eafea2
[R4.2-Commit-45d8a9c]: http://drupalcode.org/project/wetkit.git/commit/45d8a9c
[R4.2-Commit-9dd28ec]: http://drupalcode.org/project/wetkit.git/commit/9dd28ec
[R4.2-Commit-15a5529]: http://drupalcode.org/project/wetkit.git/commit/15a5529
[R4.2-Commit-37f6438]: http://drupalcode.org/project/wetkit.git/commit/37f6438
[R4.2-Commit-cbda96a]: http://drupalcode.org/project/wetkit.git/commit/cbda96a
[R4.2-Commit-90a8a25]: http://drupalcode.org/project/wetkit.git/commit/90a8a25
[R4.2-Commit-c5ede7a]: http://drupalcode.org/project/wetkit.git/commit/c5ede7a
[R4.2-Commit-8f497d6]: http://drupalcode.org/project/wetkit.git/commit/8f497d6
[R4.2-Commit-7ccf29f]: http://drupalcode.org/project/wetkit.git/commit/7ccf29f
[R4.2-Commit-6b61c96]: http://drupalcode.org/project/wetkit.git/commit/6b61c96
[R4.2-Commit-493dbf0]: http://drupalcode.org/project/wetkit.git/commit/493dbf0
[R4.2-Commit-5e5f7a8]: http://drupalcode.org/project/wetkit.git/commit/5e5f7a8
[R4.2-Commit-1801de0]: http://drupalcode.org/project/wetkit.git/commit/1801de0
[R4.2-Commit-b91f450]: http://drupalcode.org/project/wetkit.git/commit/b91f450
[R4.2-Commit-437b954]: http://drupalcode.org/project/wetkit.git/commit/437b954
[R4.2-Commit-5d78d11]: http://drupalcode.org/project/wetkit.git/commit/5d78d11
[R4.2-Commit-ac026a2]: http://drupalcode.org/project/wetkit.git/commit/ac026a2
[R4.2-Commit-df93e53]: http://drupalcode.org/project/wetkit.git/commit/df93e53
[R4.2-Commit-b4cb261]: http://drupalcode.org/project/wetkit.git/commit/b4cb261
[R4.2-Commit-c66ae44]: http://drupalcode.org/project/wetkit.git/commit/c66ae44
[R4.2-Commit-6c116a5]: http://drupalcode.org/project/wetkit.git/commit/6c116a5
[R4.2-Commit-263f808]: http://drupalcode.org/project/wetkit.git/commit/263f808
[R4.2-Commit-9d5f614]: http://drupalcode.org/project/wetkit.git/commit/9d5f614
[R4.2-Commit-2686959]: http://drupalcode.org/project/wetkit.git/commit/2686959
[R4.2-Commit-ed53dc1]: http://drupalcode.org/project/wetkit.git/commit/ed53dc1
[R4.2-Commit-a321812]: http://drupalcode.org/project/wetkit.git/commit/a321812
[R4.2-Commit-97140c6]: http://drupalcode.org/project/wetkit.git/commit/97140c6
[R4.2-Commit-4a5b1cc]: http://drupalcode.org/project/wetkit.git/commit/4a5b1cc
[R4.2-Commit-5463abd]: http://drupalcode.org/project/wetkit.git/commit/5463abd
[R4.2-Commit-af7ea91]: http://drupalcode.org/project/wetkit.git/commit/af7ea91
[R4.2-Commit-cc4db9d]: http://drupalcode.org/project/wetkit.git/commit/cc4db9d
[R4.2-Commit-debd83e]: http://drupalcode.org/project/wetkit.git/commit/debd83e
[R4.2-Commit-62944cf]: http://drupalcode.org/project/wetkit.git/commit/62944cf
[R4.2-Commit-3cd83d9]: http://drupalcode.org/project/wetkit.git/commit/3cd83d9
[R4.2-Commit-f171aaa]: http://drupalcode.org/project/wetkit.git/commit/f171aaa
[R4.2-Commit-076fe3a]: http://drupalcode.org/project/wetkit.git/commit/076fe3a
[R4.2-Commit-236e61b]: http://drupalcode.org/project/wetkit.git/commit/236e61b
[R4.2-Commit-951187a]: http://drupalcode.org/project/wetkit.git/commit/951187a
[R4.2-Commit-4850eae]: http://drupalcode.org/project/wetkit.git/commit/4850eae
[R4.2-Commit-ab4e0a4]: http://drupalcode.org/project/wetkit.git/commit/ab4e0a4
[R4.2-Commit-98ff19d]: http://drupalcode.org/project/wetkit.git/commit/98ff19d
[R4.2-Commit-21b17f6]: http://drupalcode.org/project/wetkit.git/commit/21b17f6
[R4.2-Commit-2ac4938]: http://drupalcode.org/project/wetkit.git/commit/2ac4938
[R4.2-Commit-14d379e]: http://drupalcode.org/project/wetkit.git/commit/14d379e
[R4.2-Commit-dc0775d]: http://drupalcode.org/project/wetkit.git/commit/dc0775d
[R4.2-Commit-77ea0ad]: http://drupalcode.org/project/wetkit.git/commit/77ea0ad
[R4.2-Commit-24e3f8f]: http://drupalcode.org/project/wetkit.git/commit/24e3f8f
[R4.2-Commit-3f0f460]: http://drupalcode.org/project/wetkit.git/commit/3f0f460
[R4.2-Commit-5968c7b]: http://drupalcode.org/project/wetkit.git/commit/5968c7b
[R4.2-Commit-c93f112]: http://drupalcode.org/project/wetkit.git/commit/c93f112
[R4.2-Commit-2be065b]: http://drupalcode.org/project/wetkit.git/commit/2be065b
[R4.2-Commit-e497898]: http://drupalcode.org/project/wetkit.git/commit/e497898
[R4.2-Commit-7485743]: http://drupalcode.org/project/wetkit.git/commit/7485743
[R4.2-Commit-351fb22]: http://drupalcode.org/project/wetkit.git/commit/351fb22
[R4.2-Commit-da0347e]: http://drupalcode.org/project/wetkit.git/commit/da0347e
[R4.2-Commit-bedf7d8]: http://drupalcode.org/project/wetkit.git/commit/bedf7d8
[R4.2-Commit-ac632d0]: http://drupalcode.org/project/wetkit.git/commit/ac632d0
[R4.2-Commit-4911597]: http://drupalcode.org/project/wetkit.git/commit/4911597
[R4.2-Commit-9e5b831]: http://drupalcode.org/project/wetkit.git/commit/9e5b831
[R4.2-Commit-6231bf8]: http://drupalcode.org/project/wetkit.git/commit/6231bf8
[R4.2-Commit-69fc91d]: http://drupalcode.org/project/wetkit.git/commit/69fc91d
[R4.2-Commit-abacd8d]: http://drupalcode.org/project/wetkit.git/commit/abacd8d
[R4.2-Commit-ee083e6]: http://drupalcode.org/project/wetkit.git/commit/ee083e6
[R4.2-Commit-b4ae197]: http://drupalcode.org/project/wetkit.git/commit/b4ae197
[R4.2-Commit-9773ceb]: http://drupalcode.org/project/wetkit.git/commit/9773ceb
[R4.2-Commit-20a3722]: http://drupalcode.org/project/wetkit.git/commit/20a3722
[R4.2-Commit-b86e765]: http://drupalcode.org/project/wetkit.git/commit/b86e765
[R4.2-Commit-25201b0]: http://drupalcode.org/project/wetkit.git/commit/25201b0
[R4.2-Commit-5732c55]: http://drupalcode.org/project/wetkit.git/commit/5732c55
[R4.2-Commit-440a253]: http://drupalcode.org/project/wetkit.git/commit/440a253
[R4.2-Commit-a076436]: http://drupalcode.org/project/wetkit.git/commit/a076436
[R4.2-Commit-e948ed3]: http://drupalcode.org/project/wetkit.git/commit/e948ed3
[R4.2-Commit-50d715c]: http://drupalcode.org/project/wetkit.git/commit/50d715c
[R4.2-Commit-29bea63]: http://drupalcode.org/project/wetkit.git/commit/29bea63
[R4.2-Commit-3a1f7af]: http://drupalcode.org/project/wetkit.git/commit/3a1f7af
[R4.2-Commit-d28e869]: http://drupalcode.org/project/wetkit.git/commit/d28e869
[R4.2-Commit-03cb015]: http://drupalcode.org/project/wetkit.git/commit/03cb015
[R4.2-Commit-2f6e226]: http://drupalcode.org/project/wetkit.git/commit/2f6e226
[R4.2-Commit-e22cd6b]: http://drupalcode.org/project/wetkit.git/commit/e22cd6b
[R4.2-Commit-cd74a9a]: http://drupalcode.org/project/wetkit.git/commit/cd74a9a
[R4.2-Commit-f3e6337]: http://drupalcode.org/project/wetkit.git/commit/f3e6337
[R4.2-Commit-f61a48f]: http://drupalcode.org/project/wetkit.git/commit/f61a48f
[R4.2-Commit-6ffda5c]: http://drupalcode.org/project/wetkit.git/commit/6ffda5c
[R4.2-Commit-5cc787f]: http://drupalcode.org/project/wetkit.git/commit/5cc787f
[R4.2-Commit-47696c6]: http://drupalcode.org/project/wetkit.git/commit/47696c6
[R4.2-Commit-73ac8bd]: http://drupalcode.org/project/wetkit.git/commit/73ac8bd
[R4.2-Commit-bac7c98]: http://drupalcode.org/project/wetkit.git/commit/bac7c98
[R4.2-Commit-1d8e887]: http://drupalcode.org/project/wetkit.git/commit/1d8e887
[R4.2-Commit-9641160]: http://drupalcode.org/project/wetkit.git/commit/9641160
[R4.2-Commit-33179df]: http://drupalcode.org/project/wetkit.git/commit/33179df
[R4.2-Commit-b8354cd]: http://drupalcode.org/project/wetkit.git/commit/b8354cd
[R4.2-Commit-98c354b]: http://drupalcode.org/project/wetkit.git/commit/98c354b
[R4.2-Commit-f87a31d]: http://drupalcode.org/project/wetkit.git/commit/f87a31d
[R4.2-Commit-f005858]: http://drupalcode.org/project/wetkit.git/commit/f005858
[R4.2-Commit-ee28025]: http://drupalcode.org/project/wetkit.git/commit/ee28025
[R4.2-Commit-6e47c3e]: http://drupalcode.org/project/wetkit.git/commit/6e47c3e
[R4.2-Commit-2a9561e]: http://drupalcode.org/project/wetkit.git/commit/2a9561e
[R4.2-Commit-21fa3c8]: http://drupalcode.org/project/wetkit.git/commit/21fa3c8
[R4.2-Commit-5b9be71]: http://drupalcode.org/project/wetkit.git/commit/5b9be71
[R4.2-Commit-7900382]: http://drupalcode.org/project/wetkit.git/commit/7900382
[R4.2-Commit-f0cee56]: http://drupalcode.org/project/wetkit.git/commit/f0cee56
[R4.2-Commit-c14d4b7]: http://drupalcode.org/project/wetkit.git/commit/c14d4b7
[R4.2-Commit-8eae1cc]: http://drupalcode.org/project/wetkit.git/commit/8eae1cc
[R4.2-Commit-4ea1302]: http://drupalcode.org/project/wetkit.git/commit/4ea1302
[R4.2-Commit-0b70f83]: http://drupalcode.org/project/wetkit.git/commit/0b70f83
[R4.2-Commit-5f32c7b]: http://drupalcode.org/project/wetkit.git/commit/5f32c7b
[R4.2-Commit-90fccc8]: http://drupalcode.org/project/wetkit.git/commit/90fccc8
[R4.2-Commit-e262d50]: http://drupalcode.org/project/wetkit.git/commit/e262d50
[R4.2-Commit-febd37a]: http://drupalcode.org/project/wetkit.git/commit/febd37a
[R4.2-Commit-b734ff6]: http://drupalcode.org/project/wetkit.git/commit/b734ff6
[R4.2-Commit-8d1274a]: http://drupalcode.org/project/wetkit.git/commit/8d1274a
[R4.2-Commit-7fee403]: http://drupalcode.org/project/wetkit.git/commit/7fee403
[R4.2-Commit-40e59e7]: http://drupalcode.org/project/wetkit.git/commit/40e59e7
[R4.2-Commit-ecb55b2]: http://drupalcode.org/project/wetkit.git/commit/ecb55b2
[R4.2-Commit-c0e41b6]: http://drupalcode.org/project/wetkit.git/commit/c0e41b6
[R4.2-Commit-ec8e3a9]: http://drupalcode.org/project/wetkit.git/commit/ec8e3a9
[R4.2-Commit-0dcdd05]: http://drupalcode.org/project/wetkit.git/commit/0dcdd05
[R4.2-Commit-d30a0e9]: http://drupalcode.org/project/wetkit.git/commit/d30a0e9
[R4.2-Commit-646f637]: http://drupalcode.org/project/wetkit.git/commit/646f637
[R4.2-Commit-92baa52]: http://drupalcode.org/project/wetkit.git/commit/92baa52
[R4.2-Commit-0eaa5e3]: http://drupalcode.org/project/wetkit.git/commit/0eaa5e3
[R4.2-Commit-2c6800f]: http://drupalcode.org/project/wetkit.git/commit/2c6800f
[R4.2-Commit-57e4b8b]: http://drupalcode.org/project/wetkit.git/commit/57e4b8b
[R4.2-Commit-f80d45a]: http://drupalcode.org/project/wetkit.git/commit/f80d45a
[R4.2-Commit-6d39701]: http://drupalcode.org/project/wetkit.git/commit/6d39701
[R4.2-Commit-2ca263a]: http://drupalcode.org/project/wetkit.git/commit/2ca263a
[R4.2-Commit-5b9927c]: http://drupalcode.org/project/wetkit.git/commit/5b9927c
[R4.2-Commit-6dcf312]: http://drupalcode.org/project/wetkit.git/commit/6dcf312
[R4.2-Commit-70b3c10]: http://drupalcode.org/project/wetkit.git/commit/70b3c10
[R4.2-Commit-3b7a137]: http://drupalcode.org/project/wetkit.git/commit/3b7a137
[R4.2-Commit-9bd446e]: http://drupalcode.org/project/wetkit.git/commit/9bd446e
[R4.2-Commit-52b7a22]: http://drupalcode.org/project/wetkit.git/commit/52b7a22
[R4.2-Commit-c7278b1]: http://drupalcode.org/project/wetkit.git/commit/c7278b1
[R4.2-Commit-84a7a9b]: http://drupalcode.org/project/wetkit.git/commit/84a7a9b
[R4.2-Commit-041b225]: http://drupalcode.org/project/wetkit.git/commit/041b225
[R4.2-Commit-35b720c]: http://drupalcode.org/project/wetkit.git/commit/35b720c
[R4.2-Commit-88e61d9]: http://drupalcode.org/project/wetkit.git/commit/88e61d9
[R4.2-Commit-16a7f29]: http://drupalcode.org/project/wetkit.git/commit/16a7f29
[R4.2-Commit-dbc7c7c]: http://drupalcode.org/project/wetkit.git/commit/dbc7c7c
[R4.2-Commit-be2f1f5]: http://drupalcode.org/project/wetkit.git/commit/be2f1f5
[R4.2-Commit-fbaec3d]: http://drupalcode.org/project/wetkit.git/commit/fbaec3d
[R4.2-Commit-b2b9f20]: http://drupalcode.org/project/wetkit.git/commit/b2b9f20
[R4.2-Commit-2b3de32]: http://drupalcode.org/project/wetkit.git/commit/2b3de32
[R4.2-Commit-3f717fc]: http://drupalcode.org/project/wetkit.git/commit/3f717fc
[R4.2-Commit-2e0ce16]: http://drupalcode.org/project/wetkit.git/commit/2e0ce16
[R4.2-Commit-c0afa16]: http://drupalcode.org/project/wetkit.git/commit/c0afa16
[R4.2-Commit-a2a4847]: http://drupalcode.org/project/wetkit.git/commit/a2a4847
[R4.2-Commit-3d16cfc]: http://drupalcode.org/project/wetkit.git/commit/3d16cfc
[R4.2-Commit-b4a1c0b]: http://drupalcode.org/project/wetkit.git/commit/b4a1c0b
[R4.2-Commit-f361675]: http://drupalcode.org/project/wetkit.git/commit/f361675
[R4.2-Commit-d648dff]: http://drupalcode.org/project/wetkit.git/commit/d648dff
[R4.2-Commit-4a69a39]: http://drupalcode.org/project/wetkit.git/commit/4a69a39
[R4.2-Commit-2950069]: http://drupalcode.org/project/wetkit.git/commit/2950069
[R4.2-Commit-12af774]: http://drupalcode.org/project/wetkit.git/commit/12af774
[R4.2-Commit-0031f8d]: http://drupalcode.org/project/wetkit.git/commit/0031f8d
[R4.2-Commit-2dfa74a]: http://drupalcode.org/project/wetkit.git/commit/2dfa74a
[R4.2-Commit-db4b89f]: http://drupalcode.org/project/wetkit.git/commit/db4b89f
[R4.2-Commit-b271cb1]: http://drupalcode.org/project/wetkit.git/commit/b271cb1
[R4.2-Commit-7b8a9fa]: http://drupalcode.org/project/wetkit.git/commit/7b8a9fa
[R4.2-Commit-5d33257]: http://drupalcode.org/project/wetkit.git/commit/5d33257
[R4.2-Commit-bc00210]: http://drupalcode.org/project/wetkit.git/commit/bc00210
[R4.2-Commit-fbfcada]: http://drupalcode.org/project/wetkit.git/commit/fbfcada
[R4.2-Commit-30f90f6]: http://drupalcode.org/project/wetkit.git/commit/30f90f6
[R4.2-Commit-3178307]: http://drupalcode.org/project/wetkit.git/commit/3178307
[R4.2-Commit-e042e47]: http://drupalcode.org/project/wetkit.git/commit/e042e47
[R4.2-Commit-dd46bc2]: http://drupalcode.org/project/wetkit.git/commit/dd46bc2

<!-- Issues R4.2 -->

[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2638916]: http://drupal.org/node/2638916
[R4.2-Issue-2635876]: http://drupal.org/node/2635876
[R4.2-Issue-1344672]: http://drupal.org/node/1344672
[R4.2-Issue-2615858]: http://drupal.org/node/2615858
[R4.2-Issue-2649916]: http://drupal.org/node/2649916
[R4.2-Issue-2649916]: http://drupal.org/node/2649916
[R4.2-Issue-2614240]: http://drupal.org/node/2614240
[R4.2-Issue-2635876]: http://drupal.org/node/2635876
[R4.2-Issue-2647048]: http://drupal.org/node/2647048
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2644630]: http://drupal.org/node/2644630
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2556733]: http://drupal.org/node/2556733
[R4.2-Issue-2628456]: http://drupal.org/node/2628456
[R4.2-Issue-2635072]: http://drupal.org/node/2635072
[R4.2-Issue-2635072]: http://drupal.org/node/2635072
[R4.2-Issue-2638916]: http://drupal.org/node/2638916
[R4.2-Issue-2638916]: http://drupal.org/node/2638916
[R4.2-Issue-2638916]: http://drupal.org/node/2638916
[R4.2-Issue-2638916]: http://drupal.org/node/2638916
[R4.2-Issue-2635072]: http://drupal.org/node/2635072
[R4.2-Issue-2638868]: http://drupal.org/node/2638868
[R4.2-Issue-2638446]: http://drupal.org/node/2638446
[R4.2-Issue-2626830]: http://drupal.org/node/2626830
[R4.2-Issue-2637340]: http://drupal.org/node/2637340
[R4.2-Issue-2637324]: http://drupal.org/node/2637324
[R4.2-Issue-2627812]: http://drupal.org/node/2627812
[R4.2-Issue-2627812]: http://drupal.org/node/2627812
[R4.2-Issue-2635054]: http://drupal.org/node/2635054
[R4.2-Issue-2631348]: http://drupal.org/node/2631348
[R4.2-Issue-2635106]: http://drupal.org/node/2635106
[R4.2-Issue-2635106]: http://drupal.org/node/2635106
[R4.2-Issue-2634328]: http://drupal.org/node/2634328
[R4.2-Issue-2634328]: http://drupal.org/node/2634328
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2630538]: http://drupal.org/node/2630538
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2633456]: http://drupal.org/node/2633456
[R4.2-Issue-2632736]: http://drupal.org/node/2632736
[R4.2-Issue-2630504]: http://drupal.org/node/2630504
[R4.2-Issue-2629996]: http://drupal.org/node/2629996
[R4.2-Issue-2628538]: http://drupal.org/node/2628538
[R4.2-Issue-2628538]: http://drupal.org/node/2628538
[R4.2-Issue-2629958]: http://drupal.org/node/2629958
[R4.2-Issue-2629092]: http://drupal.org/node/2629092
[R4.2-Issue-2628698]: http://drupal.org/node/2628698
[R4.2-Issue-2557061]: http://drupal.org/node/2557061
[R4.2-Issue-2528736]: http://drupal.org/node/2528736
[R4.2-Issue-2628456]: http://drupal.org/node/2628456
[R4.2-Issue-2628394]: http://drupal.org/node/2628394
[R4.2-Issue-2628394]: http://drupal.org/node/2628394
[R4.2-Issue-2628370]: http://drupal.org/node/2628370
[R4.2-Issue-2628380]: http://drupal.org/node/2628380
[R4.2-Issue-2628254]: http://drupal.org/node/2628254
[R4.2-Issue-2628240]: http://drupal.org/node/2628240
[R4.2-Issue-2627812]: http://drupal.org/node/2627812
[R4.2-Issue-2627756]: http://drupal.org/node/2627756
[R4.2-Issue-2617966]: http://drupal.org/node/2617966
[R4.2-Issue-2627614]: http://drupal.org/node/2627614
[R4.2-Issue-2627392]: http://drupal.org/node/2627392
[R4.2-Issue-2626830]: http://drupal.org/node/2626830
[R4.2-Issue-2623858]: http://drupal.org/node/2623858
[R4.2-Issue-2625780]: http://drupal.org/node/2625780
[R4.2-Issue-2625316]: http://drupal.org/node/2625316
[R4.2-Issue-2625308]: http://drupal.org/node/2625308
[R4.2-Issue-2624520]: http://drupal.org/node/2624520
[R4.2-Issue-2624456]: http://drupal.org/node/2624456
[R4.2-Issue-2624456]: http://drupal.org/node/2624456
[R4.2-Issue-2624456]: http://drupal.org/node/2624456

<!-- Commits R4.1 -->

[R4.1-Commit-725b2c2]: http://drupalcode.org/project/wetkit.git/commit/725b2c2
[R4.1-Commit-263058e]: http://drupalcode.org/project/wetkit.git/commit/263058e
[R4.1-Commit-77ac467]: http://drupalcode.org/project/wetkit.git/commit/77ac467
[R4.1-Commit-5759ff7]: http://drupalcode.org/project/wetkit.git/commit/5759ff7
[R4.1-Commit-4bd25db]: http://drupalcode.org/project/wetkit.git/commit/4bd25db
[R4.1-Commit-779dd53]: http://drupalcode.org/project/wetkit.git/commit/779dd53
[R4.1-Commit-b2dcea0]: http://drupalcode.org/project/wetkit.git/commit/b2dcea0
[R4.1-Commit-e119bc9]: http://drupalcode.org/project/wetkit.git/commit/e119bc9
[R4.1-Commit-558fae8]: http://drupalcode.org/project/wetkit.git/commit/558fae8
[R4.1-Commit-f871102]: http://drupalcode.org/project/wetkit.git/commit/f871102
[R4.1-Commit-05fb6a6]: http://drupalcode.org/project/wetkit.git/commit/05fb6a6
[R4.1-Commit-8faaf9b]: http://drupalcode.org/project/wetkit.git/commit/8faaf9b
[R4.1-Commit-de7f6d8]: http://drupalcode.org/project/wetkit.git/commit/de7f6d8
[R4.1-Commit-696a311]: http://drupalcode.org/project/wetkit.git/commit/696a311
[R4.1-Commit-7a54af8]: http://drupalcode.org/project/wetkit.git/commit/7a54af8
[R4.1-Commit-c7e13ce]: http://drupalcode.org/project/wetkit.git/commit/c7e13ce
[R4.1-Commit-05aa4d8]: http://drupalcode.org/project/wetkit.git/commit/05aa4d8
[R4.1-Commit-f393fbd]: http://drupalcode.org/project/wetkit.git/commit/f393fbd
[R4.1-Commit-a68fce4]: http://drupalcode.org/project/wetkit.git/commit/a68fce4
[R4.1-Commit-501ca5c]: http://drupalcode.org/project/wetkit.git/commit/501ca5c
[R4.1-Commit-78b396d]: http://drupalcode.org/project/wetkit.git/commit/78b396d
[R4.1-Commit-3ff027b]: http://drupalcode.org/project/wetkit.git/commit/3ff027b
[R4.1-Commit-2e94132]: http://drupalcode.org/project/wetkit.git/commit/2e94132
[R4.1-Commit-6c5adfc]: http://drupalcode.org/project/wetkit.git/commit/6c5adfc
[R4.1-Commit-72e0097]: http://drupalcode.org/project/wetkit.git/commit/72e0097
[R4.1-Commit-553a860]: http://drupalcode.org/project/wetkit.git/commit/553a860
[R4.1-Commit-1ecf9ae]: http://drupalcode.org/project/wetkit.git/commit/1ecf9ae
[R4.1-Commit-b5aeecb]: http://drupalcode.org/project/wetkit.git/commit/b5aeecb
[R4.1-Commit-85d2dee]: http://drupalcode.org/project/wetkit.git/commit/85d2dee
[R4.1-Commit-a7cf1cb]: http://drupalcode.org/project/wetkit.git/commit/a7cf1cb
[R4.1-Commit-25581dc]: http://drupalcode.org/project/wetkit.git/commit/25581dc
[R4.1-Commit-f41a01a]: http://drupalcode.org/project/wetkit.git/commit/f41a01a
[R4.1-Commit-12c6eb7]: http://drupalcode.org/project/wetkit.git/commit/12c6eb7
[R4.1-Commit-002a0b2]: http://drupalcode.org/project/wetkit.git/commit/002a0b2
[R4.1-Commit-aa0ffe2]: http://drupalcode.org/project/wetkit.git/commit/aa0ffe2
[R4.1-Commit-e343da6]: http://drupalcode.org/project/wetkit.git/commit/e343da6
[R4.1-Commit-f825cd4]: http://drupalcode.org/project/wetkit.git/commit/f825cd4
[R4.1-Commit-227d548]: http://drupalcode.org/project/wetkit.git/commit/227d548
[R4.1-Commit-96cc861]: http://drupalcode.org/project/wetkit.git/commit/96cc861
[R4.1-Commit-f12cd58]: http://drupalcode.org/project/wetkit.git/commit/f12cd58
[R4.1-Commit-eadc9de]: http://drupalcode.org/project/wetkit.git/commit/eadc9de
[R4.1-Commit-f0da4c8]: http://drupalcode.org/project/wetkit.git/commit/f0da4c8
[R4.1-Commit-40d68b4]: http://drupalcode.org/project/wetkit.git/commit/40d68b4
[R4.1-Commit-deded82]: http://drupalcode.org/project/wetkit.git/commit/deded82
[R4.1-Commit-27df9aa]: http://drupalcode.org/project/wetkit.git/commit/27df9aa
[R4.1-Commit-efa71ea]: http://drupalcode.org/project/wetkit.git/commit/efa71ea
[R4.1-Commit-481a330]: http://drupalcode.org/project/wetkit.git/commit/481a330
[R4.1-Commit-af39a5b]: http://drupalcode.org/project/wetkit.git/commit/af39a5b
[R4.1-Commit-b379dfd]: http://drupalcode.org/project/wetkit.git/commit/b379dfd
[R4.1-Commit-78253a7]: http://drupalcode.org/project/wetkit.git/commit/78253a7

<!-- Issues R4.1 -->

[R4.1-Issue-2622202]: http://drupal.org/node/2622202
[R4.1-Issue-2621604]: http://drupal.org/node/2621604
[R4.1-Issue-2619078]: http://drupal.org/node/2619078
[R4.1-Issue-2622216]: http://drupal.org/node/2622216
[R4.1-Issue-2619268]: http://drupal.org/node/2619268
[R4.1-Issue-2621604]: http://drupal.org/node/2621604
[R4.1-Issue-2617576]: http://drupal.org/node/2617576
[R4.1-Issue-2434461]: http://drupal.org/node/2434461
[R4.1-Issue-2617408]: http://drupal.org/node/2617408
[R4.1-Issue-2357309]: http://drupal.org/node/2357309
[R4.1-Issue-2485817]: http://drupal.org/node/2485817
[R4.1-Issue-2485817]: http://drupal.org/node/2485817
[R4.1-Issue-2485817]: http://drupal.org/node/2485817
[R4.1-Issue-2615858]: http://drupal.org/node/2615858
[R4.1-Issue-2594333]: http://drupal.org/node/2594333
[R4.1-Issue-2590817]: http://drupal.org/node/2590817
[R4.1-Issue-2590491]: http://drupal.org/node/2590491
[R4.1-Issue-2590491]: http://drupal.org/node/2590491
[R4.1-Issue-2590491]: http://drupal.org/node/2590491
[R4.1-Issue-2590491]: http://drupal.org/node/2590491
[R4.1-Issue-2606628]: http://drupal.org/node/2606628
[R4.1-Issue-2382607]: http://drupal.org/node/2382607
[R4.1-Issue-2615018]: http://drupal.org/node/2615018
[R4.1-Issue-2615018]: http://drupal.org/node/2615018
[R4.1-Issue-2604368]: http://drupal.org/node/2604368
[R4.1-Issue-2610244]: http://drupal.org/node/2610244
[R4.1-Issue-2585085]: http://drupal.org/node/2585085
[R4.1-Issue-2610234]: http://drupal.org/node/2610234

<!-- Commits R4.0-rc4 -->

[R4.0-Commit-63a66ed]: http://drupalcode.org/project/wetkit.git/commit/63a66ed
[R4.0-Commit-69271e7]: http://drupalcode.org/project/wetkit.git/commit/69271e7
[R4.0-Commit-5aaeabb]: http://drupalcode.org/project/wetkit.git/commit/5aaeabb
[R4.0-Commit-bbf9cdc]: http://drupalcode.org/project/wetkit.git/commit/bbf9cdc
[R4.0-Commit-48449d3]: http://drupalcode.org/project/wetkit.git/commit/48449d3
[R4.0-Commit-6fe88f9]: http://drupalcode.org/project/wetkit.git/commit/6fe88f9
[R4.0-Commit-e8658ee]: http://drupalcode.org/project/wetkit.git/commit/e8658ee
[R4.0-Commit-c4b2409]: http://drupalcode.org/project/wetkit.git/commit/c4b2409
[R4.0-Commit-d54873a]: http://drupalcode.org/project/wetkit.git/commit/d54873a
[R4.0-Commit-94441ff]: http://drupalcode.org/project/wetkit.git/commit/94441ff
[R4.0-Commit-91c97c3]: http://drupalcode.org/project/wetkit.git/commit/91c97c3
[R4.0-Commit-4fcca9b]: http://drupalcode.org/project/wetkit.git/commit/4fcca9b
[R4.0-Commit-a72e325]: http://drupalcode.org/project/wetkit.git/commit/a72e325
[R4.0-Commit-a86ce5b]: http://drupalcode.org/project/wetkit.git/commit/a86ce5b
[R4.0-Commit-bda15d7]: http://drupalcode.org/project/wetkit.git/commit/bda15d7
[R4.0-Commit-b3ba849]: http://drupalcode.org/project/wetkit.git/commit/b3ba849
[R4.0-Commit-d460ea1]: http://drupalcode.org/project/wetkit.git/commit/d460ea1
[R4.0-Commit-f2ca88b]: http://drupalcode.org/project/wetkit.git/commit/f2ca88b
[R4.0-Commit-70fcf54]: http://drupalcode.org/project/wetkit.git/commit/70fcf54
[R4.0-Commit-8c8658e]: http://drupalcode.org/project/wetkit.git/commit/8c8658e
[R4.0-Commit-a4bc93e]: http://drupalcode.org/project/wetkit.git/commit/a4bc93e
[R4.0-Commit-ca52b4d]: http://drupalcode.org/project/wetkit.git/commit/ca52b4d
[R4.0-Commit-924e38b]: http://drupalcode.org/project/wetkit.git/commit/924e38b
[R4.0-Commit-6aa07b4]: http://drupalcode.org/project/wetkit.git/commit/6aa07b4
[R4.0-Commit-02e9a54]: http://drupalcode.org/project/wetkit.git/commit/02e9a54
[R4.0-Commit-71eb62e]: http://drupalcode.org/project/wetkit.git/commit/71eb62e
[R4.0-Commit-4552c97]: http://drupalcode.org/project/wetkit.git/commit/4552c97
[R4.0-Commit-0f57ad1]: http://drupalcode.org/project/wetkit.git/commit/0f57ad1
[R4.0-Commit-2d81cd8]: http://drupalcode.org/project/wetkit.git/commit/2d81cd8
[R4.0-Commit-6ac9910]: http://drupalcode.org/project/wetkit.git/commit/6ac9910
[R4.0-Commit-c24d69a]: http://drupalcode.org/project/wetkit.git/commit/c24d69a
[R4.0-Commit-06b368b]: http://drupalcode.org/project/wetkit.git/commit/06b368b
[R4.0-Commit-f4a45c1]: http://drupalcode.org/project/wetkit.git/commit/f4a45c1
[R4.0-Commit-7be7109]: http://drupalcode.org/project/wetkit.git/commit/7be7109
[R4.0-Commit-e5c7ff6]: http://drupalcode.org/project/wetkit.git/commit/e5c7ff6
[R4.0-Commit-9dacd97]: http://drupalcode.org/project/wetkit.git/commit/9dacd97
[R4.0-Commit-95c6142]: http://drupalcode.org/project/wetkit.git/commit/95c6142
[R4.0-Commit-433268f]: http://drupalcode.org/project/wetkit.git/commit/433268f
[R4.0-Commit-f789153]: http://drupalcode.org/project/wetkit.git/commit/f789153
[R4.0-Commit-007b8f6]: http://drupalcode.org/project/wetkit.git/commit/007b8f6
[R4.0-Commit-2eec764]: http://drupalcode.org/project/wetkit.git/commit/2eec764
[R4.0-Commit-b924771]: http://drupalcode.org/project/wetkit.git/commit/b924771
[R4.0-Commit-404b134]: http://drupalcode.org/project/wetkit.git/commit/404b134
[R4.0-Commit-a03f686]: http://drupalcode.org/project/wetkit.git/commit/a03f686
[R4.0-Commit-db2fee8]: http://drupalcode.org/project/wetkit.git/commit/db2fee8
[R4.0-Commit-6138a92]: http://drupalcode.org/project/wetkit.git/commit/6138a92
[R4.0-Commit-d05f692]: http://drupalcode.org/project/wetkit.git/commit/d05f692
[R4.0-Commit-df13772]: http://drupalcode.org/project/wetkit.git/commit/df13772
[R4.0-Commit-cdcb1e7]: http://drupalcode.org/project/wetkit.git/commit/cdcb1e7
[R4.0-Commit-d9478cc]: http://drupalcode.org/project/wetkit.git/commit/d9478cc
[R4.0-Commit-5077e02]: http://drupalcode.org/project/wetkit.git/commit/5077e02
[R4.0-Commit-23676ea]: http://drupalcode.org/project/wetkit.git/commit/23676ea
[R4.0-Commit-0c42ca1]: http://drupalcode.org/project/wetkit.git/commit/0c42ca1
[R4.0-Commit-1e2393e]: http://drupalcode.org/project/wetkit.git/commit/1e2393e
[R4.0-Commit-346287c]: http://drupalcode.org/project/wetkit.git/commit/346287c
[R4.0-Commit-8155b24]: http://drupalcode.org/project/wetkit.git/commit/8155b24
[R4.0-Commit-a58f40b]: http://drupalcode.org/project/wetkit.git/commit/a58f40b
[R4.0-Commit-d6ef695]: http://drupalcode.org/project/wetkit.git/commit/d6ef695
[R4.0-Commit-de67c6a]: http://drupalcode.org/project/wetkit.git/commit/de67c6a
[R4.0-Commit-30cc8c6]: http://drupalcode.org/project/wetkit.git/commit/30cc8c6
[R4.0-Commit-5c95841]: http://drupalcode.org/project/wetkit.git/commit/5c95841
[R4.0-Commit-0fc3209]: http://drupalcode.org/project/wetkit.git/commit/0fc3209
[R4.0-Commit-8f4b480]: http://drupalcode.org/project/wetkit.git/commit/8f4b480
[R4.0-Commit-fc616ef]: http://drupalcode.org/project/wetkit.git/commit/fc616ef
[R4.0-Commit-2f5876c]: http://drupalcode.org/project/wetkit.git/commit/2f5876c
[R4.0-Commit-26f1f2e]: http://drupalcode.org/project/wetkit.git/commit/26f1f2e
[R4.0-Commit-f5200cb]: http://drupalcode.org/project/wetkit.git/commit/f5200cb
[R4.0-Commit-10a7e17]: http://drupalcode.org/project/wetkit.git/commit/10a7e17
[R4.0-Commit-e2e77b5]: http://drupalcode.org/project/wetkit.git/commit/e2e77b5
[R4.0-Commit-c393d01]: http://drupalcode.org/project/wetkit.git/commit/c393d01
[R4.0-Commit-79ccde3]: http://drupalcode.org/project/wetkit.git/commit/79ccde3
[R4.0-Commit-edf4f50]: http://drupalcode.org/project/wetkit.git/commit/edf4f50
[R4.0-Commit-f5c752b]: http://drupalcode.org/project/wetkit.git/commit/f5c752b
[R4.0-Commit-b202d0f]: http://drupalcode.org/project/wetkit.git/commit/b202d0f
[R4.0-Commit-e76160e]: http://drupalcode.org/project/wetkit.git/commit/e76160e
[R4.0-Commit-ba1fb3b]: http://drupalcode.org/project/wetkit.git/commit/ba1fb3b
[R4.0-Commit-52f222f]: http://drupalcode.org/project/wetkit.git/commit/52f222f
[R4.0-Commit-c963619]: http://drupalcode.org/project/wetkit.git/commit/c963619
[R4.0-Commit-31be88b]: http://drupalcode.org/project/wetkit.git/commit/31be88b
[R4.0-Commit-6f00347]: http://drupalcode.org/project/wetkit.git/commit/6f00347
[R4.0-Commit-69b5932]: http://drupalcode.org/project/wetkit.git/commit/69b5932
[R4.0-Commit-2ae7cab]: http://drupalcode.org/project/wetkit.git/commit/2ae7cab

<!-- Issues R4.0-rc4 -->

[R4.0-Issue-2576461]: http://drupal.org/node/2576461
[R4.0-Issue-2556745]: http://drupal.org/node/2556745
[R4.0-Issue-2573945]: http://drupal.org/node/2573945
[R4.0-Issue-2574027]: http://drupal.org/node/2574027
[R4.0-Issue-2339447]: http://drupal.org/node/2339447
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2570419]: http://drupal.org/node/2570419
[R4.0-Issue-2569025]: http://drupal.org/node/2569025
[R4.0-Issue-2567879]: http://drupal.org/node/2567879
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2567879]: http://drupal.org/node/2567879
[R4.0-Issue-2567875]: http://drupal.org/node/2567875
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2560649]: http://drupal.org/node/2560649
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2566663]: http://drupal.org/node/2566663
[R4.0-Issue-2566659]: http://drupal.org/node/2566659
[R4.0-Issue-2566657]: http://drupal.org/node/2566657
[R4.0-Issue-2325495]: http://drupal.org/node/2325495
[R4.0-Issue-2325495]: http://drupal.org/node/2325495
[R4.0-Issue-2563779]: http://drupal.org/node/2563779
[R4.0-Issue-2528658]: http://drupal.org/node/2528658
[R4.0-Issue-2563779]: http://drupal.org/node/2563779
[R4.0-Issue-2537314]: http://drupal.org/node/2537314
[R4.0-Issue-2563251]: http://drupal.org/node/2563251
[R4.0-Issue-2537802]: http://drupal.org/node/2537802
[R4.0-Issue-2555451]: http://drupal.org/node/2555451
[R4.0-Issue-2556759]: http://drupal.org/node/2556759
[R4.0-Issue-2557443]: http://drupal.org/node/2557443
[R4.0-Issue-2557443]: http://drupal.org/node/2557443

<!-- Commits R4.0-rc3 -->

[R4.0-rc3-Commit-7168c0c]: http://drupalcode.org/project/wetkit.git/commit/7168c0c
[R4.0-rc3-Commit-4fa3d0f]: http://drupalcode.org/project/wetkit.git/commit/4fa3d0f
[R4.0-rc3-Commit-cc16c08]: http://drupalcode.org/project/wetkit.git/commit/cc16c08
[R4.0-rc3-Commit-b432db8]: http://drupalcode.org/project/wetkit.git/commit/b432db8
[R4.0-rc3-Commit-528a768]: http://drupalcode.org/project/wetkit.git/commit/528a768
[R4.0-rc3-Commit-653578c]: http://drupalcode.org/project/wetkit.git/commit/653578c
[R4.0-rc3-Commit-d4d626c]: http://drupalcode.org/project/wetkit.git/commit/d4d626c
[R4.0-rc3-Commit-fe457a5]: http://drupalcode.org/project/wetkit.git/commit/fe457a5
[R4.0-rc3-Commit-97b5b17]: http://drupalcode.org/project/wetkit.git/commit/97b5b17
[R4.0-rc3-Commit-91d8029]: http://drupalcode.org/project/wetkit.git/commit/91d8029
[R4.0-rc3-Commit-942a08b]: http://drupalcode.org/project/wetkit.git/commit/942a08b
[R4.0-rc3-Commit-65d9136]: http://drupalcode.org/project/wetkit.git/commit/65d9136
[R4.0-rc3-Commit-8c56ad2]: http://drupalcode.org/project/wetkit.git/commit/8c56ad2
[R4.0-rc3-Commit-bdfafc6]: http://drupalcode.org/project/wetkit.git/commit/bdfafc6

<!-- Issues R4.0-rc3 -->

[R4.0-rc3-Issue-2554209]: http://drupal.org/node/2554209
[R4.0-rc3-Issue-2554195]: http://drupal.org/node/2554195
[R4.0-rc3-Issue-2298877]: http://drupal.org/node/2298877
[R4.0-rc3-Issue-2547781]: http://drupal.org/node/2547781
[R4.0-rc3-Issue-2552591]: http://drupal.org/node/2552591
[R4.0-rc3-Issue-2552591]: http://drupal.org/node/2552591
[R4.0-rc3-Issue-2545682]: http://drupal.org/node/2545682

<!-- Commits R4.0-rc2 -->

[R4.0-rc2-Commit-0e3f6cf]: http://drupalcode.org/project/wetkit.git/commit/0e3f6cf
[R4.0-rc2-Commit-0ca5816]: http://drupalcode.org/project/wetkit.git/commit/0ca5816
[R4.0-rc2-Commit-1ef9c25]: http://drupalcode.org/project/wetkit.git/commit/1ef9c25
[R4.0-rc2-Commit-fff836e]: http://drupalcode.org/project/wetkit.git/commit/fff836e
[R4.0-rc2-Commit-f2f434c]: http://drupalcode.org/project/wetkit.git/commit/f2f434c
[R4.0-rc2-Commit-b4c747d]: http://drupalcode.org/project/wetkit.git/commit/b4c747d
[R4.0-rc2-Commit-bde68fc]: http://drupalcode.org/project/wetkit.git/commit/bde68fc
[R4.0-rc2-Commit-bb9754f]: http://drupalcode.org/project/wetkit.git/commit/bb9754f
[R4.0-rc2-Commit-763a107]: http://drupalcode.org/project/wetkit.git/commit/763a107
[R4.0-rc2-Commit-bb4cfc8]: http://drupalcode.org/project/wetkit.git/commit/bb4cfc8
[R4.0-rc2-Commit-d1fd844]: http://drupalcode.org/project/wetkit.git/commit/d1fd844
[R4.0-rc2-Commit-716ea83]: http://drupalcode.org/project/wetkit.git/commit/716ea83
[R4.0-rc2-Commit-a9f0e4d]: http://drupalcode.org/project/wetkit.git/commit/a9f0e4d
[R4.0-rc2-Commit-f8f44f5]: http://drupalcode.org/project/wetkit.git/commit/f8f44f5
[R4.0-rc2-Commit-e320e57]: http://drupalcode.org/project/wetkit.git/commit/e320e57
[R4.0-rc2-Commit-b54db53]: http://drupalcode.org/project/wetkit.git/commit/b54db53
[R4.0-rc2-Commit-b44918d]: http://drupalcode.org/project/wetkit.git/commit/b44918d
[R4.0-rc2-Commit-fef9df4]: http://drupalcode.org/project/wetkit.git/commit/fef9df4
[R4.0-rc2-Commit-f6da1a4]: http://drupalcode.org/project/wetkit.git/commit/f6da1a4
[R4.0-rc2-Commit-7120517]: http://drupalcode.org/project/wetkit.git/commit/7120517
[R4.0-rc2-Commit-a4a190d]: http://drupalcode.org/project/wetkit.git/commit/a4a190d
[R4.0-rc2-Commit-402c9bc]: http://drupalcode.org/project/wetkit.git/commit/402c9bc
[R4.0-rc2-Commit-ece283d]: http://drupalcode.org/project/wetkit.git/commit/ece283d
[R4.0-rc2-Commit-7d4b428]: http://drupalcode.org/project/wetkit.git/commit/7d4b428
[R4.0-rc2-Commit-2e52684]: http://drupalcode.org/project/wetkit.git/commit/2e52684
[R4.0-rc2-Commit-939e69b]: http://drupalcode.org/project/wetkit.git/commit/939e69b
[R4.0-rc2-Commit-39e22bb]: http://drupalcode.org/project/wetkit.git/commit/39e22bb
[R4.0-rc2-Commit-c4fbaeb]: http://drupalcode.org/project/wetkit.git/commit/c4fbaeb
[R4.0-rc2-Commit-d2ed1be]: http://drupalcode.org/project/wetkit.git/commit/d2ed1be
[R4.0-rc2-Commit-7e72c20]: http://drupalcode.org/project/wetkit.git/commit/7e72c20
[R4.0-rc2-Commit-4c9c53a]: http://drupalcode.org/project/wetkit.git/commit/4c9c53a
[R4.0-rc2-Commit-f872756]: http://drupalcode.org/project/wetkit.git/commit/f872756
[R4.0-rc2-Commit-6ef6131]: http://drupalcode.org/project/wetkit.git/commit/6ef6131
[R4.0-rc2-Commit-cb7d1f6]: http://drupalcode.org/project/wetkit.git/commit/cb7d1f6
[R4.0-rc2-Commit-79dd079]: http://drupalcode.org/project/wetkit.git/commit/79dd079
[R4.0-rc2-Commit-290cf2d]: http://drupalcode.org/project/wetkit.git/commit/290cf2d
[R4.0-rc2-Commit-88164b3]: http://drupalcode.org/project/wetkit.git/commit/88164b3
[R4.0-rc2-Commit-d51c391]: http://drupalcode.org/project/wetkit.git/commit/d51c391
[R4.0-rc2-Commit-7e33550]: http://drupalcode.org/project/wetkit.git/commit/7e33550
[R4.0-rc2-Commit-3c42eb9]: http://drupalcode.org/project/wetkit.git/commit/3c42eb9
[R4.0-rc2-Commit-aefabd1]: http://drupalcode.org/project/wetkit.git/commit/aefabd1
[R4.0-rc2-Commit-f49e2c4]: http://drupalcode.org/project/wetkit.git/commit/f49e2c4
[R4.0-rc2-Commit-8af7e3e]: http://drupalcode.org/project/wetkit.git/commit/8af7e3e
[R4.0-rc2-Commit-594765f]: http://drupalcode.org/project/wetkit.git/commit/594765f
[R4.0-rc2-Commit-f773c17]: http://drupalcode.org/project/wetkit.git/commit/f773c17
[R4.0-rc2-Commit-9610eee]: http://drupalcode.org/project/wetkit.git/commit/9610eee
[R4.0-rc2-Commit-81e22f7]: http://drupalcode.org/project/wetkit.git/commit/81e22f7
[R4.0-rc2-Commit-179bfcc]: http://drupalcode.org/project/wetkit.git/commit/179bfcc
[R4.0-rc2-Commit-cfa7a1f]: http://drupalcode.org/project/wetkit.git/commit/cfa7a1f
[R4.0-rc2-Commit-488d86a]: http://drupalcode.org/project/wetkit.git/commit/488d86a
[R4.0-rc2-Commit-c64fec2]: http://drupalcode.org/project/wetkit.git/commit/c64fec2
[R4.0-rc2-Commit-03064ad]: http://drupalcode.org/project/wetkit.git/commit/03064ad
[R4.0-rc2-Commit-4f19cfe]: http://drupalcode.org/project/wetkit.git/commit/4f19cfe
[R4.0-rc2-Commit-5b19e48]: http://drupalcode.org/project/wetkit.git/commit/5b19e48
[R4.0-rc2-Commit-23fb291]: http://drupalcode.org/project/wetkit.git/commit/23fb291
[R4.0-rc2-Commit-92b5862]: http://drupalcode.org/project/wetkit.git/commit/92b5862
[R4.0-rc2-Commit-65bf07d]: http://drupalcode.org/project/wetkit.git/commit/65bf07d
[R4.0-rc2-Commit-daa7976]: http://drupalcode.org/project/wetkit.git/commit/daa7976
[R4.0-rc2-Commit-80c26a2]: http://drupalcode.org/project/wetkit.git/commit/80c26a2
[R4.0-rc2-Commit-05d2a58]: http://drupalcode.org/project/wetkit.git/commit/05d2a58
[R4.0-rc2-Commit-439eb5a]: http://drupalcode.org/project/wetkit.git/commit/439eb5a
[R4.0-rc2-Commit-28aabac]: http://drupalcode.org/project/wetkit.git/commit/28aabac
[R4.0-rc2-Commit-07755b3]: http://drupalcode.org/project/wetkit.git/commit/07755b3
[R4.0-rc2-Commit-621f9a9]: http://drupalcode.org/project/wetkit.git/commit/621f9a9
[R4.0-rc2-Commit-e7e14e6]: http://drupalcode.org/project/wetkit.git/commit/e7e14e6
[R4.0-rc2-Commit-55b818f]: http://drupalcode.org/project/wetkit.git/commit/55b818f
[R4.0-rc2-Commit-d2912f6]: http://drupalcode.org/project/wetkit.git/commit/d2912f6
[R4.0-rc2-Commit-a868925]: http://drupalcode.org/project/wetkit.git/commit/a868925
[R4.0-rc2-Commit-23ac052]: http://drupalcode.org/project/wetkit.git/commit/23ac052
[R4.0-rc2-Commit-f1932b2]: http://drupalcode.org/project/wetkit.git/commit/f1932b2
[R4.0-rc2-Commit-3d36e18]: http://drupalcode.org/project/wetkit.git/commit/3d36e18
[R4.0-rc2-Commit-6673a57]: http://drupalcode.org/project/wetkit.git/commit/6673a57
[R4.0-rc2-Commit-c318e50]: http://drupalcode.org/project/wetkit.git/commit/c318e50
[R4.0-rc2-Commit-3ce3f08]: http://drupalcode.org/project/wetkit.git/commit/3ce3f08
[R4.0-rc2-Commit-accf5c7]: http://drupalcode.org/project/wetkit.git/commit/accf5c7
[R4.0-rc2-Commit-9a9b2ce]: http://drupalcode.org/project/wetkit.git/commit/9a9b2ce
[R4.0-rc2-Commit-2a7e9c4]: http://drupalcode.org/project/wetkit.git/commit/2a7e9c4
[R4.0-rc2-Commit-5106eb8]: http://drupalcode.org/project/wetkit.git/commit/5106eb8
[R4.0-rc2-Commit-18e1463]: http://drupalcode.org/project/wetkit.git/commit/18e1463
[R4.0-rc2-Commit-32566fd]: http://drupalcode.org/project/wetkit.git/commit/32566fd
[R4.0-rc2-Commit-f88b321]: http://drupalcode.org/project/wetkit.git/commit/f88b321
[R4.0-rc2-Commit-bd5bce2]: http://drupalcode.org/project/wetkit.git/commit/bd5bce2
[R4.0-rc2-Commit-24f6426]: http://drupalcode.org/project/wetkit.git/commit/24f6426
[R4.0-rc2-Commit-f756176]: http://drupalcode.org/project/wetkit.git/commit/f756176
[R4.0-rc2-Commit-5a70e6b]: http://drupalcode.org/project/wetkit.git/commit/5a70e6b
[R4.0-rc2-Commit-b0db9c3]: http://drupalcode.org/project/wetkit.git/commit/b0db9c3
[R4.0-rc2-Commit-dcf704d]: http://drupalcode.org/project/wetkit.git/commit/dcf704d
[R4.0-rc2-Commit-67254bb]: http://drupalcode.org/project/wetkit.git/commit/67254bb
[R4.0-rc2-Commit-afc918d]: http://drupalcode.org/project/wetkit.git/commit/afc918d
[R4.0-rc2-Commit-5c2f20d]: http://drupalcode.org/project/wetkit.git/commit/5c2f20d
[R4.0-rc2-Commit-fb47e1a]: http://drupalcode.org/project/wetkit.git/commit/fb47e1a
[R4.0-rc2-Commit-32a4350]: http://drupalcode.org/project/wetkit.git/commit/32a4350
[R4.0-rc2-Commit-1747ca3]: http://drupalcode.org/project/wetkit.git/commit/1747ca3
[R4.0-rc2-Commit-7ea771d]: http://drupalcode.org/project/wetkit.git/commit/7ea771d
[R4.0-rc2-Commit-fa5f8c7]: http://drupalcode.org/project/wetkit.git/commit/fa5f8c7
[R4.0-rc2-Commit-9201285]: http://drupalcode.org/project/wetkit.git/commit/9201285
[R4.0-rc2-Commit-0a66c6a]: http://drupalcode.org/project/wetkit.git/commit/0a66c6a
[R4.0-rc2-Commit-754a6e4]: http://drupalcode.org/project/wetkit.git/commit/754a6e4
[R4.0-rc2-Commit-44ab705]: http://drupalcode.org/project/wetkit.git/commit/44ab705
[R4.0-rc2-Commit-ff1342d]: http://drupalcode.org/project/wetkit.git/commit/ff1342d
[R4.0-rc2-Commit-4e961fc]: http://drupalcode.org/project/wetkit.git/commit/4e961fc
[R4.0-rc2-Commit-f087f04]: http://drupalcode.org/project/wetkit.git/commit/f087f04
[R4.0-rc2-Commit-f1b5d5a]: http://drupalcode.org/project/wetkit.git/commit/f1b5d5a
[R4.0-rc2-Commit-e19387f]: http://drupalcode.org/project/wetkit.git/commit/e19387f
[R4.0-rc2-Commit-b776797]: http://drupalcode.org/project/wetkit.git/commit/b776797
[R4.0-rc2-Commit-b1e6849]: http://drupalcode.org/project/wetkit.git/commit/b1e6849
[R4.0-rc2-Commit-c326c65]: http://drupalcode.org/project/wetkit.git/commit/c326c65
[R4.0-rc2-Commit-cb65092]: http://drupalcode.org/project/wetkit.git/commit/cb65092
[R4.0-rc2-Commit-0bb2cf5]: http://drupalcode.org/project/wetkit.git/commit/0bb2cf5
[R4.0-rc2-Commit-eb3b23f]: http://drupalcode.org/project/wetkit.git/commit/eb3b23f
[R4.0-rc2-Commit-13917f3]: http://drupalcode.org/project/wetkit.git/commit/13917f3
[R4.0-rc2-Commit-bea4e37]: http://drupalcode.org/project/wetkit.git/commit/bea4e37
[R4.0-rc2-Commit-3d03d6d]: http://drupalcode.org/project/wetkit.git/commit/3d03d6d
[R4.0-rc2-Commit-cbd2bf8]: http://drupalcode.org/project/wetkit.git/commit/cbd2bf8
[R4.0-rc2-Commit-28fe52d]: http://drupalcode.org/project/wetkit.git/commit/28fe52d
[R4.0-rc2-Commit-2ff38bf]: http://drupalcode.org/project/wetkit.git/commit/2ff38bf
[R4.0-rc2-Commit-0598438]: http://drupalcode.org/project/wetkit.git/commit/0598438
[R4.0-rc2-Commit-8605a82]: http://drupalcode.org/project/wetkit.git/commit/8605a82
[R4.0-rc2-Commit-43852be]: http://drupalcode.org/project/wetkit.git/commit/43852be
[R4.0-rc2-Commit-ddb2985]: http://drupalcode.org/project/wetkit.git/commit/ddb2985
[R4.0-rc2-Commit-33bd0d5]: http://drupalcode.org/project/wetkit.git/commit/33bd0d5
[R4.0-rc2-Commit-5198c58]: http://drupalcode.org/project/wetkit.git/commit/5198c58
[R4.0-rc2-Commit-0e072c6]: http://drupalcode.org/project/wetkit.git/commit/0e072c6
[R4.0-rc2-Commit-11522b6]: http://drupalcode.org/project/wetkit.git/commit/11522b6
[R4.0-rc2-Commit-43242f8]: http://drupalcode.org/project/wetkit.git/commit/43242f8
[R4.0-rc2-Commit-09a48e7]: http://drupalcode.org/project/wetkit.git/commit/09a48e7
[R4.0-rc2-Commit-8a507db]: http://drupalcode.org/project/wetkit.git/commit/8a507db
[R4.0-rc2-Commit-4240873]: http://drupalcode.org/project/wetkit.git/commit/4240873
[R4.0-rc2-Commit-1a1c4e6]: http://drupalcode.org/project/wetkit.git/commit/1a1c4e6
[R4.0-rc2-Commit-fc62047]: http://drupalcode.org/project/wetkit.git/commit/fc62047
[R4.0-rc2-Commit-cf55b77]: http://drupalcode.org/project/wetkit.git/commit/cf55b77
[R4.0-rc2-Commit-57b7247]: http://drupalcode.org/project/wetkit.git/commit/57b7247
[R4.0-rc2-Commit-b7cc84d]: http://drupalcode.org/project/wetkit.git/commit/b7cc84d
[R4.0-rc2-Commit-932b8a3]: http://drupalcode.org/project/wetkit.git/commit/932b8a3
[R4.0-rc2-Commit-089578a]: http://drupalcode.org/project/wetkit.git/commit/089578a
[R4.0-rc2-Commit-d792752]: http://drupalcode.org/project/wetkit.git/commit/d792752
[R4.0-rc2-Commit-ef7fb5a]: http://drupalcode.org/project/wetkit.git/commit/ef7fb5a
[R4.0-rc2-Commit-088d936]: http://drupalcode.org/project/wetkit.git/commit/088d936
[R4.0-rc2-Commit-6414a8c]: http://drupalcode.org/project/wetkit.git/commit/6414a8c
[R4.0-rc2-Commit-f532905]: http://drupalcode.org/project/wetkit.git/commit/f532905
[R4.0-rc2-Commit-ab869e6]: http://drupalcode.org/project/wetkit.git/commit/ab869e6
[R4.0-rc2-Commit-83e4044]: http://drupalcode.org/project/wetkit.git/commit/83e4044
[R4.0-rc2-Commit-be9bcdd]: http://drupalcode.org/project/wetkit.git/commit/be9bcdd
[R4.0-rc2-Commit-a311c83]: http://drupalcode.org/project/wetkit.git/commit/a311c83
[R4.0-rc2-Commit-3de578a]: http://drupalcode.org/project/wetkit.git/commit/3de578a
[R4.0-rc2-Commit-865c06a]: http://drupalcode.org/project/wetkit.git/commit/865c06a
[R4.0-rc2-Commit-2430f17]: http://drupalcode.org/project/wetkit.git/commit/2430f17
[R4.0-rc2-Commit-5462b10]: http://drupalcode.org/project/wetkit.git/commit/5462b10
[R4.0-rc2-Commit-166414b]: http://drupalcode.org/project/wetkit.git/commit/166414b

<!-- Issues R4.0-rc2 -->

[R4.0-rc2-Issue-2543762]: http://drupal.org/node/2543762
[R4.0-rc2-Issue-2543762]: http://drupal.org/node/2543762
[R4.0-rc2-Issue-2543762]: http://drupal.org/node/2543762
[R4.0-rc2-Issue-2543762]: http://drupal.org/node/2543762
[R4.0-rc2-Issue-2537760]: http://drupal.org/node/2537760
[R4.0-rc2-Issue-2532600]: http://drupal.org/node/2532600
[R4.0-rc2-Issue-2533860]: http://drupal.org/node/2533860
[R4.0-rc2-Issue-2530288]: http://drupal.org/node/2530288
[R4.0-rc2-Issue-2533850]: http://drupal.org/node/2533850
[R4.0-rc2-Issue-2537780]: http://drupal.org/node/2537780
[R4.0-rc2-Issue-2484927]: http://drupal.org/node/2484927
[R4.0-rc2-Issue-2537750]: http://drupal.org/node/2537750
[R4.0-rc2-Issue-2530288]: http://drupal.org/node/2530288
[R4.0-rc2-Issue-2530288]: http://drupal.org/node/2530288
[R4.0-rc2-Issue-2530220]: http://drupal.org/node/2530220
[R4.0-rc2-Issue-2529722]: http://drupal.org/node/2529722
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2527832]: http://drupal.org/node/2527832
[R4.0-rc2-Issue-2528454]: http://drupal.org/node/2528454
[R4.0-rc2-Issue-2528666]: http://drupal.org/node/2528666
[R4.0-rc2-Issue-2528658]: http://drupal.org/node/2528658
[R4.0-rc2-Issue-2528658]: http://drupal.org/node/2528658
[R4.0-rc2-Issue-2528658]: http://drupal.org/node/2528658
[R4.0-rc2-Issue-2528454]: http://drupal.org/node/2528454
[R4.0-rc2-Issue-2528454]: http://drupal.org/node/2528454
[R4.0-rc2-Issue-2527832]: http://drupal.org/node/2527832
[R4.0-rc2-Issue-2522698]: http://drupal.org/node/2522698
[R4.0-rc2-Issue-2527832]: http://drupal.org/node/2527832
[R4.0-rc2-Issue-2511662]: http://drupal.org/node/2511662
[R4.0-rc2-Issue-2516906]: http://drupal.org/node/2516906
[R4.0-rc2-Issue-2521828]: http://drupal.org/node/2521828
[R4.0-rc2-Issue-2509414]: http://drupal.org/node/2509414
[R4.0-rc2-Issue-2509414]: http://drupal.org/node/2509414
[R4.0-rc2-Issue-2508399]: http://drupal.org/node/2508399
[R4.0-rc2-Issue-2302955]: http://drupal.org/node/2302955
[R4.0-rc2-Issue-2509414]: http://drupal.org/node/2509414
[R4.0-rc2-Issue-2400083]: http://drupal.org/node/2400083
[R4.0-rc2-Issue-2484927]: http://drupal.org/node/2484927
[R4.0-rc2-Issue-2508399]: http://drupal.org/node/2508399
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2503341]: http://drupal.org/node/2503341
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2434721]: http://drupal.org/node/2434721
[R4.0-rc2-Issue-2506647]: http://drupal.org/node/2506647
[R4.0-rc2-Issue-2508465]: http://drupal.org/node/2508465
[R4.0-rc2-Issue-2508275]: http://drupal.org/node/2508275
[R4.0-rc2-Issue-2494539]: http://drupal.org/node/2494539
[R4.0-rc2-Issue-2494539]: http://drupal.org/node/2494539
[R4.0-rc2-Issue-2494539]: http://drupal.org/node/2494539
[R4.0-rc2-Issue-2496495]: http://drupal.org/node/2496495
[R4.0-rc2-Issue-2482943]: http://drupal.org/node/2482943
[R4.0-rc2-Issue-2496481]: http://drupal.org/node/2496481
[R4.0-rc2-Issue-2496453]: http://drupal.org/node/2496453
[R4.0-rc2-Issue-2498363]: http://drupal.org/node/2498363
[R4.0-rc2-Issue-2499125]: http://drupal.org/node/2499125
[R4.0-rc2-Issue-2500369]: http://drupal.org/node/2500369
[R4.0-rc2-Issue-2500585]: http://drupal.org/node/2500585
[R4.0-rc2-Issue-2492305]: http://drupal.org/node/2492305
[R4.0-rc2-Issue-2482837]: http://drupal.org/node/2482837
[R4.0-rc2-Issue-2482943]: http://drupal.org/node/2482943
[R4.0-rc2-Issue-2480345]: http://drupal.org/node/2480345
[R4.0-rc2-Issue-2487085]: http://drupal.org/node/2487085
[R4.0-rc2-Issue-2485619]: http://drupal.org/node/2485619
[R4.0-rc2-Issue-2479349]: http://drupal.org/node/2479349
[R4.0-rc2-Issue-2145567]: http://drupal.org/node/2145567

<!-- Commits R4.0-rc1 -->

[R4.0-rc1-Commit-76d7793]: http://drupalcode.org/project/wetkit.git/commit/76d7793
[R4.0-rc1-Commit-55f8702]: http://drupalcode.org/project/wetkit.git/commit/55f8702
[R4.0-rc1-Commit-e8a7269]: http://drupalcode.org/project/wetkit.git/commit/e8a7269
[R4.0-rc1-Commit-50a5678]: http://drupalcode.org/project/wetkit.git/commit/50a5678
[R4.0-rc1-Commit-5e5be8c]: http://drupalcode.org/project/wetkit.git/commit/5e5be8c
[R4.0-rc1-Commit-b5cc4ee]: http://drupalcode.org/project/wetkit.git/commit/b5cc4ee
[R4.0-rc1-Commit-7747838]: http://drupalcode.org/project/wetkit.git/commit/7747838
[R4.0-rc1-Commit-473d043]: http://drupalcode.org/project/wetkit.git/commit/473d043
[R4.0-rc1-Commit-18b4762]: http://drupalcode.org/project/wetkit.git/commit/18b4762
[R4.0-rc1-Commit-1d9fa4e]: http://drupalcode.org/project/wetkit.git/commit/1d9fa4e
[R4.0-rc1-Commit-2a51bca]: http://drupalcode.org/project/wetkit.git/commit/2a51bca
[R4.0-rc1-Commit-1d00d8f]: http://drupalcode.org/project/wetkit.git/commit/1d00d8f
[R4.0-rc1-Commit-d9d2fe3]: http://drupalcode.org/project/wetkit.git/commit/d9d2fe3
[R4.0-rc1-Commit-d1b5c74]: http://drupalcode.org/project/wetkit.git/commit/d1b5c74
[R4.0-rc1-Commit-62cd71a]: http://drupalcode.org/project/wetkit.git/commit/62cd71a
[R4.0-rc1-Commit-664fde7]: http://drupalcode.org/project/wetkit.git/commit/664fde7
[R4.0-rc1-Commit-f04bc92]: http://drupalcode.org/project/wetkit.git/commit/f04bc92
[R4.0-rc1-Commit-b90eb27]: http://drupalcode.org/project/wetkit.git/commit/b90eb27
[R4.0-rc1-Commit-bd07962]: http://drupalcode.org/project/wetkit.git/commit/bd07962
[R4.0-rc1-Commit-b45d657]: http://drupalcode.org/project/wetkit.git/commit/b45d657
[R4.0-rc1-Commit-9a29304]: http://drupalcode.org/project/wetkit.git/commit/9a29304
[R4.0-rc1-Commit-596a470]: http://drupalcode.org/project/wetkit.git/commit/596a470
[R4.0-rc1-Commit-2048b96]: http://drupalcode.org/project/wetkit.git/commit/2048b96
[R4.0-rc1-Commit-a34f8ac]: http://drupalcode.org/project/wetkit.git/commit/a34f8ac
[R4.0-rc1-Commit-9a0da7b]: http://drupalcode.org/project/wetkit.git/commit/9a0da7b
[R4.0-rc1-Commit-6f14f60]: http://drupalcode.org/project/wetkit.git/commit/6f14f60
[R4.0-rc1-Commit-28e9c20]: http://drupalcode.org/project/wetkit.git/commit/28e9c20
[R4.0-rc1-Commit-129d38b]: http://drupalcode.org/project/wetkit.git/commit/129d38b
[R4.0-rc1-Commit-360898f]: http://drupalcode.org/project/wetkit.git/commit/360898f
[R4.0-rc1-Commit-20da48e]: http://drupalcode.org/project/wetkit.git/commit/20da48e
[R4.0-rc1-Commit-48c500a]: http://drupalcode.org/project/wetkit.git/commit/48c500a
[R4.0-rc1-Commit-043506a]: http://drupalcode.org/project/wetkit.git/commit/043506a
[R4.0-rc1-Commit-3532424]: http://drupalcode.org/project/wetkit.git/commit/3532424
[R4.0-rc1-Commit-42aef39]: http://drupalcode.org/project/wetkit.git/commit/42aef39
[R4.0-rc1-Commit-0795c9d]: http://drupalcode.org/project/wetkit.git/commit/0795c9d
[R4.0-rc1-Commit-6f1d84d]: http://drupalcode.org/project/wetkit.git/commit/6f1d84d
[R4.0-rc1-Commit-1c510de]: http://drupalcode.org/project/wetkit.git/commit/1c510de
[R4.0-rc1-Commit-07dcb0b]: http://drupalcode.org/project/wetkit.git/commit/07dcb0b
[R4.0-rc1-Commit-cc30d18]: http://drupalcode.org/project/wetkit.git/commit/cc30d18
[R4.0-rc1-Commit-e4117bd]: http://drupalcode.org/project/wetkit.git/commit/e4117bd
[R4.0-rc1-Commit-465e27b]: http://drupalcode.org/project/wetkit.git/commit/465e27b
[R4.0-rc1-Commit-b7f5a90]: http://drupalcode.org/project/wetkit.git/commit/b7f5a90
[R4.0-rc1-Commit-5e91e8f]: http://drupalcode.org/project/wetkit.git/commit/5e91e8f
[R4.0-rc1-Commit-ad1ae08]: http://drupalcode.org/project/wetkit.git/commit/ad1ae08
[R4.0-rc1-Commit-18a332d]: http://drupalcode.org/project/wetkit.git/commit/18a332d
[R4.0-rc1-Commit-acabf10]: http://drupalcode.org/project/wetkit.git/commit/acabf10
[R4.0-rc1-Commit-9a26b3c]: http://drupalcode.org/project/wetkit.git/commit/9a26b3c
[R4.0-rc1-Commit-4e5fcb3]: http://drupalcode.org/project/wetkit.git/commit/4e5fcb3
[R4.0-rc1-Commit-579f15a]: http://drupalcode.org/project/wetkit.git/commit/579f15a
[R4.0-rc1-Commit-9c44f2a]: http://drupalcode.org/project/wetkit.git/commit/9c44f2a
[R4.0-rc1-Commit-e11a210]: http://drupalcode.org/project/wetkit.git/commit/e11a210
[R4.0-rc1-Commit-755191e]: http://drupalcode.org/project/wetkit.git/commit/755191e
[R4.0-rc1-Commit-168c76f]: http://drupalcode.org/project/wetkit.git/commit/168c76f
[R4.0-rc1-Commit-4b3f177]: http://drupalcode.org/project/wetkit.git/commit/4b3f177
[R4.0-rc1-Commit-86c2847]: http://drupalcode.org/project/wetkit.git/commit/86c2847
[R4.0-rc1-Commit-fa4e8a0]: http://drupalcode.org/project/wetkit.git/commit/fa4e8a0
[R4.0-rc1-Commit-5425d1a]: http://drupalcode.org/project/wetkit.git/commit/5425d1a
[R4.0-rc1-Commit-5add9f5]: http://drupalcode.org/project/wetkit.git/commit/5add9f5
[R4.0-rc1-Commit-3face54]: http://drupalcode.org/project/wetkit.git/commit/3face54
[R4.0-rc1-Commit-97c5f70]: http://drupalcode.org/project/wetkit.git/commit/97c5f70
[R4.0-rc1-Commit-a7e6de6]: http://drupalcode.org/project/wetkit.git/commit/a7e6de6
[R4.0-rc1-Commit-85c8280]: http://drupalcode.org/project/wetkit.git/commit/85c8280
[R4.0-rc1-Commit-51f3f76]: http://drupalcode.org/project/wetkit.git/commit/51f3f76
[R4.0-rc1-Commit-462bc07]: http://drupalcode.org/project/wetkit.git/commit/462bc07
[R4.0-rc1-Commit-9e5ca8d]: http://drupalcode.org/project/wetkit.git/commit/9e5ca8d
[R4.0-rc1-Commit-3ecaea3]: http://drupalcode.org/project/wetkit.git/commit/3ecaea3
[R4.0-rc1-Commit-3b04c83]: http://drupalcode.org/project/wetkit.git/commit/3b04c83
[R4.0-rc1-Commit-26b1124]: http://drupalcode.org/project/wetkit.git/commit/26b1124
[R4.0-rc1-Commit-533f6b5]: http://drupalcode.org/project/wetkit.git/commit/533f6b5
[R4.0-rc1-Commit-c74c666]: http://drupalcode.org/project/wetkit.git/commit/c74c666
[R4.0-rc1-Commit-1c7cd15]: http://drupalcode.org/project/wetkit.git/commit/1c7cd15
[R4.0-rc1-Commit-04ae9ca]: http://drupalcode.org/project/wetkit.git/commit/04ae9ca
[R4.0-rc1-Commit-2dd7b4a]: http://drupalcode.org/project/wetkit.git/commit/2dd7b4a
[R4.0-rc1-Commit-9443627]: http://drupalcode.org/project/wetkit.git/commit/9443627
[R4.0-rc1-Commit-ef1f038]: http://drupalcode.org/project/wetkit.git/commit/ef1f038
[R4.0-rc1-Commit-aa3eeb1]: http://drupalcode.org/project/wetkit.git/commit/aa3eeb1
[R4.0-rc1-Commit-d6fbee4]: http://drupalcode.org/project/wetkit.git/commit/d6fbee4
[R4.0-rc1-Commit-41f1935]: http://drupalcode.org/project/wetkit.git/commit/41f1935
[R4.0-rc1-Commit-678f55e]: http://drupalcode.org/project/wetkit.git/commit/678f55e
[R4.0-rc1-Commit-8c2812d]: http://drupalcode.org/project/wetkit.git/commit/8c2812d
[R4.0-rc1-Commit-16414aa]: http://drupalcode.org/project/wetkit.git/commit/16414aa
[R4.0-rc1-Commit-b18b6f8]: http://drupalcode.org/project/wetkit.git/commit/b18b6f8
[R4.0-rc1-Commit-8959cc0]: http://drupalcode.org/project/wetkit.git/commit/8959cc0
[R4.0-rc1-Commit-b0d2b9f]: http://drupalcode.org/project/wetkit.git/commit/b0d2b9f
[R4.0-rc1-Commit-f89f5e7]: http://drupalcode.org/project/wetkit.git/commit/f89f5e7
[R4.0-rc1-Commit-28c65cc]: http://drupalcode.org/project/wetkit.git/commit/28c65cc
[R4.0-rc1-Commit-52afae9]: http://drupalcode.org/project/wetkit.git/commit/52afae9
[R4.0-rc1-Commit-0191af5]: http://drupalcode.org/project/wetkit.git/commit/0191af5
[R4.0-rc1-Commit-b9cda4a]: http://drupalcode.org/project/wetkit.git/commit/b9cda4a
[R4.0-rc1-Commit-5dcbd6d]: http://drupalcode.org/project/wetkit.git/commit/5dcbd6d
[R4.0-rc1-Commit-788cfc6]: http://drupalcode.org/project/wetkit.git/commit/788cfc6
[R4.0-rc1-Commit-b61df24]: http://drupalcode.org/project/wetkit.git/commit/b61df24
[R4.0-rc1-Commit-9537824]: http://drupalcode.org/project/wetkit.git/commit/9537824
[R4.0-rc1-Commit-697dcb5]: http://drupalcode.org/project/wetkit.git/commit/697dcb5
[R4.0-rc1-Commit-056f422]: http://drupalcode.org/project/wetkit.git/commit/056f422
[R4.0-rc1-Commit-fed8f6a]: http://drupalcode.org/project/wetkit.git/commit/fed8f6a
[R4.0-rc1-Commit-f9b3e64]: http://drupalcode.org/project/wetkit.git/commit/f9b3e64
[R4.0-rc1-Commit-d7873c4]: http://drupalcode.org/project/wetkit.git/commit/d7873c4
[R4.0-rc1-Commit-b6c359b]: http://drupalcode.org/project/wetkit.git/commit/b6c359b
[R4.0-rc1-Commit-a967a77]: http://drupalcode.org/project/wetkit.git/commit/a967a77
[R4.0-rc1-Commit-ca0415e]: http://drupalcode.org/project/wetkit.git/commit/ca0415e
[R4.0-rc1-Commit-5cd1db1]: http://drupalcode.org/project/wetkit.git/commit/5cd1db1
[R4.0-rc1-Commit-282520f]: http://drupalcode.org/project/wetkit.git/commit/282520f
[R4.0-rc1-Commit-e18b0fe]: http://drupalcode.org/project/wetkit.git/commit/e18b0fe
[R4.0-rc1-Commit-c5d2436]: http://drupalcode.org/project/wetkit.git/commit/c5d2436
[R4.0-rc1-Commit-8588fb5]: http://drupalcode.org/project/wetkit.git/commit/8588fb5
[R4.0-rc1-Commit-0c13416]: http://drupalcode.org/project/wetkit.git/commit/0c13416
[R4.0-rc1-Commit-927f3d1]: http://drupalcode.org/project/wetkit.git/commit/927f3d1
[R4.0-rc1-Commit-ac5cb5d]: http://drupalcode.org/project/wetkit.git/commit/ac5cb5d
[R4.0-rc1-Commit-0f100e0]: http://drupalcode.org/project/wetkit.git/commit/0f100e0
[R4.0-rc1-Commit-5faf74c]: http://drupalcode.org/project/wetkit.git/commit/5faf74c
[R4.0-rc1-Commit-12196a2]: http://drupalcode.org/project/wetkit.git/commit/12196a2
[R4.0-rc1-Commit-ae86516]: http://drupalcode.org/project/wetkit.git/commit/ae86516
[R4.0-rc1-Commit-dea9cc9]: http://drupalcode.org/project/wetkit.git/commit/dea9cc9
[R4.0-rc1-Commit-93405de]: http://drupalcode.org/project/wetkit.git/commit/93405de
[R4.0-rc1-Commit-1b8d552]: http://drupalcode.org/project/wetkit.git/commit/1b8d552
[R4.0-rc1-Commit-d82e1c0]: http://drupalcode.org/project/wetkit.git/commit/d82e1c0
[R4.0-rc1-Commit-bdc1535]: http://drupalcode.org/project/wetkit.git/commit/bdc1535
[R4.0-rc1-Commit-2568010]: http://drupalcode.org/project/wetkit.git/commit/2568010
[R4.0-rc1-Commit-56c140f]: http://drupalcode.org/project/wetkit.git/commit/56c140f
[R4.0-rc1-Commit-cdb8b00]: http://drupalcode.org/project/wetkit.git/commit/cdb8b00
[R4.0-rc1-Commit-21fe779]: http://drupalcode.org/project/wetkit.git/commit/21fe779
[R4.0-rc1-Commit-3035ca1]: http://drupalcode.org/project/wetkit.git/commit/3035ca1
[R4.0-rc1-Commit-08cfa78]: http://drupalcode.org/project/wetkit.git/commit/08cfa78
[R4.0-rc1-Commit-4e5ed81]: http://drupalcode.org/project/wetkit.git/commit/4e5ed81
[R4.0-rc1-Commit-4674db5]: http://drupalcode.org/project/wetkit.git/commit/4674db5
[R4.0-rc1-Commit-2d9bca6]: http://drupalcode.org/project/wetkit.git/commit/2d9bca6
[R4.0-rc1-Commit-10d4f61]: http://drupalcode.org/project/wetkit.git/commit/10d4f61
[R4.0-rc1-Commit-5b1d97d]: http://drupalcode.org/project/wetkit.git/commit/5b1d97d
[R4.0-rc1-Commit-9cb426f]: http://drupalcode.org/project/wetkit.git/commit/9cb426f
[R4.0-rc1-Commit-be07bb6]: http://drupalcode.org/project/wetkit.git/commit/be07bb6
[R4.0-rc1-Commit-fcdb00f]: http://drupalcode.org/project/wetkit.git/commit/fcdb00f
[R4.0-rc1-Commit-5a94c3a]: http://drupalcode.org/project/wetkit.git/commit/5a94c3a
[R4.0-rc1-Commit-97820cf]: http://drupalcode.org/project/wetkit.git/commit/97820cf
[R4.0-rc1-Commit-e8a1348]: http://drupalcode.org/project/wetkit.git/commit/e8a1348
[R4.0-rc1-Commit-8251e8a]: http://drupalcode.org/project/wetkit.git/commit/8251e8a
[R4.0-rc1-Commit-77c7235]: http://drupalcode.org/project/wetkit.git/commit/77c7235
[R4.0-rc1-Commit-d4d87f6]: http://drupalcode.org/project/wetkit.git/commit/d4d87f6
[R4.0-rc1-Commit-7b598d0]: http://drupalcode.org/project/wetkit.git/commit/7b598d0
[R4.0-rc1-Commit-6d32713]: http://drupalcode.org/project/wetkit.git/commit/6d32713
[R4.0-rc1-Commit-56bbf25]: http://drupalcode.org/project/wetkit.git/commit/56bbf25
[R4.0-rc1-Commit-9abe0fd]: http://drupalcode.org/project/wetkit.git/commit/9abe0fd
[R4.0-rc1-Commit-6c5d056]: http://drupalcode.org/project/wetkit.git/commit/6c5d056
[R4.0-rc1-Commit-3475fa4]: http://drupalcode.org/project/wetkit.git/commit/3475fa4
[R4.0-rc1-Commit-fad89b5]: http://drupalcode.org/project/wetkit.git/commit/fad89b5
[R4.0-rc1-Commit-325d773]: http://drupalcode.org/project/wetkit.git/commit/325d773
[R4.0-rc1-Commit-db44754]: http://drupalcode.org/project/wetkit.git/commit/db44754
[R4.0-rc1-Commit-6c5ee41]: http://drupalcode.org/project/wetkit.git/commit/6c5ee41
[R4.0-rc1-Commit-cc767d7]: http://drupalcode.org/project/wetkit.git/commit/cc767d7
[R4.0-rc1-Commit-f76f582]: http://drupalcode.org/project/wetkit.git/commit/f76f582
[R4.0-rc1-Commit-23f19a0]: http://drupalcode.org/project/wetkit.git/commit/23f19a0
[R4.0-rc1-Commit-460e183]: http://drupalcode.org/project/wetkit.git/commit/460e183
[R4.0-rc1-Commit-d7d0283]: http://drupalcode.org/project/wetkit.git/commit/d7d0283
[R4.0-rc1-Commit-ec0ea25]: http://drupalcode.org/project/wetkit.git/commit/ec0ea25
[R4.0-rc1-Commit-3b5b803]: http://drupalcode.org/project/wetkit.git/commit/3b5b803
[R4.0-rc1-Commit-30bcf2b]: http://drupalcode.org/project/wetkit.git/commit/30bcf2b
[R4.0-rc1-Commit-dc04e1c]: http://drupalcode.org/project/wetkit.git/commit/dc04e1c
[R4.0-rc1-Commit-80f2e20]: http://drupalcode.org/project/wetkit.git/commit/80f2e20
[R4.0-rc1-Commit-d40e66d]: http://drupalcode.org/project/wetkit.git/commit/d40e66d
[R4.0-rc1-Commit-ff34162]: http://drupalcode.org/project/wetkit.git/commit/ff34162
[R4.0-rc1-Commit-ba6bb4e]: http://drupalcode.org/project/wetkit.git/commit/ba6bb4e
[R4.0-rc1-Commit-fc845c1]: http://drupalcode.org/project/wetkit.git/commit/fc845c1
[R4.0-rc1-Commit-9d4a548]: http://drupalcode.org/project/wetkit.git/commit/9d4a548
[R4.0-rc1-Commit-21e22bf]: http://drupalcode.org/project/wetkit.git/commit/21e22bf
[R4.0-rc1-Commit-8d5719e]: http://drupalcode.org/project/wetkit.git/commit/8d5719e
[R4.0-rc1-Commit-ca912cb]: http://drupalcode.org/project/wetkit.git/commit/ca912cb
[R4.0-rc1-Commit-936df64]: http://drupalcode.org/project/wetkit.git/commit/936df64
[R4.0-rc1-Commit-500e9d1]: http://drupalcode.org/project/wetkit.git/commit/500e9d1
[R4.0-rc1-Commit-3f21731]: http://drupalcode.org/project/wetkit.git/commit/3f21731
[R4.0-rc1-Commit-525c234]: http://drupalcode.org/project/wetkit.git/commit/525c234
[R4.0-rc1-Commit-0c63ede]: http://drupalcode.org/project/wetkit.git/commit/0c63ede
[R4.0-rc1-Commit-cfa95cf]: http://drupalcode.org/project/wetkit.git/commit/cfa95cf
[R4.0-rc1-Commit-6b9ab7e]: http://drupalcode.org/project/wetkit.git/commit/6b9ab7e
[R4.0-rc1-Commit-3505255]: http://drupalcode.org/project/wetkit.git/commit/3505255
[R4.0-rc1-Commit-c272653]: http://drupalcode.org/project/wetkit.git/commit/c272653
[R4.0-rc1-Commit-ec30dce]: http://drupalcode.org/project/wetkit.git/commit/ec30dce
[R4.0-rc1-Commit-267db10]: http://drupalcode.org/project/wetkit.git/commit/267db10
[R4.0-rc1-Commit-02911b9]: http://drupalcode.org/project/wetkit.git/commit/02911b9
[R4.0-rc1-Commit-2f4c52b]: http://drupalcode.org/project/wetkit.git/commit/2f4c52b
[R4.0-rc1-Commit-113aeda]: http://drupalcode.org/project/wetkit.git/commit/113aeda
[R4.0-rc1-Commit-c3e9688]: http://drupalcode.org/project/wetkit.git/commit/c3e9688
[R4.0-rc1-Commit-f10d6a6]: http://drupalcode.org/project/wetkit.git/commit/f10d6a6
[R4.0-rc1-Commit-ab06622]: http://drupalcode.org/project/wetkit.git/commit/ab06622
[R4.0-rc1-Commit-e4929c5]: http://drupalcode.org/project/wetkit.git/commit/e4929c5
[R4.0-rc1-Commit-a0df34b]: http://drupalcode.org/project/wetkit.git/commit/a0df34b
[R4.0-rc1-Commit-dca2e56]: http://drupalcode.org/project/wetkit.git/commit/dca2e56
[R4.0-rc1-Commit-e2fc1cf]: http://drupalcode.org/project/wetkit.git/commit/e2fc1cf
[R4.0-rc1-Commit-2808999]: http://drupalcode.org/project/wetkit.git/commit/2808999
[R4.0-rc1-Commit-1909d4f]: http://drupalcode.org/project/wetkit.git/commit/1909d4f
[R4.0-rc1-Commit-3afe015]: http://drupalcode.org/project/wetkit.git/commit/3afe015
[R4.0-rc1-Commit-c527693]: http://drupalcode.org/project/wetkit.git/commit/c527693
[R4.0-rc1-Commit-1b94d53]: http://drupalcode.org/project/wetkit.git/commit/1b94d53
[R4.0-rc1-Commit-e79f62c]: http://drupalcode.org/project/wetkit.git/commit/e79f62c
[R4.0-rc1-Commit-f066239]: http://drupalcode.org/project/wetkit.git/commit/f066239
[R4.0-rc1-Commit-c8b1276]: http://drupalcode.org/project/wetkit.git/commit/c8b1276
[R4.0-rc1-Commit-07bf8c1]: http://drupalcode.org/project/wetkit.git/commit/07bf8c1
[R4.0-rc1-Commit-ac2c1dd]: http://drupalcode.org/project/wetkit.git/commit/ac2c1dd
[R4.0-rc1-Commit-6dc35ee]: http://drupalcode.org/project/wetkit.git/commit/6dc35ee
[R4.0-rc1-Commit-0fc2202]: http://drupalcode.org/project/wetkit.git/commit/0fc2202

<!-- Issues R4.0-rc1 -->

[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2457949]: http://drupal.org/node/2457949
[R4.0-rc1-Issue-2460287]: http://drupal.org/node/2460287
[R4.0-rc1-Issue-2464421]: http://drupal.org/node/2464421
[R4.0-rc1-Issue-2464413]: http://drupal.org/node/2464413
[R4.0-rc1-Issue-2352895]: http://drupal.org/node/2352895
[R4.0-rc1-Issue-2457949]: http://drupal.org/node/2457949
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2457949]: http://drupal.org/node/2457949
[R4.0-rc1-Issue-2458841]: http://drupal.org/node/2458841
[R4.0-rc1-Issue-2458841]: http://drupal.org/node/2458841
[R4.0-rc1-Issue-2458841]: http://drupal.org/node/2458841
[R4.0-rc1-Issue-2458841]: http://drupal.org/node/2458841
[R4.0-rc1-Issue-2458841]: http://drupal.org/node/2458841
[R4.0-rc1-Issue-2453387]: http://drupal.org/node/2453387
[R4.0-rc1-Issue-2453387]: http://drupal.org/node/2453387
[R4.0-rc1-Issue-2453387]: http://drupal.org/node/2453387
[R4.0-rc1-Issue-2449043]: http://drupal.org/node/2449043
[R4.0-rc1-Issue-2450967]: http://drupal.org/node/2450967
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2136621]: http://drupal.org/node/2136621
[R4.0-rc1-Issue-2447305]: http://drupal.org/node/2447305
[R4.0-rc1-Issue-2454123]: http://drupal.org/node/2454123
[R4.0-rc1-Issue-2449759]: http://drupal.org/node/2449759
[R4.0-rc1-Issue-2449791]: http://drupal.org/node/2449791
[R4.0-rc1-Issue-2456355]: http://drupal.org/node/2456355
[R4.0-rc1-Issue-2450369]: http://drupal.org/node/2450369
[R4.0-rc1-Issue-2450311]: http://drupal.org/node/2450311
[R4.0-rc1-Issue-2450275]: http://drupal.org/node/2450275
[R4.0-rc1-Issue-2450217]: http://drupal.org/node/2450217
[R4.0-rc1-Issue-2449035]: http://drupal.org/node/2449035
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2447503]: http://drupal.org/node/2447503
[R4.0-rc1-Issue-2447445]: http://drupal.org/node/2447445
[R4.0-rc1-Issue-2447395]: http://drupal.org/node/2447395
[R4.0-rc1-Issue-2447297]: http://drupal.org/node/2447297
[R4.0-rc1-Issue-2442817]: http://drupal.org/node/2442817
[R4.0-rc1-Issue-2442909]: http://drupal.org/node/2442909
[R4.0-rc1-Issue-2444543]: http://drupal.org/node/2444543
[R4.0-rc1-Issue-2445137]: http://drupal.org/node/2445137
[R4.0-rc1-Issue-2444357]: http://drupal.org/node/2444357
[R4.0-rc1-Issue-2142137]: http://drupal.org/node/2142137
[R4.0-rc1-Issue-2442793]: http://drupal.org/node/2442793
[R4.0-rc1-Issue-2442731]: http://drupal.org/node/2442731
[R4.0-rc1-Issue-2432913]: http://drupal.org/node/2432913
[R4.0-rc1-Issue-2423955]: http://drupal.org/node/2423955
[R4.0-rc1-Issue-2423961]: http://drupal.org/node/2423961
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2423955]: http://drupal.org/node/2423955
[R4.0-rc1-Issue-2089133]: http://drupal.org/node/2089133
[R4.0-rc1-Issue-2427429]: http://drupal.org/node/2427429
[R4.0-rc1-Issue-2427399]: http://drupal.org/node/2427399
[R4.0-rc1-Issue-2427411]: http://drupal.org/node/2427411
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2424821]: http://drupal.org/node/2424821
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2423955]: http://drupal.org/node/2423955
[R4.0-rc1-Issue-2394485]: http://drupal.org/node/2394485
[R4.0-rc1-Issue-2424717]: http://drupal.org/node/2424717
[R4.0-rc1-Issue-2424241]: http://drupal.org/node/2424241
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2424241]: http://drupal.org/node/2424241
[R4.0-rc1-Issue-2424241]: http://drupal.org/node/2424241
[R4.0-rc1-Issue-2424241]: http://drupal.org/node/2424241
[R4.0-rc1-Issue-2424241]: http://drupal.org/node/2424241
[R4.0-rc1-Issue-2423955]: http://drupal.org/node/2423955
[R4.0-rc1-Issue-2423961]: http://drupal.org/node/2423961
[R4.0-rc1-Issue-2423959]: http://drupal.org/node/2423959
[R4.0-rc1-Issue-2423955]: http://drupal.org/node/2423955
[R4.0-rc1-Issue-2423861]: http://drupal.org/node/2423861
[R4.0-rc1-Issue-2423855]: http://drupal.org/node/2423855
[R4.0-rc1-Issue-2423755]: http://drupal.org/node/2423755
[R4.0-rc1-Issue-2404271]: http://drupal.org/node/2404271
[R4.0-rc1-Issue-2423763]: http://drupal.org/node/2423763
[R4.0-rc1-Issue-2423755]: http://drupal.org/node/2423755
[R4.0-rc1-Issue-2423755]: http://drupal.org/node/2423755
[R4.0-rc1-Issue-2423703]: http://drupal.org/node/2423703
[R4.0-rc1-Issue-2423703]: http://drupal.org/node/2423703
[R4.0-rc1-Issue-2418803]: http://drupal.org/node/2418803
[R4.0-rc1-Issue-2145555]: http://drupal.org/node/2145555
[R4.0-rc1-Issue-2412513]: http://drupal.org/node/2412513
[R4.0-rc1-Issue-2421111]: http://drupal.org/node/2421111
[R4.0-rc1-Issue-2378449]: http://drupal.org/node/2378449
[R4.0-rc1-Issue-2363135]: http://drupal.org/node/2363135
[R4.0-rc1-Issue-2416811]: http://drupal.org/node/2416811
[R4.0-rc1-Issue-2418725]: http://drupal.org/node/2418725
[R4.0-rc1-Issue-2149943]: http://drupal.org/node/2149943
[R4.0-rc1-Issue-2344227]: http://drupal.org/node/2344227
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2399603]: http://drupal.org/node/2399603
[R4.0-rc1-Issue-2385319]: http://drupal.org/node/2385319
[R4.0-rc1-Issue-2282933]: http://drupal.org/node/2282933
[R4.0-rc1-Issue-2402785]: http://drupal.org/node/2402785
[R4.0-rc1-Issue-2406063]: http://drupal.org/node/2406063
[R4.0-rc1-Issue-2405993]: http://drupal.org/node/2405993
[R4.0-rc1-Issue-2405831]: http://drupal.org/node/2405831
[R4.0-rc1-Issue-2389507]: http://drupal.org/node/2389507
[R4.0-rc1-Issue-2400039]: http://drupal.org/node/2400039
[R4.0-rc1-Issue-2399609]: http://drupal.org/node/2399609
[R4.0-rc1-Issue-2400451]: http://drupal.org/node/2400451
[R4.0-rc1-Issue-2399597]: http://drupal.org/node/2399597
[R4.0-rc1-Issue-2395449]: http://drupal.org/node/2395449
[R4.0-rc1-Issue-2394391]: http://drupal.org/node/2394391
[R4.0-rc1-Issue-2394391]: http://drupal.org/node/2394391
