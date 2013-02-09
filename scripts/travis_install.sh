#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Install WetKit Distribution
workspace=`pwd`
cat $workspace/build-wetkit.make | sed "s@master@$TRAVIS_COMMIT@g" | sed "s@wet-boew/wet-boew-drupal@$TRAVIS_REPO_SLUG@g" | drush make --prepare-install php://stdin $workspace/build
