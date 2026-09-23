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

// Function: _signal_r
// Address: 0x2ed170 - 0x2ed1fc
void _signal_r_0x2ed170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_signal_r_0x2ed170");
#endif

    switch (ctx->pc) {
        case 0x2ed1c0u: goto label_2ed1c0;
        default: break;
    }

    ctx->pc = 0x2ed170u;

    // 0x2ed170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ed170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ed174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ed174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ed178: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ed178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ed17c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ed17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed184: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ed184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ed188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ed18c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2ed18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2ed190: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED190u;
    {
        const bool branch_taken_0x2ed190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED190u;
        // 0x2ed194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed190) {
            ctx->pc = 0x2ED1ACu;
            goto label_2ed1ac;
        }
    }
    ctx->pc = 0x2ED198u;
    // 0x2ed198: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2ed198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ed19c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ed19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ed1a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ed1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ed1a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2ED1A4u;
    {
        const bool branch_taken_0x2ed1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1A4u;
        // 0x2ed1a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1a4) {
            ctx->pc = 0x2ED1E4u;
            goto label_2ed1e4;
        }
    }
    ctx->pc = 0x2ED1ACu;
label_2ed1ac:
    // 0x2ed1ac: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x2ed1b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED1B0u;
    {
        const bool branch_taken_0x2ed1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1B0u;
        // 0x2ed1b4: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1b0) {
            ctx->pc = 0x2ED1D8u;
            goto label_2ed1d8;
        }
    }
    ctx->pc = 0x2ED1B8u;
    // 0x2ed1b8: 0xc0bb440  jal         func_2ED100
    ctx->pc = 0x2ED1B8u;
    SET_GPR_U32(ctx, 31, 0x2ED1C0u);
    ctx->pc = 0x2ED1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED1B8u;
    // 0x2ed1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED100u, 0x2ED1B8u, 0x2ED1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1C0u;
label_2ed1c0:
    // 0x2ed1c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED1C0u;
    {
        const bool branch_taken_0x2ed1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1c0) {
            ctx->pc = 0x2ED1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED1C0u;
            // 0x2ed1c4: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED1D4u;
            goto label_2ed1d4;
        }
    }
    ctx->pc = 0x2ED1C8u;
    // 0x2ed1c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ed1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ed1cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED1CCu;
    {
        const bool branch_taken_0x2ed1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1CCu;
        // 0x2ed1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1cc) {
            ctx->pc = 0x2ED1E4u;
            goto label_2ed1e4;
        }
    }
    ctx->pc = 0x2ED1D4u;
label_2ed1d4:
    // 0x2ed1d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ed1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ed1d8:
    // 0x2ed1d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ed1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed1e0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2ed1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_2ed1e4:
    // 0x2ed1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ed1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed1e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ed1e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed1ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ed1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1F4u;
        // 0x2ed1f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED1FCu;
}
