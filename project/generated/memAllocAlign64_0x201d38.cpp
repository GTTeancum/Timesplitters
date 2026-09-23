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

// Function: memAllocAlign64
// Address: 0x201d38 - 0x201dd0
void memAllocAlign64_0x201d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memAllocAlign64_0x201d38");
#endif

    switch (ctx->pc) {
        case 0x201dc4u: goto label_201dc4;
        default: break;
    }

    ctx->pc = 0x201d38u;

    // 0x201d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201d3c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x201d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x201d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201d48: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D48u;
    {
        const bool branch_taken_0x201d48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x201D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D48u;
        // 0x201d4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d48) {
            ctx->pc = 0x201D64u;
            goto label_201d64;
        }
    }
    ctx->pc = 0x201D50u;
    // 0x201d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201d54: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201D54u;
    {
        const bool branch_taken_0x201d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x201D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D54u;
        // 0x201d58: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d54) {
            ctx->pc = 0x201D90u;
            goto label_201d90;
        }
    }
    ctx->pc = 0x201D5Cu;
    // 0x201d5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x201D5Cu;
    {
        const bool branch_taken_0x201d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d5c) {
            ctx->pc = 0x201DBCu;
            goto label_201dbc;
        }
    }
    ctx->pc = 0x201D64u;
label_201d64:
    // 0x201d64: 0x8f859a68  lw          $a1, -0x6598($gp)
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941288)));
    // 0x201d68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x201d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x201d6c: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x201d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x201d70: 0x8f849a70  lw          $a0, -0x6590($gp)
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x201d74: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x201d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x201d78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201d7c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x201d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201d80: 0xaf829a68  sw          $v0, -0x6598($gp)
    ctx->pc = 0x201d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941288), GPR_U32(ctx, 2));
    // 0x201d84: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201d88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201D88u;
    {
        const bool branch_taken_0x201d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D88u;
        // 0x201d8c: 0xaf849a70  sw          $a0, -0x6590($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d88) {
            ctx->pc = 0x201DB8u;
            goto label_201db8;
        }
    }
    ctx->pc = 0x201D90u;
label_201d90:
    // 0x201d90: 0x8f859a5c  lw          $a1, -0x65A4($gp)
    ctx->pc = 0x201d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941276)));
    // 0x201d94: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x201d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x201d98: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x201d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x201d9c: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x201da0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x201da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x201da4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201da8: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x201da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201dac: 0xaf829a5c  sw          $v0, -0x65A4($gp)
    ctx->pc = 0x201dacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941276), GPR_U32(ctx, 2));
    // 0x201db0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201db4: 0xaf849a64  sw          $a0, -0x659C($gp)
    ctx->pc = 0x201db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941284), GPR_U32(ctx, 4));
label_201db8:
    // 0x201db8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x201db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201dbc:
    // 0x201dbc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x201DBCu;
    SET_GPR_U32(ctx, 31, 0x201DC4u);
    ctx->pc = 0x201DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DBCu;
    // 0x201dc0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x201DBCu, 0x201DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DC4u;
label_201dc4:
    // 0x201dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x201DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DC8u;
        // 0x201dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201DD0u;
}
