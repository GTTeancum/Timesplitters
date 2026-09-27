# Known issues

## NPC aiming, movement and damage (fixed 2026-09-27, needs hands-on check)

Symptoms: bullets never hit characters, NPCs "teleported" and did not face
the player, in Story and Arcade. Causes, all fixed:
- ps2_recomp translated BLTZ/BGEZ/BLEZ/BGTZ (and likely/link variants)
  with a 32-bit test; the R5900 tests the full 64-bit register. That broke
  the game's soft-float double routines (e.g. 1.5 - 2.25 gave 15.25), and
  so atan2 and everything built on them (AI facing, animation timing).
  The generator now tests 64 bits; 724 generated files were regenerated.
- VU0 VF0 was zero in every guest thread except the main one (hardware
  constant (0,0,0,1)); now set in every context.
- libvu0 and libm functions (atan, atan2, sqrt, pow, floor, fabs, sin/cos
  kernels, __divdi3) ran on SDK HLE replacements with wrong arguments or
  semantics (doubles read from FPRs instead of GPRs, W included in
  Normalize, ...). They now run the game's original code.
Result: an Arcade match with bots now plays to its end (583 damage events
instead of 21). `TS_LIBM_SELFTEST=1` checks the game's own maths routines
against the host C library and exits. `TS_TRACE_DAMAGE=1` (or
RUN-TIMESPLITTERS-DAMAGE-LOG.bat) logs every propDamage call.

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

## Display options (timesplitters.ini)

`resolution`, `fullscreen`, `widescreen`, `fxaa` and `render_scale` are read
from `timesplitters.ini` in the working directory (F9 toggles FXAA and F10
widescreen while playing).
- Widescreen scales the aspect passed to the game's `matrixPerspective`
  (0x2B5258) by 4/3 and shows the frame at 16:9. During gameplay the HUD
  is narrowed back to 4:3 proportions and pinned to the left margin, right
  margin or centre (GS::adjustWidescreenHud: overlay primitives with no
  depth test/write, flat or pixel-addressed texture, entirely on screen).
  Menus keep the stretched full-screen layout. An element that spans two
  screen thirds may be split between two anchors.
- render_scale > 1 draws the GPU renderer's targets at that multiple; the
  displayed buffer is copied from its target straight to the window
  (single circuit, or both circuits showing the same buffer, as this game
  does). Other display setups fall back to the native frame. Write-backs to
  GS memory stay at native resolution (one sample per GS pixel), so effects
  that read the frame buffer back work at native detail.
