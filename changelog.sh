#!/bin/sh
# usage: changelog.sh 7.x-4.0-beta1 7.x-4.0-beta2 4.0-beta1

# Variables
SHA1=$(git rev-parse HEAD | cut -c 1-7)
SHA2=$(git rev-parse HEAD~1 | cut -c 1-7)
DIR=$(pwd)
VERSION='R'$3
HEADER_COMMIT="<!-- Commits $VERSION -->"
HEADER_ISSUES="<!-- Issues $VERSION -->"
REFLINK='<!-- Links Referenced -->'
COMMIT_REMOVE='merge\|revert'
CHANGELOG='CHANGELOG.md'
CHANGELOG_MSG='CHANGELOG-MSG.md'
CHANGELOG_LNK='CHANGELOG-LNK.md'
CHANGELOG_ISSUES='CHANGELOG-ISSUES.md'
DISTRO='wetkit'

# Adjust drupal.org.nake file
sed -i "s/$SHA2/$SHA1/" $DIR/drupal-org.make

# Generate changelog tmp files
rm -f $DIR/$CHANGELOG_MSG
rm -f $DIR/$CHANGELOG_LNK
rm -f $DIR/$CHANGELOG_ISSUES

echo 'Fixes:\n' >> $DIR/$CHANGELOG_MSG
git log $1..$2 --pretty=format:"  - (Commit: [%h][$VERSION-Commit-%h]) %s " | grep -iwv $COMMIT_REMOVE | sed -e "s/Issue #\([0-9]*\)[^:]*:/#[\1][$VERSION-Issue-\1] -/g" >> $DIR/$CHANGELOG_MSG
echo $HEADER_COMMIT '\n' >> $DIR/$CHANGELOG_LNK
git log $1..$2 --pretty=format:"[$VERSION-Commit-%h]: http://drupalcode.org/project/$DISTRO.git/commit/%h" | grep -iwv $COMMIT_REMOVE >> $DIR/$CHANGELOG_LNK

# Generate changelog file
INSERT_COMMIT_BRANCH='.\!-- Commits R1\.6 --.'
INSERT_COMMIT_BRANCH_B4='.\!-- Commits R1\.5 --.'
INSERT_LINK_HEADER='.\!-- Links Referenced --.'
i='r'

# Insert Commit messages for tag
sed -i "2r CHANGELOG-MSG.md" $CHANGELOG

LINENUM=$(sed -n "/$INSERT_LINK_HEADER/=" $DIR/$CHANGELOG)
LINENUM=$(($LINENUM + 1))

echo '\n' $HEADER_ISSUES '\n' >> $DIR/$CHANGELOG_ISSUES
grep -o '#\[[0-9]*\]' $CHANGELOG_MSG | sed -e "s/#\[\([0-9]*\)\]/[$VERSION-Issue-\1]: http:\/\/drupal\.org\/node\/\1/g" >> $CHANGELOG_ISSUES
sed -i "$LINENUM$i $CHANGELOG_ISSUES" $CHANGELOG

sed -i "$LINENUM$i $CHANGELOG_LNK" $CHANGELOG

rm -f $DIR/$CHANGELOG_MSG
rm -f $DIR/$CHANGELOG_LNK
rm -f $DIR/$CHANGELOG_ISSUES
