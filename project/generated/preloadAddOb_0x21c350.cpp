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

// Function: preloadAddOb
// Address: 0x21c350 - 0x21c3e8
void preloadAddOb_0x21c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadAddOb_0x21c350");
#endif

    switch (ctx->pc) {
        case 0x21c370u: goto label_21c370;
        case 0x21c3a8u: goto label_21c3a8;
        default: break;
    }

    ctx->pc = 0x21c350u;

    // 0x21c350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21c354: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c358: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c35c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c360: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21c364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c368: 0xc087166  jal         func_21C598
    ctx->pc = 0x21C368u;
    SET_GPR_U32(ctx, 31, 0x21C370u);
    ctx->pc = 0x21C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C368u;
    // 0x21c36c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C598u, 0x21C368u, 0x21C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C370u;
label_21c370:
    // 0x21c370: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21C370u;
    {
        const bool branch_taken_0x21c370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C370u;
        // 0x21c374: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c370) {
            ctx->pc = 0x21C3D4u;
            goto label_21c3d4;
        }
    }
    ctx->pc = 0x21C378u;
    // 0x21c378: 0x8f829d70  lw          $v0, -0x6290($gp)
    ctx->pc = 0x21c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c37c: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c380: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21c380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x21c384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21c384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c388: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x21c388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x21c38c: 0x24634c60  addiu       $v1, $v1, 0x4C60
    ctx->pc = 0x21c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19552));
    // 0x21c390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c398: 0xaf829d70  sw          $v0, -0x6290($gp)
    ctx->pc = 0x21c398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 2));
    // 0x21c39c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x21c39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21c3a0: 0xc0868be  jal         func_21A2F8
    ctx->pc = 0x21C3A0u;
    SET_GPR_U32(ctx, 31, 0x21C3A8u);
    ctx->pc = 0x21C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3A0u;
    // 0x21c3a4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F8u, 0x21C3A0u, 0x21C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3A8u;
label_21c3a8:
    // 0x21c3a8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x21c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x21c3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3b0: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x21c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x21c3b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x21c3b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21c3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21c3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c3c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c3c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c3c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c3cc: 0x8087090  j           func_21C240
    ctx->pc = 0x21C3CCu;
    ctx->pc = 0x21C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3CCu;
    // 0x21c3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    preloadInsert_0x21c240(rdram, ctx, runtime); return;
    ctx->pc = 0x21C3D4u;
label_21c3d4:
    // 0x21c3d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c3d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3E0u;
        // 0x21c3e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3E8u;
}
