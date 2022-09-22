#!/bin/bash

mkdir $1
mkdir $1/inputs

for i in 1 2 3; do
    touch $1/inputs/i0$i.txt
done

touch $1/main.cpp

echo "#include <iostream>" > $1/main.cpp
echo "using namespace std;" >> $1/main.cpp
echo "" >> $1/main.cpp
echo "int main(int argc, char *argv[]){" >> $1/main.cpp
echo "}" >> $1/main.cpp

cp Makefile $1/