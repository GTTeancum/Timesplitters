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

// Function: padFlagsToString
// Address: 0x264c38 - 0x264cd4
void padFlagsToString_0x264c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padFlagsToString_0x264c38");
#endif

    switch (ctx->pc) {
        case 0x264c78u: goto label_264c78;
        case 0x264c8cu: goto label_264c8c;
        case 0x264c9cu: goto label_264c9c;
        default: break;
    }

    ctx->pc = 0x264c38u;

    // 0x264c38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x264c3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x264c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x264c40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264c44: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x264c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264c4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x264c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264c54: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x264c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x264c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x264c5c: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x264c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x264c60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x264c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x264c64: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x264C64u;
    {
        const bool branch_taken_0x264c64 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x264C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C64u;
        // 0x264c68: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c64) {
            ctx->pc = 0x264CACu;
            goto label_264cac;
        }
    }
    ctx->pc = 0x264C6Cu;
    // 0x264c6c: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x264c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x264c70: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x264c70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x264c74: 0x2121007  srav        $v0, $s2, $s0
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
label_264c78:
    // 0x264c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264c7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264C7Cu;
    {
        const bool branch_taken_0x264c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C7Cu;
        // 0x264c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c7c) {
            ctx->pc = 0x264C94u;
            goto label_264c94;
        }
    }
    ctx->pc = 0x264C84u;
    // 0x264c84: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x264C84u;
    SET_GPR_U32(ctx, 31, 0x264C8Cu);
    ctx->pc = 0x264C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C84u;
    // 0x264c88: 0x26a5eb18  addiu       $a1, $s5, -0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x264C84u, 0x264C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C8Cu;
label_264c8c:
    // 0x264c8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264C8Cu;
    {
        const bool branch_taken_0x264c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C8Cu;
        // 0x264c90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c8c) {
            ctx->pc = 0x264CA0u;
            goto label_264ca0;
        }
    }
    ctx->pc = 0x264C94u;
label_264c94:
    // 0x264c94: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x264C94u;
    SET_GPR_U32(ctx, 31, 0x264C9Cu);
    ctx->pc = 0x264C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C94u;
    // 0x264c98: 0x2685eb20  addiu       $a1, $s4, -0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x264C94u, 0x264C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C9Cu;
label_264c9c:
    // 0x264c9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x264c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_264ca0:
    // 0x264ca0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x264ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x264ca4: 0x601fff4  bgez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x264CA4u;
    {
        const bool branch_taken_0x264ca4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x264CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CA4u;
        // 0x264ca8: 0x2121007  srav        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ca4) {
            ctx->pc = 0x264C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264c78;
        }
    }
    ctx->pc = 0x264CACu;
label_264cac:
    // 0x264cac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x264cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264cb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x264cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264cb4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x264cb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264cb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x264cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264cbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264cc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264cc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x264CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CCCu;
        // 0x264cd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CD4u;
}
