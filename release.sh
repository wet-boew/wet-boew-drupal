#!/bin/bash
# Release and push tags to remotes on Drupal and GitHub

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Variables
BRANCH="7.x-$1"
TAG="7.x-$2"

function git_tag_recurse()
{
  for i in * ; do
    if [ -d "$i" ]; then
      if [[ "$i" == *wetkit* ]]; then
        cd $i

        # Init 4.x branch
        exists=`git show-ref refs/heads/$BRANCH`
        if [ -n "$exists" ]; then
          echo "Branch name $BRANCH already exists."
        else
          echo "Branch name $BRANCH is being created."
          git branch $BRANCH
        fi

        # Checkout branch
        echo "Checking out $BRANCH"
        git checkout $BRANCH

        # Tag + Push release
        RES=`git tag | grep "^$TAG\$"`
        if [ "$RES" == "$TAG" ]; then
            echo "Tag name $TAG already exists."
        else
            echo "Tag name $TAG is being created."
            git tag $TAG
        fi

        # Push new branches to remote
        echo "Pushing branches to remote(s)"
        git push origin $BRANCH
        git push github $BRANCH

        # Push new tags to remote
        echo "Pushing tags to remote(s)"
        git push origin $TAG
        git push github $TAG

        cd ..
      fi
    fi
  done
}

# Initialize all custom modules
cd modules/custom/
git_tag_recurse
cd $DIR

# Initialize all custom themes
cd themes/
git_tag_recurse
cd $DIR
