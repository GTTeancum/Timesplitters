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

// Function: setStar
// Address: 0x2a8670 - 0x2a8774
void setStar_0x2a8670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setStar_0x2a8670");
#endif

    switch (ctx->pc) {
        case 0x2a86a8u: goto label_2a86a8;
        case 0x2a86d0u: goto label_2a86d0;
        case 0x2a86f4u: goto label_2a86f4;
        case 0x2a86fcu: goto label_2a86fc;
        case 0x2a8704u: goto label_2a8704;
        default: break;
    }

    ctx->pc = 0x2a8670u;

    // 0x2a8670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a8670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a8674: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a8674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a8678: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a867c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a8680: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x2a8680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8684: 0x929818  mult        $s3, $a0, $s2
    ctx->pc = 0x2a8684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2a8688: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a868c: 0x2474a710  addiu       $s4, $v1, -0x58F0
    ctx->pc = 0x2a868cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x2a8690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8694: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x2a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a8698: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a8698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a869c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a86a0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A86A0u;
    SET_GPR_U32(ctx, 31, 0x2A86A8u);
    ctx->pc = 0x2A86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86A0u;
    // 0x2a86a4: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A86A0u, 0x2A86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86A8u;
label_2a86a8:
    // 0x2a86a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a86a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a86ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a86b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A86B4u;
    {
        const bool branch_taken_0x2a86b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86B4u;
        // 0x2a86b8: 0x2682000c  addiu       $v0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86b4) {
            ctx->pc = 0x2A86C4u;
            goto label_2a86c4;
        }
    }
    ctx->pc = 0x2A86BCu;
    // 0x2a86bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a86bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a86c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a86c4:
    // 0x2a86c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a86c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a86c8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A86C8u;
    SET_GPR_U32(ctx, 31, 0x2A86D0u);
    ctx->pc = 0x2A86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86C8u;
    // 0x2a86cc: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A86C8u, 0x2A86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86D0u;
label_2a86d0:
    // 0x2a86d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a86d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a86d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a86d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A86DCu;
    {
        const bool branch_taken_0x2a86dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a86dc) {
            ctx->pc = 0x2A86ECu;
            goto label_2a86ec;
        }
    }
    ctx->pc = 0x2A86E4u;
    // 0x2a86e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a86e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a86e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a86ec:
    // 0x2a86ec: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A86ECu;
    SET_GPR_U32(ctx, 31, 0x2A86F4u);
    ctx->pc = 0x2A86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86ECu;
    // 0x2a86f0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A86ECu, 0x2A86F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86F4u;
label_2a86f4:
    // 0x2a86f4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A86F4u;
    SET_GPR_U32(ctx, 31, 0x2A86FCu);
    ctx->pc = 0x2A86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86F4u;
    // 0x2a86f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A86F4u, 0x2A86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86FCu;
label_2a86fc:
    // 0x2a86fc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A86FCu;
    SET_GPR_U32(ctx, 31, 0x2A8704u);
    ctx->pc = 0x2A8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86FCu;
    // 0x2a8700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A86FCu, 0x2A8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8704u;
label_2a8704:
    // 0x2a8704: 0x232001b  divu        $zero, $s1, $s2
    ctx->pc = 0x2a8704u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2a8708: 0x7212001b  divu1       $zero, $s0, $s2
    ctx->pc = 0x2a8708u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2a870c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2a870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8710: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2a8710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8714: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8714u;
    {
        const bool branch_taken_0x2a8714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8714) {
            ctx->pc = 0x2A8718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8714u;
            // 0x2a8718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A871Cu;
            goto label_2a871c;
        }
    }
    ctx->pc = 0x2A871Cu;
label_2a871c:
    // 0x2a871c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x2a871cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8720: 0x2934021  addu        $t0, $s4, $s3
    ctx->pc = 0x2a8720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2a8724: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a8724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8728: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a8728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a872c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a872cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8730: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a8730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8738: 0x1810  mfhi        $v1
    ctx->pc = 0x2a8738u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a873c: 0x70002810  mfhi1       $a1
    ctx->pc = 0x2a873cu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
    // 0x2a8740: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a8744: 0x24a50064  addiu       $a1, $a1, 0x64
    ctx->pc = 0x2a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x2a8748: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2a874c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8750: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2a8750u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2a8754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a8758: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a8758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a875c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a875cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8760: 0x2010  mfhi        $a0
    ctx->pc = 0x2a8760u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a8764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a8764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8768: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x2a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x2a876c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A876Cu;
        // 0x2a8770: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A876Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8774u;
}
