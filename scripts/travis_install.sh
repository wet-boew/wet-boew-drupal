#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.4.0
phpenv rehash

# Set Up Vars
WORKSPACE=$(pwd)
GIT_COMMIT=$(git show --pretty=%P HEAD | head -c8)
REPO_USER=$(git config -l | grep remote.origin.url | cut -d/ -f4)
sed -i "s/master/${GIT_COMMIT}/g;s/wet-boew/$REPO_USER/1" ${WORKSPACE}/build-wetkit.make
cat ${WORKSPACE}/build-wetkit.make

# Install WetKit Distro
cd ..
mkdir profiles
mv wet-boew-drupal wetkit
mv wetkit profiles/
mkdir drupal_wet
mv profiles drupal_wet/
cd drupal_wet
drush make --prepare-install profiles/wetkit/build-wetkit.make --yes
sudo chmod -R 777 sites/all/modules
drush si wetkit wetkit_wetboew_selection_form.theme=wetkit_adaptivetheme --sites-subdir=default --db-url=mysql://root:@127.0.0.1/wetkit_db --account-name=admin --account-pass=WetKit@2012 --site-mail=admin@example.com --site-name="Web Experience Toolkit" --yes
drush cc all --yes