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

// Function: menuitemInit
// Address: 0x20cc28 - 0x20ccdc
void menuitemInit_0x20cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemInit_0x20cc28");
#endif

    switch (ctx->pc) {
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20ccbcu: goto label_20ccbc;
        default: break;
    }

    ctx->pc = 0x20cc28u;

    // 0x20cc28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20cc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20cc2c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x20cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x20cc30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20cc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc38: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x20cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x20cc3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20cc40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20cc44: 0xc0832b0  jal         func_20CAC0
    ctx->pc = 0x20CC44u;
    SET_GPR_U32(ctx, 31, 0x20CC4Cu);
    ctx->pc = 0x20CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC44u;
    // 0x20cc48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC0u, 0x20CC44u, 0x20CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC4Cu;
label_20cc4c:
    // 0x20cc4c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x20cc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20cc50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CC50u;
    {
        const bool branch_taken_0x20cc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC50u;
        // 0x20cc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc50) {
            ctx->pc = 0x20CC64u;
            goto label_20cc64;
        }
    }
    ctx->pc = 0x20CC58u;
    // 0x20cc58: 0xc0832b0  jal         func_20CAC0
    ctx->pc = 0x20CC58u;
    SET_GPR_U32(ctx, 31, 0x20CC60u);
    ctx->pc = 0x20CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC58u;
    // 0x20cc5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC0u, 0x20CC58u, 0x20CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC60u;
label_20cc60:
    // 0x20cc60: 0x96120006  lhu         $s2, 0x6($s0)
    ctx->pc = 0x20cc60u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_20cc64:
    // 0x20cc64: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cc68: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20cc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc6c: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x20cc6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20cc70: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x20cc70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20cc74: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x20cc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x20cc78: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CC78u;
    SET_GPR_U32(ctx, 31, 0x20CC80u);
    ctx->pc = 0x20CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC78u;
    // 0x20cc7c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CC78u, 0x20CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC80u;
label_20cc80:
    // 0x20cc80: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x20cc80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20cc84: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x20cc84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x20cc88: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CC88u;
    {
        const bool branch_taken_0x20cc88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC88u;
        // 0x20cc8c: 0xa2200004  sb          $zero, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc88) {
            ctx->pc = 0x20CCA0u;
            goto label_20cca0;
        }
    }
    ctx->pc = 0x20CC90u;
    // 0x20cc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc94: 0xc0832b0  jal         func_20CAC0
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x20CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC94u;
    // 0x20cc98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC0u, 0x20CC94u, 0x20CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0x9612000e  lhu         $s2, 0xE($s0)
    ctx->pc = 0x20cc9cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_20cca0:
    // 0x20cca0: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x20cca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20cca4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20cca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cca8: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x20cca8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20ccac: 0x9625000e  lhu         $a1, 0xE($s1)
    ctx->pc = 0x20ccacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x20ccb0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x20ccb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20ccb4: 0xc0832d4  jal         func_20CB50
    ctx->pc = 0x20CCB4u;
    SET_GPR_U32(ctx, 31, 0x20CCBCu);
    ctx->pc = 0x20CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCB4u;
    // 0x20ccb8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB50u, 0x20CCB4u, 0x20CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCBCu;
label_20ccbc:
    // 0x20ccbc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x20ccbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x20ccc0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20ccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ccc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ccc8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x20ccc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cccc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x20ccccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ccd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20ccd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x20CCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD4u;
        // 0x20ccd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CCDCu;
}
