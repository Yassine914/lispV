@echo off

echo building....
clang++ -o build/compiler src/main.cpp -lmpc

echo running...
echo ------------------------
echo 
.\build\compiler.exe
