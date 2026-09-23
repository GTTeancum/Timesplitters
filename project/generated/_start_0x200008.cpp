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

// Function: _start
// Address: 0x200008 - 0x2000ac
void _start_0x200008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_start_0x200008");
#endif

    switch (ctx->pc) {
        case 0x200018u: goto label_200018;
        case 0x200068u: goto label_200068;
        case 0x200084u: goto label_200084;
        case 0x20008cu: goto label_20008c;
        case 0x2000a4u: goto label_2000a4;
        default: break;
    }

    ctx->pc = 0x200008u;

    // 0x200008: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20000c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x20000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x200010: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x200010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x200014: 0x24635390  addiu       $v1, $v1, 0x5390
    ctx->pc = 0x200014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21392));
label_200018:
    // 0x200018: 0x0  nop
    ctx->pc = 0x200018u;
    // NOP
    // 0x20001c: 0x0  nop
    ctx->pc = 0x20001cu;
    // NOP
    // 0x200020: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x200020u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x200024: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x200024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x200028: 0x0  nop
    ctx->pc = 0x200028u;
    // NOP
    // 0x20002c: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20002Cu;
    {
        const bool branch_taken_0x20002c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x200030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20002Cu;
        // 0x200030: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20002c) {
            ctx->pc = 0x200018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200018;
        }
    }
    ctx->pc = 0x200034u;
    // 0x200034: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x200038: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x20003c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x200040: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x200044: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x200044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x200048: 0x248447f0  addiu       $a0, $a0, 0x47F0
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18416));
    // 0x20004c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x200050: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x200054: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x200054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x200058: 0x250800b8  addiu       $t0, $t0, 0xB8
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 184));
    // 0x20005c: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x20005cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200060: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x200064: 0xc  syscall     0
    ctx->pc = 0x200064u;
    ctx->pc = 0x200068u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_200068:
    // 0x200068: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x200068u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20006c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x200070: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x200074: 0x24845390  addiu       $a0, $a0, 0x5390
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
    // 0x200078: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20007c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x200080: 0xc  syscall     0
    ctx->pc = 0x200080u;
    ctx->pc = 0x200084u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_200084:
    // 0x200084: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x200084u;
    SET_GPR_U32(ctx, 31, 0x20008Cu);
    ctx->pc = 0x200088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200084u;
    // 0x200088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x200084u, 0x20008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20008Cu;
label_20008c:
    // 0x20008c: 0x42000038  ei
    ctx->pc = 0x20008cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x200090: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200094: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x200098: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B0200u));
    // 0x20009c: 0xc0804ec  jal         func_2013B0
    ctx->pc = 0x20009Cu;
    SET_GPR_U32(ctx, 31, 0x2000A4u);
    ctx->pc = 0x2000A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20009Cu;
    // 0x2000a0: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2013B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2013B0u, 0x20009Cu, 0x2000A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000A4u;
label_2000a4:
    // 0x2000a4: 0x80b3f50  j           func_2CFD40
    ctx->pc = 0x2000A4u;
    ctx->pc = 0x2000A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000A4u;
    // 0x2000a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD40u;
    Exit_0x2cfd40(rdram, ctx, runtime); return;
    ctx->pc = 0x2000ACu;
}
