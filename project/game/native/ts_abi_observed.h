// Per-callee observed-register contracts (src/xbox/PUSH-BC-PLAN.md section
// 3.6 items 4 and 5; section 6, I-12; owned by B-LOGIC): for each function
// the ABI audit (src/xbox/tools/abi_audit.py, a fixpoint over the call
// graph) proves which registers its callers observe after the call, so an
// idiomatic native or an inline leaf call may leave the others as it likes.
//
// Week 0 (W0-I): the header exists with the table's shape and no entries;
// the audit writes the entries.
#pragma once
#include <cstdint>

namespace ts_abi
{
    // Bit n of gpr: $n is observed after the call; bit n of fpr: $fn is.
    struct Observed
    {
        uint32_t address;
        uint32_t gpr;
        uint32_t fpr;
    };
    // B-LOGIC (abi_audit.py): constexpr Observed kObserved[] = { ... };
    constexpr uint32_t kAllGpr = 0xFFFFFFFFu, kAllFpr = 0xFFFFFFFFu; // not audited: everything observed
}
