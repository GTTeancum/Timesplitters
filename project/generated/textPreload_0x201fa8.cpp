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

// Function: textPreload
// Address: 0x201fa8 - 0x20200c
void textPreload_0x201fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textPreload_0x201fa8");
#endif

    switch (ctx->pc) {
        case 0x201fbcu: goto label_201fbc;
        case 0x201fc8u: goto label_201fc8;
        case 0x201fd4u: goto label_201fd4;
        case 0x201ff0u: goto label_201ff0;
        default: break;
    }

    ctx->pc = 0x201fa8u;

    // 0x201fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201fac: 0x8f849aa0  lw          $a0, -0x6560($gp)
    ctx->pc = 0x201facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941344)));
    // 0x201fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201fb4: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x201FB4u;
    SET_GPR_U32(ctx, 31, 0x201FBCu);
    ctx->pc = 0x201FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FB4u;
    // 0x201fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x201FB4u, 0x201FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FBCu;
label_201fbc:
    // 0x201fbc: 0x8f849aa4  lw          $a0, -0x655C($gp)
    ctx->pc = 0x201fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941348)));
    // 0x201fc0: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x201FC0u;
    SET_GPR_U32(ctx, 31, 0x201FC8u);
    ctx->pc = 0x201FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FC0u;
    // 0x201fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x201FC0u, 0x201FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FC8u;
label_201fc8:
    // 0x201fc8: 0x8f849aac  lw          $a0, -0x6554($gp)
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941356)));
    // 0x201fcc: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x201FCCu;
    SET_GPR_U32(ctx, 31, 0x201FD4u);
    ctx->pc = 0x201FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FCCu;
    // 0x201fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x201FCCu, 0x201FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FD4u;
label_201fd4:
    // 0x201fd4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x201fd8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x201fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x201fdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201FDCu;
    {
        const bool branch_taken_0x201fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FDCu;
        // 0x201fe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fdc) {
            ctx->pc = 0x202004u;
            goto label_202004;
        }
    }
    ctx->pc = 0x201FE4u;
    // 0x201fe4: 0x8f849aa8  lw          $a0, -0x6558($gp)
    ctx->pc = 0x201fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941352)));
    // 0x201fe8: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x201FE8u;
    SET_GPR_U32(ctx, 31, 0x201FF0u);
    ctx->pc = 0x201FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FE8u;
    // 0x201fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x201FE8u, 0x201FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FF0u;
label_201ff0:
    // 0x201ff0: 0x8f849ab0  lw          $a0, -0x6550($gp)
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941360)));
    // 0x201ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ffc: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x201FFCu;
    ctx->pc = 0x202000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FFCu;
    // 0x202000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x202004u;
label_202004:
    // 0x202004: 0x3e00008  jr          $ra
    ctx->pc = 0x202004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202004u;
        // 0x202008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20200Cu;
}
