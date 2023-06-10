#!/bin/bash
wget https://github.com/Powerisinschool/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand_hijack.so
export LD_PRELOAD=./rand_hijack.so
