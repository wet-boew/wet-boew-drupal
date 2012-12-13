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
build_num=`git log --oneline | wc -l | tr -d ' '`
branch_name=`git status | head -1 | sed -e 's/# On branch \(.*\)/\1/'`
git_commit1=`git log | head -1 | sed -e 's/commit \([0-9a-f]*$\)/\1/'`
git_commit2=`git show --pretty=%P HEAD | head -1 | cut -d\  -f 2`
repo_user=`git config -l | grep remote.origin.url | cut -d/ -f4`

printenv

# Create the new build out file for Drush Make
cat $workspace/build-wetkit.make \
|   sed "s/\/master/\/$git_commit1/" \
|   sed "s/\[branch\] = master/\[branch\] = $branch_name/" \
|   sed "s/\[revision\] = master/\[revision\] = $git_commit1/" \
|   sed "s/wet-boew/$repo_user/1" \
> tmp_build-wetkit.make
mv tmp_build-wetkit.make build-wetkit.make

# Lets see values being switched for debugging purposes
cat build-wetkit.make

echo -e "\n"
git branch
echo $workspace
echo $build_num
echo $branch_name
echo $git_commit1
echo $git_commit2
echo $repo_user

# Install WetKit Distro
drush make --prepare-install build-wetkit.make --yes
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
