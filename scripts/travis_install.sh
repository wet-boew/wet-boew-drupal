#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Install WetKit Distribution
sudo chmod -R 777 /home/travis/.drush/
workspace=`pwd`
git_commit=`git show --pretty=%P HEAD | head -1 | cut -d\  -f 1`
cat $workspace/build-wetkit.make | sed "s/master/$git_commit/g" > $workspace/build-wetkit.make.tmp | mv $workspace/build-wetkit.make.tmp $workspace/build-wetkit.make | drush make --prepare-install $workspace/build-wetkit.make $workspace/build
