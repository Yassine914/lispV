#!/bin/bash

echo "building...."
clang++ -o build/compiler src/main.cpp

echo "running..."
./build/compiler
exit
