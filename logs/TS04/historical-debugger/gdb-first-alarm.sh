#!/bin/sh
exec gdb -q -batch -x /mnt/data/TimeSplitters_TS04_Checkpoint/project/tools/ts04/first-alarm.gdb --args /mnt/data/TimeSplitters_TS03_Checkpoint/bin/timesplitters "$@"
