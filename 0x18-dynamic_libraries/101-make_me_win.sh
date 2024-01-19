#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Elizabeth-Akinyi-O/alx-low_level_programming/main/0x18-dynamic_libraries/liblotthack.so
export LD_PRELOAD="$PWD/../liblotthack.so"
