#!/bin/bash
wget -q --output-document=$HOME/lib101-gm_overhaul.so https://github.com/elaifamouez/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lib101-gm_overhaul.so
export LD_PRELOAD=$HOME/lib101-gm_overhaul.so
