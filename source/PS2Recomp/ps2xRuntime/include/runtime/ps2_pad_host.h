#pragma once

// Player 1's PC mouse and typing (ps2_pad.cpp). A header of its own so
// ps2_pad.h, which every compiled game file includes through ps2_runtime.h,
// stays as it is.

// Mouse look (timesplitters.ini mouse): the window thread hands over each
// window frame's mouse movement, in window pixels; player 1's next pad read
// turns what built up into right-stick movement.
void ps2PadNoteMouseMotion(float dx, float dy);

// Typing into the game's text entry (sign-on names, map maker names; the
// stringeditTick hook in project/game/ts_overrides.cpp). The hook calls
// ps2PadNoteTextEntry every tick the on-screen keyboard runs: for a moment
// after, the window thread queues the characters typed (ps2PadNoteTypedKeys,
// once a window frame) and the keyboard's letter, number and space keys stop
// pressing pad buttons. ps2PadTakeTypedChar gives the next one: printable
// ASCII, '\b' for Backspace, '\n' for Enter; 0 when none.
void ps2PadNoteTextEntry();
void ps2PadNoteTypedKeys();
int ps2PadTakeTypedChar();

// The lane (player - 1) the keyboard and mouse are locked to, or -1 while
// no player has used them.
int ps2PadKeyboardLane();

// The button glyph set the game's prompts are drawn in
// (gs_texture_replacement::loadButton): 1 an Xbox-style controller, 2 the
// keyboard; the device used last, or a controller while none has been and
// one is plugged in. 0 on the Xbox (its own disc glyphs).
int ps2PadButtonSet();
