## v1.0-RC16

Features:

  - Consistent experience between Browser Install + Drush

Bug Fixes:

  - (Commit: [0e15681][RC15-Commit-0e15681]) #[2102609][RC15-Issue-2102609] - Fixed Breadcrumbs missing a div.

## v1.0-RC15

Features:

  - Content editing improvements
  - Furthered along the preparation to move to localize.drupal.org

Bug Fixes:

  - (Commit: [c7187f1][RC15-Commit-c7187f1]) #[2101177][RC15-Issue-2101177] - Fixed On Page admin/content, search exact title.
  - (Commit: [abc0e6e][RC15-Commit-abc0e6e]) #[2101291][RC15-Issue-2101291] - Fixed .form-buttons in view modal.
  - (Commit: [f935873][RC15-Commit-f935873]) #[2099885][RC15-Issue-2099885] - Fixed No tokens in Path Breadcrumbs admin page.
  - (Commit: [63444be][RC15-Commit-63444be]) #[2101233][RC15-Issue-2101233] - Fixed UUID Link not handling translations properly.
  - (Commit: [e371ec9][RC15-Commit-e371ec9]) #[2101341][RC15-Issue-2101341] - Fixed Categories taxonomy label missing.
  - (Commit: [26217a4][RC15-Commit-26217a4]) #[2101501][RC15-Issue-2101501] - Fixed Taxonomy term feeds missing translations.

## v1.0-RC14

Features:

  - Streamline some modules from the distribution
  - Some WYSIWYG improvements

Bug Fixes:

  - (Commit: [416f515][RC14-Commit-416f515]) #[2099029][RC14-Issue-2099029] - Fixed Remove Wysiwyg Filter in favor of CKEditor ACF.
  - (Commit: [146f6f0][RC14-Commit-146f6f0]) #[2098583][RC14-Issue-2098583] - Fix post-install link to documentation.
  - (Commit: [ef0f5e1][RC14-Commit-ef0f5e1]) #[2098143][RC14-Issue-2098143] - Fixed Menu links not deploying language/nested.
  - (Commit: [5cd81dc][RC14-Commit-5cd81dc]) #[2094209][RC14-Issue-2094209] - Fixed Site logo always appearing.

## v1.0-RC13

Features:

  - Further improvements to interfaces especially deployment
  - Improvements to Media Modal
  - Minor updates to modules

Bug Fixes:

  - (Commit: [17ff91a][RC13-Commit-17ff91a]) #[2095879][RC13-Issue-2095879] - Fixed for Maintenance Page (wetkit_preprocess()).
  - (Commit: [acf7958][RC13-Commit-acf7958]) #[2095957][RC13-Issue-2095957] - Fixed Deployment use language prefix instead of language->language.
  - (Commit: [e74fbef][RC13-Commit-e74fbef]) #[2094121][RC13-Issue-2094121] - Fixed Doohan layout has duplicated sections.
  - (Commit: [aaa27a6][RC13-Commit-aaa27a6]) #[2097675][RC13-Issue-2097675] - Fixed Content is Content, right?.
  - (Commit: [a47a0b0][RC13-Commit-a47a0b0]) #[2097679][RC13-Issue-2097679] - Enable 'Transliterate prior to creating alias" by default.
  - (Commit: [b4da119][RC13-Commit-b4da119]) #[2085985][RC13-Issue-2085985] - Fixed WYSIWYS CKEDITOR not using # of rows specified in field settings.
  - (Commit: [79941f6][RC13-Commit-79941f6]) #[2097841][RC13-Issue-2097841] - Fixed Error on display of Bean:Share.
  - (Commit: [204c603][RC13-Commit-204c603]) #[2098125][RC13-Issue-2098125] - Added Last Revision Author preferred in Content listing and Deployment Batch.

## v1.0-RC12

Features:

  - Deployment with Batch and In Memory are fully functional
  - Code Sniffer has been run on all modules / themes
  - Metatag has been updated and features exported

Bug Fixes:

  - (Commit: [0f684fa][RC12-Commit-0f684fa]) #[2093995][RC12-Issue-2093995] - Fixed WetKit deployment not working in RC11.
  - (Commit: [3942966][RC12-Commit-3942966]) #[2094453][RC12-Issue-2094453] - WeTKit Batch Deployment screen - button style.

## v1.0-RC11

Features:

  - Improved Batch Deployment Screen
  - Links in content are now leveraging UUID

Bug Fixes:

  - (Commit: [463598d][RC11-Commit-463598d]) #[2092171][RC11-Issue-2092171] - Updated Pager to be more in line with WxT
  - (Commit: [bac0d9b][RC11-Commit-bac0d9b]) #[2092479][RC11-Issue-2092479] - Enable Linkit UUID as default
  - (Commit: [0ce91ed][RC11-Commit-0ce91ed]) #[2086139][RC11-Issue-2086139] - Batch Deploy sends Files/Beans/Users over right away
  - (Commit: [ebc70e4][RC11-Commit-ebc70e4]) #[2092085][RC11-Issue-2092085] - Fix WetKit Taxonomy make field instances work with deploy
  - (Commit: [7318b28][RC11-Commit-7318b28]) #[2090019][RC11-Issue-2090019] - H1 missing on create and edit node pages

## v1.0-RC10

Features:

  - Updated Omega + WetKit Omega to latest dev
  - Ember is now a proper base theme

Bug Fixes:

  - Fixed Deployment Source Translation Issue
  - Fixed Entity i18n menu not working on node edit
  - Fixed overall styling issues

## v1.0-RC9

Features:

  - File Entity Types now are compatible with ET
  - Synchronized with GitHub
  - Aligned with Gov requirements on Search Form
  - Fixed WetKit Search to not include ApacheSolr modules by default

Bug Fixes:

  - Media Browser is working again
  - Numerous CSS Fixes

## v1.0-RC8

Bug Fixes:

  - CSS Fixes
  - Media Improvements

## v1.0-RC7

Features:

  - Added Ember as the new backend theme
  - Completely minimized the whole distribution
  - Deployment (Content Staging) now works out of the box (Epic Win!)

Bug Fixes:

  - Problems with File Entity not saving
  - Fixed deployment with menu links


<!-- Links Referenced -->


<!-- Commits RC16 -->

[RC16-Commit-0e15681]:            http://drupalcode.org/project/wetkit_breadcrumbs.git/commit/0e15681

<!-- Issues RC16 -->

[RC16-Issue-2102609]:             http://drupal.org/node/2102609

<!-- Commits RC15 -->

[RC15-Commit-c7187f1]:            http://drupalcode.org/project/wetkit_core.git/commit/c7187f1
[RC15-Commit-abc0e6e]:            http://drupalcode.org/project/wetkit_ember.git/commit/abc0e6e
[RC15-Commit-f935873]:            http://drupalcode.org/project/wetkit_breadcrumbs.git/commit/f935873
[RC15-Commit-63444be]:            http://drupalcode.org/project/wetkit_core.git/commit/63444be
[RC15-Commit-e371ec9]:            http://drupalcode.org/project/wetkit_pages.git/commit/e371ec9
[RC15-Commit-26217a4]:            http://drupalcode.org/project/wetkit_core.git/commit/26217a4

<!-- Issues RC15 -->

[RC15-Issue-2101177]:             http://drupal.org/node/2101177
[RC15-Issue-2101291]:             http://drupal.org/node/2101291
[RC15-Issue-2099885]:             http://drupal.org/node/2099885
[RC15-Issue-2101233]:             http://drupal.org/node/2101233
[RC15-Issue-2101341]:             http://drupal.org/node/2101341
[RC15-Issue-2101501]:             http://drupal.org/node/2101501

<!-- Commits RC14 -->

[RC14-Commit-416f515]:            http://drupalcode.org/project/wetkit_omega.git/commit/416f515
[RC14-Commit-146f6f0]:            http://drupalcode.org/project/wetkit_core.git/commit/146f6f0
[RC14-Commit-ef0f5e1]:            http://drupalcode.org/project/wetkit_deployment.git/commit/ef0f5e1
[RC14-Commit-5cd81dc]:            http://drupalcode.org/project/wetkit_omega.git/commit/5cd81dc

<!-- Issues RC14 -->

[RC14-Issue-2099029]:             http://drupal.org/node/2099029
[RC14-Issue-2098583]:             http://drupal.org/node/2098583
[RC14-Issue-2098143]:             http://drupal.org/node/2098143
[RC14-Issue-2094209]:             http://drupal.org/node/2094209

<!-- Commits RC13 -->

[RC13-Commit-17ff91a]:            http://drupalcode.org/project/wetkit_omega.git/commit/17ff91a
[RC13-Commit-acf7958]:            http://drupalcode.org/project/wetkit_deployment.git/commit/acf7958
[RC13-Commit-e74fbef]:            http://drupalcode.org/project/wetkit_layouts.git/commit/e74fbef
[RC13-Commit-aaa27a6]:            http://drupalcode.org/project/wetkit_core.git/commit/aaa27a6
[RC13-Commit-a47a0b0]:            http://drupalcode.org/project/wetkit_core.git/commit/a47a0b0
[RC13-Commit-b4da119]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/b4da119
[RC13-Commit-79941f6]:            http://drupalcode.org/project/wetkit_bean.git/commit/79941f6
[RC13-Commit-204c603]:            http://drupalcode.org/project/wetkit_deployment.git/commit/204c603

<!-- Issues RC13 -->

[RC13-Issue-2095879]:             http://drupal.org/node/2095879
[RC13-Issue-2095957]:             http://drupal.org/node/2095957
[RC13-Issue-2094121]:             http://drupal.org/node/2094121
[RC13-Issue-2097675]:             http://drupal.org/node/2097675
[RC13-Issue-2097679]:             http://drupal.org/node/2097679
[RC13-Issue-2085985]:             http://drupal.org/node/2085985
[RC13-Issue-2097841]:             http://drupal.org/node/2097841
[RC13-Issue-2098125]:             http://drupal.org/node/2098125

<!-- Commits RC12 -->

[RC12-Commit-0f684fa]:            http://drupalcode.org/project/wetkit_deployment.git/commit/0f684fa
[RC12-Commit-3942966]:            http://drupalcode.org/project/wetkit_deployment.git/commit/3942966

<!-- Issues RC12 -->

[RC12-Issue-2093995]:             http://drupal.org/node/2093995
[RC12-Issue-2094453]:             http://drupal.org/node/2094453

<!-- Commits RC11 -->

[RC11-Commit-463598d]:            http://drupalcode.org/project/wetkit_omega.git/commit/463598d
[RC11-Commit-bac0d9b]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/bac0d9b
[RC11-Commit-0ce91ed]:            http://drupalcode.org/project/wetkit_deployment.git/commit/0ce91ed
[RC11-Commit-ebc70e4]:            http://drupalcode.org/project/wetkit_core.git/commit/ebc70e4
[RC11-Commit-7318b28]:            http://drupalcode.org/project/wetkit_pages.git/commit/7318b28

<!-- Issues RC11 -->

[RC11-Issue-2092171]:             http://drupal.org/node/2092171
[RC11-Issue-2092479]:             http://drupal.org/node/2092479
[RC11-Issue-2086139]:             http://drupal.org/node/2086139
[RC11-Issue-2092085]:             http://drupal.org/node/2092085
[RC11-Issue-2090019]:             http://drupal.org/node/2090019
