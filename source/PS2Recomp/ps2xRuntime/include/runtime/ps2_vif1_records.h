#pragma once
// VIF1 display-list records: the interface between the VIF/DMA spine (the
// chain walker in ps2_memory.cpp and the VIF1 decoder in
// ps2_vif1_interpreter.cpp, owned by C-VIF) and the engines that build and
// run records: chain and prologue tokens (C-REC), the VU1 debt map (C-XF)
// and Tier 1 emitter ops (C-EMIT). src/xbox/PUSH-BC-PLAN.md section 6, I-1;
// the mechanism is section 2, D1 and D2.
//
// Week 0 (W0-I): the types and PS2Memory::setVif1RecordHooks exist. No
// walker or decoder site calls a hook yet, and with every hook null the
// chain walk and the decode run exactly as before. The decoder helpers an
// executor replays a chain's commands with (W0-C: vif1Unpack<Reader>,
// vif1Stxx<Reader>, vif1Immediate, vif1Mscal, vif1MscalState,
// vif1NativeEnter/Exit, vif1Interpret, vif1NativeActive, noteNativeMscal)
// are PS2Memory members, declared in ps2_memory.h next to the MSCAL fast
// path; their readers are ps2_vif1_reader.h.
#include <cstddef>
#include <cstdint>
#include <utility>

class PS2Memory;

// A piece of guest memory a VIF1 chain is made of, as the chain walk records
// it (the same type as PS2Memory::Vif1Piece): where it starts and its bytes.
using Vif1Piece = std::pair<const uint8_t *, uint32_t>;

enum class Vif1TokenKind : uint8_t
{
    Chain = 1, // a CALL to a registered static chain, intercepted in the walker
    List = 2,  // an in-list token tag: REF, QWC 0, ADDR 0x7FE00000 | slot
};

// A token: one 16-byte piece in the host token ring. The decoder recognises
// a token piece by its pointer (inside the ring), never by a magic value,
// and runs it only at a command boundary.
struct Vif1Token
{
    uint32_t id = 0;                               // Chain: the chain's registry id; List: the run-table slot
    Vif1TokenKind kind = Vif1TokenKind::Chain;
    uint8_t listKind = 0;                          // List: which executor (ts_list_tokens.h registers them)
    uint16_t flags = 0;                            // the owner's (e.g. the knob generation it was built under)
    uint32_t guestAddr = 0;                        // Chain: the chain's address; List: the tag's address in the list
    const void *info = nullptr;                    // the owner's record for this token
};

// What admitCall fills for a CALL to a registered chain. Level 1 (a
// "splice"): the chain's cached merged piece list, appended by the walker
// in place of the walk. Level 2 and above: one token. Either way the walker
// reproduces the CALL+RET effect on the DMA registers and the list stays
// byte-identical.
struct Vif1CallAdmit
{
    const Vif1Piece *pieces = nullptr; // splice: the chain's cached pieces (null: a token)
    size_t pieceCount = 0;
    uint32_t pieceBytes = 0;           // their total
    Vif1Token token{};                 // when pieces is null
};

enum class Vif1ExecResult : uint8_t
{
    Done = 0,     // executed: the decoder continues after the token
    Expand = 1,   // not executed: the decoder expands it (expand) and decodes the pieces
    Rejected = 2, // neither (a list token a data read crossed into): counted, fatal in check builds
};

// The hooks, all optional (null: the walker / decoder does what it does
// today at that site). owner is passed back to every call.
struct Vif1RecordHooks
{
    void *owner = nullptr;
    // The walker met a CALL to `chain`: true to intercept it (out filled).
    bool (*admitCall)(void *owner, uint32_t chain, Vif1CallAdmit &out) = nullptr;
    // The walker met a REF tag with QWC 0 in the reserved ADDR range: true
    // when the run table validates it (out filled); false transfers nothing
    // and counts tokstale.
    bool (*admitListToken)(void *owner, uint32_t tagAddr, uint32_t addrField, Vif1Token &out) = nullptr;
    // The decoder reached a token piece at a command boundary. dry: a
    // self-check decode (vif1SelfCheck) that must have no side effects
    // beyond VIF/VU1 state.
    Vif1ExecResult (*execute)(void *owner, PS2Memory &memory, const Vif1Token &token, bool dry) = nullptr;
    // A chain token's original pieces (kept by the registry), for a data
    // read that crosses into it (tokmid) and for dry decodes.
    const Vif1Piece *(*expand)(void *owner, const Vif1Token &token, size_t &count) = nullptr;
    // D2, the VU1 debt map: before an UNPACK writes count rows from row
    // (fullLanes: every lane of every row, which clears their debt); before
    // a program not part of a record runs (its read window is settled);
    // at the list's end (everything is settled).
    void (*debtBeforeWrite)(void *owner, uint32_t row, uint32_t count, bool fullLanes) = nullptr;
    void (*debtBeforeProgram)(void *owner, uint32_t pc, uint32_t top) = nullptr;
    void (*listEnd)(void *owner) = nullptr;
};
