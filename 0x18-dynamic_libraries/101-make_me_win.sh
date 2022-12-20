#!/bin/bash
wget -O /tmp/win.so https://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@github.com/hounsounon-anselme/alx-low_level_programming/raw/master/0x17-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
