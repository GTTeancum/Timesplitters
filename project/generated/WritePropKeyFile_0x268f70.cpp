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

// Function: WritePropKeyFile
// Address: 0x268f70 - 0x269074
void WritePropKeyFile_0x268f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WritePropKeyFile_0x268f70");
#endif

    switch (ctx->pc) {
        case 0x268facu: goto label_268fac;
        case 0x268fc8u: goto label_268fc8;
        case 0x268fd8u: goto label_268fd8;
        case 0x268fe8u: goto label_268fe8;
        case 0x26900cu: goto label_26900c;
        case 0x269014u: goto label_269014;
        case 0x269024u: goto label_269024;
        case 0x269034u: goto label_269034;
        case 0x269048u: goto label_269048;
        case 0x269050u: goto label_269050;
        default: break;
    }

    ctx->pc = 0x268f70u;

    // 0x268f70: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x268f74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x268f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x268f78: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x268f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x268f7c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x268f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x268f80: 0xffb50440  sd          $s5, 0x440($sp)
    ctx->pc = 0x268f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 21));
    // 0x268f84: 0x24547ae0  addiu       $s4, $v0, 0x7AE0
    ctx->pc = 0x268f84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x268f88: 0xffb30420  sd          $s3, 0x420($sp)
    ctx->pc = 0x268f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 19));
    // 0x268f8c: 0x34844240  ori         $a0, $a0, 0x4240
    ctx->pc = 0x268f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    // 0x268f90: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x268f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x268f94: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x268f94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x268f98: 0xffb10400  sd          $s1, 0x400($sp)
    ctx->pc = 0x268f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 17));
    // 0x268f9c: 0xffb003f0  sd          $s0, 0x3F0($sp)
    ctx->pc = 0x268f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 16));
    // 0x268fa0: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x268fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
    // 0x268fa4: 0xc0b9294  jal         func_2E4A50
    ctx->pc = 0x268FA4u;
    SET_GPR_U32(ctx, 31, 0x268FACu);
    ctx->pc = 0x268FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FA4u;
    // 0x268fa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A50u, 0x268FA4u, 0x268FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FACu;
label_268fac:
    // 0x268fac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x268facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fb0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x268fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x268fb4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x268fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fb8: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x268fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x268fbc: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x268fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x268fc0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x268fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3590C8u));
    // 0x268fc4: 0x0  nop
    ctx->pc = 0x268fc4u;
    // NOP
label_268fc8:
    // 0x268fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x268fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fd0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x268FD0u;
    SET_GPR_U32(ctx, 31, 0x268FD8u);
    ctx->pc = 0x268FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FD0u;
    // 0x268fd4: 0x26a5f910  addiu       $a1, $s5, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x268FD0u, 0x268FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FD8u;
label_268fd8:
    // 0x268fd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x268fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x268fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fe0: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x268FE0u;
    SET_GPR_U32(ctx, 31, 0x268FE8u);
    ctx->pc = 0x268FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FE0u;
    // 0x268fe4: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x268FE0u, 0x268FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FE8u;
label_268fe8:
    // 0x268fe8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x268fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x268fec: 0x2a2202c9  slti        $v0, $s1, 0x2C9
    ctx->pc = 0x268fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)713) ? 1 : 0);
    // 0x268ff0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x268FF0u;
    {
        const bool branch_taken_0x268ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ff0) {
            ctx->pc = 0x268FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268FF0u;
            // 0x268ff4: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268fc8;
        }
    }
    ctx->pc = 0x268FF8u;
    // 0x268ff8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x268ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269000: 0x24a5f918  addiu       $a1, $a1, -0x6E8
    ctx->pc = 0x269000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965528));
    // 0x269004: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269004u;
    SET_GPR_U32(ctx, 31, 0x26900Cu);
    ctx->pc = 0x269008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269004u;
    // 0x269008: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269004u, 0x26900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26900Cu;
label_26900c:
    // 0x26900c: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x26900Cu;
    SET_GPR_U32(ctx, 31, 0x269014u);
    ctx->pc = 0x269010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26900Cu;
    // 0x269010: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x26900Cu, 0x269014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269014u;
label_269014:
    // 0x269014: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269014u;
    {
        const bool branch_taken_0x269014 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x269018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269014u;
        // 0x269018: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269014) {
            ctx->pc = 0x26903Cu;
            goto label_26903c;
        }
    }
    ctx->pc = 0x26901Cu;
    // 0x26901c: 0xc08697e  jal         func_21A5F8
    ctx->pc = 0x26901Cu;
    SET_GPR_U32(ctx, 31, 0x269024u);
    ctx->pc = 0x269020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26901Cu;
    // 0x269020: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5F8u, 0x26901Cu, 0x269024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269024u;
label_269024:
    // 0x269024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269028: 0x2133023  subu        $a2, $s0, $s3
    ctx->pc = 0x269028u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x26902c: 0xc086966  jal         func_21A598
    ctx->pc = 0x26902Cu;
    SET_GPR_U32(ctx, 31, 0x269034u);
    ctx->pc = 0x269030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26902Cu;
    // 0x269030: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x26902Cu, 0x269034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269034u;
label_269034:
    // 0x269034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x269034u;
    {
        const bool branch_taken_0x269034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269034) {
            ctx->pc = 0x269048u;
            goto label_269048;
        }
    }
    ctx->pc = 0x26903Cu;
label_26903c:
    // 0x26903c: 0x2133023  subu        $a2, $s0, $s3
    ctx->pc = 0x26903cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x269040: 0xc086966  jal         func_21A598
    ctx->pc = 0x269040u;
    SET_GPR_U32(ctx, 31, 0x269048u);
    ctx->pc = 0x269044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269040u;
    // 0x269044: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x269040u, 0x269048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269048u;
label_269048:
    // 0x269048: 0xc0b929e  jal         func_2E4A78
    ctx->pc = 0x269048u;
    SET_GPR_U32(ctx, 31, 0x269050u);
    ctx->pc = 0x26904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269048u;
    // 0x26904c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A78u, 0x269048u, 0x269050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269050u;
label_269050:
    // 0x269050: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x269050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x269054: 0xdfb50440  ld          $s5, 0x440($sp)
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x269058: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x269058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x26905c: 0xdfb30420  ld          $s3, 0x420($sp)
    ctx->pc = 0x26905cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x269060: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x269060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x269064: 0xdfb10400  ld          $s1, 0x400($sp)
    ctx->pc = 0x269064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x269068: 0xdfb003f0  ld          $s0, 0x3F0($sp)
    ctx->pc = 0x269068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x26906c: 0x3e00008  jr          $ra
    ctx->pc = 0x26906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26906Cu;
        // 0x269070: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269074u;
}
