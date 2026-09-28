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
- The game's own Audio / Video Options page shows them after Screen Adjust
  (Widescreen, Edge smoothing, Resolution, Full screen, Render quality).
  ts_overrides.cpp wraps menutick/std_menumake for that page and substitutes
  an extended copy of its menu built at 0x7E000 (unused kernel RAM); values
  apply at once and are written back to the ini. Render quality applies on
  the next start. TS_DISPLAY_MENU=0 keeps the original page.
- Select Game Type gets an "Exit Game" item under Audio / Video Options
  (same wrapper, a copy of gamemode_menu rebuilt each tick at 0x7E800
  because the page's tick rewrites its items). Esc, Alt+F4 and holding
  Select + Start for 2 seconds also quit; F11 toggles fullscreen.
- An element that spans two screen thirds may be split between two anchors;
  consecutive glyphs on one line share their row's anchor.
- Widescreen scales the aspect passed to the game's `matrixPerspective`
  (0x2B5258) by 4/3 and shows the frame at 16:9. During gameplay the HUD
  is narrowed back to 4:3 proportions and pinned to the left margin, right
  margin or centre (GS::adjustWidescreenHud: overlay primitives with no
  depth test/write, flat or pixel-addressed texture, entirely on screen).
  Menus keep the stretched full-screen layout.
- Texture replacement (GPU renderer): every texture decoded from GS memory
  is identified by a 64-bit FNV hash of its decoded RGBA pixels and size,
  so each palette of an indexed texture is separate. texture_dump=1 saves
  new ones to textures/dump/2d/<hash>.png when drawn without depth test or
  write (menus, HUD, fonts) and textures/dump/3d/ otherwise (worker thread;
  alpha 0..128 scaled to 0..255, except textures whose alpha exceeds 128,
  which keep raw GS alpha so double-strength blending survives); PNGs named <hash>.png anywhere under textures/replacements/
  are loaded (mipmapped, filtered, any size) and sampled with normalised
  coordinates after the GS wrap/clamp in texel space. Textures that
  overlap a GPU render target are never dumped or replaced. With no
  replacements and dumping off nothing is hashed.
- UI pack: tools/build_ui_pack.py upscales textures/dump/2d (plus the menu
  backgrounds listed in tools/ui_pack.txt) 4x into textures/replacements/ui
  with tools/upscale_textures.py: AI (Upscayl's upscayl-bin, digital-art-4x,
  64px tiles) for icons, fonts and artwork, Lanczos for soft art listed in
  ui_pack.txt; faint font glyphs fall back to Lanczos because the AI
  invents shapes in them. The pack is built locally from the game's own
  textures and is not committed.
- render_scale > 1 draws the GPU renderer's targets at that multiple; the
  displayed buffer is copied from its target straight to the window
  (single circuit, or both circuits showing the same buffer, as this game
  does). Other display setups fall back to the native frame. Write-backs to
  GS memory stay at native resolution (one sample per GS pixel), so effects
  that read the frame buffer back work at native detail.

## Cheat: time2split

A sign-on named `time2split` (any case) has everything unlocked: every
story level and difficulty, characters, bot and weapon sets, challenge
modes and challenges, and the cheats menu. ts_overrides.cpp answers yes
from unlockedEx (0x2251A8, which decides every unlock condition; the game's
own hidden cheat1 does the same via the word at gp-0x6510) and
challengeAvail (0x225038) while the sign-on record holding the stats being
checked (*(gp-0x48EC) within the 0xB78-byte records at *(gp-0x6228)) is
named time2split. Nothing is written to the profile or memory card.
