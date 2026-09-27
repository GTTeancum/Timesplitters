# Known issues

## Damage does not apply (player and enemies)

Reported 2026-09-26 in hands-on play (Windows Release build, OpenGL
renderer, asynchronous VIF1): enemies do no damage to the player, and the
player cannot damage enemies.

Findings so far (`TS_TRACE_DAMAGE=1` logs every `propDamage` call with the
target's and attacker's type, flags and health before/after):
- Arcade (bots): characters (type 8, flags 0x40000031) take damage and die
  normally, both from bots and the player.
- The old "amount 0.3, health 1 -> 1" evidence from Story mode was the player
  shooting scenery (type 2, flags 0x01000021, no damageable flag 0x10);
  `propDamage` correctly ignores that.
- Not yet reproduced: damage between the player and Story-mode enemies. The
  scripted Story run never met an enemy. Need the mode/level where it
  happens.

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
