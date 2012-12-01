#!/bin/sh
# Travis Install Script for CI Testing

# MySQL Create Database
mysql -e 'create database wetkit_db;'

# Install Drush
pear channel-discover pear.drush.org
pear install drush/drush-5.4.0
phpenv rehash

# Set Up Vars
workspace=`pwd`
build_num=`git log --oneline | wc -l | tr -d ' '`
branch_name=`git status | head -1 | sed -e 's/# On branch \(.*\)/\1/'`
brackets_sha=`git log | head -1 | sed -e 's/commit \([0-9a-f]*$\)/\1/'`
repo_user=`git config -l | grep remote.origin.url | cut -d/ -f4`
GIT_COMMIT=`git show --pretty=%P HEAD | cut -d\  -f 2`

cat $workspace/build-wetkit.make \
|   sed "s/\[branch\] = master/\[branch\] = $branch_name/" \
|   sed "s/\[revision\] = master/\[revision\] = $GIT_COMMIT/" \
|   sed "s/wet-boew/sylus/1" \
> tmp_build-wetkit.make

mv tmp_build-wetkit.make build-wetkit.make
echo $GIT_COMMIT
echo $brackets_sha
echo $repo_user

# Install WetKit Distro
drush make -y build-wetkit.make
#cd ..
#mkdir profiles
#mv wet-boew-drupal wetkit
#mv wetkit profiles/
#mkdir drupal_wet
#mv profiles drupal_wet/
#cd drupal_wet
#drush make --prepare-install profiles/wetkit/build-wetkit.make --yes
#sudo chmod -R 777 sites/all/modules
#drush si wetkit wetkit_wetboew_selection_form.theme=wetkit_adaptivetheme --sites-subdir=default --db-url=mysql://root:@127.0.0.1/wetkit_db --account-name=admin --account-pass=WetKit@2012 --site-mail=admin@example.com --site-name="Web Experience Toolkit" --yes
#drush cc all --yes