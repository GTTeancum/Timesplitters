# Picture diagnostic build (TS_DIAG)

A build for hunting picture faults on the real Xbox (first use: the black
bands across the title screen). It is the release game plus a set of
switches you can flip while it runs, a small on-screen panel showing them,
and extra `[TS:diag]` log lines. Nothing is switched at start, so it shows
exactly what the release build shows until you change something.

Build it (only this build has it; a normal build is unchanged):

    bash src/xbox/build.sh TS_DIAG=1 "EXTRA_DEFINES=-DTS_PERF=0"

The result is `build\xbox\iso\default.xbe` (and the ISO). Copy it to the
console as usual. The optional settings file `diag.ini` goes in the same
folder as `default.xbe` (the game reads it as `D:\diag.ini`).

## The controller

Everything is on controller 1.

| Buttons | What it does |
|---|---|
| Hold **Back + White** | Opens the panel. While both are held (and until both are released), the game does not see controller 1 at all. |
| ...then **D-pad up / down** | Picks a switch (marked `>` on the panel). |
| ...then **A** | Changes the picked switch to its next value. |
| ...then **Y** | Puts every switch back to the release setting. |

Let go of A before letting go of Back and White, or the game sees the A.
Whichever of Back and White you press first reaches the game for a moment
(Back is the PS2 Select button, White is L1); on the title screen neither
does anything.

The panel appears top-left for 3 seconds after any press (and for 5 seconds
when the game first draws, showing the start-up settings). It shows the
picked switch with its value and its release value, all switches in short
form (a `*` marks one that differs from release), and the start-up
settings. Every change is also written to the log.

The panel is drawn into the finished picture. If the game copies the
screen for an effect while the panel is up, the panel can show up in that
effect for a moment; that is the panel, not the fault.

## The switches

Value in brackets = the release setting. "Push A" is the batch of changes
in which the title-screen bands first appeared.

| Short | Name (log / diag.ini) | Values | What it changes |
|---|---|---|---|
| HGT | height | 0, 1 [1] | Where the picture's height comes from. 1: from the PS2 display settings (Push A). 0: from the first thing drawn each frame (before Push A). Wrong height = picture stretched or squashed, rows missing at the bottom. |
| SCI | scissor | 0, 1 [1] | The PS2's "draw only inside this rectangle" setting. 1: obeyed on the Xbox (Push A). 0: ignored, everything may draw over the whole screen (before Push A). If bands vanish at 0, the rectangle is being applied wrongly. |
| TXS | texstream | 0, 1 [1] | How textures are unpacked. 1: in small fixed pieces (Push A). 0: whole texture at once (before Push A). 0 needs more memory: fine on the title screen, may run out in a match. |
| CLU | clutid | 0, 1 [1] | How colour palettes are found. 1: by identity (Push A). 0: the older palette cache. Wrong palettes give wrong or black colours. |
| TXF | texfast | 0, 1 [1] | The shortcut table for textures used recently. 0: every texture goes the long way. |
| RGM | rangememo | 0, 1 [1] | A remembered answer to "which part of the screen has the GPU drawn". 0: worked out every time. |
| RB | readback | 0, 1 [1] | Copying the Xbox picture back into PS2 video memory when the game reads the screen (screen effects, screen-as-texture). 0: never copied; any effect built from the screen then uses stale memory. |
| RBA | rb_allrows | 0, 1 [0] | 1: those copies take every row of the screen, not only the rows drawn so far this frame. If bands vanish at 1, the "rows drawn" count is too low. |
| LDS | screenload | 0, 1 [1] | Putting pictures the PS2 side drew itself (loading screens, movies) onto the Xbox screen. 0: never. |
| FBS | fbswitch | 0, 1 [1] | When the game draws into the other of its two screens mid-frame. 1: the current Xbox frame is ended and shown at once (release). 0: keep drawing into the same frame. If bands vanish at 0, half-finished frames were being shown. |
| FLW | flipwait | 0, 1, 2 [0] | Waiting for the TV. 0: none (release). 1: never start drawing into the picture that is on the TV right now. 2: wait until each finished picture is actually on the TV (like vsync). If bands vanish at 1 or 2, the game was drawing into the picture being shown (tearing). Costs some speed. |
| CLR | clear | 0, 1, 2 [0] | Wipe the screen at the start of every frame. 0: no (release). 1: black. 2: a bright colour (magenta, or green). With 2, anything the game never draws shows bright: bright bands = nothing was drawn there; still-black bands = something drew black there. |
| DRN | gpudrain | 0, 1 [0] | 1: wait for the graphics chip to finish each frame completely before it is queued for the TV. |
| FNC | fence | 0, 1 [0] | 1: make sure the processor's writes into graphics memory are out before the graphics chip is told to go on. |

A suggested order on the title screen: CLR 2 first (are the bands
"nothing drawn" or "drawn black"?), then FLW 1, FBS 0, SCI 0, HGT 0,
RBA 1, RB 0, TXS 0, CLU 0. Change one, look, put it back (or Y), next.

## diag.ini (read once at start)

A plain text file, one `key = value` per line; `#` or `;` starts a
comment. Without the file everything is release.

Start-up settings (only take effect at start; the panel's last line shows
them):

| Key | Values | Meaning |
|---|---|---|
| untiled_colour | 1 [release], 0 | 1: the screen buffers are laid out plainly (Push A, saves 336 KB). 0: laid out in the graphics chip's "tiled" arrangement, as before Push A. |
| buffers | 3 [release], 2 | How many screen buffers: 3 (the game draws one while one waits and one is shown) or 2. |
| overlay_seconds | 3 | How long the panel stays after a press. |
| log_per_second | 20 | At most this many `[TS:diag]` change lines a second (the rest are counted). |
| summary | 1 | 0 turns off the once-a-second summary line. |

Any switch from the table above can also be given a starting value, by its
name, for example `flipwait = 1` or `clear = 2`.

Example:

    # tiled buffers, wipe to bright colour from the start
    untiled_colour = 0
    clear = 2

## The log

Lines start with `[TS:diag]` (debug output and `E:\UDATA\54530001\timesplitters.log`):

- `diagnostic build; D:\diag.ini read / not found; boot ...` and `start | HGT1 SCI1 ...`: the start-up settings.
- `set flipwait=1 | ...` / `reset to release | ...`: every change from the controller, with all values after it.
- `display ...`: the PS2 display settings, when they change (screen size the PS2 would show).
- `frame fbp=... height=...`: the screen buffer the game draws into and the height used, when they change.
- `scissor ... -> clip ...`: the "draw only inside" rectangle and the Xbox rectangle it became, when it changes.
- `off-screen target ...`: the game drawing somewhere other than the screen (render-to-texture), when the target changes.
- `frame switch ...`: the game drew into the other screen buffer mid-frame.
- `clear ...`: the PS2 side wiped a buffer itself.
- `1s frames= draws= partial= offscreen= readback= rows= rbskip= load= loadskip= clear= xfer= fbswitch= kept= flipwait= overlay=`:
  once a second, counts for that second: frames shown, screen draws, draws limited to part of the screen,
  draws done off-screen, copies back to PS2 memory (and rows copied, and copies skipped with RB 0),
  pictures loaded from PS2 memory (and skipped with LDS 0), wipes, transfers reading the screen / all transfers,
  mid-frame buffer switches (and those kept with FBS 0), waits for the TV (and their total time),
  frames with the panel drawn.

Change lines are limited to 20 a second (`log_per_second`); a line says how
many were dropped.
