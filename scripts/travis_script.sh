#!/bin/sh
# Travis Script for CI Testing

# Drush Site Installation
sleep 5
cd build
workspace=`pwd`
sh -c "if [ '$DB' = 'postgres' ]; then drush si wetkit wetkit_theme_selection_form.theme=wetkit_omega install_configure_form.demo_content=TRUE --sites-subdir=default --db-url=pgsql://postgres:@127.0.0.1:5432/drupal_db --account-name=admin --account-pass=WetKit@2012 --site-mail=admin@example.com --site-name='Web Experience Toolkit' --yes; fi"
sh -c "if [ '$DB' = 'mysql' ]; then drush si wetkit wetkit_theme_selection_form.theme=wetkit_omega install_configure_form.demo_content=TRUE --sites-subdir=default --db-url=mysql://root:@127.0.0.1:3306/drupal_db --account-name=admin --account-pass=WetKit@2012 --site-mail=admin@example.com --site-name='Web Experience Toolkit' --yes; fi"
drush cc all --yes
cd ..

# Run composer
cd $workspace/profiles/wetkit/tests/behat
composer install
cd $workspace

# Headless Testing Server
export PHANTOMJS_EXECUTABLE='phantomjs --local-to-remote-url-access=yes --ignore-ssl-errors=yes'
export DISPLAY=:99.0
sh -e /etc/init.d/xvfb start
sleep 3 # give xvfb some time to start
drush runserver --server=builtin 8080 &
sleep 3 # give xvfb some time to rebuild
cd ..

# Install + Run CasperJS Testing Suite
git clone git://github.com/n1k0/casperjs.git
cd casperjs
git checkout tags/0.6.10
cd ..
DISPLAY=:99.0 ./casperjs/bin/casperjs test $workspace/profiles/wetkit/tests/casperjs/

# Install + Run Selenium Testing Suite
wget http://selenium.googlecode.com/files/selenium-server-standalone-2.25.0.jar
java -jar selenium-server-standalone-2.25.0.jar -p 4444 &
sleep 5

# Install + Run Behat
cd $workspace/profiles/wetkit/tests/behat
touch behat.local.yml
./bin/behat
