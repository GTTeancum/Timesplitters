// Native draw records (src/xbox/PUSH-BC-PLAN.md section 3.1, M5 and M6;
// owned by C-REC): the chain registry (partPrecalcDmaData's static chains,
// registered through the dlPushDmaTag / dlPopDmaTag hooks), the descriptor
// builder (a dry parse with the decoder's own size rules), the generational
// arena, the T0 / R1 executors, the prologue token and the record self-check.
//
// Week 0 (W0-I): the registration entry exists as a stub so that
// ts_overrides.cpp's registration list is complete; the engine comes with
// C-REC's trains (knob `records`: 0 walk, 1 splice, 2 token->T0, 3
// token->R1, 4 token->R2).
#pragma once
#include <cstdint>

class PS2Runtime;

// Called by applyTimeSplittersOverrides after the transcribed natives:
// registers the knobs and the game hooks the records engine needs.
void registerTsRecords(PS2Runtime &runtime);
