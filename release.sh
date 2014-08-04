#!/bin/sh
# Script to generate release notes for the WxT installation profile
# This command expects to be run within the WxT profile.
# To use this command you must have Git Release Notes for Drush installed
# @see https://drupal.org/project/grn

if [ $# -ne 2 ]; then
  echo "Usage $0 previous_tag latest_tag"
  exit 1
fi

BASE_PATH=`pwd`

# Create a directory to store all the release notes
mkdir $BASE_PATH/release_notes/

echo "creating release notes for wxt"

echo "<p><strong>Instructions on how to upgrade:</strong></p>" > $BASE_PATH/release_notes/wxt.html

echo "<ol>" >> $BASE_PATH/release_notes/wxt.html
echo "<li>Download the latest packaged version of WxT from Drupal.org. This will include updated versions of all of WxT's bundled modules, themes, and libraries.</li>" >> $BASE_PATH/release_notes/wxt.html
echo "<li>Upgrade your existing site to use the code you just downloaded. Check out these instructions for more information: <a href='http://drupal.org/node/1223018'>http://drupal.org/node/1223018</a></li>" >> $BASE_PATH/release_notes/wxt.html
echo "<li>Backup your database and run update.php *TWICE* on your site. This may perform several database updates for WxT and its bundled apps and modules.</li>" >> $BASE_PATH/release_notes/wxt.html
echo "<li>Navigate to the admin screen for Features (admin/structure/features) and revert any overridden features (unless you have intentionally made overrides you want to keep).</li>" >> $BASE_PATH/release_notes/wxt.html
echo "</ol>" >> $BASE_PATH/release_notes/wxt.html

echo "<strong>Updates in this release:</strong>" >> $BASE_PATH/release_notes/wxt.html

# Create the release notes for the distro
drush rn $1 $2 >> $BASE_PATH/release_notes/wxt.html

# For each module, create some html release notes.
for MODULE in wetkit_admin wetkit_bean wetkit_breadcrumbs wetkit_core wetkit_demo wetkit_deployment wetkit_images wetkit_language wetkit_layouts wetkit_menu wetkit_metatag wetkit_migrate wetkit_og wetkit_pages wetkit_search wetkit_theme wetkit_users wetkit_wetboew wetkit_widgets wetkit_wysiwyg
do
  MODULENAME=`echo ${MODULE//_/ }`
  echo "creating release notes for $MODULENAME"
  cd modules/custom/$MODULE
  drush rn $1 $2 > $BASE_PATH/release_notes/$MODULE.html

  echo "<h2>$MODULENAME</h2>" >> $BASE_PATH/release_notes/wxt.html
  drush rn $1 $2 >> $BASE_PATH/release_notes/wxt.html

  cd $BASE_PATH
done
