#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: hudChallengeTimeLeftGfx
// Address: 0x2b1780 - 0x2b1858
void hudChallengeTimeLeftGfx_0x2b1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudChallengeTimeLeftGfx_0x2b1780");
#endif

    switch (ctx->pc) {
        case 0x2b17b4u: goto label_2b17b4;
        case 0x2b17f8u: goto label_2b17f8;
        case 0x2b1844u: goto label_2b1844;
        default: break;
    }

    ctx->pc = 0x2b1780u;

    // 0x2b1780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b1784: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2b1784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2b1788: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b178c: 0x246599f0  addiu       $a1, $v1, -0x6610
    ctx->pc = 0x2b178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2b1790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b1794: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2b1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b1798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b179c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b179cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17a0: 0x8c7099f0  lw          $s0, -0x6610($v1)
    ctx->pc = 0x2b17a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b17a4: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x2b17a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b17a8: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x2b17a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b17ac: 0xc087cc6  jal         func_21F318
    ctx->pc = 0x2B17ACu;
    SET_GPR_U32(ctx, 31, 0x2B17B4u);
    ctx->pc = 0x2B17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17ACu;
    // 0x2b17b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F318u, 0x2B17ACu, 0x2B17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17B4u;
label_2b17b4:
    // 0x2b17b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b17b8: 0x2442003b  addiu       $v0, $v0, 0x3B
    ctx->pc = 0x2b17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
    // 0x2b17bc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2b17bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b17c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B17C0u;
    {
        const bool branch_taken_0x2b17c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b17c0) {
            ctx->pc = 0x2B17C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B17C0u;
            // 0x2b17c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17C8u;
            goto label_2b17c8;
        }
    }
    ctx->pc = 0x2B17C8u;
label_2b17c8:
    // 0x2b17c8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2b17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b17cc: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2b17ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b17d0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2b17d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b17d4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b17d8: 0x1012  mflo        $v0
    ctx->pc = 0x2b17d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b17dc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2b17dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b17e0: 0x1012  mflo        $v0
    ctx->pc = 0x2b17e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b17e4: 0x3010  mfhi        $a2
    ctx->pc = 0x2b17e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2b17e8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2b17e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b17ec: 0x2810  mfhi        $a1
    ctx->pc = 0x2b17ecu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2b17f0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B17F0u;
    SET_GPR_U32(ctx, 31, 0x2B17F8u);
    ctx->pc = 0x2B17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17F0u;
    // 0x2b17f4: 0x24849a38  addiu       $a0, $a0, -0x65C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B17F0u, 0x2B17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17F8u;
label_2b17f8:
    // 0x2b17f8: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x2b17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b17fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1800: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b1804: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b1804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2b1808: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2b1808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2b180c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b180cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1810: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b1810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b1814: 0x3c0a5050  lui         $t2, 0x5050
    ctx->pc = 0x2b1814u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20560 << 16));
    // 0x2b1818: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b1818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b181c: 0x3c0b7f7f  lui         $t3, 0x7F7F
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32639 << 16));
    // 0x2b1820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1824: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b1824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1828: 0x8c640cb0  lw          $a0, 0xCB0($v1)
    ctx->pc = 0x2b1828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3248)));
    // 0x2b182c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1830: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x2b1830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b1834: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x2b1834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b1838: 0x354a5080  ori         $t2, $t2, 0x5080
    ctx->pc = 0x2b1838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)20608);
    // 0x2b183c: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B183Cu;
    SET_GPR_U32(ctx, 31, 0x2B1844u);
    ctx->pc = 0x2B1840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B183Cu;
    // 0x2b1840: 0x356b7f80  ori         $t3, $t3, 0x7F80 (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B183Cu, 0x2B1844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1844u;
label_2b1844:
    // 0x2b1844: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b1844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1848: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b184c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b184cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1850: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1850u;
        // 0x2b1854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1858u;
}
