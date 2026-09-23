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

// Function: mapmakermain_pageDrawAfter
// Address: 0x252b68 - 0x252c28
void mapmakermain_pageDrawAfter_0x252b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakermain_pageDrawAfter_0x252b68");
#endif

    switch (ctx->pc) {
        case 0x252ba0u: goto label_252ba0;
        case 0x252bb8u: goto label_252bb8;
        case 0x252bccu: goto label_252bcc;
        case 0x252bd4u: goto label_252bd4;
        default: break;
    }

    ctx->pc = 0x252b68u;

    // 0x252b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252b6c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x252b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x252b70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252b74: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x252b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x252b78: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x252b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x252b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252b80: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x252b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x252b84: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x252b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x252b88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252b94: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x252b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x252b98: 0xc08b952  jal         func_22E548
    ctx->pc = 0x252B98u;
    SET_GPR_U32(ctx, 31, 0x252BA0u);
    ctx->pc = 0x252B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B98u;
    // 0x252b9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x252B98u, 0x252BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BA0u;
label_252ba0:
    // 0x252ba0: 0xc78c82b0  lwc1        $f12, -0x7D50($gp)
    ctx->pc = 0x252ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252ba4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x252ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x252ba8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x252ba8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x252bac: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x252bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x252bb0: 0xc08b952  jal         func_22E548
    ctx->pc = 0x252BB0u;
    SET_GPR_U32(ctx, 31, 0x252BB8u);
    ctx->pc = 0x252BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BB0u;
    // 0x252bb4: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x252BB0u, 0x252BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BB8u;
label_252bb8:
    // 0x252bb8: 0x8f82a0d4  lw          $v0, -0x5F2C($gp)
    ctx->pc = 0x252bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x252bbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252BBCu;
    {
        const bool branch_taken_0x252bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BBCu;
        // 0x252bc0: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bbc) {
            ctx->pc = 0x252BD8u;
            goto label_252bd8;
        }
    }
    ctx->pc = 0x252BC4u;
    // 0x252bc4: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x252BC4u;
    SET_GPR_U32(ctx, 31, 0x252BCCu);
    ctx->pc = 0x252BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BC4u;
    // 0x252bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x252BC4u, 0x252BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BCCu;
label_252bcc:
    // 0x252bcc: 0xc094362  jal         func_250D88
    ctx->pc = 0x252BCCu;
    SET_GPR_U32(ctx, 31, 0x252BD4u);
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x252BCCu, 0x252BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_252bd8:
    // 0x252bd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252bdc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x252bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x252be0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x252be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x252be4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x252be4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x252be8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x252be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x252bec: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x252BECu;
    {
        const bool branch_taken_0x252bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x252BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BECu;
        // 0x252bf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bec) {
            ctx->pc = 0x252C18u;
            goto label_252c18;
        }
    }
    ctx->pc = 0x252BF4u;
    // 0x252bf4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x252bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252bfc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x252bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x252c00: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x252c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x252c04: 0x2406024d  addiu       $a2, $zero, 0x24D
    ctx->pc = 0x252c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
    // 0x252c08: 0x240700c4  addiu       $a3, $zero, 0xC4
    ctx->pc = 0x252c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x252c0c: 0x24082840  addiu       $t0, $zero, 0x2840
    ctx->pc = 0x252c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x252c10: 0x80ae108  j           func_2B8420
    ctx->pc = 0x252C10u;
    ctx->pc = 0x252C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C10u;
    // 0x252c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x252C18u;
label_252c18:
    // 0x252c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c1c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x252c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x252c20: 0x3e00008  jr          $ra
    ctx->pc = 0x252C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C20u;
        // 0x252c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C28u;
}
