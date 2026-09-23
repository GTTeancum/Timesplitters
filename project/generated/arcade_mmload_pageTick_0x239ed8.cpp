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

// Function: arcade_mmload_pageTick
// Address: 0x239ed8 - 0x23ab24
void arcade_mmload_pageTick_0x239ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcade_mmload_pageTick_0x239ed8");
#endif

    switch (ctx->pc) {
        case 0x239f48u: goto label_239f48;
        case 0x239f68u: goto label_239f68;
        case 0x239f88u: goto label_239f88;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff4u: goto label_239ff4;
        case 0x23a028u: goto label_23a028;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a074u: goto label_23a074;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a134u: goto label_23a134;
        case 0x23a148u: goto label_23a148;
        case 0x23a184u: goto label_23a184;
        case 0x23a258u: goto label_23a258;
        case 0x23a268u: goto label_23a268;
        case 0x23a298u: goto label_23a298;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a350u: goto label_23a350;
        case 0x23a3d8u: goto label_23a3d8;
        case 0x23a3f0u: goto label_23a3f0;
        case 0x23a420u: goto label_23a420;
        case 0x23a434u: goto label_23a434;
        case 0x23a614u: goto label_23a614;
        case 0x23a648u: goto label_23a648;
        case 0x23a658u: goto label_23a658;
        case 0x23a66cu: goto label_23a66c;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a714u: goto label_23a714;
        case 0x23a770u: goto label_23a770;
        case 0x23a784u: goto label_23a784;
        case 0x23a79cu: goto label_23a79c;
        case 0x23a7dcu: goto label_23a7dc;
        case 0x23a860u: goto label_23a860;
        case 0x23a908u: goto label_23a908;
        case 0x23a928u: goto label_23a928;
        case 0x23a938u: goto label_23a938;
        case 0x23a950u: goto label_23a950;
        case 0x23a958u: goto label_23a958;
        case 0x23a97cu: goto label_23a97c;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaecu: goto label_23aaec;
        default: break;
    }

    ctx->pc = 0x239ed8u;

    // 0x239ed8: 0x9383b788  lbu         $v1, -0x4878($gp)
    ctx->pc = 0x239ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948744)));
    // 0x239edc: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x239edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x239ee0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x239ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x239ee4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x239ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x239ee8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x239ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x239eec: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x239eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x239ef0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x239ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x239ef4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x239ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x239ef8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x239ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x239efc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x239efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x239f00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x239f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x239f04: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x239f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x239f08: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x239f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x239f0c: 0x104002f2  beqz        $v0, . + 4 + (0x2F2 << 2)
    ctx->pc = 0x239F0Cu;
    {
        const bool branch_taken_0x239f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F0Cu;
        // 0x239f10: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f0c) {
            ctx->pc = 0x23AAD8u;
            goto label_23aad8;
        }
    }
    ctx->pc = 0x239F14u;
    // 0x239f14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x239f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x239f18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239f1c: 0x24421d90  addiu       $v0, $v0, 0x1D90
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7568));
    // 0x239f20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239f24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239f28: 0x800008  jr          $a0
    ctx->pc = 0x239F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239F30u: goto label_239f30;
            case 0x239FD0u: goto label_239fd0;
            case 0x23A164u: goto label_23a164;
            case 0x23A1ECu: goto label_23a1ec;
            case 0x23A5F4u: goto label_23a5f4;
            case 0x23A930u: goto label_23a930;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x239F30u;
label_239f30:
    // 0x239f30: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x239f34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x239f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x239f38: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x239F38u;
    {
        const bool branch_taken_0x239f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F38u;
        // 0x239f3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f38) {
            ctx->pc = 0x23A094u;
            goto label_23a094;
        }
    }
    ctx->pc = 0x239F40u;
    // 0x239f40: 0xc091354  jal         func_244D50
    ctx->pc = 0x239F40u;
    SET_GPR_U32(ctx, 31, 0x239F48u);
    ctx->pc = 0x239F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F40u;
    // 0x239f44: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D50u, 0x239F40u, 0x239F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F48u;
label_239f48:
    // 0x239f48: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x239f4c: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x239f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x239f50: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x239f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239f58: 0x26101d28  addiu       $s0, $s0, 0x1D28
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7464));
    // 0x239f5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x239f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239f60: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x239F60u;
    SET_GPR_U32(ctx, 31, 0x239F68u);
    ctx->pc = 0x239F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F60u;
    // 0x239f64: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x239F60u, 0x239F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F68u;
label_239f68:
    // 0x239f68: 0x8e260760  lw          $a2, 0x760($s1)
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x239f6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x239f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f70: 0x8e250798  lw          $a1, 0x798($s1)
    ctx->pc = 0x239f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1944)));
    // 0x239f74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x239f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f78: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x239f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f80: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x239F80u;
    SET_GPR_U32(ctx, 31, 0x239F88u);
    ctx->pc = 0x239F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F80u;
    // 0x239f84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x239F80u, 0x239F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F88u;
label_239f88:
    // 0x239f88: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x239f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239f90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x239f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239f94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x239f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239f98: 0xc09133e  jal         func_244CF8
    ctx->pc = 0x239F98u;
    SET_GPR_U32(ctx, 31, 0x239FA0u);
    ctx->pc = 0x239F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F98u;
    // 0x239f9c: 0x8c6407a0  lw          $a0, 0x7A0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244CF8u, 0x239F98u, 0x239FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FA0u;
label_239fa0:
    // 0x239fa0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x239fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x239fa4: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x239fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x239fa8: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x239fac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239fb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x239fb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239fb8: 0xa384b788  sb          $a0, -0x4878($gp)
    ctx->pc = 0x239fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 4));
    // 0x239fbc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x239fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x239fc0: 0xaf85b790  sw          $a1, -0x4870($gp)
    ctx->pc = 0x239fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948752), GPR_U32(ctx, 5));
    // 0x239fc4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x239fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x239fc8: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x239FC8u;
    {
        const bool branch_taken_0x239fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FC8u;
        // 0x239fcc: 0xaf80a050  sw          $zero, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fc8) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x239FD0u;
label_239fd0:
    // 0x239fd0: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x239FD0u;
    SET_GPR_U32(ctx, 31, 0x239FD8u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x239FD0u, 0x239FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD8u;
label_239fd8:
    // 0x239fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239fdc: 0x144302c6  bne         $v0, $v1, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x239FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FDCu;
        // 0x239fe0: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x23AAF8u;
            goto label_23aaf8;
        }
    }
    ctx->pc = 0x239FE4u;
    // 0x239fe4: 0xc091298  jal         func_244A60
    ctx->pc = 0x239FE4u;
    SET_GPR_U32(ctx, 31, 0x239FECu);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x239FE4u, 0x239FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FECu;
label_239fec:
    // 0x239fec: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x239FECu;
    SET_GPR_U32(ctx, 31, 0x239FF4u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x239FECu, 0x239FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FF4u;
label_239ff4:
    // 0x239ff4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x239ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239ff8: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x239ffc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x239FFCu;
    {
        const bool branch_taken_0x239ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FFCu;
        // 0x23a000: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ffc) {
            ctx->pc = 0x23A140u;
            goto label_23a140;
        }
    }
    ctx->pc = 0x23A004u;
    // 0x23a004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a008: 0x24421db0  addiu       $v0, $v0, 0x1DB0
    ctx->pc = 0x23a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x23a00c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a014: 0x800008  jr          $a0
    ctx->pc = 0x23A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A01Cu: goto label_23a01c;
            case 0x23A09Cu: goto label_23a09c;
            case 0x23A0C4u: goto label_23a0c4;
            case 0x23A12Cu: goto label_23a12c;
            case 0x23A140u: goto label_23a140;
            case 0x23A784u: goto label_23a784;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A014u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23A01Cu;
label_23a01c:
    // 0x23a01c: 0x8f90a22c  lw          $s0, -0x5DD4($gp)
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a020: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x23A020u;
    SET_GPR_U32(ctx, 31, 0x23A028u);
    ctx->pc = 0x23A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A020u;
    // 0x23a024: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x23A020u, 0x23A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A028u;
label_23a028:
    // 0x23a028: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x23a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a030: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x23a034: 0xc0acf54  jal         func_2B3D50
    ctx->pc = 0x23A034u;
    SET_GPR_U32(ctx, 31, 0x23A03Cu);
    ctx->pc = 0x23A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A034u;
    // 0x23a038: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D50u, 0x23A034u, 0x23A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A03Cu;
label_23a03c:
    // 0x23a03c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23A03Cu;
    {
        const bool branch_taken_0x23a03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A03Cu;
        // 0x23a040: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a03c) {
            ctx->pc = 0x23A094u;
            goto label_23a094;
        }
    }
    ctx->pc = 0x23A044u;
    // 0x23a044: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23a048: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23a04c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23a050: 0x3c067f3c  lui         $a2, 0x7F3C
    ctx->pc = 0x23a050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32572 << 16));
    // 0x23a054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a05c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a060: 0x34c63c7f  ori         $a2, $a2, 0x3C7F
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15487);
    // 0x23a064: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a06c: 0xc08c516  jal         func_231458
    ctx->pc = 0x23A06Cu;
    SET_GPR_U32(ctx, 31, 0x23A074u);
    ctx->pc = 0x23A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A06Cu;
    // 0x23a070: 0x8c4503bc  lw          $a1, 0x3BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231458u, 0x23A06Cu, 0x23A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A074u;
label_23a074:
    // 0x23a074: 0xc094e46  jal         func_253918
    ctx->pc = 0x23A074u;
    SET_GPR_U32(ctx, 31, 0x23A07Cu);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x23A074u, 0x23A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A07Cu;
label_23a07c:
    // 0x23a07c: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a088: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23a088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23a08c: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A08Cu;
        // 0x23a090: 0xa383b788  sb          $v1, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A094u;
label_23a094:
    // 0x23a094: 0x10000297  b           . + 4 + (0x297 << 2)
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A094u;
        // 0x23a098: 0xa382b788  sb          $v0, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A09Cu;
label_23a09c:
    // 0x23a09c: 0xc094d5a  jal         func_253568
    ctx->pc = 0x23A09Cu;
    SET_GPR_U32(ctx, 31, 0x23A0A4u);
    ctx->pc = 0x253568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253568u, 0x23A09Cu, 0x23A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0A4u;
label_23a0a4:
    // 0x23a0a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a0a8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23a0ac: 0xa384b788  sb          $a0, -0x4878($gp)
    ctx->pc = 0x23a0acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a0b0: 0x244211f8  addiu       $v0, $v0, 0x11F8
    ctx->pc = 0x23a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23a0b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23a0b8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x23a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x23a0bc: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x23A0BCu;
    {
        const bool branch_taken_0x23a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0BCu;
        // 0x23a0c0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0bc) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A0C4u;
label_23a0c4:
    // 0x23a0c4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23a0c8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23a0cc: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23a0d0: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a0d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a0e0: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x23a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x23a0e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a0e8: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x23a0ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23a0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a0f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0f4: 0x8c4503c0  lw          $a1, 0x3C0($v0)
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x23a0f8: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x23a0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x23a0fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23a0fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23a100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a104: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23a104u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a108: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23a108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a10c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23a10cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a110: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a114: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a118: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23a118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a11c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23a11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a120: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23a120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a124: 0x808c516  j           func_231458
    ctx->pc = 0x23A124u;
    ctx->pc = 0x23A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A124u;
    // 0x23a128: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    frontStartMessage_0x231458(rdram, ctx, runtime); return;
    ctx->pc = 0x23A12Cu;
label_23a12c:
    // 0x23a12c: 0xc094e46  jal         func_253918
    ctx->pc = 0x23A12Cu;
    SET_GPR_U32(ctx, 31, 0x23A134u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x23A12Cu, 0x23A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A134u;
label_23a134:
    // 0x23a134: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x23a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A138u;
    {
        const bool branch_taken_0x23a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A138u;
        // 0x23a13c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a138) {
            ctx->pc = 0x23A154u;
            goto label_23a154;
        }
    }
    ctx->pc = 0x23A140u;
label_23a140:
    // 0x23a140: 0xc094e46  jal         func_253918
    ctx->pc = 0x23A140u;
    SET_GPR_U32(ctx, 31, 0x23A148u);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x23A140u, 0x23A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A148u;
label_23a148:
    // 0x23a148: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x23a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a14c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23a150: 0x3463fd66  ori         $v1, $v1, 0xFD66
    ctx->pc = 0x23a150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64870);
label_23a154:
    // 0x23a154: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a158: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x23a158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x23a15c: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x23A15Cu;
    {
        const bool branch_taken_0x23a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A15Cu;
        // 0x23a160: 0xa384b788  sb          $a0, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a15c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A164u;
label_23a164:
    // 0x23a164: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23a168: 0x244311f8  addiu       $v1, $v0, 0x11F8
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23a16c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23a170: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A174u;
    {
        const bool branch_taken_0x23a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A174u;
        // 0x23a178: 0x8f84a22c  lw          $a0, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a174) {
            ctx->pc = 0x23A188u;
            goto label_23a188;
        }
    }
    ctx->pc = 0x23A17Cu;
    // 0x23a17c: 0xc091346  jal         func_244D18
    ctx->pc = 0x23A17Cu;
    SET_GPR_U32(ctx, 31, 0x23A184u);
    ctx->pc = 0x244D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D18u, 0x23A17Cu, 0x23A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A184u;
label_23a184:
    // 0x23a184: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_23a188:
    // 0x23a188: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a18c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x8f82b790  lw          $v0, -0x4870($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1BCu;
            goto label_23a1bc;
        }
    }
    ctx->pc = 0x23A194u;
    // 0x23a194: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A194u;
    {
        const bool branch_taken_0x23a194 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A194u;
        // 0x23a198: 0x9782b790  lhu         $v0, -0x4870($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294948752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a194) {
            ctx->pc = 0x23A1ACu;
            goto label_23a1ac;
        }
    }
    ctx->pc = 0x23A19Cu;
    // 0x23a19c: 0x9783a050  lhu         $v1, -0x5FB0($gp)
    ctx->pc = 0x23a19cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a1a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a1a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A1A4u;
    {
        const bool branch_taken_0x23a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1A4u;
        // 0x23a1a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1a4) {
            ctx->pc = 0x23A1B0u;
            goto label_23a1b0;
        }
    }
    ctx->pc = 0x23A1ACu;
label_23a1ac:
    // 0x23a1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a1b0:
    // 0x23a1b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a1b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23A1B4u;
    {
        const bool branch_taken_0x23a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B4u;
        // 0x23a1b8: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b4) {
            ctx->pc = 0x23A1F0u;
            goto label_23a1f0;
        }
    }
    ctx->pc = 0x23A1BCu;
label_23a1bc:
    // 0x23a1bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23a1c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a1c4: 0x3442fd66  ori         $v0, $v0, 0xFD66
    ctx->pc = 0x23a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64870);
    // 0x23a1c8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A1C8u;
    {
        const bool branch_taken_0x23a1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C8u;
        // 0x23a1cc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1c8) {
            ctx->pc = 0x23A1DCu;
            goto label_23a1dc;
        }
    }
    ctx->pc = 0x23A1D0u;
    // 0x23a1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a1d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A1D4u;
    {
        const bool branch_taken_0x23a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1D4u;
        // 0x23a1d8: 0xa4a20004  sh          $v0, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1d4) {
            ctx->pc = 0x23A1F0u;
            goto label_23a1f0;
        }
    }
    ctx->pc = 0x23A1DCu;
label_23a1dc:
    // 0x23a1dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a1e0: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x23a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x23a1e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A1E4u;
    {
        const bool branch_taken_0x23a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E4u;
        // 0x23a1e8: 0xa4c20004  sh          $v0, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1e4) {
            ctx->pc = 0x23A1F0u;
            goto label_23a1f0;
        }
    }
    ctx->pc = 0x23A1ECu;
label_23a1ec:
    // 0x23a1ec: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_23a1f0:
    // 0x23a1f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a1f4: 0x8f83a050  lw          $v1, -0x5FB0($gp)
    ctx->pc = 0x23a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a1f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a1fc: 0x2844000b  slti        $a0, $v0, 0xB
    ctx->pc = 0x23a1fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x23a200: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A200u;
    {
        const bool branch_taken_0x23a200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A200u;
        // 0x23a204: 0xaf82b784  sw          $v0, -0x487C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a200) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A208u;
    // 0x23a208: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23a20c: 0xaf82b784  sw          $v0, -0x487C($gp)
    ctx->pc = 0x23a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948740), GPR_U32(ctx, 2));
label_23a210:
    // 0x23a210: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23a214: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23a218: 0x24554850  addiu       $s5, $v0, 0x4850
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
    // 0x23a21c: 0x24e311f8  addiu       $v1, $a3, 0x11F8
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4600));
    // 0x23a220: 0xaea0fff0  sw          $zero, -0x10($s5)
    ctx->pc = 0x23a220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x354840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x354840u, _value); } while (0);
    // 0x23a224: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23a228: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a22c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23A22Cu;
    {
        const bool branch_taken_0x23a22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A22Cu;
        // 0x23a230: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a22c) {
            ctx->pc = 0x23A260u;
            goto label_23a260;
        }
    }
    ctx->pc = 0x23A234u;
    // 0x23a234: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23a234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23a238: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x23a23c: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x23a240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a244: 0x24842ff0  addiu       $a0, $a0, 0x2FF0
    ctx->pc = 0x23a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12272));
    // 0x23a248: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23a24c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a250: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x23A250u;
    SET_GPR_U32(ctx, 31, 0x23A258u);
    ctx->pc = 0x23A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A250u;
    // 0x23a254: 0x8c4507a0  lw          $a1, 0x7A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x23A250u, 0x23A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A258u;
label_23a258:
    // 0x23a258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A258u;
    {
        const bool branch_taken_0x23a258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A258u;
        // 0x23a25c: 0x3c0a01fc  lui         $t2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a258) {
            ctx->pc = 0x23A2B8u;
            goto label_23a2b8;
        }
    }
    ctx->pc = 0x23A260u;
label_23a260:
    // 0x23a260: 0xc090d0a  jal         func_243428
    ctx->pc = 0x23A260u;
    SET_GPR_U32(ctx, 31, 0x23A268u);
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x23A260u, 0x23A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A268u;
label_23a268:
    // 0x23a268: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23A268u;
    {
        const bool branch_taken_0x23a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A268u;
        // 0x23a26c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a268) {
            ctx->pc = 0x23A2B4u;
            goto label_23a2b4;
        }
    }
    ctx->pc = 0x23A270u;
    // 0x23a270: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23a274: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23a278: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x23a278u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x23a27c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a280: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x23a280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x23a284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a288: 0x26522ff0  addiu       $s2, $s2, 0x2FF0
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12272));
    // 0x23a28c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x23a290: 0xc090d16  jal         func_243458
    ctx->pc = 0x23A290u;
    SET_GPR_U32(ctx, 31, 0x23A298u);
    ctx->pc = 0x23A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A290u;
    // 0x23a294: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243458u, 0x23A290u, 0x23A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A298u;
label_23a298:
    // 0x23a298: 0x8e2503c4  lw          $a1, 0x3C4($s1)
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x23a29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2a0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23A2A0u;
    SET_GPR_U32(ctx, 31, 0x23A2A8u);
    ctx->pc = 0x23A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2A0u;
    // 0x23a2a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23A2A0u, 0x23A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2A8u;
label_23a2a8:
    // 0x23a2a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2ac: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x23A2ACu;
    SET_GPR_U32(ctx, 31, 0x23A2B4u);
    ctx->pc = 0x23A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2ACu;
    // 0x23a2b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x23A2ACu, 0x23A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2B4u;
label_23a2b4:
    // 0x23a2b4: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x23a2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
label_23a2b8:
    // 0x23a2b8: 0x254311f8  addiu       $v1, $t2, 0x11F8
    ctx->pc = 0x23a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4600));
    // 0x23a2bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a2c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a2c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A2C4u;
    {
        const bool branch_taken_0x23a2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C4u;
        // 0x23a2c8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2c4) {
            ctx->pc = 0x23A2DCu;
            goto label_23a2dc;
        }
    }
    ctx->pc = 0x23A2CCu;
    // 0x23a2cc: 0xc090d0a  jal         func_243428
    ctx->pc = 0x23A2CCu;
    SET_GPR_U32(ctx, 31, 0x23A2D4u);
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x23A2CCu, 0x23A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2D4u;
label_23a2d4:
    // 0x23a2d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23A2D4u;
    {
        const bool branch_taken_0x23a2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2D4u;
        // 0x23a2d8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2d4) {
            ctx->pc = 0x23A338u;
            goto label_23a338;
        }
    }
    ctx->pc = 0x23A2DCu;
label_23a2dc:
    // 0x23a2dc: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23a2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x23a2e0: 0x24454a10  addiu       $a1, $v0, 0x4A10
    ctx->pc = 0x23a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18960));
    // 0x23a2e4: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x23a2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a2e8: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x23a2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a2ec: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x23a2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a2f0: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x23a2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a2f4: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x23a2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23a2f8: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x23a2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23a2fc: 0xb2ac0007  sdl         $t4, 0x7($s5)
    ctx->pc = 0x23a2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a300: 0xb6ac0000  sdr         $t4, 0x0($s5)
    ctx->pc = 0x23a300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a304: 0xb2a3000f  sdl         $v1, 0xF($s5)
    ctx->pc = 0x23a304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a308: 0xb6a30008  sdr         $v1, 0x8($s5)
    ctx->pc = 0x23a308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a30c: 0xb2a40017  sdl         $a0, 0x17($s5)
    ctx->pc = 0x23a30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a310: 0xb6a40010  sdr         $a0, 0x10($s5)
    ctx->pc = 0x23a310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a314: 0x68ac001f  ldl         $t4, 0x1F($a1)
    ctx->pc = 0x23a314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a318: 0x6cac0018  ldr         $t4, 0x18($a1)
    ctx->pc = 0x23a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a31c: 0xb2ac001f  sdl         $t4, 0x1F($s5)
    ctx->pc = 0x23a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a320: 0xb6ac0018  sdr         $t4, 0x18($s5)
    ctx->pc = 0x23a320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a324: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x23a324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x23a328: 0x8d024840  lw          $v0, 0x4840($t0)
    ctx->pc = 0x23a328u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x354840u));
    // 0x23a32c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a330: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A330u;
    {
        const bool branch_taken_0x23a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A330u;
        // 0x23a334: 0xad024840  sw          $v0, 0x4840($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 18496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a330) {
            ctx->pc = 0x23A33Cu;
            goto label_23a33c;
        }
    }
    ctx->pc = 0x23A338u;
label_23a338:
    // 0x23a338: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23a338u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_23a33c:
    // 0x23a33c: 0x8f82b784  lw          $v0, -0x487C($gp)
    ctx->pc = 0x23a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x23a340: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x23a340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x23a344: 0x18400063  blez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x23A344u;
    {
        const bool branch_taken_0x23a344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A344u;
        // 0x23a348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a344) {
            ctx->pc = 0x23A4D4u;
            goto label_23a4d4;
        }
    }
    ctx->pc = 0x23A34Cu;
    // 0x23a34c: 0x0  nop
    ctx->pc = 0x23a34cu;
    // NOP
label_23a350:
    // 0x23a350: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x23a350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x23a354: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x23a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x23a358: 0x24c24a30  addiu       $v0, $a2, 0x4A30
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 18992));
    // 0x23a35c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x23a35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a360: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x23a360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a364: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x23a364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x23a368: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x23a368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x23a36c: 0x684c0017  ldl         $t4, 0x17($v0)
    ctx->pc = 0x23a36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a370: 0x6c4c0010  ldr         $t4, 0x10($v0)
    ctx->pc = 0x23a370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a374: 0xb2a70007  sdl         $a3, 0x7($s5)
    ctx->pc = 0x23a374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a378: 0xb6a70000  sdr         $a3, 0x0($s5)
    ctx->pc = 0x23a378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a37c: 0xb2aa000f  sdl         $t2, 0xF($s5)
    ctx->pc = 0x23a37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a380: 0xb6aa0008  sdr         $t2, 0x8($s5)
    ctx->pc = 0x23a380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a384: 0xb2ac0017  sdl         $t4, 0x17($s5)
    ctx->pc = 0x23a384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a388: 0xb6ac0010  sdr         $t4, 0x10($s5)
    ctx->pc = 0x23a388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a38c: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x23a38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a390: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x23a390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a394: 0xb2a7001f  sdl         $a3, 0x1F($s5)
    ctx->pc = 0x23a394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a398: 0xb6a70018  sdr         $a3, 0x18($s5)
    ctx->pc = 0x23a398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a39c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x23a39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23a3a0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x23a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x23a3a4: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23a3a8: 0x8f85a050  lw          $a1, -0x5FB0($gp)
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a3ac: 0x24e23030  addiu       $v0, $a3, 0x3030
    ctx->pc = 0x23a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12336));
    // 0x23a3b0: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a3b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23a3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3b8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x23a3bc: 0xa6b00006  sh          $s0, 0x6($s5)
    ctx->pc = 0x23a3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x23a3c0: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x23a3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23a3c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23a3c8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x23a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x23a3cc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x23a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x23a3d0: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x23A3D0u;
    SET_GPR_U32(ctx, 31, 0x23A3D8u);
    ctx->pc = 0x23A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3D0u;
    // 0x23a3d4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x23A3D0u, 0x23A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3D8u;
label_23a3d8:
    // 0x23a3d8: 0x26be0020  addiu       $fp, $s5, 0x20
    ctx->pc = 0x23a3d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x23a3dc: 0x2617000a  addiu       $s7, $s0, 0xA
    ctx->pc = 0x23a3dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x23a3e0: 0x26560001  addiu       $s6, $s2, 0x1
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23a3e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A3E4u;
    {
        const bool branch_taken_0x23a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3E4u;
        // 0x23a3e8: 0x7ba80010  lq          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3e4) {
            ctx->pc = 0x23A400u;
            goto label_23a400;
        }
    }
    ctx->pc = 0x23A3ECu;
    // 0x23a3ec: 0x0  nop
    ctx->pc = 0x23a3ecu;
    // NOP
label_23a3f0:
    // 0x23a3f0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x23a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23a3f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23a3f8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23a3fc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x23a3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_23a400:
    // 0x23a400: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x23a404: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x23a404u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x23a408: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x23a408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23a40c: 0x25543030  addiu       $s4, $t2, 0x3030
    ctx->pc = 0x23a40cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 12336));
    // 0x23a410: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x23a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x23a414: 0x2148821  addu        $s1, $s0, $s4
    ctx->pc = 0x23a414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x23a418: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23A418u;
    SET_GPR_U32(ctx, 31, 0x23A420u);
    ctx->pc = 0x23A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A418u;
    // 0x23a41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23A418u, 0x23A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A420u;
label_23a420:
    // 0x23a420: 0x28420105  slti        $v0, $v0, 0x105
    ctx->pc = 0x23a420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)261) ? 1 : 0);
    // 0x23a424: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A424u;
    {
        const bool branch_taken_0x23a424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A424u;
        // 0x23a428: 0x7ba80010  lq          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a424) {
            ctx->pc = 0x23A444u;
            goto label_23a444;
        }
    }
    ctx->pc = 0x23A42Cu;
    // 0x23a42c: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x23A42Cu;
    SET_GPR_U32(ctx, 31, 0x23A434u);
    ctx->pc = 0x23A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A42Cu;
    // 0x23a430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x23A42Cu, 0x23A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A434u;
label_23a434:
    // 0x23a434: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23a434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a43c: 0x1662ffec  bne         $s3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23A43Cu;
    {
        const bool branch_taken_0x23a43c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A43Cu;
        // 0x23a440: 0x7ba80010  lq          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a43c) {
            ctx->pc = 0x23A3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a3f0;
        }
    }
    ctx->pc = 0x23A444u;
label_23a444:
    // 0x23a444: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x23A444u;
    {
        const bool branch_taken_0x23a444 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a444) {
            ctx->pc = 0x23A488u;
            goto label_23a488;
        }
    }
    ctx->pc = 0x23A44Cu;
    // 0x23a44c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x23a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x23a450: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23a454: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x23a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x23a458: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23a45c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23a460: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x23a460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23a464: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x23a464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x23a468: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23a46c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x23a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x23a470: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x23a470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23a474: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23a478: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23a47c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23a480: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23a480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23a484: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x23a484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_23a488:
    // 0x23a488: 0x8f84b784  lw          $a0, -0x487C($gp)
    ctx->pc = 0x23a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x23a48c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x23a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x23a490: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23a494: 0xa6b60008  sh          $s6, 0x8($s5)
    ctx->pc = 0x23a494u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 22));
    // 0x23a498: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23a498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23a49c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A49Cu;
    {
        const bool branch_taken_0x23a49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A49Cu;
        // 0x23a4a0: 0xa6b20010  sh          $s2, 0x10($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a49c) {
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A4A4u;
    // 0x23a4a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A4A4u;
    {
        const bool branch_taken_0x23a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A4u;
        // 0x23a4a8: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4a4) {
            ctx->pc = 0x23A4B0u;
            goto label_23a4b0;
        }
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a4b0:
    // 0x23a4b0: 0x8d034840  lw          $v1, 0x4840($t0)
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18496)));
    // 0x23a4b4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x23a4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4b8: 0xa6a20012  sh          $v0, 0x12($s5)
    ctx->pc = 0x23a4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a4bc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x23a4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a4c4: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x23a4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4c8: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x23a4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23a4cc: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x23A4CCu;
    {
        const bool branch_taken_0x23a4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4CCu;
        // 0x23a4d0: 0xad034840  sw          $v1, 0x4840($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 18496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4cc) {
            ctx->pc = 0x23A350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a350;
        }
    }
    ctx->pc = 0x23A4D4u;
label_23a4d4:
    // 0x23a4d4: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a4d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23a4dc: 0x3442fd66  ori         $v0, $v0, 0xFD66
    ctx->pc = 0x23a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64870);
    // 0x23a4e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a4e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A4FCu;
            goto label_23a4fc;
        }
    }
    ctx->pc = 0x23A4ECu;
    // 0x23a4ec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a4f0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23A4F0u;
    {
        const bool branch_taken_0x23a4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4F0u;
        // 0x23a4f4: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4f0) {
            ctx->pc = 0x23A59Cu;
            goto label_23a59c;
        }
    }
    ctx->pc = 0x23A4F8u;
    // 0x23a4f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23a4fc:
    // 0x23a4fc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x23a500: 0x24454a50  addiu       $a1, $v0, 0x4A50
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
    // 0x23a504: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x23a504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a508: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x23a508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a50c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x23a50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a510: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x23a510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a514: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x23a514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23a518: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x23a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23a51c: 0xb2ac0007  sdl         $t4, 0x7($s5)
    ctx->pc = 0x23a51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a520: 0xb6ac0000  sdr         $t4, 0x0($s5)
    ctx->pc = 0x23a520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a524: 0xb2a3000f  sdl         $v1, 0xF($s5)
    ctx->pc = 0x23a524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a528: 0xb6a30008  sdr         $v1, 0x8($s5)
    ctx->pc = 0x23a528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a52c: 0xb2a40017  sdl         $a0, 0x17($s5)
    ctx->pc = 0x23a52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a530: 0xb6a40010  sdr         $a0, 0x10($s5)
    ctx->pc = 0x23a530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a534: 0x68ac001f  ldl         $t4, 0x1F($a1)
    ctx->pc = 0x23a534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a538: 0x6cac0018  ldr         $t4, 0x18($a1)
    ctx->pc = 0x23a538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a53c: 0xb2ac001f  sdl         $t4, 0x1F($s5)
    ctx->pc = 0x23a53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a540: 0xb6ac0018  sdr         $t4, 0x18($s5)
    ctx->pc = 0x23a540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a544: 0x8d034840  lw          $v1, 0x4840($t0)
    ctx->pc = 0x23a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18496)));
    // 0x23a548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a54c: 0xad034840  sw          $v1, 0x4840($t0)
    ctx->pc = 0x23a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 18496), GPR_U32(ctx, 3));
    // 0x23a550: 0x24c24a70  addiu       $v0, $a2, 0x4A70
    ctx->pc = 0x23a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 19056));
    // 0x23a554: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x23a554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a558: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x23a558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a55c: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x23a55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x23a560: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x23a560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x23a564: 0x684c0017  ldl         $t4, 0x17($v0)
    ctx->pc = 0x23a564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a568: 0x6c4c0010  ldr         $t4, 0x10($v0)
    ctx->pc = 0x23a568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a56c: 0xb2a70027  sdl         $a3, 0x27($s5)
    ctx->pc = 0x23a56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a570: 0xb6a70020  sdr         $a3, 0x20($s5)
    ctx->pc = 0x23a570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a574: 0xb2aa002f  sdl         $t2, 0x2F($s5)
    ctx->pc = 0x23a574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a578: 0xb6aa0028  sdr         $t2, 0x28($s5)
    ctx->pc = 0x23a578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a57c: 0xb2ac0037  sdl         $t4, 0x37($s5)
    ctx->pc = 0x23a57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a580: 0xb6ac0030  sdr         $t4, 0x30($s5)
    ctx->pc = 0x23a580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a584: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x23a584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x23a588: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x23a588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23a58c: 0xb2a7003f  sdl         $a3, 0x3F($s5)
    ctx->pc = 0x23a58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a590: 0xb6a70038  sdr         $a3, 0x38($s5)
    ctx->pc = 0x23a590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a594: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23A594u;
    {
        const bool branch_taken_0x23a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A594u;
        // 0x23a598: 0x8d024840  lw          $v0, 0x4840($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a594) {
            ctx->pc = 0x23A5E4u;
            goto label_23a5e4;
        }
    }
    ctx->pc = 0x23A59Cu;
label_23a59c:
    // 0x23a59c: 0x24674a70  addiu       $a3, $v1, 0x4A70
    ctx->pc = 0x23a59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 19056));
    // 0x23a5a0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x23a5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23a5a4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x23a5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23a5a8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x23a5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x23a5ac: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x23a5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x23a5b0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x23a5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23a5b4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x23a5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23a5b8: 0xb2a40007  sdl         $a0, 0x7($s5)
    ctx->pc = 0x23a5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5bc: 0xb6a40000  sdr         $a0, 0x0($s5)
    ctx->pc = 0x23a5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5c0: 0xb2a5000f  sdl         $a1, 0xF($s5)
    ctx->pc = 0x23a5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5c4: 0xb6a50008  sdr         $a1, 0x8($s5)
    ctx->pc = 0x23a5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5c8: 0xb2a60017  sdl         $a2, 0x17($s5)
    ctx->pc = 0x23a5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5cc: 0xb6a60010  sdr         $a2, 0x10($s5)
    ctx->pc = 0x23a5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5d0: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x23a5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23a5d4: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x23a5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23a5d8: 0xb2a4001f  sdl         $a0, 0x1F($s5)
    ctx->pc = 0x23a5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5dc: 0xb6a40018  sdr         $a0, 0x18($s5)
    ctx->pc = 0x23a5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a5e0: 0x8d024840  lw          $v0, 0x4840($t0)
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18496)));
label_23a5e4:
    // 0x23a5e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a5e8: 0xad024840  sw          $v0, 0x4840($t0)
    ctx->pc = 0x23a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 18496), GPR_U32(ctx, 2));
    // 0x23a5ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23a5f0: 0xa382b788  sb          $v0, -0x4878($gp)
    ctx->pc = 0x23a5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 2));
label_23a5f4:
    // 0x23a5f4: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x23a5f8: 0x254311f8  addiu       $v1, $t2, 0x11F8
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4600));
    // 0x23a5fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23a600: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a604: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23A604u;
    {
        const bool branch_taken_0x23a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a604) {
            ctx->pc = 0x23A650u;
            goto label_23a650;
        }
    }
    ctx->pc = 0x23A60Cu;
    // 0x23a60c: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x23A60Cu;
    SET_GPR_U32(ctx, 31, 0x23A614u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x23A60Cu, 0x23A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A614u;
label_23a614:
    // 0x23a614: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a618: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x23a618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23a61c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A61Cu;
    {
        const bool branch_taken_0x23a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A61Cu;
        // 0x23a620: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a61c) {
            ctx->pc = 0x23A640u;
            goto label_23a640;
        }
    }
    ctx->pc = 0x23A624u;
    // 0x23a624: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23A624u;
    {
        const bool branch_taken_0x23a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A624u;
        // 0x23a628: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a624) {
            ctx->pc = 0x23A664u;
            goto label_23a664;
        }
    }
    ctx->pc = 0x23A62Cu;
    // 0x23a62c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A62Cu;
    {
        const bool branch_taken_0x23a62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A62Cu;
        // 0x23a630: 0x8f82a22c  lw          $v0, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a62c) {
            ctx->pc = 0x23A640u;
            goto label_23a640;
        }
    }
    ctx->pc = 0x23A634u;
    // 0x23a634: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23a638: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23A638u;
    {
        const bool branch_taken_0x23a638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a638) {
            ctx->pc = 0x23A664u;
            goto label_23a664;
        }
    }
    ctx->pc = 0x23A640u;
label_23a640:
    // 0x23a640: 0xc091352  jal         func_244D48
    ctx->pc = 0x23A640u;
    SET_GPR_U32(ctx, 31, 0x23A648u);
    ctx->pc = 0x244D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D48u, 0x23A640u, 0x23A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A648u;
label_23a648:
    // 0x23a648: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x23A648u;
    {
        const bool branch_taken_0x23a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A648u;
        // 0x23a64c: 0x3c080035  lui         $t0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a648) {
            ctx->pc = 0x23AADCu;
            goto label_23aadc;
        }
    }
    ctx->pc = 0x23A650u;
label_23a650:
    // 0x23a650: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23A650u;
    SET_GPR_U32(ctx, 31, 0x23A658u);
    ctx->pc = 0x23A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A650u;
    // 0x23a654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23A650u, 0x23A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A658u;
label_23a658:
    // 0x23a658: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x23a65c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A65Cu;
    {
        const bool branch_taken_0x23a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A65Cu;
        // 0x23a660: 0x8fac0000  lw          $t4, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a65c) {
            ctx->pc = 0x23A674u;
            goto label_23a674;
        }
    }
    ctx->pc = 0x23A664u;
label_23a664:
    // 0x23a664: 0xc094e46  jal         func_253918
    ctx->pc = 0x23A664u;
    SET_GPR_U32(ctx, 31, 0x23A66Cu);
    ctx->pc = 0x253918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253918u, 0x23A664u, 0x23A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A66Cu;
label_23a66c:
    // 0x23a66c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x23A66Cu;
    {
        const bool branch_taken_0x23a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A66Cu;
        // 0x23a670: 0xa380b788  sb          $zero, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a66c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A674u;
label_23a674:
    // 0x23a674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a678: 0x8f82a050  lw          $v0, -0x5FB0($gp)
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a67c: 0x95850004  lhu         $a1, 0x4($t4)
    ctx->pc = 0x23a67cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x23a680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a684: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23a688: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23a688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a68c: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23A68Cu;
    {
        const bool branch_taken_0x23a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A68Cu;
        // 0x23a690: 0xaf82b78c  sw          $v0, -0x4874($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a68c) {
            ctx->pc = 0x23A6F0u;
            goto label_23a6f0;
        }
    }
    ctx->pc = 0x23A694u;
    // 0x23a694: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a698: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23a69c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23a6a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23A6A0u;
    {
        const bool branch_taken_0x23a6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A0u;
        // 0x23a6a4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6a0) {
            ctx->pc = 0x23A6F0u;
            goto label_23a6f0;
        }
    }
    ctx->pc = 0x23A6A8u;
    // 0x23a6a8: 0xc081546  jal         func_205518
    ctx->pc = 0x23A6A8u;
    SET_GPR_U32(ctx, 31, 0x23A6B0u);
    ctx->pc = 0x23A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A6A8u;
    // 0x23a6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23A6A8u, 0x23A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6B0u;
label_23a6b0:
    // 0x23a6b0: 0x8f83a050  lw          $v1, -0x5FB0($gp)
    ctx->pc = 0x23a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a6b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23a6b8: 0x4610022  bgez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x23A6B8u;
    {
        const bool branch_taken_0x23a6b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B8u;
        // 0x23a6bc: 0xaf83a050  sw          $v1, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b8) {
            ctx->pc = 0x23A744u;
            goto label_23a744;
        }
    }
    ctx->pc = 0x23A6C0u;
    // 0x23a6c0: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a6c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23a6c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a6cc: 0x2846000b  slti        $a2, $v0, 0xB
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x23a6d0: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x23a6d4: 0x2844000a  slti        $a0, $v0, 0xA
    ctx->pc = 0x23a6d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23a6d8: 0x46280b  movn        $a1, $v0, $a2
    ctx->pc = 0x23a6d8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x23a6dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a6e0: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x23a6e0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x23a6e4: 0xaf83a050  sw          $v1, -0x5FB0($gp)
    ctx->pc = 0x23a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 3));
    // 0x23a6e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23A6E8u;
    {
        const bool branch_taken_0x23a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E8u;
        // 0x23a6ec: 0xa4450004  sh          $a1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6e8) {
            ctx->pc = 0x23A744u;
            goto label_23a744;
        }
    }
    ctx->pc = 0x23A6F0u;
label_23a6f0:
    // 0x23a6f0: 0x8f82b784  lw          $v0, -0x487C($gp)
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
    // 0x23a6f4: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23A6F4u;
    {
        const bool branch_taken_0x23a6f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6F4u;
        // 0x23a6f8: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6f4) {
            ctx->pc = 0x23A768u;
            goto label_23a768;
        }
    }
    ctx->pc = 0x23A6FCu;
    // 0x23a6fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23a700: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23a704: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23A704u;
    {
        const bool branch_taken_0x23a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A704u;
        // 0x23a708: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a704) {
            ctx->pc = 0x23A768u;
            goto label_23a768;
        }
    }
    ctx->pc = 0x23A70Cu;
    // 0x23a70c: 0xc081546  jal         func_205518
    ctx->pc = 0x23A70Cu;
    SET_GPR_U32(ctx, 31, 0x23A714u);
    ctx->pc = 0x23A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A70Cu;
    // 0x23a710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23A70Cu, 0x23A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A714u;
label_23a714:
    // 0x23a714: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a718: 0x8f83a050  lw          $v1, -0x5FB0($gp)
    ctx->pc = 0x23a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
    // 0x23a71c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a724: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x23a728: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23a728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23a72c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A72Cu;
    {
        const bool branch_taken_0x23a72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A72Cu;
        // 0x23a730: 0xaf83a050  sw          $v1, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a72c) {
            ctx->pc = 0x23A744u;
            goto label_23a744;
        }
    }
    ctx->pc = 0x23A734u;
    // 0x23a734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a73c: 0xaf80a050  sw          $zero, -0x5FB0($gp)
    ctx->pc = 0x23a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 0));
    // 0x23a740: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x23a740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_23a744:
    // 0x23a744: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a748: 0x2404ffc3  addiu       $a0, $zero, -0x3D
    ctx->pc = 0x23a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x23a74c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a750: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x23a754: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23a758: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23a75c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x23a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x23a760: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x23A760u;
    {
        const bool branch_taken_0x23a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A760u;
        // 0x23a764: 0xa385b788  sb          $a1, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a760) {
            ctx->pc = 0x23AADCu;
            goto label_23aadc;
        }
    }
    ctx->pc = 0x23A768u;
label_23a768:
    // 0x23a768: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23A768u;
    SET_GPR_U32(ctx, 31, 0x23A770u);
    ctx->pc = 0x23A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A768u;
    // 0x23a76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23A768u, 0x23A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A770u;
label_23a770:
    // 0x23a770: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A774u;
    {
        const bool branch_taken_0x23a774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A774u;
        // 0x23a778: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a774) {
            ctx->pc = 0x23A794u;
            goto label_23a794;
        }
    }
    ctx->pc = 0x23A77Cu;
    // 0x23a77c: 0xc081546  jal         func_205518
    ctx->pc = 0x23A77Cu;
    SET_GPR_U32(ctx, 31, 0x23A784u);
    ctx->pc = 0x23A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A77Cu;
    // 0x23a780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23A77Cu, 0x23A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A784u;
label_23a784:
    // 0x23a784: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a78c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x23A78Cu;
    {
        const bool branch_taken_0x23a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A78Cu;
        // 0x23a790: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a78c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A794u;
label_23a794:
    // 0x23a794: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23A794u;
    SET_GPR_U32(ctx, 31, 0x23A79Cu);
    ctx->pc = 0x23A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A794u;
    // 0x23a798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23A794u, 0x23A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A79Cu;
label_23a79c:
    // 0x23a79c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23a79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23a7a0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x23A7A0u;
    {
        const bool branch_taken_0x23a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A0u;
        // 0x23a7a4: 0x8f83a22c  lw          $v1, -0x5DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a0) {
            ctx->pc = 0x23A914u;
            goto label_23a914;
        }
    }
    ctx->pc = 0x23A7A8u;
    // 0x23a7a8: 0x8f84b78c  lw          $a0, -0x4874($gp)
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948748)));
    // 0x23a7ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23a7b0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x23a7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23a7b4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x23A7B4u;
    {
        const bool branch_taken_0x23a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B4u;
        // 0x23a7b8: 0x3c080035  lui         $t0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7b4) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A7BCu;
    // 0x23a7bc: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23a7c0: 0x24b011f8  addiu       $s0, $a1, 0x11F8
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x23a7c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23a7c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23a7cc: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x23A7CCu;
    {
        const bool branch_taken_0x23a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a7cc) {
            ctx->pc = 0x23A7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A7CCu;
            // 0x23a7d0: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A850u;
            goto label_23a850;
        }
    }
    ctx->pc = 0x23A7D4u;
    // 0x23a7d4: 0xc094d9e  jal         func_253678
    ctx->pc = 0x23A7D4u;
    SET_GPR_U32(ctx, 31, 0x23A7DCu);
    ctx->pc = 0x253678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253678u, 0x23A7D4u, 0x23A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7DCu;
label_23a7dc:
    // 0x23a7dc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x23A7DCu;
    {
        const bool branch_taken_0x23a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a7dc) {
            ctx->pc = 0x23A7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A7DCu;
            // 0x23a7e0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A838u;
            goto label_23a838;
        }
    }
    ctx->pc = 0x23A7E4u;
    // 0x23a7e4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a7ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x23a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x23a7f0: 0x3c067f3c  lui         $a2, 0x7F3C
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32572 << 16));
    // 0x23a7f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23a7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a7f8: 0x24a51d58  addiu       $a1, $a1, 0x1D58
    ctx->pc = 0x23a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7512));
    // 0x23a7fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23a7fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23a800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a804: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23a804u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a808: 0x34c63c7f  ori         $a2, $a2, 0x3C7F
    ctx->pc = 0x23a808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15487);
    // 0x23a80c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23a80cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a810: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a814: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23a814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a818: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23a818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a81c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23a81cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a820: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23a820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a824: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23a824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a828: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23a828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a82c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x23a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x23a830: 0x808c516  j           func_231458
    ctx->pc = 0x23A830u;
    ctx->pc = 0x23A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A830u;
    // 0x23a834: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    frontStartMessage_0x231458(rdram, ctx, runtime); return;
    ctx->pc = 0x23A838u;
label_23a838:
    // 0x23a838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a83c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a840: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x23a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x23a844: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23a848: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x23A848u;
    {
        const bool branch_taken_0x23a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A848u;
        // 0x23a84c: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a848) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A850u;
label_23a850:
    // 0x23a850: 0x902818  mult        $a1, $a0, $s0
    ctx->pc = 0x23a850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23a854: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x23a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23a858: 0xc094e66  jal         func_253998
    ctx->pc = 0x23A858u;
    SET_GPR_U32(ctx, 31, 0x23A860u);
    ctx->pc = 0x23A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A858u;
    // 0x23a85c: 0x94440030  lhu         $a0, 0x30($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253998u, 0x23A858u, 0x23A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A860u;
label_23a860:
    // 0x23a860: 0x8f85b78c  lw          $a1, -0x4874($gp)
    ctx->pc = 0x23a860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948748)));
    // 0x23a864: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x23a864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x23a868: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23a86c: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x23a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x23a870: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x23a870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23a874: 0x8f88a22c  lw          $t0, -0x5DD4($gp)
    ctx->pc = 0x23a874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x23a878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a87c: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23a880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23a884: 0x24cb3188  addiu       $t3, $a2, 0x3188
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 12680));
    // 0x23a888: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x23a888u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a88c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x23a890: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x23a894: 0x24e71d28  addiu       $a3, $a3, 0x1D28
    ctx->pc = 0x23a894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7464));
    // 0x23a898: 0x24c43188  addiu       $a0, $a2, 0x3188
    ctx->pc = 0x23a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12680));
    // 0x23a89c: 0x68aa0013  ldl         $t2, 0x13($a1)
    ctx->pc = 0x23a89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x23a8a0: 0x6caa000c  ldr         $t2, 0xC($a1)
    ctx->pc = 0x23a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x23a8a4: 0x68ac001b  ldl         $t4, 0x1B($a1)
    ctx->pc = 0x23a8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a8a8: 0x6cac0014  ldr         $t4, 0x14($a1)
    ctx->pc = 0x23a8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a8ac: 0x68a30023  ldl         $v1, 0x23($a1)
    ctx->pc = 0x23a8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23a8b0: 0x6ca3001c  ldr         $v1, 0x1C($a1)
    ctx->pc = 0x23a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23a8b4: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x23a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8b8: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x23a8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8bc: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x23a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8c0: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x23a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8c4: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x23a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8c8: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x23a8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8cc: 0x68aa002b  ldl         $t2, 0x2B($a1)
    ctx->pc = 0x23a8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x23a8d0: 0x6caa0024  ldr         $t2, 0x24($a1)
    ctx->pc = 0x23a8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x23a8d4: 0x68ac0033  ldl         $t4, 0x33($a1)
    ctx->pc = 0x23a8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x23a8d8: 0x6cac002c  ldr         $t4, 0x2C($a1)
    ctx->pc = 0x23a8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x23a8dc: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x23a8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8e0: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x23a8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8e4: 0xb08c0027  sdl         $t4, 0x27($a0)
    ctx->pc = 0x23a8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8e8: 0xb48c0020  sdr         $t4, 0x20($a0)
    ctx->pc = 0x23a8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23a8ec: 0x8f88a0d0  lw          $t0, -0x5F30($gp)
    ctx->pc = 0x23a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23a8f0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23a8f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a8f4: 0x8d250760  lw          $a1, 0x760($t1)
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1888)));
    // 0x23a8f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8fc: 0x95690026  lhu         $t1, 0x26($t3)
    ctx->pc = 0x23a8fcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x1FC31AEu));
    // 0x23a900: 0xc0912ca  jal         func_244B28
    ctx->pc = 0x23A900u;
    SET_GPR_U32(ctx, 31, 0x23A908u);
    ctx->pc = 0x23A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A900u;
    // 0x23a904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B28u, 0x23A900u, 0x23A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A908u;
label_23a908:
    // 0x23a908: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a90c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x23A90Cu;
    {
        const bool branch_taken_0x23a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A90Cu;
        // 0x23a910: 0xa382b788  sb          $v0, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a90c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23A914u;
label_23a914:
    // 0x23a914: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23a914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_23a918:
    // 0x23a918: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a91c: 0x25054840  addiu       $a1, $t0, 0x4840
    ctx->pc = 0x23a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 18496));
    // 0x23a920: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23A920u;
    SET_GPR_U32(ctx, 31, 0x23A928u);
    ctx->pc = 0x23A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A920u;
    // 0x23a924: 0x7fa80010  sq          $t0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23A920u, 0x23A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A928u;
label_23a928:
    // 0x23a928: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x23A928u;
    {
        const bool branch_taken_0x23a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A928u;
        // 0x23a92c: 0x7ba80010  lq          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a928) {
            ctx->pc = 0x23AADCu;
            goto label_23aadc;
        }
    }
    ctx->pc = 0x23A930u;
label_23a930:
    // 0x23a930: 0xc0912a4  jal         func_244A90
    ctx->pc = 0x23A930u;
    SET_GPR_U32(ctx, 31, 0x23A938u);
    ctx->pc = 0x244A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A90u, 0x23A930u, 0x23A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A938u;
label_23a938:
    // 0x23a938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a940: 0x16020066  bne         $s0, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x23A940u;
    {
        const bool branch_taken_0x23a940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A940u;
        // 0x23a944: 0x3c080035  lui         $t0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a940) {
            ctx->pc = 0x23AADCu;
            goto label_23aadc;
        }
    }
    ctx->pc = 0x23A948u;
    // 0x23a948: 0xc091298  jal         func_244A60
    ctx->pc = 0x23A948u;
    SET_GPR_U32(ctx, 31, 0x23A950u);
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x23A948u, 0x23A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A950u;
label_23a950:
    // 0x23a950: 0xc0912a2  jal         func_244A88
    ctx->pc = 0x23A950u;
    SET_GPR_U32(ctx, 31, 0x23A958u);
    ctx->pc = 0x244A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A88u, 0x23A950u, 0x23A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A958u;
label_23a958:
    // 0x23a958: 0x1450004a  bne         $v0, $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x23A958u;
    {
        const bool branch_taken_0x23a958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A958u;
        // 0x23a95c: 0x8f83a0d0  lw          $v1, -0x5F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a958) {
            ctx->pc = 0x23AA84u;
            goto label_23aa84;
        }
    }
    ctx->pc = 0x23A960u;
    // 0x23a960: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23a960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23a964: 0x944531ae  lhu         $a1, 0x31AE($v0)
    ctx->pc = 0x23a964u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x1FC31AEu));
    // 0x23a968: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23a968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a96c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23a970: 0x8c66fffc  lw          $a2, -0x4($v1)
    ctx->pc = 0x23a970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x23a974: 0xc0acf54  jal         func_2B3D50
    ctx->pc = 0x23A974u;
    SET_GPR_U32(ctx, 31, 0x23A97Cu);
    ctx->pc = 0x23A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A974u;
    // 0x23a978: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D50u, 0x23A974u, 0x23A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A97Cu;
label_23a97c:
    // 0x23a97c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23A97Cu;
    {
        const bool branch_taken_0x23a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A97Cu;
        // 0x23a980: 0x8f84a0d0  lw          $a0, -0x5F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a97c) {
            ctx->pc = 0x23A9F0u;
            goto label_23a9f0;
        }
    }
    ctx->pc = 0x23A984u;
    // 0x23a984: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x23a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x23a988: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23a988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23a98c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23a990: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x23a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x23a994: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23a994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23a998: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x23a998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x23a99c: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x23a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x23a9a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9a4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23a9a8: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x23a9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x23a9ac: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a9b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a9b8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23a9b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23a9bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23a9c0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23a9c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a9c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a9c8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23a9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a9cc: 0x8c6503c8  lw          $a1, 0x3C8($v1)
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x23a9d0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23a9d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a9d4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23a9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a9d8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23a9d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a9dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a9e0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23a9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a9e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23a9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a9e8: 0x808c516  j           func_231458
    ctx->pc = 0x23A9E8u;
    ctx->pc = 0x23A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9E8u;
    // 0x23a9ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    frontStartMessage_0x231458(rdram, ctx, runtime); return;
    ctx->pc = 0x23A9F0u;
label_23a9f0:
    // 0x23a9f0: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x23a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x23a9f4: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x23a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x23a9f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a9fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A9FCu;
    {
        const bool branch_taken_0x23a9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9FCu;
        // 0x23aa00: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9fc) {
            ctx->pc = 0x23AA14u;
            goto label_23aa14;
        }
    }
    ctx->pc = 0x23AA04u;
    // 0x23aa04: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23aa08: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x23aa0c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23AA0Cu;
    {
        const bool branch_taken_0x23aa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA0Cu;
        // 0x23aa10: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa0c) {
            ctx->pc = 0x23AA64u;
            goto label_23aa64;
        }
    }
    ctx->pc = 0x23AA14u;
label_23aa14:
    // 0x23aa14: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x23aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x23aa18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23aa1c: 0x3c067f3c  lui         $a2, 0x7F3C
    ctx->pc = 0x23aa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32572 << 16));
    // 0x23aa20: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x23aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x23aa24: 0x24a51d58  addiu       $a1, $a1, 0x1D58
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7512));
    // 0x23aa28: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23aa2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa30: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23aa30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23aa34: 0x34c63c7f  ori         $a2, $a2, 0x3C7F
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15487);
    // 0x23aa38: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23aa38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23aa3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23aa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa40: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23aa40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23aa44: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23aa44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23aa48: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23aa48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23aa4c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23aa4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23aa50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23aa50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23aa54: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23aa54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23aa58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23aa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aa5c: 0x808c516  j           func_231458
    ctx->pc = 0x23AA5Cu;
    ctx->pc = 0x23AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA5Cu;
    // 0x23aa60: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    frontStartMessage_0x231458(rdram, ctx, runtime); return;
    ctx->pc = 0x23AA64u;
label_23aa64:
    // 0x23aa64: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23aa68: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23aa6c: 0x246311f8  addiu       $v1, $v1, 0x11F8
    ctx->pc = 0x23aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x23aa70: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x23aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x23aa74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23aa78: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x23aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x23aa7c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23AA7Cu;
    {
        const bool branch_taken_0x23aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA7Cu;
        // 0x23aa80: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa7c) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23AA84u;
label_23aa84:
    // 0x23aa84: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23aa88: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23aa8c: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x23aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x23aa90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23aa94: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23aa94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x23aa98: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x23aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x23aa9c: 0x3c066464  lui         $a2, 0x6464
    ctx->pc = 0x23aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25700 << 16));
    // 0x23aaa0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23aaa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23aaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aaa8: 0x34c6647f  ori         $a2, $a2, 0x647F
    ctx->pc = 0x23aaa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25727);
    // 0x23aaac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23aaacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23aab4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23aab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23aabc: 0x8c6503cc  lw          $a1, 0x3CC($v1)
    ctx->pc = 0x23aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 972)));
    // 0x23aac0: 0xc08c516  jal         func_231458
    ctx->pc = 0x23AAC0u;
    SET_GPR_U32(ctx, 31, 0x23AAC8u);
    ctx->pc = 0x23AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAC0u;
    // 0x23aac4: 0x7fa80010  sq          $t0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231458u, 0x23AAC0u, 0x23AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAC8u;
label_23aac8:
    // 0x23aac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23aacc: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x23aaccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23AAD0u;
    {
        const bool branch_taken_0x23aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAD0u;
        // 0x23aad4: 0xa382b788  sb          $v0, -0x4878($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aad0) {
            ctx->pc = 0x23AADCu;
            goto label_23aadc;
        }
    }
    ctx->pc = 0x23AAD8u;
label_23aad8:
    // 0x23aad8: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23aad8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_23aadc:
    // 0x23aadc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x23aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aae0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x23aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23aae4: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23AAE4u;
    SET_GPR_U32(ctx, 31, 0x23AAECu);
    ctx->pc = 0x23AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAE4u;
    // 0x23aae8: 0x25054840  addiu       $a1, $t0, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23AAE4u, 0x23AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAECu;
label_23aaec:
    // 0x23aaec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aaf0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x23aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_23aaf4:
    // 0x23aaf4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23aaf8:
    // 0x23aaf8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23aaf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23aafc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23aafcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23ab00: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23ab00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23ab04: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x23ab04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23ab08: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23ab08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23ab0c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23ab0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ab10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23ab10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ab14: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x23ab14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ab18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23ab18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB1Cu;
        // 0x23ab20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB24u;
}
