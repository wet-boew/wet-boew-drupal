#!/bin/sh
# Travis Install Script for CI Testing

# Create Database(s)
if [ '$DB' = 'pgsql' ]; then psql -c 'create database wetkit_db;' -U postgres; fi
if [ '$DB' = 'mysql' ]; then mysql -e 'create database IF NOT EXISTS wetkit_db;'; fi

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Install WetKit Distribution
workspace=`pwd`
cat $workspace/build-wetkit.make | sed "s@master@$TRAVIS_COMMIT@g" | sed "s@wet-boew/wet-boew-drupal@$TRAVIS_REPO_SLUG@g" | drush make --prepare-install php://stdin $workspace/build
