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

// Function: ipDefocus
// Address: 0x295fc0 - 0x2960b4
void ipDefocus_0x295fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipDefocus_0x295fc0");
#endif

    switch (ctx->pc) {
        case 0x295fecu: goto label_295fec;
        case 0x295ff8u: goto label_295ff8;
        case 0x296000u: goto label_296000;
        case 0x296030u: goto label_296030;
        case 0x296060u: goto label_296060;
        case 0x296090u: goto label_296090;
        default: break;
    }

    ctx->pc = 0x295fc0u;

    // 0x295fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295fc4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x295fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x295fc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x295fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x295fcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x295fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x295fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x295fd4: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x295fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x295fd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x295fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x295fdc: 0x3c117f7f  lui         $s1, 0x7F7F
    ctx->pc = 0x295fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
    // 0x295fe0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x295fe4: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x295FE4u;
    SET_GPR_U32(ctx, 31, 0x295FECu);
    ctx->pc = 0x295FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FE4u;
    // 0x295fe8: 0x265099f0  addiu       $s0, $s2, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x295FE4u, 0x295FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FECu;
label_295fec:
    // 0x295fec: 0x36317f3f  ori         $s1, $s1, 0x7F3F
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32575);
    // 0x295ff0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x295FF0u;
    SET_GPR_U32(ctx, 31, 0x295FF8u);
    ctx->pc = 0x295FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FF0u;
    // 0x295ff4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x295FF0u, 0x295FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FF8u;
label_295ff8:
    // 0x295ff8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x295ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295ffc: 0x0  nop
    ctx->pc = 0x295ffcu;
    // NOP
label_296000:
    // 0x296000: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x296000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x296004: 0x8e4499f0  lw          $a0, -0x6610($s2)
    ctx->pc = 0x296004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941168)));
    // 0x296008: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29600c: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x29600cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x296010: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x296010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x296014: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x296014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x296018: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x296018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x29601c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x296020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x296024: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296028: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296028u;
    SET_GPR_U32(ctx, 31, 0x296030u);
    ctx->pc = 0x29602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296028u;
    // 0x29602c: 0x75900  sll         $t3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296028u, 0x296030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296030u;
label_296030:
    // 0x296030: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x296034: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x296034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x296038: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x296038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29603c: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296040: 0x8e4499f0  lw          $a0, -0x6610($s2)
    ctx->pc = 0x296040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941168)));
    // 0x296044: 0x75900  sll         $t3, $a3, 4
    ctx->pc = 0x296044u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x296048: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x296048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x29604c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x296050: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x296054: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x296054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x296058: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296058u;
    SET_GPR_U32(ctx, 31, 0x296060u);
    ctx->pc = 0x29605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296058u;
    // 0x29605c: 0x65100  sll         $t2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296058u, 0x296060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296060u;
label_296060:
    // 0x296060: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x296060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296064: 0x8e4499f0  lw          $a0, -0x6610($s2)
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941168)));
    // 0x296068: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x296068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29606c: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x29606cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x296070: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x296074: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x296074u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x296078: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x296078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x29607c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296080: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x296080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x296084: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x296084u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296088: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296088u;
    SET_GPR_U32(ctx, 31, 0x296090u);
    ctx->pc = 0x29608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296088u;
    // 0x29608c: 0x75900  sll         $t3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296088u, 0x296090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296090u;
label_296090:
    // 0x296090: 0x663ffdb  bgezl       $s3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x296090u;
    {
        const bool branch_taken_0x296090 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x296090) {
            ctx->pc = 0x296094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296090u;
            // 0x296094: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296000;
        }
    }
    ctx->pc = 0x296098u;
    // 0x296098: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x296098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29609c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29609cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2960a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2960a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2960a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2960a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2960a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2960a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2960ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2960ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960ACu;
        // 0x2960b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2960ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2960B4u;
}
