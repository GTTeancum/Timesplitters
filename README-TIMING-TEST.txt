TimeSplitters native PC timing-fix test build — 2026-09-25

This build addresses smooth slow-motion while host rendering remains ~60 FPS.

Window title now shows two independent rates:
  FPS       = host presentation frames per second
  VBLANK/s  = guest PS2 vertical-blank events per second

Expected NTSC timing during normal gameplay is approximately:
  60 FPS | 60 VBLANK/s

The scheduler fix prevents expired wall-clock VBlank/kernel deadlines from
being blocked by the AOT runtime's intentionally coarse EE-cycle accounting.

Remote keyboard controls are preserved:
  WASD movement, IJKL look, arrows D-pad,
  Z/X/C/V Square/Cross/Circle/Triangle,
  Q/E L1/R1, 1/3 L2/R2,
  Enter Start, Right Shift or Tab Select, Ctrl L3/R3.

FFmpeg remains disabled in this MinGW test package, so MPEG/FMVs are not decoded.
