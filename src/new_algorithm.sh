#!/bin/bash

echo -n "Type the new algorithm number and title, followed by [ENTER]: "
read dir_name

echo
echo "Creating folder: $(tput setaf 1)$dir_name$(tput sgr0)"
echo

cp -r 000 $dir_name
cd $dir_name

vim main.cc

make
echo
./run
echo
make clean

