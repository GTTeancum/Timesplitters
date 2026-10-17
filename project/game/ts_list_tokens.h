// In-list tokens (src/xbox/PUSH-BC-PLAN.md section 2, D1; section 6, I-2;
// owned by C-VIF). A native that builds part of the frame's display list
// (Tier 1 emitter ops, partGfx's prologue, the per-frame REF loops) writes a
// REF tag with QWC 0 and ADDR 0x7FE00000 | slot at the list's write pointer
// (gp-0x6C60) instead of its packets, and keeps what the tag stands for in a
// host record. The walker validates the tag against the run table of the
// list buffer it is in and appends one token piece; the decoder runs the
// token's executor (by listKind) at that point of the list.
//
// Week 0 (W0-I): the API exists and is off: tsListTokensEnabled is false,
// nothing writes a tag, executors register into a table nothing consults.
// C-VIF's walker and decoder sites, the run tables and the list generation
// come with its Train 1 work.
#pragma once
#include <cstdint>

class PS2Memory;
struct Vif1Token;

// The executor for one listKind: runs the token at its list position.
// dry: a self-check decode (no GS or backend side effects).
using TsListTokenExecutor = void (*)(PS2Memory &memory, const Vif1Token &token, bool dry);

// True while a native may write a token into the frame's list: a frame
// build is open, the list pointer lies in one of the two list buffers
// (gp-0x6CF0[gp-0x6CE8]), no static chain is being built (gp-0x4B50 == 0)
// and the run table has room. Week 0: always false.
bool tsListTokensEnabled(uint8_t *rdram, uint32_t gp);
// Writes the token tag at gp-0x6C60 (all 16 bytes), advances the pointer by
// 16 and returns the run-table slot; info is the host record the executor
// gets back. Only after tsListTokensEnabled said yes. Week 0: writes nothing
// and returns UINT32_MAX.
uint32_t tsListTokenWrite(uint8_t *rdram, uint32_t gp, uint8_t listKind, const void *info);
// Registers the executor for a listKind (1..kTsListKinds-1; 0 is reserved).
constexpr uint32_t kTsListKinds = 16u;
void tsListTokenRegisterExecutor(uint8_t listKind, TsListTokenExecutor fn);
TsListTokenExecutor tsListTokenExecutor(uint8_t listKind);
