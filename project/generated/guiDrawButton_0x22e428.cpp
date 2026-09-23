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

// Function: guiDrawButton
// Address: 0x22e428 - 0x22e4e4
void guiDrawButton_0x22e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiDrawButton_0x22e428");
#endif

    switch (ctx->pc) {
        case 0x22e488u: goto label_22e488;
        case 0x22e4c4u: goto label_22e4c4;
        default: break;
    }

    ctx->pc = 0x22e428u;

    // 0x22e428: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e42c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x22e430: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22e434: 0x24429a48  addiu       $v0, $v0, -0x65B8
    ctx->pc = 0x22e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941256));
    // 0x22e438: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22e438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22e43c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x22e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22e440: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22e444: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22e444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22e448: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22e44c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x22e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e450: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22e454: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22e454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e458: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22e45c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22e45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e460: 0x8f88b498  lw          $t0, -0x4B68($gp)
    ctx->pc = 0x22e460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22e464: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22e464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e468: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22e46c: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x22e46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x22e470: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x22e470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e478: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22e47c: 0x94720002  lhu         $s2, 0x2($v1)
    ctx->pc = 0x22e47cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e480: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22E480u;
    SET_GPR_U32(ctx, 31, 0x22E488u);
    ctx->pc = 0x22E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E480u;
    // 0x22e484: 0x94710000  lhu         $s1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22E480u, 0x22E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E488u;
label_22e488:
    // 0x22e488: 0x3c035f5f  lui         $v1, 0x5F5F
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24415 << 16));
    // 0x22e48c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x22e490: 0x34635f3f  ori         $v1, $v1, 0x5F3F
    ctx->pc = 0x22e490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24383);
    // 0x22e494: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x22e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
    // 0x22e498: 0x50180b  movn        $v1, $v0, $s0
    ctx->pc = 0x22e498u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x22e49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22e4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4a4: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x22e4a8: 0x125900  sll         $t3, $s2, 4
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x22e4ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x22e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x22e4b0: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x22e4b4: 0x24a7000b  addiu       $a3, $a1, 0xB
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x22e4b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e4b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4bc: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22E4BCu;
    SET_GPR_U32(ctx, 31, 0x22E4C4u);
    ctx->pc = 0x22E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4BCu;
    // 0x22e4c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22E4BCu, 0x22E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4C4u;
label_22e4c4:
    // 0x22e4c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22e4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e4c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22e4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e4cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22e4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e4d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22e4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e4d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22e4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e4d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22e4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4DCu;
        // 0x22e4e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E4E4u;
}
