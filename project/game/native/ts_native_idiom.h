// Idiomatic game-logic natives (src/xbox/PUSH-BC-PLAN.md section 3.6, M7;
// owned by B-LOGIC, sub-owner L0): GuestView, the journaled store helpers,
// NoYield over B-SCHED's API, IdiomEntry with its previous occupant and the
// reference mode, the audits and the lockstep harness.
//
// Week 0 (W0-I): the registration entry exists as a stub so that
// ts_overrides.cpp's registration list is complete; the modules come with
// B-LOGIC's trains.
#pragma once

class PS2Runtime;

// Called by applyTimeSplittersOverrides after the transcribed natives.
void registerTsNativeIdiom(PS2Runtime &runtime);
