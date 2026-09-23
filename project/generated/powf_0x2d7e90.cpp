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

// Function: powf
// Address: 0x2d7e90 - 0x2d8398
void powf_0x2d7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("powf_0x2d7e90");
#endif

    switch (ctx->pc) {
        case 0x2d7ec8u: goto label_2d7ec8;
        case 0x2d7ee0u: goto label_2d7ee0;
        case 0x2d7ef0u: goto label_2d7ef0;
        case 0x2d7f28u: goto label_2d7f28;
        case 0x2d7f34u: goto label_2d7f34;
        case 0x2d7f40u: goto label_2d7f40;
        case 0x2d7f50u: goto label_2d7f50;
        case 0x2d7f68u: goto label_2d7f68;
        case 0x2d7f78u: goto label_2d7f78;
        case 0x2d7fbcu: goto label_2d7fbc;
        case 0x2d7fc8u: goto label_2d7fc8;
        case 0x2d7fe0u: goto label_2d7fe0;
        case 0x2d7ff0u: goto label_2d7ff0;
        case 0x2d8000u: goto label_2d8000;
        case 0x2d8034u: goto label_2d8034;
        case 0x2d8040u: goto label_2d8040;
        case 0x2d8064u: goto label_2d8064;
        case 0x2d8080u: goto label_2d8080;
        case 0x2d8090u: goto label_2d8090;
        case 0x2d80a0u: goto label_2d80a0;
        case 0x2d80b0u: goto label_2d80b0;
        case 0x2d80c0u: goto label_2d80c0;
        case 0x2d80d0u: goto label_2d80d0;
        case 0x2d80f4u: goto label_2d80f4;
        case 0x2d8100u: goto label_2d8100;
        case 0x2d8138u: goto label_2d8138;
        case 0x2d8148u: goto label_2d8148;
        case 0x2d816cu: goto label_2d816c;
        case 0x2d8178u: goto label_2d8178;
        case 0x2d8194u: goto label_2d8194;
        case 0x2d81a4u: goto label_2d81a4;
        case 0x2d81acu: goto label_2d81ac;
        case 0x2d81b8u: goto label_2d81b8;
        case 0x2d81c4u: goto label_2d81c4;
        case 0x2d81d4u: goto label_2d81d4;
        case 0x2d81dcu: goto label_2d81dc;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d81f4u: goto label_2d81f4;
        case 0x2d8224u: goto label_2d8224;
        case 0x2d8234u: goto label_2d8234;
        case 0x2d823cu: goto label_2d823c;
        case 0x2d8248u: goto label_2d8248;
        case 0x2d8254u: goto label_2d8254;
        case 0x2d8264u: goto label_2d8264;
        case 0x2d826cu: goto label_2d826c;
        case 0x2d8278u: goto label_2d8278;
        case 0x2d8284u: goto label_2d8284;
        case 0x2d8294u: goto label_2d8294;
        case 0x2d82c0u: goto label_2d82c0;
        case 0x2d82d0u: goto label_2d82d0;
        case 0x2d82f4u: goto label_2d82f4;
        case 0x2d8300u: goto label_2d8300;
        case 0x2d8324u: goto label_2d8324;
        case 0x2d8334u: goto label_2d8334;
        case 0x2d8350u: goto label_2d8350;
        case 0x2d8360u: goto label_2d8360;
        default: break;
    }

    ctx->pc = 0x2d7e90u;

    // 0x2d7e90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d7e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d7e94: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x2d7e94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d7e98: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2d7e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d7e9c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2d7e9cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2d7ea0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2d7ea0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2d7ea4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2d7ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2d7ea8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7eac: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2d7eacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d7eb0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d7eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d7eb4: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2d7eb8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d7ebc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d7ec0: 0xc0b68b4  jal         func_2DA2D0
    ctx->pc = 0x2D7EC0u;
    SET_GPR_U32(ctx, 31, 0x2D7EC8u);
    ctx->pc = 0x2D7EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EC0u;
    // 0x2d7ec4: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x2D7EC0u, 0x2D7EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EC8u;
label_2d7ec8:
    // 0x2d7ec8: 0x8e70b118  lw          $s0, -0x4EE8($s3)
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
    // 0x2d7ecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7ed0: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x2D7ED0u;
    {
        const bool branch_taken_0x2d7ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7ED0u;
        // 0x2d7ed4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ed0) {
            ctx->pc = 0x2D8368u;
            goto label_2d8368;
        }
    }
    ctx->pc = 0x2D7ED8u;
    // 0x2d7ed8: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7ED8u;
    SET_GPR_U32(ctx, 31, 0x2D7EE0u);
    ctx->pc = 0x2D7EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7ED8u;
    // 0x2d7edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7ED8u, 0x2D7EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EE0u;
label_2d7ee0:
    // 0x2d7ee0: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2D7EE0u;
    {
        const bool branch_taken_0x2d7ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EE0u;
        // 0x2d7ee4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ee0) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D7EE8u;
    // 0x2d7ee8: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D7EE8u;
    SET_GPR_U32(ctx, 31, 0x2D7EF0u);
    ctx->pc = 0x2D7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EE8u;
    // 0x2d7eec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D7EE8u, 0x2D7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EF0u;
label_2d7ef0:
    // 0x2d7ef0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7EF0u;
    {
        const bool branch_taken_0x2d7ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ef0) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7EF8u;
    // 0x2d7ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7efc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2d7efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7f00: 0x0  nop
    ctx->pc = 0x2d7f00u;
    // NOP
    // 0x2d7f04: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x2D7F04u;
    {
        const bool branch_taken_0x2d7f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F04u;
        // 0x2d7f08: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f04) {
            ctx->pc = 0x2D8368u;
            goto label_2d8368;
        }
    }
    ctx->pc = 0x2D7F0Cu;
    // 0x2d7f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7f10: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d7f14: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7f18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7f1c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d7f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d7f20: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7F20u;
    SET_GPR_U32(ctx, 31, 0x2D7F28u);
    ctx->pc = 0x2D7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F20u;
    // 0x2d7f24: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7F20u, 0x2D7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F28u;
label_2d7f28:
    // 0x2d7f28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d7f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d7f2c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F34u);
    ctx->pc = 0x2D7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F2Cu;
    // 0x2d7f30: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7F2Cu, 0x2D7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F34u;
label_2d7f34:
    // 0x2d7f34: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d7f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d7f38: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7F38u;
    SET_GPR_U32(ctx, 31, 0x2D7F40u);
    ctx->pc = 0x2D7F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F38u;
    // 0x2d7f3c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7F38u, 0x2D7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F40u;
label_2d7f40:
    // 0x2d7f40: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d7f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2d7f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7f48: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7F48u;
    {
        const bool branch_taken_0x2d7f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7f48) {
            ctx->pc = 0x2D7F60u;
            goto label_2d7f60;
        }
    }
    ctx->pc = 0x2D7F50u;
label_2d7f50:
    // 0x2d7f50: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x2d7f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d7f54: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x2d7f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2d7f58: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2D7F58u;
    {
        const bool branch_taken_0x2d7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F58u;
        // 0x2d7f5c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f58) {
            ctx->pc = 0x2D833Cu;
            goto label_2d833c;
        }
    }
    ctx->pc = 0x2D7F60u;
label_2d7f60:
    // 0x2d7f60: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7F60u;
    SET_GPR_U32(ctx, 31, 0x2D7F68u);
    ctx->pc = 0x2D7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F60u;
    // 0x2d7f64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7F60u, 0x2D7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F68u;
label_2d7f68:
    // 0x2d7f68: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2D7F68u;
    {
        const bool branch_taken_0x2d7f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F68u;
        // 0x2d7f6c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f68) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D7F70u;
    // 0x2d7f70: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7F70u;
    SET_GPR_U32(ctx, 31, 0x2D7F78u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7F70u, 0x2D7F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F78u;
label_2d7f78:
    // 0x2d7f78: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2D7F78u;
    {
        const bool branch_taken_0x2d7f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F78u;
        // 0x2d7f7c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f78) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D7F80u;
label_2d7f80:
    // 0x2d7f80: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2d7f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d7f84: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x2d7f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7f88: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x2D7F88u;
    {
        const bool branch_taken_0x2d7f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7f88) {
            ctx->pc = 0x2D8098u;
            goto label_2d8098;
        }
    }
    ctx->pc = 0x2D7F90u;
    // 0x2d7f90: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x2d7f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7f94: 0x0  nop
    ctx->pc = 0x2d7f94u;
    // NOP
    // 0x2d7f98: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2D7F98u;
    {
        const bool branch_taken_0x2d7f98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F98u;
        // 0x2d7f9c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f98) {
            ctx->pc = 0x2D7FF8u;
            goto label_2d7ff8;
        }
    }
    ctx->pc = 0x2D7FA0u;
    // 0x2d7fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fa4: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d7fa8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7fac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7fb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d7fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d7fb4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7FB4u;
    SET_GPR_U32(ctx, 31, 0x2D7FBCu);
    ctx->pc = 0x2D7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FB4u;
    // 0x2d7fb8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7FB4u, 0x2D7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FBCu;
label_2d7fbc:
    // 0x2d7fbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d7fbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d7fc0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D7FC0u;
    SET_GPR_U32(ctx, 31, 0x2D7FC8u);
    ctx->pc = 0x2D7FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FC0u;
    // 0x2d7fc4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D7FC0u, 0x2D7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FC8u;
label_2d7fc8:
    // 0x2d7fc8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d7fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fd0: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2D7FD0u;
    {
        const bool branch_taken_0x2d7fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FD0u;
        // 0x2d7fd4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fd0) {
            ctx->pc = 0x2D7F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7f50;
        }
    }
    ctx->pc = 0x2D7FD8u;
    // 0x2d7fd8: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7FD8u;
    SET_GPR_U32(ctx, 31, 0x2D7FE0u);
    ctx->pc = 0x2D7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FD8u;
    // 0x2d7fdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7FD8u, 0x2D7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FE0u;
label_2d7fe0:
    // 0x2d7fe0: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x2D7FE0u;
    {
        const bool branch_taken_0x2d7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FE0u;
        // 0x2d7fe4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fe0) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D7FE8u;
    // 0x2d7fe8: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7FE8u;
    SET_GPR_U32(ctx, 31, 0x2D7FF0u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7FE8u, 0x2D7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FF0u;
label_2d7ff0:
    // 0x2d7ff0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2D7FF0u;
    {
        const bool branch_taken_0x2d7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FF0u;
        // 0x2d7ff4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ff0) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D7FF8u;
label_2d7ff8:
    // 0x2d7ff8: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D7FF8u;
    SET_GPR_U32(ctx, 31, 0x2D8000u);
    ctx->pc = 0x2D7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FF8u;
    // 0x2d7ffc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D7FF8u, 0x2D8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8000u;
label_2d8000:
    // 0x2d8000: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2D8000u;
    {
        const bool branch_taken_0x2d8000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8000u;
        // 0x2d8004: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8000) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D8008u;
    // 0x2d8008: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2d8008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d800c: 0x0  nop
    ctx->pc = 0x2d800cu;
    // NOP
    // 0x2d8010: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x2D8010u;
    {
        const bool branch_taken_0x2d8010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8010u;
        // 0x2d8014: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8010) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D8018u;
    // 0x2d8018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d801c: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d8020: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d8020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d8024: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d8024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d8028: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d8028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d802c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D802Cu;
    SET_GPR_U32(ctx, 31, 0x2D8034u);
    ctx->pc = 0x2D8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D802Cu;
    // 0x2d8030: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D802Cu, 0x2D8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8034u;
label_2d8034:
    // 0x2d8034: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8034u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8038: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8038u;
    SET_GPR_U32(ctx, 31, 0x2D8040u);
    ctx->pc = 0x2D803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8038u;
    // 0x2d803c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8038u, 0x2D8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8040u;
label_2d8040:
    // 0x2d8040: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8040u;
    {
        const bool branch_taken_0x2d8040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8040u;
        // 0x2d8044: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8040) {
            ctx->pc = 0x2D8054u;
            goto label_2d8054;
        }
    }
    ctx->pc = 0x2D8048u;
    // 0x2d8048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d804c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D804Cu;
    {
        const bool branch_taken_0x2d804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D804Cu;
        // 0x2d8050: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d804c) {
            ctx->pc = 0x2D8068u;
            goto label_2d8068;
        }
    }
    ctx->pc = 0x2D8054u;
label_2d8054:
    // 0x2d8054: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d8058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d805c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D805Cu;
    SET_GPR_U32(ctx, 31, 0x2D8064u);
    ctx->pc = 0x2D8060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D805Cu;
    // 0x2d8060: 0xdc45b110  ld          $a1, -0x4EF0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294947088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D805Cu, 0x2D8064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8064u;
label_2d8064:
    // 0x2d8064: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d8064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2d8068:
    // 0x2d8068: 0x8e63b118  lw          $v1, -0x4EE8($s3)
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
    // 0x2d806c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8070: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8070u;
    {
        const bool branch_taken_0x2d8070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8070) {
            ctx->pc = 0x2D8088u;
            goto label_2d8088;
        }
    }
    ctx->pc = 0x2D8078u;
    // 0x2d8078: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D8078u;
    SET_GPR_U32(ctx, 31, 0x2D8080u);
    ctx->pc = 0x2D807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8078u;
    // 0x2d807c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D8078u, 0x2D8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8080u;
label_2d8080:
    // 0x2d8080: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2D8080u;
    {
        const bool branch_taken_0x2d8080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8080u;
        // 0x2d8084: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8080) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D8088u;
label_2d8088:
    // 0x2d8088: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D8088u;
    SET_GPR_U32(ctx, 31, 0x2D8090u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D8088u, 0x2D8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8090u;
label_2d8090:
    // 0x2d8090: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2D8090u;
    {
        const bool branch_taken_0x2d8090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8090u;
        // 0x2d8094: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8090) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D8098u;
label_2d8098:
    // 0x2d8098: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D8098u;
    SET_GPR_U32(ctx, 31, 0x2D80A0u);
    ctx->pc = 0x2D809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8098u;
    // 0x2d809c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D8098u, 0x2D80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80A0u;
label_2d80a0:
    // 0x2d80a0: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2D80A0u;
    {
        const bool branch_taken_0x2d80a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d80a0) {
            ctx->pc = 0x2D82A4u;
            goto label_2d82a4;
        }
    }
    ctx->pc = 0x2D80A8u;
    // 0x2d80a8: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D80A8u;
    SET_GPR_U32(ctx, 31, 0x2D80B0u);
    ctx->pc = 0x2D80ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80A8u;
    // 0x2d80ac: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D80A8u, 0x2D80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80B0u;
label_2d80b0:
    // 0x2d80b0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2D80B0u;
    {
        const bool branch_taken_0x2d80b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d80b0) {
            ctx->pc = 0x2D82A4u;
            goto label_2d82a4;
        }
    }
    ctx->pc = 0x2D80B8u;
    // 0x2d80b8: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D80B8u;
    SET_GPR_U32(ctx, 31, 0x2D80C0u);
    ctx->pc = 0x2D80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80B8u;
    // 0x2d80bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D80B8u, 0x2D80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80C0u;
label_2d80c0:
    // 0x2d80c0: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D80C0u;
    {
        const bool branch_taken_0x2d80c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d80c0) {
            ctx->pc = 0x2D82A4u;
            goto label_2d82a4;
        }
    }
    ctx->pc = 0x2D80C8u;
    // 0x2d80c8: 0xc0b717a  jal         func_2DC5E8
    ctx->pc = 0x2D80C8u;
    SET_GPR_U32(ctx, 31, 0x2D80D0u);
    ctx->pc = 0x2D80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80C8u;
    // 0x2d80cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E8u, 0x2D80C8u, 0x2D80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80D0u;
label_2d80d0:
    // 0x2d80d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D80D0u;
    {
        const bool branch_taken_0x2d80d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80D0u;
        // 0x2d80d4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80d0) {
            ctx->pc = 0x2D8150u;
            goto label_2d8150;
        }
    }
    ctx->pc = 0x2D80D8u;
    // 0x2d80d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d80dc: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d80e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d80e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d80e8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d80e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d80ec: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D80ECu;
    SET_GPR_U32(ctx, 31, 0x2D80F4u);
    ctx->pc = 0x2D80F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80ECu;
    // 0x2d80f0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D80ECu, 0x2D80F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80F4u;
label_2d80f4:
    // 0x2d80f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d80f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d80f8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D80F8u;
    SET_GPR_U32(ctx, 31, 0x2D8100u);
    ctx->pc = 0x2D80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80F8u;
    // 0x2d80fc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D80F8u, 0x2D8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8100u;
label_2d8100:
    // 0x2d8100: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8100u;
    {
        const bool branch_taken_0x2d8100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8100u;
        // 0x2d8104: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8100) {
            ctx->pc = 0x2D8114u;
            goto label_2d8114;
        }
    }
    ctx->pc = 0x2D8108u;
    // 0x2d8108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d810c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D810Cu;
    {
        const bool branch_taken_0x2d810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D810Cu;
        // 0x2d8110: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d810c) {
            ctx->pc = 0x2D8120u;
            goto label_2d8120;
        }
    }
    ctx->pc = 0x2D8114u;
label_2d8114:
    // 0x2d8114: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d8114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d8118: 0xdc43a8a8  ld          $v1, -0x5758($v0)
    ctx->pc = 0x2d8118u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AA8A8u));
    // 0x2d811c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2d8120:
    // 0x2d8120: 0x8e63b118  lw          $v1, -0x4EE8($s3)
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
    // 0x2d8124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8128: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8128u;
    {
        const bool branch_taken_0x2d8128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8128) {
            ctx->pc = 0x2D8140u;
            goto label_2d8140;
        }
    }
    ctx->pc = 0x2D8130u;
    // 0x2d8130: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D8130u;
    SET_GPR_U32(ctx, 31, 0x2D8138u);
    ctx->pc = 0x2D8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8130u;
    // 0x2d8134: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D8130u, 0x2D8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8138u;
label_2d8138:
    // 0x2d8138: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2D8138u;
    {
        const bool branch_taken_0x2d8138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8138u;
        // 0x2d813c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8138) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D8140u;
label_2d8140:
    // 0x2d8140: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D8140u;
    SET_GPR_U32(ctx, 31, 0x2D8148u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D8140u, 0x2D8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8148u;
label_2d8148:
    // 0x2d8148: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2D8148u;
    {
        const bool branch_taken_0x2d8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8148u;
        // 0x2d814c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8148) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D8150u;
label_2d8150:
    // 0x2d8150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8154: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d8158: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d8158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d815c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d8160: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d8160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d8164: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8164u;
    SET_GPR_U32(ctx, 31, 0x2D816Cu);
    ctx->pc = 0x2D8168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8164u;
    // 0x2d8168: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8164u, 0x2D816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D816Cu;
label_2d816c:
    // 0x2d816c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d816cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8170: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8170u;
    SET_GPR_U32(ctx, 31, 0x2D8178u);
    ctx->pc = 0x2D8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8170u;
    // 0x2d8174: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8170u, 0x2D8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8178u;
label_2d8178:
    // 0x2d8178: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8178u;
    {
        const bool branch_taken_0x2d8178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8178u;
        // 0x2d817c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8178) {
            ctx->pc = 0x2D820Cu;
            goto label_2d820c;
        }
    }
    ctx->pc = 0x2D8180u;
    // 0x2d8180: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8184: 0xdc22a8b0  ld          $v0, -0x5750($at)
    ctx->pc = 0x2d8184u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA8B0u));
    // 0x2d8188: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d818c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D818Cu;
    SET_GPR_U32(ctx, 31, 0x2D8194u);
    ctx->pc = 0x2D8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D818Cu;
    // 0x2d8190: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D818Cu, 0x2D8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8194u;
label_2d8194:
    // 0x2d8194: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2d8194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2d8198: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d8198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d819c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D819Cu;
    SET_GPR_U32(ctx, 31, 0x2D81A4u);
    ctx->pc = 0x2D81A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D819Cu;
    // 0x2d81a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D819Cu, 0x2D81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81A4u;
label_2d81a4:
    // 0x2d81a4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D81A4u;
    SET_GPR_U32(ctx, 31, 0x2D81ACu);
    ctx->pc = 0x2D81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81A4u;
    // 0x2d81a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D81A4u, 0x2D81ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81ACu;
label_2d81ac:
    // 0x2d81ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d81acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d81b0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D81B0u;
    SET_GPR_U32(ctx, 31, 0x2D81B8u);
    ctx->pc = 0x2D81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81B0u;
    // 0x2d81b4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D81B0u, 0x2D81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81B8u;
label_2d81b8:
    // 0x2d81b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d81b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81bc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D81BCu;
    SET_GPR_U32(ctx, 31, 0x2D81C4u);
    ctx->pc = 0x2D81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81BCu;
    // 0x2d81c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D81BCu, 0x2D81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81C4u;
label_2d81c4:
    // 0x2d81c4: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D81C4u;
    {
        const bool branch_taken_0x2d81c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81C4u;
        // 0x2d81c8: 0x8e63b118  lw          $v1, -0x4EE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81c4) {
            ctx->pc = 0x2D829Cu;
            goto label_2d829c;
        }
    }
    ctx->pc = 0x2D81CCu;
    // 0x2d81cc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D81CCu;
    SET_GPR_U32(ctx, 31, 0x2D81D4u);
    ctx->pc = 0x2D81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81CCu;
    // 0x2d81d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D81CCu, 0x2D81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81D4u;
label_2d81d4:
    // 0x2d81d4: 0xc0b6fd0  jal         func_2DBF40
    ctx->pc = 0x2D81D4u;
    SET_GPR_U32(ctx, 31, 0x2D81DCu);
    ctx->pc = 0x2D81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81D4u;
    // 0x2d81d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF40u, 0x2D81D4u, 0x2D81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81DCu;
label_2d81dc:
    // 0x2d81dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d81dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81e0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D81E0u;
    SET_GPR_U32(ctx, 31, 0x2D81E8u);
    ctx->pc = 0x2D81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81E0u;
    // 0x2d81e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D81E0u, 0x2D81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81E8u;
label_2d81e8:
    // 0x2d81e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d81e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81ec: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D81ECu;
    SET_GPR_U32(ctx, 31, 0x2D81F4u);
    ctx->pc = 0x2D81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81ECu;
    // 0x2d81f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D81ECu, 0x2D81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81F4u;
label_2d81f4:
    // 0x2d81f4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D81F4u;
    {
        const bool branch_taken_0x2d81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81F4u;
        // 0x2d81f8: 0x8e63b118  lw          $v1, -0x4EE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81f4) {
            ctx->pc = 0x2D829Cu;
            goto label_2d829c;
        }
    }
    ctx->pc = 0x2D81FCu;
    // 0x2d81fc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8200: 0xdc22a8b8  ld          $v0, -0x5748($at)
    ctx->pc = 0x2d8200u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA8B8u));
    // 0x2d8204: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8204u;
    {
        const bool branch_taken_0x2d8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8204u;
        // 0x2d8208: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8204) {
            ctx->pc = 0x2D829Cu;
            goto label_2d829c;
        }
    }
    ctx->pc = 0x2D820Cu;
label_2d820c:
    // 0x2d820c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d8210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8214: 0xdc51b110  ld          $s1, -0x4EF0($v0)
    ctx->pc = 0x2d8214u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x3AB110u));
    // 0x2d8218: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d8218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d821c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D821Cu;
    SET_GPR_U32(ctx, 31, 0x2D8224u);
    ctx->pc = 0x2D8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D821Cu;
    // 0x2d8220: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D821Cu, 0x2D8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8224u;
label_2d8224:
    // 0x2d8224: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2d8224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2d8228: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d8228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d822c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D822Cu;
    SET_GPR_U32(ctx, 31, 0x2D8234u);
    ctx->pc = 0x2D8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D822Cu;
    // 0x2d8230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D822Cu, 0x2D8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8234u;
label_2d8234:
    // 0x2d8234: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D8234u;
    SET_GPR_U32(ctx, 31, 0x2D823Cu);
    ctx->pc = 0x2D8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8234u;
    // 0x2d8238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D8234u, 0x2D823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D823Cu;
label_2d823c:
    // 0x2d823c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d823cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d8240: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8240u;
    SET_GPR_U32(ctx, 31, 0x2D8248u);
    ctx->pc = 0x2D8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8240u;
    // 0x2d8244: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8240u, 0x2D8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8248u;
label_2d8248:
    // 0x2d8248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d824c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D824Cu;
    SET_GPR_U32(ctx, 31, 0x2D8254u);
    ctx->pc = 0x2D8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D824Cu;
    // 0x2d8250: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D824Cu, 0x2D8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8254u;
label_2d8254:
    // 0x2d8254: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8254u;
    {
        const bool branch_taken_0x2d8254 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8254u;
        // 0x2d8258: 0x8e63b118  lw          $v1, -0x4EE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8254) {
            ctx->pc = 0x2D829Cu;
            goto label_2d829c;
        }
    }
    ctx->pc = 0x2D825Cu;
    // 0x2d825c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D825Cu;
    SET_GPR_U32(ctx, 31, 0x2D8264u);
    ctx->pc = 0x2D8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D825Cu;
    // 0x2d8260: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D825Cu, 0x2D8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8264u;
label_2d8264:
    // 0x2d8264: 0xc0b6fd0  jal         func_2DBF40
    ctx->pc = 0x2D8264u;
    SET_GPR_U32(ctx, 31, 0x2D826Cu);
    ctx->pc = 0x2D8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8264u;
    // 0x2d8268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF40u, 0x2D8264u, 0x2D826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D826Cu;
label_2d826c:
    // 0x2d826c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d826cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8270: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D8270u;
    SET_GPR_U32(ctx, 31, 0x2D8278u);
    ctx->pc = 0x2D8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8270u;
    // 0x2d8274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D8270u, 0x2D8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8278u;
label_2d8278:
    // 0x2d8278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d827c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D827Cu;
    SET_GPR_U32(ctx, 31, 0x2D8284u);
    ctx->pc = 0x2D8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D827Cu;
    // 0x2d8280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D827Cu, 0x2D8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8284u;
label_2d8284:
    // 0x2d8284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8284u;
    {
        const bool branch_taken_0x2d8284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8284u;
        // 0x2d8288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8284) {
            ctx->pc = 0x2D8298u;
            goto label_2d8298;
        }
    }
    ctx->pc = 0x2D828Cu;
    // 0x2d828c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D828Cu;
    SET_GPR_U32(ctx, 31, 0x2D8294u);
    ctx->pc = 0x2D8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D828Cu;
    // 0x2d8290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D828Cu, 0x2D8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8294u;
label_2d8294:
    // 0x2d8294: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2d8298:
    // 0x2d8298: 0x8e63b118  lw          $v1, -0x4EE8($s3)
    ctx->pc = 0x2d8298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
label_2d829c:
    // 0x2d829c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D829Cu;
    {
        const bool branch_taken_0x2d829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D829Cu;
        // 0x2d82a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d829c) {
            ctx->pc = 0x2D8314u;
            goto label_2d8314;
        }
    }
    ctx->pc = 0x2D82A4u;
label_2d82a4:
    // 0x2d82a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d82a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d82a8: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2d82a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d82ac: 0x0  nop
    ctx->pc = 0x2d82acu;
    // NOP
    // 0x2d82b0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2D82B0u;
    {
        const bool branch_taken_0x2d82b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82B0u;
        // 0x2d82b4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82b0) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D82B8u;
    // 0x2d82b8: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D82B8u;
    SET_GPR_U32(ctx, 31, 0x2D82C0u);
    ctx->pc = 0x2D82BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82B8u;
    // 0x2d82bc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D82B8u, 0x2D82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82C0u;
label_2d82c0:
    // 0x2d82c0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D82C0u;
    {
        const bool branch_taken_0x2d82c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C0u;
        // 0x2d82c4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82c0) {
            ctx->pc = 0x2D836Cu;
            goto label_2d836c;
        }
    }
    ctx->pc = 0x2D82C8u;
    // 0x2d82c8: 0xc0b7170  jal         func_2DC5C0
    ctx->pc = 0x2D82C8u;
    SET_GPR_U32(ctx, 31, 0x2D82D0u);
    ctx->pc = 0x2D82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82C8u;
    // 0x2d82cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5C0u, 0x2D82C8u, 0x2D82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82D0u;
label_2d82d0:
    // 0x2d82d0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D82D0u;
    {
        const bool branch_taken_0x2d82d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82D0u;
        // 0x2d82d4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82d0) {
            ctx->pc = 0x2D8368u;
            goto label_2d8368;
        }
    }
    ctx->pc = 0x2D82D8u;
    // 0x2d82d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d82dc: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x2d82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x2d82e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d82e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d82e8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2d82e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2d82ec: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D82ECu;
    SET_GPR_U32(ctx, 31, 0x2D82F4u);
    ctx->pc = 0x2D82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82ECu;
    // 0x2d82f0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D82ECu, 0x2D82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82F4u;
label_2d82f4:
    // 0x2d82f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d82f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d82f8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2D82F8u;
    SET_GPR_U32(ctx, 31, 0x2D8300u);
    ctx->pc = 0x2D82FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82F8u;
    // 0x2d82fc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2D82F8u, 0x2D8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8300u;
label_2d8300:
    // 0x2d8300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8304: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2d8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2d8308: 0x8e63b118  lw          $v1, -0x4EE8($s3)
    ctx->pc = 0x2d8308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947096)));
    // 0x2d830c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8310: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2d8310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_2d8314:
    // 0x2d8314: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8314u;
    {
        const bool branch_taken_0x2d8314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8314) {
            ctx->pc = 0x2D832Cu;
            goto label_2d832c;
        }
    }
    ctx->pc = 0x2D831Cu;
    // 0x2d831c: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D831Cu;
    SET_GPR_U32(ctx, 31, 0x2D8324u);
    ctx->pc = 0x2D8320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D831Cu;
    // 0x2d8320: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D831Cu, 0x2D8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8324u;
label_2d8324:
    // 0x2d8324: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8324u;
    {
        const bool branch_taken_0x2d8324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8324u;
        // 0x2d8328: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8324) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D832Cu;
label_2d832c:
    // 0x2d832c: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D832Cu;
    SET_GPR_U32(ctx, 31, 0x2D8334u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D832Cu, 0x2D8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8334u;
label_2d8334:
    // 0x2d8334: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2d8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2d8338:
    // 0x2d8338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d8338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d833c:
    // 0x2d833c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8340:
    // 0x2d8340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8340u;
    {
        const bool branch_taken_0x2d8340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8340) {
            ctx->pc = 0x2D8358u;
            goto label_2d8358;
        }
    }
    ctx->pc = 0x2D8348u;
    // 0x2d8348: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D8348u;
    SET_GPR_U32(ctx, 31, 0x2D8350u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D8348u, 0x2D8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8350u;
label_2d8350:
    // 0x2d8350: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d8354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d8358:
    // 0x2d8358: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2D8358u;
    SET_GPR_U32(ctx, 31, 0x2D8360u);
    ctx->pc = 0x2D835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8358u;
    // 0x2d835c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2D8358u, 0x2D8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8360u;
label_2d8360:
    // 0x2d8360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8360u;
    {
        const bool branch_taken_0x2d8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8360u;
        // 0x2d8364: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8360) {
            ctx->pc = 0x2D8370u;
            goto label_2d8370;
        }
    }
    ctx->pc = 0x2D8368u;
label_2d8368:
    // 0x2d8368: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x2d8368u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2d836c:
    // 0x2d836c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d8370:
    // 0x2d8370: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2d8370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8374: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d8374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8378: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d8378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d837c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d837cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8380: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x2d8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d8384: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2d8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d8388: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2d8388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d838c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8390: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8390u;
        // 0x2d8394: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8398u;
}
