// Per-callee observed-register contracts (src/xbox/PUSH-BC-PLAN.md section
// 3.6 items 4 and 5; section 6, I-12; owned by B-LOGIC): for each function
// the ABI audit (src/xbox/tools/abi_audit.py, a fixpoint over the call
// graph) proves which registers its callers observe after the call, so an
// idiomatic native or an inline leaf call may leave the others as it likes.
//
// A native with Contract::Abi writes the original's final value into every
// observed register and may leave the rest unchanged (or, under
// TS_NATIVE_POISON, poisoned). Callee-saved registers ($s0-$s7, $gp, $sp,
// $fp, $ra, $f20-$f31) are always in the set; the audit decides the
// caller-saved ones ($at, $v0, $v1, $a0-$a3, $t0-$t9, $f0-$f19, HI/LO,
// HI1/LO1, the FPU condition bit and accumulator). VU0 (vf, ACC, vi) is not
// audited: a native leaves it as the original does (kMiscVu0, always set).
// The 128-bit upper halves of the general registers are not audited either:
// a native leaves them as the original does.
//
// The entries between the BEGIN/END markers are generated: run
//   python src/xbox/tools/abi_audit.py project/generated \
//       src/xbox/tools/abi_targets.txt project/game/native/ts_abi_observed.h
// after the generated code or the target list changes, and review the
// difference (a register that becomes observed breaks the natives that drop
// it; the boot tests in Abi mode and the lockstep show which).
#pragma once
#include <cstdint>

namespace ts_abi
{
    // Bit n of gpr: $n is observed after the call; bit n of fpr: $fn is;
    // misc: the other state (kMisc* below).
    struct Observed
    {
        uint32_t address;
        uint32_t gpr;
        uint32_t fpr;
        uint32_t misc = kMiscAll;

        static constexpr uint32_t kMiscHiLo = 1u << 0;  // HI and LO
        static constexpr uint32_t kMiscHiLo1 = 1u << 1; // HI1 and LO1
        static constexpr uint32_t kMiscFcc = 1u << 2;   // fcr31's condition bit
        static constexpr uint32_t kMiscFacc = 1u << 3;  // the FPU accumulator
        static constexpr uint32_t kMiscVu0 = 1u << 4;   // vf, ACC, vi: not audited, always set
        static constexpr uint32_t kMiscAll = 0x1Fu;
    };
    constexpr uint32_t kAllGpr = 0xFFFFFFFFu, kAllFpr = 0xFFFFFFFFu; // not audited: everything observed
    constexpr uint32_t kCalleeSavedGpr = 0xF0FF0000u;                  // $s0-$s7, $gp, $sp, $fp, $ra
    constexpr uint32_t kCalleeSavedFpr = 0xFFF00000u;                  // $f20-$f31

    inline constexpr Observed kObserved[] = {
    // BEGIN abi_audit.py entries
        {0x284E38u, 0xFFFFFFFDu, 0xFFFFDFFFu, 0xBu}, // anglediff; free: $at $f13 fcc
        {0x2B68D0u, 0xFFFFFF7Fu, 0xFFFFFFFFu, 0xFu}, // newrnd; free: $a3
        {0x2D6BA8u, 0xFFFFF007u, 0xFFFFFFFFu, 0xCu}, // atan; free: $v1 $a0 $a1 $a2 $a3 $t0 $t1 $t2 $t3 hilo hilo1
        {0x2D8398u, 0xFFFFFE03u, 0xFFFFEFFFu, 0xBu}, // sqrtf; free: $v0 $v1 $a0 $a1 $a2 $a3 $t0 $f12 fcc
        {0x2D84B0u, 0xFFFFE005u, 0xFFFFFFFFu, 0xCu}, // ps2___ieee754_atan2; free: $at $v1 $a0 $a1 $a2 $a3 $t0 $t1 $t2 $t3 $t4 hilo hilo1
        {0x2D9510u, 0xFFFFF007u, 0xFFFFFFFFu, 0xCu}, // ps2___ieee754_sqrt; free: $v1 $a0 $a1 $a2 $a3 $t0 $t1 $t2 $t3 hilo hilo1
        {0x2DC5A0u, 0xFFFFFFF3u, 0xFFFFFFFFu, 0xFu}, // fabsf; free: $v0 $v1
        {0x2E3180u, 0xFFFFF007u, 0xFFFFFFFFu, 0xFu}, // dpadd; free: $v1 $a0 $a1 $a2 $a3 $t0 $t1 $t2 $t3
        {0x2E31D8u, 0xFFFFF027u, 0xFFFFFFFFu, 0xFu}, // dpsub; free: $v1 $a0 $a2 $a3 $t0 $t1 $t2 $t3
        {0x2E3240u, 0xFFFFFE27u, 0xFFFFFFFFu, 0xDu}, // dpmul; free: $v1 $a0 $a2 $a3 $t0 hilo1
        {0x2E34E8u, 0xFFFFFE07u, 0xFFFFFFFFu, 0xFu}, // dpdiv; free: $v1 $a0 $a1 $a2 $a3 $t0
        {0x2E3768u, 0xFFFFFF27u, 0xFFFFFFFFu, 0xFu}, // dpcmp; free: $v1 $a0 $a2 $a3
        {0x2E3870u, 0xFFFFFFC7u, 0xFFFFFFFFu, 0xFu}, // dptoli; free: $v1 $a0 $a1
        {0x2E3A10u, 0xFFFFFE03u, 0xFFFFFFFFu, 0xFu}, // dptofp; free: $v0 $v1 $a0 $a1 $a2 $a3 $t0
        {0x2E4608u, 0xFFFFFE07u, 0xFFFFFFFFu, 0xFu}, // fptodp; free: $v1 $a0 $a1 $a2 $a3 $t0
        {0x2E4648u, 0xFFFFFF87u, 0xFFFFFFFFu, 0xCu}, // ps2___muldi3; free: $v1 $a0 $a1 $a2 hilo hilo1
    // END abi_audit.py entries
        {0xFFFFFFFFu, kAllGpr, kAllFpr, Observed::kMiscAll}, // (the end: keeps the table non-empty)
    };
    inline constexpr uint32_t kObservedCount = sizeof(kObserved) / sizeof(kObserved[0]) - 1u;

    // The set for the function at address (sorted table, binary search);
    // everything when the audit has no entry for it.
    constexpr Observed observedFor(uint32_t address)
    {
        uint32_t lo = 0, hi = kObservedCount;
        while (lo < hi)
        {
            const uint32_t mid = (lo + hi) / 2u;
            if (kObserved[mid].address < address)
                lo = mid + 1u;
            else
                hi = mid;
        }
        if (lo < kObservedCount && kObserved[lo].address == address)
        {
            Observed o = kObserved[lo];
            o.gpr |= kCalleeSavedGpr;
            o.fpr |= kCalleeSavedFpr;
            o.misc |= Observed::kMiscVu0;
            return o;
        }
        return Observed{address, kAllGpr, kAllFpr, Observed::kMiscAll};
    }

    // True when the audit has a set for address (a native may then use
    // Contract::Abi for it; without one it must stay exact).
    constexpr bool audited(uint32_t address)
    {
        for (uint32_t i = 0; i < kObservedCount; ++i)
            if (kObserved[i].address == address)
                return true;
        return false;
    }
}
