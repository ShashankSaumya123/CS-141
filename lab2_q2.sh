#!/bin/bash
echo "what is your name?"
read NAME
cd ..
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5 6 7 8 9 10
do
touch $NAME$i.cpp
done
