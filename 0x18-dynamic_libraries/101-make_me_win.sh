#!/bin/bash
wget -p /tmp https://github.com/BenterkiaAyoub/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
