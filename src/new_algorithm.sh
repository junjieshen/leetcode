#!/bin/bash

echo "Type the new algorithm number and title, followed by [ENTER]:"
read dir_name

cp -r 000 $dir_name
cd $dir_name

vim main.cc

make
echo
./run
echo
make clean

