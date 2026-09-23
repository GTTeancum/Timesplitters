# Historical TS03 debugger experiment

These are the exact scratch commands used to stop the unchanged TS03 executable at
its first original `lockupalarm` callback. They deliberately terminate the process
after taking a RAM snapshot. They are **not** the final native gameplay proof,
portable launchers, or commands for the TS04 binary. Absolute scratch paths and
optimized host-register locations (R15=EE RAM, RBX=runtime) apply to that exact
TS03 executable only. Do not reuse them blindly.

The preserved capture is `project/diagnostics/ts04-first-alarm-ee-ram.bin`.
The portable structural inspector is `scripts/analyze_dma_capture.py`; the native
component replay is `timesplitters_dma_replay`. These do not require GDB.
