#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.8.0
phpenv rehash

# Set Up Vars

build_num=`git log --oneline | wc -l | tr -d ' '`
branch_name=`git status | head -1 | sed -e 's/# On branch \(.*\)/\1/'`
git_commit1=`git log | head -1 | sed -e 's/commit \([0-9a-f]*$\)/\1/'`
git_commit2=`git show --pretty=%P HEAD | head -1 | cut -d\  -f 2`
repo_user=`git config -l | grep remote.origin.url | cut -d/ -f4`
GIT_COMMIT=$(git rev-parse HEAD)
WORKSPACE=$(pwd)

printenv
echo $git_commit1
echo $git_commit2
echo $repo_user
echo $workspace
echo $build_num
echo $GIT_COMMIT
echo $WORKSPACE

cat $WORKSPACE/build-wetkit.make | sed 's/master/$git_commit2/g' | drush make php://stdin $WORKSPACE/build

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