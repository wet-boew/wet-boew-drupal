#!/bin/bash

: ${DRUSH:=drush}
: ${DRUSH_ARGS:=}

WxT_FEATURES="wetkit_admin wetkit_bean wetkit_breadcrumbs wetkit_core wetkit_demo wetkit_images wetkit_language wetkit_menu wetkit_metatag wetkit_migrate wetkit_pages wetkit_search wetkit_theme wetkit_wetboew wetkit_widgets wetkit_wysiwyg"

# TODO: We should make sure that 'diff' is downloaded first!
$DRUSH $DRUSH_ARGS en -y diff

OVERRIDDEN=0
for wetkit_feature in $WxT_FEATURES; do
  echo "Checking $wetkit_feature..."
  if $DRUSH $DRUSH_ARGS features-diff $wetkit_feature 2>&1 | grep -v 'Feature is in its default state'; then
    OVERRIDDEN=1
  fi
done

exit $OVERRIDDEN
