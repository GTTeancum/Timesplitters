// Runtime knobs (src/xbox/PUSH-BC-PLAN.md section 2, D5; section 6, I-9;
// frozen after Week 0). A knob is a uint32_t a module reads every frame,
// registered once with its default; its value can be set from the host
// settings file (knob.<name> = <value>, runtime/ps2_host_settings.h) and
// from a pad-script line (knob <name> <value>, runtime/ps2_pad.h), so one
// console session can A/B a path without a rebuild. Knobs change at frame
// boundaries only (tsKnobApplyFrame, called at the frame's first draw on the
// game's own thread); a set is queued until then. Every knob defaults to the
// old behaviour; a build without knob lines behaves as if none existed.
//
// Fixed storage, no allocation: up to kTsKnobMax knobs with names of up to
// 31 characters.
#pragma once
#include <cstdint>

constexpr uint32_t kTsKnobMax = 64u;

// Registers a knob (name: letters, digits, '.', '_'; case-sensitive) at its
// default, then applies any value the settings file holds for it (at once:
// registration happens before the game runs). Registering a name twice
// re-points it. False when the table is full or the name is too long.
bool tsKnobRegister(const char *name, uint32_t *var, uint32_t defaultValue);
// Queues a value for the next frame boundary (a pad-script line, the
// settings file, a debugger). False: no such knob.
bool tsKnobSet(const char *name, uint32_t value);
// The current value (0 and false when there is no such knob).
bool tsKnobGet(const char *name, uint32_t &value);
// The frame boundary: every queued value is written to its variable and the
// generation moves when any changed.
void tsKnobApplyFrame();
// Moves whenever a knob's value changes (a list token records the generation
// it was built under; the walker always honours tokens, the knob only stops
// new emission).
uint32_t tsKnobGeneration();
// Reads knob.<name> lines from the host settings file into the queue (done
// by tsKnobRegister for the knob it registers; this applies the rest, e.g.
// for a late registration) and installs the pad-script handler.
void tsKnobsInstall();
// The registered knobs, for the status line: count and one name/value.
uint32_t tsKnobCount();
bool tsKnobAt(uint32_t index, const char *&name, uint32_t &value);
