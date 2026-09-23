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

// Function: mmfileLoadBuiltinMap
// Address: 0x253678 - 0x25370c
void mmfileLoadBuiltinMap_0x253678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileLoadBuiltinMap_0x253678");
#endif

    switch (ctx->pc) {
        case 0x253698u: goto label_253698;
        case 0x2536b0u: goto label_2536b0;
        case 0x2536ccu: goto label_2536cc;
        default: break;
    }

    ctx->pc = 0x253678u;

    // 0x253678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25367c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25367cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253684: 0x24061ffc  addiu       $a2, $zero, 0x1FFC
    ctx->pc = 0x253684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8188));
    // 0x253688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25368c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253690: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x253690u;
    SET_GPR_U32(ctx, 31, 0x253698u);
    ctx->pc = 0x253694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253690u;
    // 0x253694: 0x8f84a0d0  lw          $a0, -0x5F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x253690u, 0x253698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253698u;
label_253698:
    // 0x253698: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x253698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x25369c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x25369cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2536a0: 0x246372d8  addiu       $v1, $v1, 0x72D8
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29400));
    // 0x2536a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2536a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2536a8: 0xc087140  jal         func_21C500
    ctx->pc = 0x2536A8u;
    SET_GPR_U32(ctx, 31, 0x2536B0u);
    ctx->pc = 0x2536ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536A8u;
    // 0x2536ac: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x2536A8u, 0x2536B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2536B0u;
label_2536b0:
    // 0x2536b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2536B0u;
    {
        const bool branch_taken_0x2536b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2536b0) {
            ctx->pc = 0x2536B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2536B0u;
            // 0x2536b4: 0x8c460014  lw          $a2, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2536C0u;
            goto label_2536c0;
        }
    }
    ctx->pc = 0x2536B8u;
    // 0x2536b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2536B8u;
    {
        const bool branch_taken_0x2536b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536B8u;
        // 0x2536bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536b8) {
            ctx->pc = 0x2536FCu;
            goto label_2536fc;
        }
    }
    ctx->pc = 0x2536C0u;
label_2536c0:
    // 0x2536c0: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x2536c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2536c4: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2536C4u;
    SET_GPR_U32(ctx, 31, 0x2536CCu);
    ctx->pc = 0x2536C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536C4u;
    // 0x2536c8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2536C4u, 0x2536CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2536CCu;
label_2536cc:
    // 0x2536cc: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x2536ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2536d0: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2536d4: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x2536d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x2536d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2536dc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2536DCu;
    {
        const bool branch_taken_0x2536dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2536dc) {
            ctx->pc = 0x2536E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2536DCu;
            // 0x2536e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2536F8u;
            goto label_2536f8;
        }
    }
    ctx->pc = 0x2536E4u;
    // 0x2536e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2536e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2536e8: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2536e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2536ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2536ECu;
    {
        const bool branch_taken_0x2536ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2536F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536ECu;
        // 0x2536f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536ec) {
            ctx->pc = 0x2536FCu;
            goto label_2536fc;
        }
    }
    ctx->pc = 0x2536F4u;
    // 0x2536f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2536f8:
    // 0x2536f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2536f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2536fc:
    // 0x2536fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2536fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253704: 0x3e00008  jr          $ra
    ctx->pc = 0x253704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253704u;
        // 0x253708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25370Cu;
}
