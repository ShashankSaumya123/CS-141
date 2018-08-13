#!/bin/bash
echo "what is your name?"
read NAME
echo "your name is $NAME"
cd ..
mkdir $NAME
cd $NAME
touch $NAME.cpp
