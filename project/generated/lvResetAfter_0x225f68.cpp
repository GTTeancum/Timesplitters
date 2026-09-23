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

// Function: lvResetAfter
// Address: 0x225f68 - 0x22610c
void lvResetAfter_0x225f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvResetAfter_0x225f68");
#endif

    switch (ctx->pc) {
        case 0x225f78u: goto label_225f78;
        case 0x225f80u: goto label_225f80;
        case 0x225fb4u: goto label_225fb4;
        case 0x225fbcu: goto label_225fbc;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fd8u: goto label_225fd8;
        case 0x225fe0u: goto label_225fe0;
        case 0x225ff4u: goto label_225ff4;
        case 0x225ffcu: goto label_225ffc;
        case 0x226004u: goto label_226004;
        case 0x226018u: goto label_226018;
        case 0x226020u: goto label_226020;
        case 0x226028u: goto label_226028;
        case 0x22603cu: goto label_22603c;
        case 0x226044u: goto label_226044;
        case 0x22604cu: goto label_22604c;
        case 0x226060u: goto label_226060;
        case 0x226068u: goto label_226068;
        case 0x226070u: goto label_226070;
        case 0x226078u: goto label_226078;
        case 0x226080u: goto label_226080;
        case 0x226088u: goto label_226088;
        case 0x226090u: goto label_226090;
        case 0x226098u: goto label_226098;
        case 0x2260a0u: goto label_2260a0;
        case 0x2260a8u: goto label_2260a8;
        case 0x2260b0u: goto label_2260b0;
        case 0x2260b8u: goto label_2260b8;
        case 0x2260c0u: goto label_2260c0;
        case 0x2260c8u: goto label_2260c8;
        case 0x2260d0u: goto label_2260d0;
        case 0x2260d8u: goto label_2260d8;
        case 0x2260e0u: goto label_2260e0;
        case 0x2260e8u: goto label_2260e8;
        case 0x2260f0u: goto label_2260f0;
        case 0x2260f8u: goto label_2260f8;
        case 0x226100u: goto label_226100;
        default: break;
    }

    ctx->pc = 0x225f68u;

    // 0x225f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225f70: 0xc08082c  jal         func_2020B0
    ctx->pc = 0x225F70u;
    SET_GPR_U32(ctx, 31, 0x225F78u);
    ctx->pc = 0x2020B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2020B0u, 0x225F70u, 0x225F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F78u;
label_225f78:
    // 0x225f78: 0xc0811d4  jal         func_204750
    ctx->pc = 0x225F78u;
    SET_GPR_U32(ctx, 31, 0x225F80u);
    ctx->pc = 0x204750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204750u, 0x225F78u, 0x225F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F80u;
label_225f80:
    // 0x225f80: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225f84: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x225f88: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x225f88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x225f8c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x225F8Cu;
    {
        const bool branch_taken_0x225f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F8Cu;
        // 0x225f90: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f8c) {
            ctx->pc = 0x226058u;
            goto label_226058;
        }
    }
    ctx->pc = 0x225F94u;
    // 0x225f94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225f98: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x225f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
    // 0x225f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225fa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225fa4: 0x800008  jr          $a0
    ctx->pc = 0x225FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225FACu: goto label_225fac;
            case 0x225FC8u: goto label_225fc8;
            case 0x225FECu: goto label_225fec;
            case 0x226010u: goto label_226010;
            case 0x226034u: goto label_226034;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x225FACu;
label_225fac:
    // 0x225fac: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x225FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FACu;
    // 0x225fb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x225FACu, 0x225FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x225FB4u;
    SET_GPR_U32(ctx, 31, 0x225FBCu);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x225FB4u, 0x225FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FBCu;
label_225fbc:
    // 0x225fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fc0: 0x808bfbe  j           func_22FEF8
    ctx->pc = 0x225FC0u;
    ctx->pc = 0x225FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FC0u;
    // 0x225fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF8u;
    frontredReset_0x22fef8(rdram, ctx, runtime); return;
    ctx->pc = 0x225FC8u;
label_225fc8:
    // 0x225fc8: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x225FC8u;
    SET_GPR_U32(ctx, 31, 0x225FD0u);
    ctx->pc = 0x225FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FC8u;
    // 0x225fcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x225FC8u, 0x225FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FD0u;
label_225fd0:
    // 0x225fd0: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x225FD0u;
    SET_GPR_U32(ctx, 31, 0x225FD8u);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x225FD0u, 0x225FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FD8u;
label_225fd8:
    // 0x225fd8: 0xc090458  jal         func_241160
    ctx->pc = 0x225FD8u;
    SET_GPR_U32(ctx, 31, 0x225FE0u);
    ctx->pc = 0x241160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241160u, 0x225FD8u, 0x225FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE0u;
label_225fe0:
    // 0x225fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fe4: 0x808173a  j           func_205CE8
    ctx->pc = 0x225FE4u;
    ctx->pc = 0x225FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FE4u;
    // 0x225fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE8u;
    musicReset_0x205ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x225FECu;
label_225fec:
    // 0x225fec: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x225FECu;
    SET_GPR_U32(ctx, 31, 0x225FF4u);
    ctx->pc = 0x225FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FECu;
    // 0x225ff0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x225FECu, 0x225FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FF4u;
label_225ff4:
    // 0x225ff4: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x225FF4u;
    SET_GPR_U32(ctx, 31, 0x225FFCu);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x225FF4u, 0x225FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FFCu;
label_225ffc:
    // 0x225ffc: 0xc092104  jal         func_248410
    ctx->pc = 0x225FFCu;
    SET_GPR_U32(ctx, 31, 0x226004u);
    ctx->pc = 0x248410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248410u, 0x225FFCu, 0x226004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226004u;
label_226004:
    // 0x226004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226008: 0x808173a  j           func_205CE8
    ctx->pc = 0x226008u;
    ctx->pc = 0x22600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226008u;
    // 0x22600c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE8u;
    musicReset_0x205ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x226010u;
label_226010:
    // 0x226010: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x226010u;
    SET_GPR_U32(ctx, 31, 0x226018u);
    ctx->pc = 0x226014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226010u;
    // 0x226014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x226010u, 0x226018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226018u;
label_226018:
    // 0x226018: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x226018u;
    SET_GPR_U32(ctx, 31, 0x226020u);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x226018u, 0x226020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226020u;
label_226020:
    // 0x226020: 0xc08173a  jal         func_205CE8
    ctx->pc = 0x226020u;
    SET_GPR_U32(ctx, 31, 0x226028u);
    ctx->pc = 0x205CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CE8u, 0x226020u, 0x226028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22602c: 0x808a82c  j           func_22A0B0
    ctx->pc = 0x22602Cu;
    ctx->pc = 0x226030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22602Cu;
    // 0x226030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A0B0u;
    loadingReset_0x22a0b0(rdram, ctx, runtime); return;
    ctx->pc = 0x226034u;
label_226034:
    // 0x226034: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x226034u;
    SET_GPR_U32(ctx, 31, 0x22603Cu);
    ctx->pc = 0x226038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226034u;
    // 0x226038: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x226034u, 0x22603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22603Cu;
label_22603c:
    // 0x22603c: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x22603Cu;
    SET_GPR_U32(ctx, 31, 0x226044u);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x22603Cu, 0x226044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226044u;
label_226044:
    // 0x226044: 0xc0ab990  jal         func_2AE640
    ctx->pc = 0x226044u;
    SET_GPR_U32(ctx, 31, 0x22604Cu);
    ctx->pc = 0x2AE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE640u, 0x226044u, 0x22604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22604Cu;
label_22604c:
    // 0x22604c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226050: 0x808173a  j           func_205CE8
    ctx->pc = 0x226050u;
    ctx->pc = 0x226054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226050u;
    // 0x226054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE8u;
    musicReset_0x205ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x226058u;
label_226058:
    // 0x226058: 0xc088292  jal         func_220A48
    ctx->pc = 0x226058u;
    SET_GPR_U32(ctx, 31, 0x226060u);
    ctx->pc = 0x220A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A48u, 0x226058u, 0x226060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226060u;
label_226060:
    // 0x226060: 0xc09caae  jal         func_272AB8
    ctx->pc = 0x226060u;
    SET_GPR_U32(ctx, 31, 0x226068u);
    ctx->pc = 0x272AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AB8u, 0x226060u, 0x226068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226068u;
label_226068:
    // 0x226068: 0xc0a5a9a  jal         func_296A68
    ctx->pc = 0x226068u;
    SET_GPR_U32(ctx, 31, 0x226070u);
    ctx->pc = 0x296A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A68u, 0x226068u, 0x226070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226070u;
label_226070:
    // 0x226070: 0xc0aa00c  jal         func_2A8030
    ctx->pc = 0x226070u;
    SET_GPR_U32(ctx, 31, 0x226078u);
    ctx->pc = 0x2A8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8030u, 0x226070u, 0x226078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226078u;
label_226078:
    // 0x226078: 0xc0a99cc  jal         func_2A6730
    ctx->pc = 0x226078u;
    SET_GPR_U32(ctx, 31, 0x226080u);
    ctx->pc = 0x2A6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6730u, 0x226078u, 0x226080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226080u;
label_226080:
    // 0x226080: 0xc0aa2ce  jal         func_2A8B38
    ctx->pc = 0x226080u;
    SET_GPR_U32(ctx, 31, 0x226088u);
    ctx->pc = 0x2A8B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B38u, 0x226080u, 0x226088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226088u;
label_226088:
    // 0x226088: 0xc0aa612  jal         func_2A9848
    ctx->pc = 0x226088u;
    SET_GPR_U32(ctx, 31, 0x226090u);
    ctx->pc = 0x2A9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9848u, 0x226088u, 0x226090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226090u;
label_226090:
    // 0x226090: 0xc09deea  jal         func_277BA8
    ctx->pc = 0x226090u;
    SET_GPR_U32(ctx, 31, 0x226098u);
    ctx->pc = 0x277BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BA8u, 0x226090u, 0x226098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226098u;
label_226098:
    // 0x226098: 0xc0807be  jal         func_201EF8
    ctx->pc = 0x226098u;
    SET_GPR_U32(ctx, 31, 0x2260A0u);
    ctx->pc = 0x22609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226098u;
    // 0x22609c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EF8u, 0x226098u, 0x2260A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A0u;
label_2260a0:
    // 0x2260a0: 0xc084948  jal         func_212520
    ctx->pc = 0x2260A0u;
    SET_GPR_U32(ctx, 31, 0x2260A8u);
    ctx->pc = 0x212520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212520u, 0x2260A0u, 0x2260A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A8u;
label_2260a8:
    // 0x2260a8: 0xc0959d4  jal         func_256750
    ctx->pc = 0x2260A8u;
    SET_GPR_U32(ctx, 31, 0x2260B0u);
    ctx->pc = 0x256750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256750u, 0x2260A8u, 0x2260B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260B0u;
label_2260b0:
    // 0x2260b0: 0xc0a9e66  jal         func_2A7998
    ctx->pc = 0x2260B0u;
    SET_GPR_U32(ctx, 31, 0x2260B8u);
    ctx->pc = 0x2A7998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7998u, 0x2260B0u, 0x2260B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260B8u;
label_2260b8:
    // 0x2260b8: 0xc099092  jal         func_264248
    ctx->pc = 0x2260B8u;
    SET_GPR_U32(ctx, 31, 0x2260C0u);
    ctx->pc = 0x264248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264248u, 0x2260B8u, 0x2260C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260C0u;
label_2260c0:
    // 0x2260c0: 0xc0ac262  jal         func_2B0988
    ctx->pc = 0x2260C0u;
    SET_GPR_U32(ctx, 31, 0x2260C8u);
    ctx->pc = 0x2B0988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0988u, 0x2260C0u, 0x2260C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260C8u;
label_2260c8:
    // 0x2260c8: 0xc0a3608  jal         func_28D820
    ctx->pc = 0x2260C8u;
    SET_GPR_U32(ctx, 31, 0x2260D0u);
    ctx->pc = 0x28D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D820u, 0x2260C8u, 0x2260D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260D0u;
label_2260d0:
    // 0x2260d0: 0xc0a24aa  jal         func_2892A8
    ctx->pc = 0x2260D0u;
    SET_GPR_U32(ctx, 31, 0x2260D8u);
    ctx->pc = 0x2892A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892A8u, 0x2260D0u, 0x2260D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260D8u;
label_2260d8:
    // 0x2260d8: 0xc0a54a0  jal         func_295280
    ctx->pc = 0x2260D8u;
    SET_GPR_U32(ctx, 31, 0x2260E0u);
    ctx->pc = 0x295280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295280u, 0x2260D8u, 0x2260E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0xc09ffe0  jal         func_27FF80
    ctx->pc = 0x2260E0u;
    SET_GPR_U32(ctx, 31, 0x2260E8u);
    ctx->pc = 0x27FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF80u, 0x2260E0u, 0x2260E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E8u;
label_2260e8:
    // 0x2260e8: 0xc08173a  jal         func_205CE8
    ctx->pc = 0x2260E8u;
    SET_GPR_U32(ctx, 31, 0x2260F0u);
    ctx->pc = 0x205CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CE8u, 0x2260E8u, 0x2260F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F0u;
label_2260f0:
    // 0x2260f0: 0xc083512  jal         func_20D448
    ctx->pc = 0x2260F0u;
    SET_GPR_U32(ctx, 31, 0x2260F8u);
    ctx->pc = 0x20D448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D448u, 0x2260F0u, 0x2260F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F8u;
label_2260f8:
    // 0x2260f8: 0xc0a8996  jal         func_2A2658
    ctx->pc = 0x2260F8u;
    SET_GPR_U32(ctx, 31, 0x226100u);
    ctx->pc = 0x2A2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2658u, 0x2260F8u, 0x226100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226100u;
label_226100:
    // 0x226100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226104: 0x8089af8  j           func_226BE0
    ctx->pc = 0x226104u;
    ctx->pc = 0x226108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226104u;
    // 0x226108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BE0u;
    lvSoundsReset_0x226be0(rdram, ctx, runtime); return;
    ctx->pc = 0x22610Cu;
}
