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

// Function: guiDrawBox
// Address: 0x22eae0 - 0x22ebac
void guiDrawBox_0x22eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiDrawBox_0x22eae0");
#endif

    switch (ctx->pc) {
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb40u: goto label_22eb40;
        case 0x22eb5cu: goto label_22eb5c;
        case 0x22eb74u: goto label_22eb74;
        default: break;
    }

    ctx->pc = 0x22eae0u;

    // 0x22eae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22eae4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22eae8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22eaec: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x22eaecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaf0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22eaf4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22eafc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22eafcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22eb04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22eb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22eb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb10: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x22eb10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb14: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EB14u;
    {
        const bool branch_taken_0x22eb14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB14u;
        // 0x22eb18: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb14) {
            ctx->pc = 0x22EB24u;
            goto label_22eb24;
        }
    }
    ctx->pc = 0x22EB1Cu;
    // 0x22eb1c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22EB1Cu;
    SET_GPR_U32(ctx, 31, 0x22EB24u);
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22EB1Cu, 0x22EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB24u;
label_22eb24:
    // 0x22eb24: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x22eb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22eb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22eb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22eb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb38: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22EB38u;
    SET_GPR_U32(ctx, 31, 0x22EB40u);
    ctx->pc = 0x22EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB38u;
    // 0x22eb3c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22EB38u, 0x22EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB40u;
label_22eb40:
    // 0x22eb40: 0x2650ffff  addiu       $s0, $s2, -0x1
    ctx->pc = 0x22eb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22eb44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22eb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22eb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22eb50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb54: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22EB54u;
    SET_GPR_U32(ctx, 31, 0x22EB5Cu);
    ctx->pc = 0x22EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB54u;
    // 0x22eb58: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22EB54u, 0x22EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB5Cu;
label_22eb5c:
    // 0x22eb5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22eb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22eb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb68: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22eb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb6c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22EB6Cu;
    SET_GPR_U32(ctx, 31, 0x22EB74u);
    ctx->pc = 0x22EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB6Cu;
    // 0x22eb70: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22EB6Cu, 0x22EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB74u;
label_22eb74:
    // 0x22eb74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22eb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb80: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22eb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22eb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22eb88: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22eb88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22eb8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22eb90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22eb90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eb94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22eb94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eb98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22eb98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22eb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eba4: 0x80ae108  j           func_2B8420
    ctx->pc = 0x22EBA4u;
    ctx->pc = 0x22EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBA4u;
    // 0x22eba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x22EBACu;
}
