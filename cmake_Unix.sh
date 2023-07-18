#!/bin/bash

cd build

# Удаление устаревших файлов
if [ -d CMakeFiles ]; then
    rm -R CMakeFiles
fi

if [ -f Makefile ]; then
    rm Makefile
fi

./cmake.sh

make
