## v2.0-beta1

New Features:

  - Initial Release

## v1.5

Security Update(s):

  - Drupal Core
  - Organic Groups
  - Password Policy
  - Views

Features:

  - Panels DX improvements
  - Numerous bug fixes across contrib + custom space
  - Tighter deploy + uuid handling for edge cases
  - Multilingual fixes to i18n
  - Panelizer Updates (Module should still be used with caution)

Fixes:

  - (Commit: [96fd513][R1.5-Commit-96fd513]) #[2262917][R1.5-Issue-2262917] -  Update Drupal Core to 7.28.
  - (Commit: [0ec9bea][R1.5-Commit-0ec9bea]) #[2269099][R1.5-Issue-2269099] -  Force password change on next login prevents logins.
  - (Commit: [11340a9][R1.5-Commit-11340a9]) #[2256435][R1.5-Issue-2256435] -  New layout (Polley).
  - (Commit: [df07c24][R1.5-Commit-df07c24]) #[2219473][R1.5-Issue-2219473] -  Allow for the disabling of Update Manager.
  - (Commit: [a06f14f][R1.5-Commit-a06f14f]) #[2262919][R1.5-Issue-2262919] -  Organic Groups (OG) - Access Bypass.
  - (Commit: [7723c47][R1.5-Commit-7723c47]) #[2275701][R1.5-Issue-2275701] -  Added Ctools patches.
  - (Commit: [fe98705][R1.5-Commit-fe98705]) #[2275217][R1.5-Issue-2275217] -  Cannot unset string offsets
  - (Commit: [c925292][R1.5-Commit-c925292]) #[2250501][R1.5-Issue-2250501] -  Fixed Node edit page shows menu items in all languages.
  - (Commit: [1babea2][R1.5-Commit-1babea2]) #[2271403][R1.5-Issue-2271403] -  Fixed Cannot access empty property field.attach.inc.
  - (Commit: [1e60e61][R1.5-Commit-1e60e61]) #[2276049][R1.5-Issue-2276049] -  Update l10n_update to 1.0 release.
  - (Commit: [e360c6a][R1.5-Commit-e360c6a]) #[2271309][R1.5-Issue-2271309] -  Fixed Adding a wet video through Media renders with errors.
  - (Commit: [f8227ff][R1.5-Commit-f8227ff]) #[2278399][R1.5-Issue-2278399] -  Fixed Saving translation text can result in error.
  - (Commit: [4890142][R1.5-Commit-4890142]) #[2278755][R1.5-Issue-2278755] -  Fixed Security updates for Views + Password Policy.
  - (Commit: [7b7e3d5][R1.5-Commit-7b7e3d5]) #[2278759][R1.5-Issue-2278759] -  Fixed Update admin views.
  - (Commit: [48fd741][R1.5-Commit-48fd741]) #[2275851][R1.5-Issue-2275851] -  Picture plugin (wysiwyg) updates.
  - (Commit: [569a370][R1.5-Commit-569a370]) #[2279051][R1.5-Issue-2279051] -  Add new backend layout (Siris).
  - (Commit: [fc167b3][R1.5-Commit-fc167b3]) #[2279067][R1.5-Issue-2279067] -  Fixed Deletes metatag content when revision is empty.
  - (Commit: [966911a][R1.5-Commit-966911a]) #[2279085][R1.5-Issue-2279085] -  Add Term access handler for UUID.
  - (Commit: [c0e67a2][R1.5-Commit-c0e67a2]) #[2279665][R1.5-Issue-2279665] -  Fixed CTools Patches for minor bugs.
  - (Commit: [7e06ba0][R1.5-Commit-7e06ba0]) #[2279759][R1.5-Issue-2279759] -  Fixed Update File Entity + Media to latest dev.
  - (Commit: [d87e659][R1.5-Commit-d87e659]) #[2279771][R1.5-Issue-2279771] -  Fixed Workbench Moderation + VBO.
  - (Commit: [32b0d9b][R1.5-Commit-32b0d9b]) #[2279795][R1.5-Issue-2279795] -  Fixed Panels tabs styles don't allow custom naming.
  - (Commit: [452bb91][R1.5-Commit-452bb91]) #[2279251][R1.5-Issue-2279251] -  Fixed delete a menu item on source does not delete on dest.
  - (Commit: [00c5069][R1.5-Commit-00c5069]) #[2279943][R1.5-Issue-2279943] -  Fixed Metatags + Entity Translation + Deployment.
  - (Commit: [0fb5cd3][R1.5-Commit-0fb5cd3]) #[2280109][R1.5-Issue-2280109] -  Fixed Patches to Entity Translation 1.0-beta3.
  - (Commit: [93a8fa1][R1.5-Commit-93a8fa1]) #[2280115][R1.5-Issue-2280115] -  Fixed Patches to Omega 4.2 (Remove Nag Screen + Metatags Order).
  - (Commit: [3cd5200][R1.5-Commit-3cd5200]) #[2280189][R1.5-Issue-2280189] -  Fixed Custom Search + Search API with Solr support.
  - (Commit: [e615e65][R1.5-Commit-e615e65]) #[2280679][R1.5-Issue-2280679] -  Fixed update date_facets in wetkit_search.
  - (Commit: [f15ff03][R1.5-Commit-f15ff03]) #[2280863][R1.5-Issue-2280863] -  Fixed Update Panelizer to latest dev.

## v1.4

Security Update(s):

  - Drupal Core
  - Custom Search
  - Fape
  - Internationalization

Features:

  - Stabilization of WxT Search modules.
  - Multiple Bean fixes
  - Multiple theme layer fixes
  - Performance improvements from Acquia
  - Numerous Behat additions
  - Switch to full build of CKEditor
  - Updated WxT jQuery framework to v3 release (3.1.10) before move to bootstrap in v4

Fixes:

  - (Commit: [5d45a49][R1.4-Commit-5d45a49]) #[2227797][R1.4-Issue-2227797] -  CTools Patches since 1.4.
  - (Commit: [b540b79][R1.4-Commit-b540b79]) #[2219547][R1.4-Issue-2219547] -  Date facets.
  - (Commit: [f54c85e][R1.4-Commit-f54c85e]) #[2212509][R1.4-Issue-2212509] -  Editor role (Part 1).
  - (Commit: [ac36290][R1.4-Commit-ac36290]) #[2212509][R1.4-Issue-2212509] -  Editor role (Part 2).
  - (Commit: [2021c16][R1.4-Commit-2021c16]) #[2212501][R1.4-Issue-2212501] -  Mini pager needs to be better themed.
  - (Commit: [23426f0][R1.4-Commit-23426f0]) #[2227857][R1.4-Issue-2227857] -  Upgrade Migrate to latest Dev.
  - (Commit: [b97b38f][R1.4-Commit-b97b38f]) #[2227873][R1.4-Issue-2227873] -  Update Ember (Part 1).
  - (Commit: [adf7583][R1.4-Commit-adf7583]) #[2227873][R1.4-Issue-2227873] -  Update Ember (Part 2).
  - (Commit: [c175a13][R1.4-Commit-c175a13]) #[2229433][R1.4-Issue-2229433] -  WetKit Search incorrectly redirects Search API.
  - (Commit: [8fec444][R1.4-Commit-8fec444]) #[2229457][R1.4-Issue-2229457] -  Patch WYSIWYG so can hit text filter selection form.
  - (Commit: [678b249][R1.4-Commit-678b249]) #[2211505][R1.4-Issue-2211505] -  Focus on last CKEditor Instance.
  - (Commit: [3942f3d][R1.4-Commit-3942f3d]) #[2229469][R1.4-Issue-2229469] -  Minor HTML encoding issues with WetKit Users.
  - (Commit: [1205dda][R1.4-Commit-1205dda]) #[2229481][R1.4-Issue-2229481] -  Media Images default view mode broken on edit.
  - (Commit: [11443b3][R1.4-Commit-11443b3]) #[2229525][R1.4-Issue-2229525] -  WetKit Admin Panels Pages warnings in php 5.4.
  - (Commit: [041e2b8][R1.4-Commit-041e2b8]) #[2229529][R1.4-Issue-2229529] -  Updates to WetKit Core (7.x-1.8).
  - (Commit: [613b771][R1.4-Commit-613b771]) #[2229529][R1.4-Issue-2229529] -  Updates to WetKit Core (7.x-1.8).
  - (Commit: [de0a193][R1.4-Commit-de0a193]) #[2229529][R1.4-Issue-2229529] -  Updates to WetKit Core (7.x-1.8).
  - (Commit: [6e5db22][R1.4-Commit-6e5db22]) #[2230019][R1.4-Issue-2230019] -  Dashboard error array_key_exists when comments enabled.
  - (Commit: [f171bdc][R1.4-Commit-f171bdc]) #[2230929][R1.4-Issue-2230929] -  Remove "Disable Developer Modules" link in admin menu.
  - (Commit: [ef5fa1e][R1.4-Commit-ef5fa1e]) #[2219805][R1.4-Issue-2219805] -  Customize our CKEditor build (Community).
  - (Commit: [f74ab60][R1.4-Commit-f74ab60]) #[2231787][R1.4-Issue-2231787] -  Field_group module "div" formatter outputs invalid markup.
  - (Commit: [586ed8c][R1.4-Commit-586ed8c]) #[2232913][R1.4-Issue-2232913] -  Update jQuery Update latest stable.
  - (Commit: [7bb2b8f][R1.4-Commit-7bb2b8f]) #[2232923][R1.4-Issue-2232923] -  Bean ET Block Translation Patch.
  - (Commit: [599ac18][R1.4-Commit-599ac18]) #[2232935][R1.4-Issue-2232935] -  WetKit Language update.
  - (Commit: [fecc3b1][R1.4-Commit-fecc3b1]) #[2232947][R1.4-Issue-2232947] -  WetKit OG Updates.
  - (Commit: [756c476][R1.4-Commit-756c476]) #[2232951][R1.4-Issue-2232951] -  Wetkit Deployment Updates (v1.4).
  - (Commit: [b3770f9][R1.4-Commit-b3770f9]) #[2232953][R1.4-Issue-2232953] -  WetKit Widgets Update (v1.4).
  - (Commit: [42c031d][R1.4-Commit-42c031d]) #[2232957][R1.4-Issue-2232957] -  WetKit Search Updates (v1.4).
  - (Commit: [af200f0][R1.4-Commit-af200f0]) #[2232957][R1.4-Issue-2232957] -  WetKit Search Updates (v1.4).
  - (Commit: [63ff1cd][R1.4-Commit-63ff1cd]) #[2199997][R1.4-Issue-2199997] -  Improve the whole menu workflow.
  - (Commit: [4334ac7][R1.4-Commit-4334ac7]) #[2246827][R1.4-Issue-2246827] -  Missing access control for WxT Migrate.
  - (Commit: [4fdda14][R1.4-Commit-4fdda14]) #[2246833][R1.4-Issue-2246833] -  WxT Images is to aggressive in labels.
  - (Commit: [ad9334b][R1.4-Commit-ad9334b]) #[2246835][R1.4-Issue-2246835] -  Missing access control for WxT Deployment.
  - (Commit: [ebdb70d][R1.4-Commit-ebdb70d]) #[2246837][R1.4-Issue-2246837] -  Add Drupal static caching to WxT Menu.
  - (Commit: [b485439][R1.4-Commit-b485439]) #[2246839][R1.4-Issue-2246839] -  Caching of regions populated in hook_preprocess_page().
  - (Commit: [9c71601][R1.4-Commit-9c71601]) #[2246841][R1.4-Issue-2246841] -  Updates to WxT Ember (7.x-1.4).
  - (Commit: [82fa4cc][R1.4-Commit-82fa4cc]) #[2246853][R1.4-Issue-2246853] -  Update to Drupal 7.27 for SA-CORE-2014-002.
  - (Commit: [864c97a][R1.4-Commit-864c97a]) #[2215023][R1.4-Issue-2215023] -  Font-family on submit buttons not working (CSS error).
  - (Commit: [21d8e98][R1.4-Commit-21d8e98]) #[2171255][R1.4-Issue-2171255] -  When LinkIt loads the popup isn't aligned.
  - (Commit: [62064fb][R1.4-Commit-62064fb]) #[2232467][R1.4-Issue-2232467] -  Wetkit_omega node.tpl is outputting 'class' twices.
  - (Commit: [53099b9][R1.4-Commit-53099b9]) #[2248433][R1.4-Issue-2248433] -  SA-CONTRIB-2014-043 - Custom Search (XSS).
  - (Commit: [58e1342][R1.4-Commit-58e1342]) #[2248435][R1.4-Issue-2248435] -  SA-CONTRIB-2014-042 - Internationalization.
  - (Commit: [8c687dc][R1.4-Commit-8c687dc]) #[2254353][R1.4-Issue-2254353] -  Fixes for WxT Bean + Behat.
  - (Commit: [19ee35e][R1.4-Commit-19ee35e]) #[2255169][R1.4-Issue-2255169] -  Updates to WxT Language (7.x-1.6).
  - (Commit: [36eceda][R1.4-Commit-36eceda]) #[2229529][R1.4-Issue-2229529] -  Updates to WetKit Core (7.x-1.8).
  - (Commit: [e54529c][R1.4-Commit-e54529c]) #[2187771][R1.4-Issue-2187771] -  Media patches for WxT.
  - (Commit: [7469676][R1.4-Commit-7469676]) #[2256611][R1.4-Issue-2256611] -  Updates to WxT Admin (7.x-1.4).
  - (Commit: [8fa448f][R1.4-Commit-8fa448f]) #[2256723][R1.4-Issue-2256723] -  Update core jQuery WET-BOEW to v3.1.10.

## v1.3

Security Update(s):

  - Services
  - Webform

Features:

  - Node Edit screen now prefers backend theme
  - Behat Tests
  - Features are completely reverted
  - New submodule wetkit_update to guide user in upgrade process
  - Even more modules have been set to stable release tag
  - Panelizer removed as default for wetkit_page
  - Styling improvement for Views + Ember
  - Refactored menu workflow (menu block works with WxT markup)

Fixes:

  - (Commit: [677730d][R1.3-Commit-677730d]) #[2177753][R1.3-Issue-2177753] -  Configuring pane title background style.
  - (Commit: [c0fe19d][R1.3-Commit-c0fe19d]) #[2177741][R1.3-Issue-2177741] -  Needs a setting to configure pane title background.
  - (Commit: [1886fad][R1.3-Commit-1886fad]) #[2178341][R1.3-Issue-2178341] -  Wetkit Bean outputs an empty H2 and assiated title_field markup.
  - (Commit: [32fa225][R1.3-Commit-32fa225]) #[2177627][R1.3-Issue-2177627] -  Allowing to add classes to a top-section menu item.
  - (Commit: [f70a208][R1.3-Commit-f70a208]) #[2185513][R1.3-Issue-2185513] -  Wetkit_bean slideshow generates errors.
  - (Commit: [de72d0d][R1.3-Commit-de72d0d]) #[2178469][R1.3-Issue-2178469] -  Linkit search results should include the URL of the page.
  - (Commit: [a7691a2][R1.3-Commit-a7691a2]) #[2181155][R1.3-Issue-2181155] -  Bean for implementing a Slide-out tab.
  - (Commit: [8128ef6][R1.3-Commit-8128ef6]) #[2184761][R1.3-Issue-2184761] -  Webform conditional not working.
  - (Commit: [ece42ff][R1.3-Commit-ece42ff]) #[2187447][R1.3-Issue-2187447] -  Update views bulk operations.
  - (Commit: [ba0c210][R1.3-Commit-ba0c210]) #[2192255][R1.3-Issue-2192255] -  Update Omega to stable 4.2 (Part 1).
  - (Commit: [81e8629][R1.3-Commit-81e8629]) #[2192261][R1.3-Issue-2192261] -  Ember Padding is to aggressive.
  - (Commit: [93a41e2][R1.3-Commit-93a41e2]) #[2192263][R1.3-Issue-2192263] -  Important jQuery Update patches.
  - (Commit: [3374402][R1.3-Commit-3374402]) #[2192269][R1.3-Issue-2192269] -  Upgrade Path Breadcrumbs to 3.0-rc1.
  - (Commit: [ece42ff][R1.3-Commit-ece42ff]) #[2192275][R1.3-Issue-2192275] -  Updates to WetKit Core (Part 1).
  - (Commit: [a93f218][R1.3-Commit-a93f218]) #[2187771][R1.3-Issue-2187771] -  Saving Media in IE + FF.
  - (Commit: [7c0c721][R1.3-Commit-7c0c721]) #[2192255][R1.3-Issue-2192255] -  Update Omega to stable 4.2 (Part 2).
  - (Commit: [f4adba4][R1.3-Commit-f4adba4]) #[2187383][R1.3-Issue-2187383] -  Align with upcoming stable release of Panels + CTools.
  - (Commit: [6de3bd9][R1.3-Commit-6de3bd9]) #[2187383][R1.3-Issue-2187383] -  Align with upcoming stable release of Panels + CTools.
  - (Commit: [1f43792][R1.3-Commit-1f43792]) #[2192275][R1.3-Issue-2192275] -  Updates to WetKit Core (Part 2).
  - (Commit: [5ec2cb8][R1.3-Commit-5ec2cb8]) #[2192255][R1.3-Issue-2192255] -  Update Omega to stable 4.2 (Part 3).
  - (Commit: [0371ea4][R1.3-Commit-0371ea4]) #[2192395][R1.3-Issue-2192395] -  WetKit Images + WetKit Wysiwyg Features Overridden.
  - (Commit: [58d2d8b][R1.3-Commit-58d2d8b]) #[2192413][R1.3-Issue-2192413] -  Updates to WetKit Language.
  - (Commit: [16e955b][R1.3-Commit-16e955b]) #[2192413][R1.3-Issue-2192413] -  Updates to WetKit Core (Part 3).
  - (Commit: [43ea1b2][R1.3-Commit-43ea1b2]) #[2187383][R1.3-Issue-2187383] -  Align with upcoming stable release of Panels + CTools.
  - (Commit: [3f08637][R1.3-Commit-3f08637]) #[2194969][R1.3-Issue-2194969] -  Webform Security Release.
  - (Commit: [061f981][R1.3-Commit-061f981]) #[2195995][R1.3-Issue-2195995] -  Fix Permission Issue with WxT.
  - (Commit: [82c0d96][R1.3-Commit-82c0d96]) #[2192275][R1.3-Issue-2192275] -  Updates to WetKit Core (Part 3).
  - (Commit: [d872c8a][R1.3-Commit-d872c8a]) #[2196529][R1.3-Issue-2196529] -  Minor Stable Release updates to WxT Deploy.
  - (Commit: [91c498d][R1.3-Commit-91c498d]) #[2197929][R1.3-Issue-2197929] -  Adopt Open Atriums concept of Distribution Update module.
  - (Commit: [9cbb486][R1.3-Commit-9cbb486]) #[2197991][R1.3-Issue-2197991] -  Adopt Open Atriums concept of Distribution Update module.
  - (Commit: [bf841c3][R1.3-Commit-bf841c3]) #[2182663][R1.3-Issue-2182663] -  Page variants re-ordering (Pages).
  - (Commit: [599d4e1][R1.3-Commit-599d4e1]) #[2182663][R1.3-Issue-2182663] -  Page variants re-ordering (Migrate).
  - (Commit: [b0c8ff8][R1.3-Commit-b0c8ff8]) #[2198973][R1.3-Issue-2198973] -  Update File Entity + Fix Features Overrides.
  - (Commit: [605119b][R1.3-Commit-605119b]) #[2198991][R1.3-Issue-2198991] -  Update WetKit Menu.
  - (Commit: [cbd0ed2][R1.3-Commit-cbd0ed2]) #[2192275][R1.3-Issue-2192275] -  Updates to WetKit Core (Part 4).
  - (Commit: [b6e9f33][R1.3-Commit-b6e9f33]) #[2192275][R1.3-Issue-2198973] -  Update File Entity + Fix Features Overrides.
  - (Commit: [c50303b][R1.3-Commit-c50303b]) #[2192275][R1.3-Issue-2198973] -  Fix Features Overrides.
  - (Commit: [d840632][R1.3-Commit-d840632]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Widgets).
  - (Commit: [caff26a][R1.3-Commit-caff26a]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Core).
  - (Commit: [4af8a78][R1.3-Commit-4af8a78]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Menu).
  - (Commit: [6686f74][R1.3-Commit-6686f74]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Menu).
  - (Commit: [74847a1][R1.3-Commit-74847a1]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Menu).
  - (Commit: [551a9a3][R1.3-Commit-551a9a3]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Core).
  - (Commit: [74aa724][R1.3-Commit-74aa724]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Core).
  - (Commit: [b5143be][R1.3-Commit-b5143be]) #[2199997][R1.3-Issue-2199997] -  Improve the whole menu workflow (Menu).
  - (Commit: [51af187][R1.3-Commit-51af187]) #[2200933][R1.3-Issue-2200933] -  Remove panelizer as default for WetKit Page.
  - (Commit: [f15a135][R1.3-Commit-f15a135]) #[2199391][R1.3-Issue-2199391] -  Javascript error Cannot set property Layout of undefined.
  - (Commit: [07266d8][R1.3-Commit-07266d8]) #[2192275][R1.3-Issue-2192275] -  Updates to WetKit Core (Part 5).
  - (Commit: [3d5a897][R1.3-Commit-3d5a897]) #[2202319][R1.3-Issue-2202319] -  Use the administration theme when editing or creating content.
  - (Commit: [0bfc560][R1.3-Commit-0bfc560]) #[2202319][R1.3-Issue-2202319] -  Use the administration theme when editing or creating content.
  - (Commit: [48c1e40][R1.3-Commit-48c1e40]) #[2202319][R1.3-Issue-2202319] -  Use the administration theme when editing or creating content.
  - (Commit: [5afb762][R1.3-Commit-5afb762]) #[2201483][R1.3-Issue-2201483] -  Best way to offer more rich-text editor controls to the user.
  - (Commit: [0eb3bcc][R1.3-Commit-0eb3bcc]) #[2203141][R1.3-Issue-2203141] -  Fix for new Media Browser Title.
  - (Commit: [0e2af9e][R1.3-Commit-0e2af9e]) #[2203141][R1.3-Issue-2203141] -  Fix for new Media Browser Title.

## v1.2

Security Update(s):

  - Drupal Core (7.26)
  - Entity API

Features:

  - A great deal of modules have been set to stable tag
  - Ember base theme has been significantly improved
  - Performance improvements
  - Work will now being on 2.x branch for bootstrap (stability for 1.x)
  - New release cycle at mid month when security releases come out

Fixes:

  - (Commit: [26bfbe5][R1.2-Commit-26bfbe5]) #[2173403][R1.2-Issue-2173403] - Adding extra sharing sites.
  - (Commit: [470071c][R1.2-Commit-470071c]) #[2175767][R1.2-Issue-2175767] - Declare translatable field for Featured Image.
  - (Commit: [41c8765][R1.2-Commit-9756256]) #[2173391][R1.2-Issue-2173391] - Updating share widget for email and source tag.
  - (Commit: [b107e98][R1.2-Commit-b107e98]) #[2176457][R1.2-Issue-2176457] - Small adjustments to WetKit Search.
  - (Commit: [2383101][R1.2-Commit-2383101]) #[2176487][R1.2-Issue-2176487] - WetKit Core Updates (Part 1).
  - (Commit: [9ccea63][R1.2-Commit-9ccea63]) #[2176519][R1.2-Issue-2176519] - WetKit Breadcrumbs Update.
  - (Commit: [d5f1d97][R1.2-Commit-d5f1d97]) #[2176527][R1.2-Issue-2176527] - WetKit Metatags Update.
  - (Commit: [482f756][R1.2-Commit-482f756]) #[2176527][R1.2-Issue-2176567] - Fix for undefined panels display::UUID in wetkit_i18n_panels.
  - (Commit: [3a018be][R1.2-Commit-3a018be]) #[2176571][R1.2-Issue-2176571] - Updates to WetKit Language.
  - (Commit: [3178bf4][R1.2-Commit-3178bf4]) #[2176577][R1.2-Issue-2176577] - Remove widget Tabbed Inteface in favor of the Bean Media functionality.
  - (Commit: [cc4e7bb][R1.2-Commit-cc4e7bb]) #[2176527][R1.2-Issue-2176527] - WetKit Metatags Update.
  - (Commit: [cc4e7bb][R1.2-Commit-cc4e7bb]) #[2176527][R1.2-Issue-2176527] - WetKit Metatags Update.
  - (Commit: [fcaae17][R1.2-Commit-fcaae17]) #[2176603][R1.2-Issue-2176603] - Improve Ember base Theme (Part 1).
  - (Commit: [75e5f04][R1.2-Commit-75e5f04]) #[2176825][R1.2-Issue-2176825] - CodeSniffer Updates (WetKit Admin).
  - (Commit: [517a8f5][R1.2-Commit-517a8f5]) #[2176825][R1.2-Issue-2176825] - CodeSniffer Updates (WetKit Wysiwyg).
  - (Commit: [a5f02e6][R1.2-Commit-a5f02e6]) #[2176487][R1.2-Issue-2176487] - WetKit Core Updates (Part 2).
  - (Commit: [8981be2][R1.2-Commit-8981be2]) #[2176603][R1.2-Issue-2176603] - Improve Ember base Theme (Part 2).
  - (Commit: [eb311e3][R1.2-Commit-eb311e3]) #[2176603][R1.2-Issue-2176603] - Improve Ember base Theme (Part 3).
  - (Commit: [b357bac][R1.2-Commit-b357bac]) #[2168363][R1.2-Issue-2168363] - Site_name_url without clean url (Part 1).
  - (Commit: [677730d][R1.2-Commit-677730d]) #[2168363][R1.2-Issue-2168363] - Site_name_url without clean url (Part 2).
  - (Commit: [192811a][R1.2-Commit-192811a]) #[2176973][R1.2-Issue-2176973] -  Fix admin_menu implementation (Part 1).
  - (Commit: [f61ec36][R1.2-Commit-f61ec36]) #[2176973][R1.2-Issue-2176973] -  Fix admin_menu implementation (Part 2).
  - (Commit: [309895b][R1.2-Commit-309895b]) #[2176523][R1.2-Issue-2176523] -  Why no more "Promoted to front page"? (Part 1).
  - (Commit: [37b5d37][R1.2-Commit-37b5d37]) #[2176523][R1.2-Issue-2176523] -  Why no more "Promoted to front page"? (Part 2).
  - (Commit: [4e36f15][R1.2-Commit-4e36f15]) #[2176523][R1.2-Issue-2176523] -  Why no more "Promoted to front page"? (Part 3).
  - (Commit: [0be3895][R1.2-Commit-0be3895]) #[2160677][R1.2-Issue-2160677] -  Double drop down arrows in IE 9.

## v1.1

Features:

  - More Stabilization
  - Lots of minor bugs fixed
  - Introduction of Picture + Media Query

Bug Fixes:

  - (Commit: [41c8765][R1.1-Commit-41c8765]) #[2154261][R1.1-Issue-2154261] - Add Full support for WxT's Responsive Images (Bean).
  - (Commit: [8bd38f7][R1.1-Commit-8bd38f7]) #[8bd38f7][R1.1-Issue-2154261] - Add Full support for WxT's Responsive Images (Images).
  - (Commit: [0617a33][R1.1-Commit-0617a33]) #[2154261][R1.1-Issue-2154261] - Add Full support for WxT's Responsive Images (Wysiwyg).
  - (Commit: [e154bcf][R1.1-Commit-e154bcf]) #[2149799][R1.1-Issue-2149799] - Configure Pane Background should have default.
  - (Commit: [ee5adf0][R1.1-Commit-ee5adf0]) #[2155337][R1.1-Issue-2155337] - Prevent WxT Mobile + Permission.
  - (Commit: [1c4970e][R1.1-Commit-1c4970e]) #[2155371][R1.1-Issue-2155371] - Mislabelled File Name in WetKit Search API.
  - (Commit: [9b9071f][R1.1-Commit-9b9071f]) #[2158659][R1.1-Issue-2158659] - Addition of Mackenzie Layout.
  - (Commit: [3f340d2][R1.1-Commit-3f340d2]) #[2155411][R1.1-Issue-2155411] - Activating Theme Developer module brings site down.
  - (Commit: [d4a45a2][R1.1-Commit-d4a45a2]) #[2155545][R1.1-Issue-2155545] - Admin title for search facet in panels.
  - (Commit: [9be1cac][R1.1-Commit-9be1cac]) #[2153185][R1.1-Issue-2153185] - Uuid_features - undefined_index with bundles.
  - (Commit: [48f8970][R1.1-Commit-48f8970]) #[2144347][R1.1-Issue-2144347] - Web Installer doesn't display errors.
  - (Commit: [21957bd][R1.1-Commit-21957bd]) #[2160657][R1.1-Issue-2160657] - Media Filter doesn't correctly handle multiple images (1).
  - (Commit: [05f03ff][R1.1-Commit-05f03ff]) #[2160657][R1.1-Issue-2160657] - Media Filter doesn't correctly handle multiple images (2).
  - (Commit: [9dd8772][R1.1-Commit-9dd8772]) #[2157757][R1.1-Issue-2157757] - Using Format Grid w/ Striping Enabled Does Not Work.
  - (Commit: [5cf0580][R1.1-Commit-5cf0580]) #[2165193][R1.1-Issue-2165193] - Metatag description not displaying in HTML head.
  - (Commit: [fdf2891][R1.1-Commit-fdf2891]) #[2155581][R1.1-Issue-2155581] - JS errors keep incrementing when inspecting in Chrome.
  - (Commit: [f4c0404][R1.1-Commit-f4c0404]) #[2166741][R1.1-Issue-2166741] - Update Metatags to latest dev (Full Revision Support).
  - (Commit: [eb75425][R1.1-Commit-eb75425]) #[2160677][R1.1-Issue-2160677] - Double drop down menu arrows in Internet Explorer (IE).
  - (Commit: [8e29480][R1.1-Commit-8e29480]) #[2166803][R1.1-Issue-2166803] - Issue #2166803 by sylus: Update Drupal to 7.25.
  - (Commit: [973d251][R1.1-Commit-973d251]) #[2167311][R1.1-Issue-2167311] - Update Ember depdendency for WetKit Ember.
  - (Commit: [4c72796][R1.1-Commit-4c72796]) #[2094209][R1.1-Issue-2094209] - Site logo always appearing.
  - (Commit: [4decafc][R1.1-Commit-4decafc]) #[2151499][R1.1-Issue-2151499] - Migrated default content adds extra undefined language alt text for images.
  - (Commit: [3c3b646][R1.1-Commit-3c3b646]) #[2167557][R1.1-Issue-2167557] - Remove media_bulk_upload.
  - (Commit: [e15997a][R1.1-Commit-e15997a]) #[2160653][R1.1-Issue-2160653] - Unable to search for Links in Linkit using French Terms.

## v1.0

Features:

  - The Official 1.0 Release

Bug Fixes:

  - (Commit: [b987712][R1-Commit-b987712]) #[2148823][R1-Issue-2148823] - Rules disappearing when updated.
  - (Commit: [6c9cc22][R1-Commit-6c9cc22]) #[2151161][R1-Issue-2151161] - Basic Page should use Panels instead of Panelizer by Default.
  - (Commit: [1b1f833][R1-Commit-1b1f833]) #[2149943][R1-Issue-2149943] - View Draft Link from Node Edit Page and View Link on moderate page not working.
  - (Commit: [b6b28b4][R1-Commit-b6b28b4]) #[2151399][R1-Issue-2151399] - Updates to WetKit Core.

<!-- Links Referenced -->


<!-- Commits R1.5 -->

[R1.5-Commit-96fd513]:            http://drupalcode.org/project/wetkit.git/commit/96fd513
[R1.5-Commit-0ec9bea]:            http://drupalcode.org/project/wetkit_core.git/commit/0ec9bea
[R1.5-Commit-11340a9]:            http://drupalcode.org/project/wetkit_layouts.git/commit/11340a9
[R1.5-Commit-df07c24]:            http://drupalcode.org/project/wetkit_core.git/commit/df07c24
[R1.5-Commit-a06f14f]:            http://drupalcode.org/project/wetkit_og.git/commit/a06f14f
[R1.5-Commit-7723c47]:            http://drupalcode.org/project/wetkit_core.git/commit/7723c47
[R1.5-Commit-fe98705]:            http://drupalcode.org/project/wetkit_language.git/commit/fe98705
[R1.5-Commit-c925292]:            http://drupalcode.org/project/wetkit_language.git/commit/c925292
[R1.5-Commit-1babea2]:            http://drupalcode.org/project/wetkit_widgets.git/commit/1babea2
[R1.5-Commit-1e60e61]:            http://drupalcode.org/project/wetkit_language.git/commit/1e60e61
[R1.5-Commit-e360c6a]:            http://drupalcode.org/project/wetkit_widgets.git/commit/e360c6a
[R1.5-Commit-f8227ff]:            http://drupalcode.org/project/wetkit_language.git/commit/f8227ff
[R1.5-Commit-4890142]:            http://drupalcode.org/project/wetkit_core.git/commit/4890142
[R1.5-Commit-7b7e3d5]:            http://drupalcode.org/project/wetkit_admin.git/commit/7b7e3d5
[R1.5-Commit-48fd741]:            http://drupalcode.org/project/wetkit_images.git/commit/48fd741
[R1.5-Commit-569a370]:            http://drupalcode.org/project/wetkit_theme.git/commit/569a370
[R1.5-Commit-fc167b3]:            http://drupalcode.org/project/wetkit_metatag.git/commit/fc167b3
[R1.5-Commit-966911a]:            http://drupalcode.org/project/wetkit_core.git/commit/966911a
[R1.5-Commit-c0e67a2]:            http://drupalcode.org/project/wetkit_core.git/commit/c0e67a2
[R1.5-Commit-7e06ba0]:            http://drupalcode.org/project/wetkit_widgets.git/commit/7e06ba0
[R1.5-Commit-d87e659]:            http://drupalcode.org/project/wetkit_core.git/commit/d87e659
[R1.5-Commit-32b0d9b]:            http://drupalcode.org/project/wetkit_core.git/commit/32b0d9b
[R1.5-Commit-452bb91]:            http://drupalcode.org/project/wetkit_deployment.git/commit/452bb91
[R1.5-Commit-00c5069]:            http://drupalcode.org/project/wetkit_metatag.git/commit/00c5069
[R1.5-Commit-0fb5cd3]:            http://drupalcode.org/project/wetkit_language.git/commit/0fb5cd3
[R1.5-Commit-93a8fa1]:            http://drupalcode.org/project/wetkit_omega.git/commit/93a8fa1
[R1.5-Commit-3cd5200]:            http://drupalcode.org/project/wetkit_search.git/commit/3cd5200
[R1.5-Commit-e615e65]:            http://drupalcode.org/project/wetkit_search.git/commit/e615e65
[R1.5-Commit-f15ff03]:            http://drupalcode.org/project/wetkit_core.git/commit/f15ff03

<!-- Issues R1.5 -->

[R1.5-Issue-2262917]:             http://drupal.org/node/2262917
[R1.5-Issue-2269099]:             http://drupal.org/node/2269099
[R1.5-Issue-2256435]:             http://drupal.org/node/2256435
[R1.5-Issue-2219473]:             http://drupal.org/node/2219473
[R1.5-Issue-2262919]:             http://drupal.org/node/2262919
[R1.5-Issue-2275701]:             http://drupal.org/node/2275701
[R1.5-Issue-2275217]:             http://drupal.org/node/2275217
[R1.5-Issue-2250501]:             http://drupal.org/node/2250501
[R1.5-Issue-2271403]:             http://drupal.org/node/2271403
[R1.5-Issue-2276049]:             http://drupal.org/node/2276049
[R1.5-Issue-2271309]:             http://drupal.org/node/2271309
[R1.5-Issue-2278399]:             http://drupal.org/node/2278399
[R1.5-Issue-2278755]:             http://drupal.org/node/2278755
[R1.5-Issue-2278759]:             http://drupal.org/node/2278759
[R1.5-Issue-2275851]:             http://drupal.org/node/2275851
[R1.5-Issue-2279051]:             http://drupal.org/node/2279051
[R1.5-Issue-2279067]:             http://drupal.org/node/2279067
[R1.5-Issue-2279085]:             http://drupal.org/node/2279085
[R1.5-Issue-2279665]:             http://drupal.org/node/2279665
[R1.5-Issue-2279759]:             http://drupal.org/node/2279759
[R1.5-Issue-2279771]:             http://drupal.org/node/2279771
[R1.5-Issue-2279795]:             http://drupal.org/node/2279795
[R1.5-Issue-2279251]:             http://drupal.org/node/2279251
[R1.5-Issue-2279943]:             http://drupal.org/node/2279943
[R1.5-Issue-2280109]:             http://drupal.org/node/2280109
[R1.5-Issue-2280115]:             http://drupal.org/node/2280115
[R1.5-Issue-2280189]:             http://drupal.org/node/2280189
[R1.5-Issue-2280679]:             http://drupal.org/node/2280679
[R1.5-Issue-2280863]:             http://drupal.org/node/2280863

<!-- Commits R1.4 -->

[R1.4-Commit-5d45a49]:            http://drupalcode.org/project/wetkit_core.git/commit/5d45a49
[R1.4-Commit-b540b79]:            http://drupalcode.org/project/wetkit_search.git/commit/b540b79
[R1.4-Commit-f54c85e]:            http://drupalcode.org/project/wetkit_users.git/commit/f54c85e
[R1.4-Commit-ac36290]:            http://drupalcode.org/project/wetkit_users.git/commit/ac36290
[R1.4-Commit-2021c16]:            http://drupalcode.org/project/wetkit_omega.git/commit/2021c16
[R1.4-Commit-23426f0]:            http://drupalcode.org/project/wetkit_migrate.git/commit/23426f0
[R1.4-Commit-b97b38f]:            http://drupalcode.org/project/wetkit_ember.git/commit/b97b38f
[R1.4-Commit-c175a13]:            http://drupalcode.org/project/wetkit_search.git/commit/c175a13
[R1.4-Commit-8fec444]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/8fec444
[R1.4-Commit-678b249]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/678b249
[R1.4-Commit-3942f3d]:            http://drupalcode.org/project/wetkit_users.git/commit/3942f3d
[R1.4-Commit-1205dda]:            http://drupalcode.org/project/wetkit_images.git/commit/1205dda
[R1.4-Commit-adf7583]:            http://drupalcode.org/project/wetkit_ember.git/commit/adf7583
[R1.4-Commit-11443b3]:            http://drupalcode.org/project/wetkit_admin.git/commit/11443b3
[R1.4-Commit-041e2b8]:            http://drupalcode.org/project/wetkit_core.git/commit/041e2b8
[R1.4-Commit-613b771]:            http://drupalcode.org/project/wetkit_core.git/commit/613b771
[R1.4-Commit-6e5db22]:            http://drupalcode.org/project/wetkit_core.git/commit/6e5db22
[R1.4-Commit-f171bdc]:            http://drupalcode.org/project/wetkit_core.git/commit/f171bdc
[R1.4-Commit-ef5fa1e]:            http://drupalcode.org/project/wetkit_wyiswyg.git/commit/ef5fa1e
[R1.4-Commit-f74ab60]:            http://drupalcode.org/project/wetkit_core.git/commit/f74ab60
[R1.4-Commit-586ed8c]:            http://drupalcode.org/project/wetkit_admin.git/commit/586ed8c
[R1.4-Commit-7bb2b8f]:            http://drupalcode.org/project/wetkit_bean.git/commit/7bb2b8f
[R1.4-Commit-599ac18]:            http://drupalcode.org/project/wetkit_language.git/commit/599ac18
[R1.4-Commit-fecc3b1]:            http://drupalcode.org/project/wetkit_og.git/commit/fecc3b1
[R1.4-Commit-756c476]:            http://drupalcode.org/project/wetkit_deployment.git/commit/756c476
[R1.4-Commit-b3770f9]:            http://drupalcode.org/project/wetkit_widgets.git/commit/b3770f9
[R1.4-Commit-42c031d]:            http://drupalcode.org/project/wetkit_search.git/commit/42c031d
[R1.4-Commit-de0a193]:            http://drupalcode.org/project/wetkit_core.git/commit/de0a193
[R1.4-Commit-af200f0]:            http://drupalcode.org/project/wetkit_search.git/commit/af200f0
[R1.4-Commit-63ff1cd]:            http://drupalcode.org/project/wetkit_core.git/commit/63ff1cd
[R1.4-Commit-4334ac7]:            http://drupalcode.org/project/wetkit_migrate.git/commit/4334ac7
[R1.4-Commit-4fdda14]:            http://drupalcode.org/project/wetkit_images.git/commit/4fdda14
[R1.4-Commit-ad9334b]:            http://drupalcode.org/project/wetkit_deployment.git/commit/ad9334b
[R1.4-Commit-ebdb70d]:            http://drupalcode.org/project/wetkit_menu.git/commit/ebdb70d
[R1.4-Commit-b485439]:            http://drupalcode.org/project/wetkit_omega.git/commit/b485439
[R1.4-Commit-9c71601]:            http://drupalcode.org/project/wetkit_ember.git/commit/9c71601
[R1.4-Commit-82fa4cc]:            http://drupalcode.org/project/wetkit_core.git/commit/82fa4cc
[R1.4-Commit-864c97a]:            http://drupalcode.org/project/wetkit_admin.git/commit/864c97a
[R1.4-Commit-21d8e98]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/21d8e98
[R1.4-Commit-62064fb]:            http://drupalcode.org/project/wetkit_omega.git/commit/62064fb
[R1.4-Commit-53099b9]:            http://drupalcode.org/project/wetkit_search.git/commit/53099b9
[R1.4-Commit-58e1342]:            http://drupalcode.org/project/wetkit_language.git/commit/58e1342
[R1.4-Commit-8c687dc]:            http://drupalcode.org/project/wetkit_bean.git/commit/8c687dc
[R1.4-Commit-19ee35e]:            http://drupalcode.org/project/wetkit_language.git/commit/19ee35e
[R1.4-Commit-36eceda]:            http://drupalcode.org/project/wetkit_core.git/commit/36eceda
[R1.4-Commit-e54529c]:            http://drupalcode.org/project/wetkit_widgets.git/commit/e54529c
[R1.4-Commit-7469676]:            http://drupalcode.org/project/wetkit_admin.git/commit/7469676
[R1.4-Commit-8fa448f]:            http://drupalcode.org/project/wetkit_wetboew.git/commit/8fa448f

<!-- Issues R1.4 -->

[R1.4-Issue-2227797]:             http://drupal.org/node/2227797
[R1.4-Issue-2219547]:             http://drupal.org/node/2219547
[R1.4-Issue-2212509]:             http://drupal.org/node/2212509
[R1.4-Issue-2212501]:             http://drupal.org/node/2212501
[R1.4-Issue-2227857]:             http://drupal.org/node/2227857
[R1.4-Issue-2227873]:             http://drupal.org/node/2227873
[R1.4-Issue-2229433]:             http://drupal.org/node/2229433
[R1.4-Issue-2229457]:             http://drupal.org/node/2229457
[R1.4-Issue-2211505]:             http://drupal.org/node/2211505
[R1.4-Issue-2229469]:             http://drupal.org/node/2229469
[R1.4-Issue-2229481]:             http://drupal.org/node/2229481
[R1.4-Issue-2229525]:             http://drupal.org/node/2229525
[R1.4-Issue-2229529]:             http://drupal.org/node/2229529
[R1.4-Issue-2230019]:             http://drupal.org/node/2230019
[R1.4-Issue-2230929]:             http://drupal.org/node/2230929
[R1.4-Issue-2219805]:             http://drupal.org/node/2219805
[R1.4-Issue-2231787]:             http://drupal.org/node/2231787
[R1.4-Issue-2232913]:             http://drupal.org/node/2232913
[R1.4-Issue-2232923]:             http://drupal.org/node/2232923
[R1.4-Issue-2232935]:             http://drupal.org/node/2232935
[R1.4-Issue-2232947]:             http://drupal.org/node/2232947
[R1.4-Issue-2232951]:             http://drupal.org/node/2232951
[R1.4-Issue-2232953]:             http://drupal.org/node/2232953
[R1.4-Issue-2232957]:             http://drupal.org/node/2232957
[R1.4-Issue-2199997]:             http://drupal.org/node/2199997
[R1.4-Issue-2246827]:             http://drupal.org/node/2246827
[R1.4-Issue-2246833]:             http://drupal.org/node/2246833
[R1.4-Issue-2246835]:             http://drupal.org/node/2246835
[R1.4-Issue-2246837]:             http://drupal.org/node/2246837
[R1.4-Issue-2246839]:             http://drupal.org/node/2246839
[R1.4-Issue-2246841]:             http://drupal.org/node/2246841
[R1.4-Issue-2246853]:             http://drupal.org/node/2246853
[R1.4-Issue-2215023]:             http://drupal.org/node/2215023
[R1.4-Issue-2171255]:             http://drupal.org/node/2171255
[R1.4-Issue-2232467]:             http://drupal.org/node/2232467
[R1.4-Issue-2248433]:             http://drupal.org/node/2248433
[R1.4-Issue-2248435]:             http://drupal.org/node/2248435
[R1.4-Issue-2254353]:             http://drupal.org/node/2254353
[R1.4-Issue-2255169]:             http://drupal.org/node/2255169
[R1.4-Issue-2187771]:             http://drupal.org/node/2187771
[R1.4-Issue-2256723]:             http://drupal.org/node/2256723
[R1.4-Issue-2256611]:             http://drupal.org/node/2256611

<!-- Commits R1.3 -->

[R1.3-Commit-677730d]:            http://drupalcode.org/project/wetkit_omega.git/commit/677730d
[R1.3-Commit-c0fe19d]:            http://drupalcode.org/project/wetkit_wetboew.git/commit/c0fe19d
[R1.3-Commit-1886fad]:            http://drupalcode.org/project/wetkit_bean.git/commit/1886fad
[R1.3-Commit-32fa225]:            http://drupalcode.org/project/wetkit_menu.git/commit/32fa225
[R1.3-Commit-f70a208]:            http://drupalcode.org/project/wetkit_bean.git/commit/f70a208
[R1.3-Commit-de72d0d]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/de72d0d
[R1.3-Commit-a7691a2]:            http://drupalcode.org/project/wetkit_bean.git/commit/a7691a2
[R1.3-Commit-8128ef6]:            http://drupalcode.org/project/wetkit_omega.git/commit/8128ef6
[R1.3-Commit-ece42ff]:            http://drupalcode.org/project/wetkit_core.git/commit/ece42ff
[R1.3-Commit-ba0c210]:            http://drupalcode.org/project/wetkit_omega.git/commit/ba0c210
[R1.3-Commit-81e8629]:            http://drupalcode.org/project/wetkit_ember.git/commit/81e8629
[R1.3-Commit-93a41e2]:            http://drupalcode.org/project/wetkit_admin.git/commit/93a41e2
[R1.3-Commit-3374402]:            http://drupalcode.org/project/wetkit_breadcrumbs.git/commit/3374402
[R1.3-Commit-ece42ff]:            http://drupalcode.org/project/wetkit_core.git/commit/ece42ff
[R1.3-Commit-a93f218]:            http://drupalcode.org/project/wetkit_widgets.git/commit/a93f218
[R1.3-Commit-7c0c721]:            http://drupalcode.org/project/wetkit_omega.git/commit/7c0c721
[R1.3-Commit-f4adba4]:            http://drupalcode.org/project/wetkit_language.git/commit/f4adba4
[R1.3-Commit-6de3bd9]:            http://drupalcode.org/project/wetkit_core.git/commit/6de3bd9
[R1.3-Commit-1f43792]:            http://drupalcode.org/project/wetkit_core.git/commit/1f43792
[R1.3-Commit-5ec2cb8]:            http://drupalcode.org/project/wetkit_omega.git/commit/5ec2cb8
[R1.3-Commit-0371ea4]:            http://drupalcode.org/project/wetkit_widgets.git/commit/0371ea4
[R1.3-Commit-58d2d8b]:            http://drupalcode.org/project/wetkit_language.git/commit/58d2d8b
[R1.3-Commit-16e955b]:            http://drupalcode.org/project/wetkit_core.git/commit/16e955b
[R1.3-Commit-43ea1b2]:            http://drupalcode.org/project/wetkit_core.git/commit/43ea1b2
[R1.3-Commit-3f08637]:            http://drupalcode.org/project/wetkit_core.git/commit/3f08637
[R1.3-Commit-061f981]:            http://drupalcode.org/project/wetkit_admin.git/commit/061f981
[R1.3-Commit-82c0d96]:            http://drupalcode.org/project/wetkit_core.git/commit/82c0d96
[R1.3-Commit-d872c8a]:            http://drupalcode.org/project/wetkit_deployment.git/commit/d872c8a
[R1.3-Commit-91c498d]:            http://drupalcode.org/project/wetkit_core.git/commit/91c498d
[R1.3-Commit-9cbb486]:            http://drupalcode.org/project/wetkit_core.git/commit/9cbb486
[R1.3-Commit-bf841c3]:            http://drupalcode.org/project/wetkit_pages.git/commit/bf841c3
[R1.3-Commit-599d4e1]:            http://drupalcode.org/project/wetkit_migrate.git/commit/599d4e1
[R1.3-Commit-b0c8ff8]:            http://drupalcode.org/project/wetkit_widgets.git/commit/b0c8ff8
[R1.3-Commit-605119b]:            http://drupalcode.org/project/wetkit_menu.git/commit/605119b
[R1.3-Commit-cbd0ed2]:            http://drupalcode.org/project/wetkit_core.git/commit/cbd0ed2
[R1.3-Commit-b6e9f33]:            http://drupalcode.org/project/wetkit_widgets.git/commit/b6e9f33
[R1.3-Commit-c50303b]:            http://drupalcode.org/project/wetkit_bean.git/commit/c50303b
[R1.3-Commit-d840632]:            http://drupalcode.org/project/wetkit_widgets.git/commit/d840632
[R1.3-Commit-caff26a]:            http://drupalcode.org/project/wetkit_core.git/commit/caff26a
[R1.3-Commit-4af8a78]:            http://drupalcode.org/project/wetkit_menu.git/commit/4af8a78
[R1.3-Commit-6686f74]:            http://drupalcode.org/project/wetkit_menu.git/commit/6686f74
[R1.3-Commit-74847a1]:            http://drupalcode.org/project/wetkit_menu.git/commit/74847a1
[R1.3-Commit-551a9a3]:            http://drupalcode.org/project/wetkit_core.git/commit/551a9a3
[R1.3-Commit-74aa724]:            http://drupalcode.org/project/wetkit_core.git/commit/74aa724
[R1.3-Commit-b5143be]:            http://drupalcode.org/project/wetkit_menu.git/commit/b5143be
[R1.3-Commit-51af187]:            http://drupalcode.org/project/wetkit_pages.git/commit/51af187
[R1.3-Commit-f15a135]:            http://drupalcode.org/project/wetkit_core.git/commit/f15a135
[R1.3-Commit-07266d8]:            http://drupalcode.org/project/wetkit_core.git/commit/07266d8
[R1.3-Commit-3d5a897]:            http://drupalcode.org/project/wetkit_core.git/commit/3d5a897
[R1.3-Commit-0bfc560]:            http://drupalcode.org/project/wetkit_ember.git/commit/0bfc560
[R1.3-Commit-48c1e40]:            http://drupalcode.org/project/wetkit_pages.git/commit/48c1e40
[R1.3-Commit-5afb762]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/5afb762
[R1.3-Commit-0eb3bcc]:            http://drupalcode.org/project/wetkit_ember.git/commit/0eb3bcc
[R1.3-Commit-0e2af9e]:            http://drupalcode.org/project/wetkit_omega.git/commit/0e2af9e

<!-- Issues R1.3 -->

[R1.3-Issue-2177753]:             http://drupal.org/node/2177753
[R1.3-Issue-2177741]:             http://drupal.org/node/2177741
[R1.3-Issue-2178341]:             http://drupal.org/node/2178341
[R1.3-Issue-2177627]:             http://drupal.org/node/2177627
[R1.3-Issue-2185513]:             http://drupal.org/node/2185513
[R1.3-Issue-2178469]:             http://drupal.org/node/2178469
[R1.3-Issue-2181155]:             http://drupal.org/node/2181155
[R1.3-Issue-2184761]:             http://drupal.org/node/2184761
[R1.3-Issue-2187447]:             http://drupal.org/node/2187447
[R1.3-Issue-2192255]:             http://drupal.org/node/2192255
[R1.3-Issue-2192261]:             http://drupal.org/node/2192261
[R1.3-Issue-2192263]:             http://drupal.org/node/2192263
[R1.3-Issue-2192269]:             http://drupal.org/node/2192269
[R1.3-Issue-2192275]:             http://drupal.org/node/2192275
[R1.3-Issue-2187771]:             http://drupal.org/node/2187771
[R1.3-Issue-2187383]:             http://drupal.org/node/2187383
[R1.3-Issue-2192395]:             http://drupal.org/node/2192395
[R1.3-Issue-2192413]:             http://drupal.org/node/2192413
[R1.3-Issue-2194969]:             http://drupal.org/node/2194969
[R1.3-Issue-2195995]:             http://drupal.org/node/2195995
[R1.3-Issue-2196529]:             http://drupal.org/node/2196529
[R1.3-Issue-2197929]:             http://drupal.org/node/2197929
[R1.3-Issue-2197991]:             http://drupal.org/node/2197991
[R1.3-Issue-2182663]:             http://drupal.org/node/2182663
[R1.3-Issue-2198973]:             http://drupal.org/node/2198973
[R1.3-Issue-2198991]:             http://drupal.org/node/2198991
[R1.3-Issue-2199997]:             http://drupal.org/node/2199997
[R1.3-Issue-2200933]:             http://drupal.org/node/2200933
[R1.3-Issue-2199391]:             http://drupal.org/node/2199391
[R1.3-Issue-2202319]:             http://drupal.org/node/2202319
[R1.3-Issue-2201483]:             http://drupal.org/node/2201483
[R1.3-Issue-2203141]:             http://drupal.org/node/2203141

<!-- Commits R1.2 -->

[R1.2-Commit-26bfbe5]:            http://drupalcode.org/project/wetkit_core.git/commit/26bfbe5
[R1.2-Commit-470071c]:            http://drupalcode.org/project/wetkit_core.git/commit/470071c
[R1.2-Commit-9756256]:            http://drupalcode.org/project/wetkit_bean.git/commit/9756256
[R1.2-Commit-b107e98]:            http://drupalcode.org/project/wetkit_search.git/commit/b107e98
[R1.2-Commit-2383101]:            http://drupalcode.org/project/wetkit_core.git/commit/2383101
[R1.2-Commit-9ccea63]:            http://drupalcode.org/project/wetkit_breadcrumbs.git/commit/9ccea63
[R1.2-Commit-d5f1d97]:            http://drupalcode.org/project/wetkit_metatag.git/commit/d5f1d97
[R1.2-Commit-482f756]:            http://drupalcode.org/project/wetkit_language.git/commit/482f756
[R1.2-Commit-3a018be]:            http://drupalcode.org/project/wetkit_language.git/commit/3a018be
[R1.2-Commit-3178bf4]:            http://drupalcode.org/project/wetkit_widgets.git/commit/3178bf4
[R1.2-Commit-cc4e7bb]:            http://drupalcode.org/project/wetkit_metatag.git/commit/cc4e7bb
[R1.2-Commit-fcaae17]:            http://drupalcode.org/project/wetkit_ember.git/commit/fcaae17
[R1.2-Commit-75e5f04]:            http://drupalcode.org/project/wetkit_admin.git/commit/75e5f04
[R1.2-Commit-517a8f5]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/517a8f5
[R1.2-Commit-a5f02e6]:            http://drupalcode.org/project/wetkit_core.git/commit/a5f02e6
[R1.2-Commit-8981be2]:            http://drupalcode.org/project/wetkit_ember.git/commit/8981be2
[R1.2-Commit-eb311e3]:            http://drupalcode.org/project/wetkit_ember.git/commit/eb311e3
[R1.2-Commit-b357bac]:            http://drupalcode.org/project/wetkit_omega.git/commit/b357bac
[R1.2-Commit-677730d]:            http://drupalcode.org/project/wetkit_omega.git/commit/677730d
[R1.2-Commit-192811a]:            http://drupalcode.org/project/wetkit_theme.git/commit/192811a
[R1.2-Commit-f61ec36]:            http://drupalcode.org/project/wetkit_admin.git/commit/f61ec36
[R1.2-Commit-309895b]:            http://drupalcode.org/project/wetkit_pages.git/commit/309895b
[R1.2-Commit-37b5d37]:            http://drupalcode.org/project/wetkit_admin.git/commit/37b5d37
[R1.2-Commit-4e36f15]:            http://drupalcode.org/project/wetkit_core.git/commit/4e36f15
[R1.2-Commit-0be3895]:            http://drupalcode.org/project/wetkit_ember.git/commit/0be3895

<!-- Issues R1.2 -->

[R1.2-Issue-2173403]:             http://drupal.org/node/2173403
[R1.2-Issue-2175767]:             http://drupal.org/node/2175767
[R1.2-Issue-2173391]:             http://drupal.org/node/2173391
[R1.2-Issue-2176457]:             http://drupal.org/node/2176457
[R1.2-Issue-2176487]:             http://drupal.org/node/2176487
[R1.2-Issue-2176519]:             http://drupal.org/node/2176519
[R1.2-Issue-2176527]:             http://drupal.org/node/2176527
[R1.2-Issue-2176567]:             http://drupal.org/node/2176567
[R1.2-Issue-2176571]:             http://drupal.org/node/2176571
[R1.2-Issue-2176577]:             http://drupal.org/node/2176577
[R1.2-Issue-2176603]:             http://drupal.org/node/2176603
[R1.2-Issue-2176825]:             http://drupal.org/node/2176825
[R1.2-Issue-2168363]:             http://drupal.org/node/2168363
[R1.2-Issue-2176973]:             http://drupal.org/node/2176973
[R1.2-Issue-2176523]:             http://drupal.org/node/2176523
[R1.2-Issue-2160677]:             http://drupal.org/node/2160677

<!-- Commits R1.1 -->

[R1.1-Commit-0617a33]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/0617a33
[R1.1-Commit-8bd38f7]:            http://drupalcode.org/project/wetkit_images.git/commit/8bd38f7
[R1.1-Commit-41c8765]:            http://drupalcode.org/project/wetkit_bean.git/commit/41c8765
[R1.1-Commit-e154bcf]:            http://drupalcode.org/project/wetkit_wetboew.git/commit/e154bcf
[R1.1-Commit-ee5adf0]:            http://drupalcode.org/project/wetkit_wetboew.git/commit/ee5adf0
[R1.1-Commit-1c4970e]:            http://drupalcode.org/project/wetkit_search.git/commit/1c4970e
[R1.1-Commit-9b9071f]:            http://drupalcode.org/project/wetkit_layouts.git/commit/9b9071f
[R1.1-Commit-3f340d2]:            http://drupalcode.org/project/wetkit_menu.git/commit/3f340d2
[R1.1-Commit-d4a45a2]:            http://drupalcode.org/project/wetkit_search.git/commit/d4a45a2
[R1.1-Commit-9be1cac]:            http://drupalcode.org/project/wetkit_core.git/commit/9be1cac
[R1.1-Commit-48f8970]:            http://drupalcode.org/project/wetkit.git/commit/48f8970
[R1.1-Commit-21957bd]:            http://drupalcode.org/project/wetkit_widgets.git/commit/21957bd
[R1.1-Commit-05f03ff]:            http://drupalcode.org/project/wetkit_widgets.git/commit/05f03ff
[R1.1-Commit-9dd8772]:            http://drupalcode.org/project/wetkit_core.git/commit/9dd8772
[R1.1-Commit-5cf0580]:            http://drupalcode.org/project/wetkit_metatag.git/commit/5cf0580
[R1.1-Commit-fdf2891]:            http://drupalcode.org/project/wetkit_omega.git/commit/fdf2891
[R1.1-Commit-f4c0404]:            http://drupalcode.org/project/wetkit_metatag.git/commit/f4c0404
[R1.1-Commit-eb75425]:            http://drupalcode.org/project/wetkit_ember.git/commit/eb75425
[R1.1-Commit-8e29480]:            http://drupalcode.org/project/wetkit.git/commit/8e29480
[R1.1-Commit-973d251]:            http://drupalcode.org/project/wetkit_ember.git/commit/973d251
[R1.1-Commit-4c72796]:            http://drupalcode.org/project/wetkit_omega.git/commit/4c72796
[R1.1-Commit-4decafc]:            http://drupalcode.org/project/wetkit_migrate.git/commit/4decafc
[R1.1-Commit-3c3b646]:            http://drupalcode.org/project/wetkit_widgets.git/commit/3c3b646
[R1.1-Commit-e15997a]:            http://drupalcode.org/project/wetkit_wysiwyg.git/commit/e15997a

<!-- Issues R1.1 -->

[R1.1-Issue-2154261]:             http://drupal.org/node/2154261
[R1.1-Issue-2149799]:             http://drupal.org/node/2149799
[R1.1-Issue-2155337]:             http://drupal.org/node/2155337
[R1.1-Issue-2155371]:             http://drupal.org/node/2155371
[R1.1-Issue-2158659]:             http://drupal.org/node/2158659
[R1.1-Issue-2155411]:             http://drupal.org/node/2155411
[R1.1-Issue-2155545]:             http://drupal.org/node/2155545
[R1.1-Issue-2153185]:             http://drupal.org/node/2153185
[R1.1-Issue-2144347]:             http://drupal.org/node/2144347
[R1.1-Issue-2160657]:             http://drupal.org/node/2160657
[R1.1-Issue-2157757]:             http://drupal.org/node/2157757
[R1.1-Issue-2165193]:             http://drupal.org/node/2165193
[R1.1-Issue-2155581]:             http://drupal.org/node/2155581
[R1.1-Issue-2166741]:             http://drupal.org/node/2166741
[R1.1-Issue-2160677]:             http://drupal.org/node/2160677
[R1.1-Issue-2166803]:             http://drupal.org/node/2166803
[R1.1-Issue-2167311]:             http://drupal.org/node/2167311
[R1.1-Issue-2094209]:             http://drupal.org/node/2094209
[R1.1-Issue-2151499]:             http://drupal.org/node/2151499
[R1.1-Issue-2167557]:             http://drupal.org/node/2167557
[R1.1-Issue-2160653]:             http://drupal.org/node/2160653

<!-- Commits R1 -->

[R1-Commit-b987712]:            http://drupalcode.org/project/wetkit.git/commit/b987712
[R1-Commit-6c9cc22]:            http://drupalcode.org/project/wetkit_pages.git/commit/6c9cc22
[R1-Commit-1b1f833]:            http://drupalcode.org/project/wetkit.git/commit/1b1f833
[R1-Commit-b6b28b4]:            http://drupalcode.org/project/wetkit_core.git/commit/b6b28b4

<!-- Issues R1 -->

[R1-Issue-2148823]:             http://drupal.org/node/2148823
[R1-Issue-2151161]:             http://drupal.org/node/2151161
[R1-Issue-2149943]:             http://drupal.org/node/2149943
[R1-Issue-2151399]:             http://drupal.org/node/2151399
