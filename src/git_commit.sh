#!/bin/bash

echo "Type the git commit message, followed by [ENTER]:"
read message

git add -A
git commit -m "$message"
git push
