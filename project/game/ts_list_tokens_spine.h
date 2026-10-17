// The spine's side of the in-list tokens (ts_list_tokens.h is the natives'
// side, frozen at Week 0; src/xbox/PUSH-BC-PLAN.md D1; owned by C-VIF): the
// walker's validation of a token tag against the run table of the list
// buffer it was written into, the decoder's dispatch of a list token to its
// kind's executor, and the hook that starts a list buffer's run table anew.
// The records engine (ts_record_cache.cpp), which owns the spine's hooks
// (PS2Memory::setVif1RecordHooks), forwards its list-token calls here.
#pragma once
#include <cstdint>

#include "runtime/ps2_vif1_records.h"

class PS2Memory;

// The walker met a REF with QWC 0 and ADDR addrField in the reserved range
// at tagAddr: true when the run table holds a token written there in the
// current generation of its list buffer (out filled), false: stale.
bool tsListTokenAdmit(uint32_t tagAddr, uint32_t addrField, Vif1Token &out);
// The decoder reached a list token: its kind's executor runs it (Done);
// Rejected when no executor is registered for the kind.
Vif1ExecResult tsListTokenRun(PS2Memory &memory, const Vif1Token &token, bool dry);
// Registers the memdbTick hook that starts a list buffer's run table (once).
void tsListTokensInstall();
