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

// Function: bulletInitialiseStraightLineTest
// Address: 0x289c70 - 0x289d30
void bulletInitialiseStraightLineTest_0x289c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletInitialiseStraightLineTest_0x289c70");
#endif

    switch (ctx->pc) {
        case 0x289c94u: goto label_289c94;
        case 0x289cc8u: goto label_289cc8;
        case 0x289ce8u: goto label_289ce8;
        case 0x289cf8u: goto label_289cf8;
        case 0x289d10u: goto label_289d10;
        default: break;
    }

    ctx->pc = 0x289c70u;

    // 0x289c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289c74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x289c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x289c78: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x289c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x289c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c80: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x289c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x289c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x289c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x289c88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c8c: 0xc098dcc  jal         func_263730
    ctx->pc = 0x289C8Cu;
    SET_GPR_U32(ctx, 31, 0x289C94u);
    ctx->pc = 0x289C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C8Cu;
    // 0x289c90: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x289C8Cu, 0x289C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C94u;
label_289c94:
    // 0x289c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c98: 0x8f83a270  lw          $v1, -0x5D90($gp)
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x289c9c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x289c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x289ca0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x289ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x289ca4: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x289ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x289ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x289cb0: 0x260800a0  addiu       $t0, $s0, 0xA0
    ctx->pc = 0x289cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x289cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289cb8: 0x260900ac  addiu       $t1, $s0, 0xAC
    ctx->pc = 0x289cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x289cbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x289cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289cc0: 0xc098dda  jal         func_263768
    ctx->pc = 0x289CC0u;
    SET_GPR_U32(ctx, 31, 0x289CC8u);
    ctx->pc = 0x289CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CC0u;
    // 0x289cc4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263768u, 0x289CC0u, 0x289CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CC8u;
label_289cc8:
    // 0x289cc8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x289CC8u;
    {
        const bool branch_taken_0x289cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CC8u;
        // 0x289ccc: 0x8f84a270  lw          $a0, -0x5D90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cc8) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289CD0u;
    // 0x289cd0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x289cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x289cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x289cd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x289cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x289cdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x289cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289ce0: 0xc098dbc  jal         func_2636F0
    ctx->pc = 0x289CE0u;
    SET_GPR_U32(ctx, 31, 0x289CE8u);
    ctx->pc = 0x289CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CE0u;
    // 0x289ce4: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2636F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2636F0u, 0x289CE0u, 0x289CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CE8u;
label_289ce8:
    // 0x289ce8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x289ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x289cec: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x289cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x289cf0: 0xc098dcc  jal         func_263730
    ctx->pc = 0x289CF0u;
    SET_GPR_U32(ctx, 31, 0x289CF8u);
    ctx->pc = 0x289CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CF0u;
    // 0x289cf4: 0x260600c8  addiu       $a2, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x289CF0u, 0x289CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CF8u;
label_289cf8:
    // 0x289cf8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x289cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x289cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d00: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x289d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289d04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289d08: 0xc098dc6  jal         func_263718
    ctx->pc = 0x289D08u;
    SET_GPR_U32(ctx, 31, 0x289D10u);
    ctx->pc = 0x289D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D08u;
    // 0x289d0c: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263718u, 0x289D08u, 0x289D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D10u;
label_289d10:
    // 0x289d10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289D10u;
    {
        const bool branch_taken_0x289d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D10u;
        // 0x289d14: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d10) {
            ctx->pc = 0x289D20u;
            goto label_289d20;
        }
    }
    ctx->pc = 0x289D18u;
label_289d18:
    // 0x289d18: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x289d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x289d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_289d20:
    // 0x289d20: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x289d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289d24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x289d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289d28: 0x3e00008  jr          $ra
    ctx->pc = 0x289D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D28u;
        // 0x289d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289D30u;
}
