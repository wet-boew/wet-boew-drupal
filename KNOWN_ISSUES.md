# Known Issues

This is a list of major known issues. For the latest list of all issues see the
[Drupal Issue Queue][drupal-queue].

## Existing menu missing on node edit pages based on certain context

When you follow a specific workflow of creating nodes with translated menu items attached, you can end up in a situation where the node edit form for the translation can't find the associate menu item.

Bug: [Entity Translation][entity_translation] Issue #[2125569][known-issue-2125569]

## Metatag has been having a rough time with Entity Translation + Revisions

There are a few issues associated with this problem but the meta issue is referenced below. Essentially metatags can sometimes end up overwriting each other when saving in the non @source language. We believe this problem is solved by a rather hefty patch to metatag.

Bug: [Metatag][metatag] Issue #[2142299][known-issue-2142299]

## UUID Features triggers WSOD when creating/recreating features

This bug is triggered by the query ran by the components in the implementations of hook_features_export_options(), when the query returns a large number of objects (files, nodes, terms).

Bug: [UUID Features][uuid_features] Issue #[7583827][known-issue-7583827]

<!-- Links Referenced -->

[drupal-queue]:                https://drupal.org/project/issues/wetkit?categories=All
[entity_translation]:          https://drupal.org/project/entity_translation
[uuid_features]:               https://drupal.org/project/uuid_features
[metatag]:                     https://drupal.org/project/metatag
[known-issue-2125569]:         https://drupal.org/node/2125569
[known-issue-2142299]:         https://drupal.org/node/2142299
[known-issue-7583827]:         https://drupal.org/node/7583827
