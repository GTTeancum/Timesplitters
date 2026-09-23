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

// Function: makemtreeTitle
// Address: 0x2300b8 - 0x23013c
void makemtreeTitle_0x2300b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makemtreeTitle_0x2300b8");
#endif

    switch (ctx->pc) {
        case 0x2300f8u: goto label_2300f8;
        case 0x230114u: goto label_230114;
        default: break;
    }

    ctx->pc = 0x2300b8u;

    // 0x2300b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2300bc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2300c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2300c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2300c4: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x2300c8: 0x8f90b73c  lw          $s0, -0x48C4($gp)
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x2300cc: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x2300d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2300d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2300d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2300d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2300d8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2300d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2300dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2300dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2300e0: 0x24521388  addiu       $s2, $v0, 0x1388
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x2300e4: 0xa0401388  sb          $zero, 0x1388($v0)
    ctx->pc = 0x2300e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5000), (uint8_t)GPR_U32(ctx, 0));
    // 0x2300e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2300e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300ec: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2300f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2300f4: 0x0  nop
    ctx->pc = 0x2300f4u;
    // NOP
label_2300f8:
    // 0x2300f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2300fc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x230100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230104u;
    {
        const bool branch_taken_0x230104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230104u;
        // 0x230108: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230104) {
            ctx->pc = 0x230118u;
            goto label_230118;
        }
    }
    ctx->pc = 0x23010Cu;
    // 0x23010c: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x23010Cu;
    SET_GPR_U32(ctx, 31, 0x230114u);
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x23010Cu, 0x230114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230114u;
label_230114:
    // 0x230114: 0x8f86b73c  lw          $a2, -0x48C4($gp)
    ctx->pc = 0x230114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
label_230118:
    // 0x230118: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x230118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23011c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23011Cu;
    {
        const bool branch_taken_0x23011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23011c) {
            ctx->pc = 0x230120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23011Cu;
            // 0x230120: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2300f8;
        }
    }
    ctx->pc = 0x230124u;
    // 0x230124: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x230124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230128: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x230128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23012c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23012cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230134: 0x3e00008  jr          $ra
    ctx->pc = 0x230134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230134u;
        // 0x230138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23013Cu;
}
