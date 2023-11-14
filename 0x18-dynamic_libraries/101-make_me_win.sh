#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Eunice-Serani/alx-low_level_programming/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
