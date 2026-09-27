# Known issues

## Damage does not apply (player and enemies)

Reported 2026-09-26 in hands-on play (Windows Release build, OpenGL
renderer, asynchronous VIF1): enemies do no damage to the player, and the
player cannot damage enemies.

Earlier evidence (see `TimeSplitters-PS2Recomp-CANONICAL-HANDOFF.md`,
`TS_TRACE_COMBAT=1`): a shot reached the original `propDamage` with
`amount=0.3` but `health_before=1 health_after=1`. So hits are detected
and the damage routine runs; the health reduction itself does not happen.
Suspects: the recompiled `propDamage` path (FPU/COP1 semantics such as
float compare, conversion or clamping), or a difficulty/multiplier value
read from memory that is zero.

Note: in automated arcade runs the idle test player was sometimes shown
dead (death camera) near the end of a 15-minute match, so some damage path
may work there; compare that path with the one used in hands-on play.

Next step: trace `propDamage` with `TS_TRACE_COMBAT=1` during a hands-on
shot and step through the health update in the generated code.

## Sound

Sound effects play through the SPU2 model (`ps2_spu2.cpp`): ADPCM decode,
pitch, ADSR, looping, per-voice and master volume, driven by the game's
`sceSdRemote` commands and by SPU2 register writes, DMA and IRQs from IOP
code. Not yet modelled: reverb, noise, pitch modulation. Clicks were
visible in held tones in an early recording (not yet re-checked).

Music plays natively (`ps2_music.cpp`): `stream_RPC` (0x205DE8, the game's
only entry to the FRD stream driver) is replaced, and `MUSIC/*.MSC` tracks
(raw PS2 ADPCM, 0x8000-byte stereo interleave, 44.1 kHz) are decoded and
mixed into the SPU2 output. `TS_NATIVE_MUSIC=0` turns it off.
`TS_SIF_RPC_BRIDGE=1` instead drives the original IOP driver through the
runtime's RPC bridge (streams through the emulated SPU2; output still
wrong).
