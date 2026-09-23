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

// Function: __floatdidf
// Address: 0x2e1b60 - 0x2e1bf8
void ps2___floatdidf_0x2e1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdidf_0x2e1b60");
#endif

    switch (ctx->pc) {
        case 0x2e1b88u: goto label_2e1b88;
        case 0x2e1b94u: goto label_2e1b94;
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1bc0u: goto label_2e1bc0;
        case 0x2e1bd8u: goto label_2e1bd8;
        case 0x2e1be4u: goto label_2e1be4;
        default: break;
    }

    ctx->pc = 0x2e1b60u;

    // 0x2e1b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e1b70: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x2e1b70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x2e1b74: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x2e1b78: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x2e1b78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2e1b7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1b80: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2E1B80u;
    SET_GPR_U32(ctx, 31, 0x2E1B88u);
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2E1B80u, 0x2E1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B88u;
label_2e1b88:
    // 0x2e1b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e1b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b8c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E1B8Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B94u);
    ctx->pc = 0x2E1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B8Cu;
    // 0x2e1b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2E1B8Cu, 0x2E1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B94u;
label_2e1b94:
    // 0x2e1b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e1b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E1B98u;
    SET_GPR_U32(ctx, 31, 0x2E1BA0u);
    ctx->pc = 0x2E1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B98u;
    // 0x2e1b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2E1B98u, 0x2E1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA0u;
label_2e1ba0:
    // 0x2e1ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1ba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e1ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e1bac: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2e1bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2e1bb0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2e1bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2e1bb4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2e1bb4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2e1bb8: 0xc0b8dee  jal         func_2E37B8
    ctx->pc = 0x2E1BB8u;
    SET_GPR_U32(ctx, 31, 0x2E1BC0u);
    ctx->pc = 0x2E1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BB8u;
    // 0x2e1bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37B8u, 0x2E1BB8u, 0x2E1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BC0u;
label_2e1bc0:
    // 0x2e1bc0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1BC0u;
    {
        const bool branch_taken_0x2e1bc0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BC0u;
        // 0x2e1bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bc0) {
            ctx->pc = 0x2E1BDCu;
            goto label_2e1bdc;
        }
    }
    ctx->pc = 0x2E1BC8u;
    // 0x2e1bc8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2e1bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2e1bcc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2e1bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2e1bd0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2E1BD0u;
    SET_GPR_U32(ctx, 31, 0x2E1BD8u);
    ctx->pc = 0x2E1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BD0u;
    // 0x2e1bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2E1BD0u, 0x2E1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BD8u;
label_2e1bd8:
    // 0x2e1bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1bdc:
    // 0x2e1bdc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2E1BDCu;
    SET_GPR_U32(ctx, 31, 0x2E1BE4u);
    ctx->pc = 0x2E1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BDCu;
    // 0x2e1be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2E1BDCu, 0x2E1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BE4u;
label_2e1be4:
    // 0x2e1be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1be8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e1be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BF0u;
        // 0x2e1bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1BF8u;
}
