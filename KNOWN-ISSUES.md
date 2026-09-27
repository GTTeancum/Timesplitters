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

## Sound: effects play, music does not yet

An SPU2 model (`ps2_spu2.cpp`) now mixes the game's voices: ADPCM decode,
pitch, ADSR, looping, per-voice and master volume, driven by the game's
`sceSdRemote` commands (including batches read from IOP memory) and by SPU2
register writes, DMA and IRQs from IOP code. Sound effects play. Not yet
modelled: reverb, noise, pitch modulation. Clicks were visible in held
tones in an early recording (not yet re-checked).

Music: the game sends its music commands to the FRD stream driver on the
IOP through its own copy of the SIF RPC client, which the emulated IOP
never serviced. `TS_SIF_RPC_BRIDGE=1` routes them through the runtime's
RPC bridge; the driver then opens `MUSIC/*.MSC` (ioman open/read/lseek are
now emulated) and streams, but the output is wrong (noise instead of
music). Plan: play music natively instead, by intercepting `musicStart`,
`musicStop`, `musicSetVol` and streaming the `.MSC` files (raw PS2 ADPCM,
stereo interleave ~0x4000) directly.
