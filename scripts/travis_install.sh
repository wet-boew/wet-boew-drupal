#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Set Up Vars
workspace=`pwd`
git_commit=`git show --pretty=%P HEAD | head -1 | cut -d\  -f 2`
cat $workspace/build-wetkit.make | sed "s/master/$git_commit/g" | drush make php://stdin $workspace

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