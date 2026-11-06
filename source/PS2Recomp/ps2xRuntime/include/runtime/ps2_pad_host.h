#pragma once
#include <cstdint>

// Player 1's PC mouse and typing (ps2_pad.cpp). A header of its own so
// ps2_pad.h, which every compiled game file includes through ps2_runtime.h,
// stays as it is.

// Mouse look (timesplitters.ini mouse): the window thread hands over each
// window frame's mouse movement, in window pixels, to be taken by
// ps2PadTakeMouseLook.
void ps2PadNoteMouseMotion(float dx, float dy);
// The mouse look built up since the last take, in window pixels times the
// mouse speed setting (the playerTick hook turns the view by it); false
// while the mouse is off or a menu has it.
bool ps2PadTakeMouseLook(float &dx, float &dy);

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

// The mouse in the game's front-end menus (PC). The menu tick hook
// (project/game/ts_overrides.cpp) calls ps2PadNoteMenu every tick a menu
// runs: for a moment after, the pointer is free (not held for mouse look)
// and the mouse drives no pad input. The window thread hands over, once a
// window frame, where the pointer is over the game's picture, in its pixels
// (inside false off it), and the clicks and wheel since; the menu tick takes
// them with ps2PadTakeMenuPointer.
struct Ps2MenuPointer
{
    bool inside = false;
    bool moved = false;   // since the last take
    float x = 0.0f, y = 0.0f;
    int clicks = 0, rightClicks = 0;
    int wheel = 0;        // notches, up positive
};
void ps2PadNoteMenu();
// A press the pointer made in a menu (on the row it highlighted, or on a
// button prompt): the keyboard and mouse player's pad presses Cross
// (Accept), Triangle (Back), Right / Left (Next / Previous: a value) or the
// button named, in its next reads, as a key would, so the page sees it
// however it reads its pad.
enum class Ps2MenuPress
{
    Accept,
    Back,
    Next,
    Previous,
    Circle,
    Square,
    Select,
    L1,
    L2,
    Start
};
void ps2PadQueueMenuPress(Ps2MenuPress press);
// Button prompts (PC): where the renderer last drew them (the window code
// sets GSGpuBackend::PromptPressAt). A left click on one, glyph or label,
// presses its button instead of reaching the menu; at (x, y) as fractions
// of the picture it returns the press (a Ps2MenuPress), or -1.
void ps2PadSetPromptLookup(int (*lookup)(float x, float y));
// The prompt's press at (x, y) in 640 x 448 game pixels, or -1 (tests).
int ps2PadPromptAt(float x, float y);
// Mouse button presses (left or right) so far: a page that only waits for
// any press compares it with the count it saw last.
uint32_t ps2PadClickCount();
bool ps2PadMenuActive();
void ps2PadNoteMenuPointer(bool inside, float x, float y, bool click, bool rightClick, float wheel);
Ps2MenuPointer ps2PadTakeMenuPointer();
