# Known issues

## Damage does not apply (player and enemies)

Reported 2026-09-26 in hands-on play (Windows Release build, OpenGL
renderer, asynchronous VIF1): enemies do no damage to the player, and the
player cannot damage enemies.

Cause found (2026-09-27): a hands-on Story session (damage-log.txt) showed
every bullet, the player's and the enemy's, hitting indestructible scenery
behind the characters, and the enemy "teleporting" and failing to aim. Bullet
hits on characters use chrLineTestChr (matrix/vector maths); AI aiming uses
the same maths. Two faults:
- The EE context default constructor zeroed VU0 VF0, which the hardware
  hard-wires to (0,0,0,1). Only the main context set it, so every other guest
  thread ran VU0 macro code with VF0 = 0.
- 39 of 40 libvu0 functions ran on SDK HLE replacements, several of which
  differ from the original code (Normalize/InnerProduct include W, etc.).
Fixed: VF0 is set in every context, and all libvu0 functions now run the
game's original VU0 code (regenerated with ps2_recomp). Needs a hands-on
Story confirmation. `TS_TRACE_DAMAGE=1` (or RUN-TIMESPLITTERS-DAMAGE-LOG.bat)
logs every propDamage call; arcade bot damage goes through gunChrFire
(no bullet collision) and always worked.

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
