#!/bin/bash

echo "building...."

clang -c -I. include/mpc/mpc.c
clang++ -c -I. src/main.cpp src/parser.cpp
clang++ -o build/compiler \
		main.o parser.o mpc.o \
		-L. -leditline -lmpc
rm main.o
rm parser.o
rm mpc.o

echo "running..."
echo -e "------------------------\n"
./build/compiler
exit
