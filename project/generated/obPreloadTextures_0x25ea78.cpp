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

// Function: obPreloadTextures
// Address: 0x25ea78 - 0x25eb24
void obPreloadTextures_0x25ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obPreloadTextures_0x25ea78");
#endif

    switch (ctx->pc) {
        case 0x25ea90u: goto label_25ea90;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eae8u: goto label_25eae8;
        default: break;
    }

    ctx->pc = 0x25ea78u;

    // 0x25ea78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ea7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ea80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ea84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ea88: 0xc087166  jal         func_21C598
    ctx->pc = 0x25EA88u;
    SET_GPR_U32(ctx, 31, 0x25EA90u);
    ctx->pc = 0x25EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA88u;
    // 0x25ea8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C598u, 0x25EA88u, 0x25EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA90u;
label_25ea90:
    // 0x25ea90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25EA90u;
    {
        const bool branch_taken_0x25ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA90u;
        // 0x25ea94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea90) {
            ctx->pc = 0x25EB10u;
            goto label_25eb10;
        }
    }
    ctx->pc = 0x25EA98u;
    // 0x25ea98: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x25ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25ea9c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x25ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x25eaa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25eaa4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25eaa8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x25eaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25eaac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25eab0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x25eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x25eab4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25EAB4u;
    {
        const bool branch_taken_0x25eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAB4u;
        // 0x25eab8: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eab4) {
            ctx->pc = 0x25EB10u;
            goto label_25eb10;
        }
    }
    ctx->pc = 0x25EABCu;
    // 0x25eabc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25eac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25eac4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25EAC4u;
    {
        const bool branch_taken_0x25eac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAC4u;
        // 0x25eac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eac4) {
            ctx->pc = 0x25EB04u;
            goto label_25eb04;
        }
    }
    ctx->pc = 0x25EACCu;
    // 0x25eacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25eaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ead0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x25ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25ead4: 0x0  nop
    ctx->pc = 0x25ead4u;
    // NOP
label_25ead8:
    // 0x25ead8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ead8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eadc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x25eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25eae0: 0xc087234  jal         func_21C8D0
    ctx->pc = 0x25EAE0u;
    SET_GPR_U32(ctx, 31, 0x25EAE8u);
    ctx->pc = 0x25EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAE0u;
    // 0x25eae4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C8D0u, 0x25EAE0u, 0x25EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAE8u;
label_25eae8:
    // 0x25eae8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x25eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25eaec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25eaf0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25eaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaf4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x25eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25eaf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25eafc: 0x5464fff6  bnel        $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x25EAFCu;
    {
        const bool branch_taken_0x25eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x25eafc) {
            ctx->pc = 0x25EB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EAFCu;
            // 0x25eb00: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ead8;
        }
    }
    ctx->pc = 0x25EB04u;
label_25eb04:
    // 0x25eb04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25eb08: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x25eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x25eb0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25eb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25eb10:
    // 0x25eb10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25eb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eb14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25eb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eb18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25eb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB1Cu;
        // 0x25eb20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB24u;
}
