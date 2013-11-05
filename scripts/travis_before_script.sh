#!/bin/sh
# Travis Before Script for CI Testing

# Create Database(s)
sh -c "if [ '$DB' = 'pgsql' ]; then psql -c 'create database drupal_db;' -U postgres; fi"
sh -c "if [ '$DB' = 'mysql' ]; then mysql -e 'create database IF NOT EXISTS drupal_db;'; fi"

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Drush Make / Build Drupal WxT
workspace=`pwd`
cat $workspace/build-wetkit-github.make | sed "s@master@$TRAVIS_COMMIT@g" | sed "s@wet-boew/wet-boew-drupal@$TRAVIS_REPO_SLUG@g" | drush make --prepare-install php://stdin $workspace/build
