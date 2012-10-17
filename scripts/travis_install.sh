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

# In place edit build-wetkit.make
ls -al
sed -i "s/master/${GIT_COMMIT}/g;s/wet-boew/$REPO_USER/1" ${WORKSPACE}/build-wetkit.make
cat ${WORKSPACE}/build-wetkit.make
ls -al
sleep 3

# Drush Make
drush make --prepare-install --no-gitinfofile --working-copy ${WORKSPACE}/build-wetkit.make ../drupal_wet --yes
cd ../drupal_wet
drush si wetkit wetkit_wetboew_selection_form.theme=wetkit_adaptivetheme --sites-subdir=default --db-url=mysql://root:@127.0.0.1/wetkit_db --account-name=admin --account-pass=WetKit@2012 --site-mail=admin@example.com --site-name="Web Experience Toolkit" --yes
drush cc all --yes