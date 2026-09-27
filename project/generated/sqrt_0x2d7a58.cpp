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

// Function: sqrt
// Address: 0x2d7a58 - 0x2d7b64
void sqrt_0x2d7a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sqrt_0x2d7a58");
#endif

    switch (ctx->pc) {
        case 0x2d7a80u: goto label_2d7a80;
        case 0x2d7a9cu: goto label_2d7a9c;
        case 0x2d7ab4u: goto label_2d7ab4;
        case 0x2d7b0cu: goto label_2d7b0c;
        case 0x2d7b1cu: goto label_2d7b1c;
        case 0x2d7b38u: goto label_2d7b38;
        default: break;
    }

    ctx->pc = 0x2d7a58u;

    // 0x2d7a58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d7a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d7a5c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a64: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d7a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d7a68: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d7a6c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d7a70: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x2d7a70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x2d7a74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d7a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d7a78: 0xc0b6544  jal         func_2D9510
    ctx->pc = 0x2D7A78u;
    SET_GPR_U32(ctx, 31, 0x2D7A80u);
    ctx->pc = 0x2D7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A78u;
    // 0x2d7a7c: 0xffb30060  sd          $s3, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9510u, 0x2D7A78u, 0x2D7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A80u;
label_2d7a80:
    // 0x2d7a80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a84: 0x8e92b118  lw          $s2, -0x4EE8($s4)
    ctx->pc = 0x2d7a84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947096)));
    // 0x2d7a88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7a8c: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D7A8Cu;
    {
        const bool branch_taken_0x2d7a8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A8Cu;
        // 0x2d7a90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a8c) {
            ctx->pc = 0x2D7B44u;
            goto label_2d7b44;
        }
    }
    ctx->pc = 0x2D7A94u;
    // 0x2d7a94: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D7A94u;
    SET_GPR_U32(ctx, 31, 0x2D7A9Cu);
    ctx->pc = 0x2D7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A94u;
    // 0x2d7a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D7A94u, 0x2D7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A9Cu;
label_2d7a9c:
    // 0x2d7a9c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7A9Cu;
    {
        const bool branch_taken_0x2d7a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A9Cu;
        // 0x2d7aa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a9c) {
            ctx->pc = 0x2D7B44u;
            goto label_2d7b44;
        }
    }
    ctx->pc = 0x2D7AA4u;
    // 0x2d7aa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d7aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aac: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7AACu;
    SET_GPR_U32(ctx, 31, 0x2D7AB4u);
    ctx->pc = 0x2D7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7AACu;
    // 0x2d7ab0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7AACu, 0x2D7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AB4u;
label_2d7ab4:
    // 0x2d7ab4: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7AB4u;
    {
        const bool branch_taken_0x2d7ab4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AB4u;
        // 0x2d7ab8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ab4) {
            ctx->pc = 0x2D7B44u;
            goto label_2d7b44;
        }
    }
    ctx->pc = 0x2D7ABCu;
    // 0x2d7abc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7ac4: 0x2442a878  addiu       $v0, $v0, -0x5788
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944888));
    // 0x2d7ac8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7acc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7ad0: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2d7ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2d7ad4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2d7ad8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7AD8u;
    {
        const bool branch_taken_0x2d7ad8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AD8u;
        // 0x2d7adc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ad8) {
            ctx->pc = 0x2D7AE8u;
            goto label_2d7ae8;
        }
    }
    ctx->pc = 0x2D7AE0u;
    // 0x2d7ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7AE0u;
    {
        const bool branch_taken_0x2d7ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AE0u;
        // 0x2d7ae4: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ae0) {
            ctx->pc = 0x2D7AF4u;
            goto label_2d7af4;
        }
    }
    ctx->pc = 0x2D7AE8u;
label_2d7ae8:
    // 0x2d7ae8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7aec: 0xdc43a880  ld          $v1, -0x5780($v0)
    ctx->pc = 0x2d7aecu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AA880u));
    // 0x2d7af0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d7af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2d7af4:
    // 0x2d7af4: 0x8e83b118  lw          $v1, -0x4EE8($s4)
    ctx->pc = 0x2d7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947096)));
    // 0x2d7af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7afc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7AFCu;
    {
        const bool branch_taken_0x2d7afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7afc) {
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7B04u;
    // 0x2d7b04: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7B04u;
    SET_GPR_U32(ctx, 31, 0x2D7B0Cu);
    ctx->pc = 0x2D7B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B04u;
    // 0x2d7b08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7B04u, 0x2D7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B0Cu;
label_2d7b0c:
    // 0x2d7b0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7B0Cu;
    {
        const bool branch_taken_0x2d7b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B0Cu;
        // 0x2d7b10: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b0c) {
            ctx->pc = 0x2D7B28u;
            goto label_2d7b28;
        }
    }
    ctx->pc = 0x2D7B14u;
label_2d7b14:
    // 0x2d7b14: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7B14u;
    SET_GPR_U32(ctx, 31, 0x2D7B1Cu);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7B14u, 0x2D7B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B1Cu;
label_2d7b1c:
    // 0x2d7b1c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d7b20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7b24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7b28:
    // 0x2d7b28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7B28u;
    {
        const bool branch_taken_0x2d7b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b28) {
            ctx->pc = 0x2D7B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7B28u;
            // 0x2d7b2c: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B44u;
            goto label_2d7b44;
        }
    }
    ctx->pc = 0x2D7B30u;
    // 0x2d7b30: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7B30u;
    SET_GPR_U32(ctx, 31, 0x2D7B38u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7B30u, 0x2D7B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B38u;
label_2d7b38:
    // 0x2d7b38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7b3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7b40: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2d7b40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d7b44:
    // 0x2d7b44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d7b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7b48: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d7b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7b4c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2d7b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7b50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d7b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7b54: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d7b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7b58: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B5Cu;
        // 0x2d7b60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B64u;
}
