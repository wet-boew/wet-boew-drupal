#!/bin/sh
# Travis Testing Script for CI Testing

# Run Headless Testing Server
export PHANTOMJS_EXECUTABLE='phantomjs --local-to-remote-url-access=yes --ignore-ssl-errors=yes'
export DISPLAY=:99.0
sh -e /etc/init.d/xvfb start
sleep 3 # give xvfb some time to start
drush runserver --server=builtin 8080 &
sleep 3 # give xvfb some time to rebuild
cd ../../..

# Install + Run CasperJS Testing Suite
git clone git://github.com/n1k0/casperjs.git
cd casperjs
git checkout tags/0.6.10
cd ..
DISPLAY=:99.0 ./casperjs/bin/casperjs test drupal_wet/profiles/wetkit/tests/casperjs/

# Install + Run Selenium Testing Suite
wget http://selenium.googlecode.com/files/selenium-server-standalone-2.15.0.jar
java -jar selenium-server-standalone-2.15.0.jar -htmlSuite "*firefox" "http://127.0.0.1:8080" "drupal_wet/profiles/wetkit/tests/selenium/WetKitTestSuite.html" "drupal_wet/profiles/wetkit/tests/selenium/Result.html"

# Run Main Test Suite(s)
cd drupal_wet/sites/default/
drush test-run WetKitArchivedWidgetTestCase