#!/bin/bash
wget -P /tmp/ https://github.com/Big-foot1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD =/tmp/libjackpot.so
