#!/bin/bash
# @file
# Behat integration - Script step.
#
## Template modified from http://drupal.org/project/panopoly

set -e $DRUPAL_TI_DEBUG

# Ensure we are in the right directory.
cd "$DRUPAL_TI_DRUPAL_DIR"

wetkit_header Running Feature Diff

# If this isn't an upgrade, we test if any features are overridden.
if [[ "$UPGRADE" == none ]]
then
  "$TRAVIS_BUILD_DIR"/scripts/check-overridden.sh
fi

# Now go to the local behat tests, being within the module installation is
# needed for example for the drush runner.
cd "$DRUPAL_TI_BEHAT_DIR"

wetkit_header Running tests

# Copy into place because it doesn't come with wetkit_test.
mv -f "$TRAVIS_BUILD_DIR"/behat.travis.yml.dist .

# This replaces environment vars from $DRUPAL_TI_BEHAT_YML into 'behat.yml'.
drupal_ti_replace_behat_vars

ARGS=( $DRUPAL_TI_BEHAT_ARGS )

# First, run all the tests in Firefox.
./bin/behat "${ARGS[@]}"

# Then run some Chrome-only tests.
./bin/behat -p chrome "${ARGS[@]}"
