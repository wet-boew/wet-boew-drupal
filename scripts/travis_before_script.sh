#!/bin/sh
# Travis Before Script for CI Testing

# Globals
workspace=`pwd`

# Create Database(s)
sh -c "if [ '$DB' = 'pgsql' ]; then psql -c 'create database drupal_db;' -U postgres; fi"
sh -c "if [ '$DB' = 'mysql' ]; then mysql -e 'create database IF NOT EXISTS drupal_db;'; fi"

# Install Drush
export PATH="$HOME/.composer/vendor/bin:$PATH"
composer update
composer global require --no-interaction drush/drush:6.*
composer install --prefer-dist
phpenv rehash

# Drush Make / Build Drupal WxT
cat $workspace/build-wetkit-github.make | sed "s@master@$TRAVIS_COMMIT@g" | sed "s@wet-boew/wet-boew-drupal@$TRAVIS_REPO_SLUG@g" | drush make --prepare-install php://stdin $workspace/build
