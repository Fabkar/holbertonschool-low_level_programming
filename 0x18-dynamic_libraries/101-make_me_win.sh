#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Fabkar/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/number_win.so
export LD_PRELOAD=/tmp/number_win.so
