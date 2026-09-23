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

// Function: zbtestGfx
// Address: 0x2a6b78 - 0x2a6db0
void zbtestGfx_0x2a6b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestGfx_0x2a6b78");
#endif

    switch (ctx->pc) {
        case 0x2a6bccu: goto label_2a6bcc;
        case 0x2a6bd4u: goto label_2a6bd4;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6d10u: goto label_2a6d10;
        case 0x2a6d30u: goto label_2a6d30;
        case 0x2a6d38u: goto label_2a6d38;
        case 0x2a6d48u: goto label_2a6d48;
        case 0x2a6d6cu: goto label_2a6d6c;
        default: break;
    }

    ctx->pc = 0x2a6b78u;

    // 0x2a6b78: 0x8f84b318  lw          $a0, -0x4CE8($gp)
    ctx->pc = 0x2a6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947608)));
    // 0x2a6b7c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a6b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a6b80: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2a6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a6b84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a6b88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a6b8c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2a6b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6b90: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2a6b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2a6b94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a6b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b98: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a6b9c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a6ba0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a6ba4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a6ba8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a6bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6bb0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a6bb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a6bb4: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2a6bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2a6bb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6bc0: 0x94770002  lhu         $s7, 0x2($v1)
    ctx->pc = 0x2a6bc0u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a6bc4: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A6BC4u;
    SET_GPR_U32(ctx, 31, 0x2A6BCCu);
    ctx->pc = 0x2A6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BC4u;
    // 0x2a6bc8: 0x94760000  lhu         $s6, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A6BC4u, 0x2A6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BCCu;
label_2a6bcc:
    // 0x2a6bcc: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A6BCCu;
    SET_GPR_U32(ctx, 31, 0x2A6BD4u);
    ctx->pc = 0x2A6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BCCu;
    // 0x2a6bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A6BCCu, 0x2A6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BD4u;
label_2a6bd4:
    // 0x2a6bd4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A6BD4u;
    SET_GPR_U32(ctx, 31, 0x2A6BDCu);
    ctx->pc = 0x2A6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BD4u;
    // 0x2a6bd8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A6BD4u, 0x2A6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BDCu;
label_2a6bdc:
    // 0x2a6bdc: 0x8f86b98c  lw          $a2, -0x4674($gp)
    ctx->pc = 0x2a6bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949260)));
    // 0x2a6be0: 0x18c0003b  blez        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A6BE0u;
    {
        const bool branch_taken_0x2a6be0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BE0u;
        // 0x2a6be4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6be0) {
            ctx->pc = 0x2A6CD0u;
            goto label_2a6cd0;
        }
    }
    ctx->pc = 0x2A6BE8u;
    // 0x2a6be8: 0x3c1501ff  lui         $s5, 0x1FF
    ctx->pc = 0x2a6be8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)511 << 16));
    // 0x2a6bec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a6becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2a6bf0:
    // 0x2a6bf0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a6bf4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a6bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6bf8: 0x26a5a0b0  addiu       $a1, $s5, -0x5F50
    ctx->pc = 0x2a6bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942896));
    // 0x2a6bfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6c00: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a6c04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a6c08: 0x5444002d  bnel        $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2A6C08u;
    {
        const bool branch_taken_0x2a6c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a6c08) {
            ctx->pc = 0x2A6C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6C08u;
            // 0x2a6c0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6CC0u;
            goto label_2a6cc0;
        }
    }
    ctx->pc = 0x2A6C10u;
    // 0x2a6c10: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a6c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6c14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6c18: 0xc7808e2c  lwc1        $f0, -0x71D4($gp)
    ctx->pc = 0x2a6c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6c1c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2a6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6c20: 0x16a100  sll         $s4, $s6, 4
    ctx->pc = 0x2a6c20u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2a6c24: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x2a6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a6c28: 0x179900  sll         $s3, $s7, 4
    ctx->pc = 0x2a6c28u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2a6c2c: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2a6c2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a6c30: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a6c34: 0x460c0b80  add.s       $f14, $f1, $f12
    ctx->pc = 0x2a6c34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2a6c38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c3c: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x2a6c3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a6c40: 0x311200ff  andi        $s2, $t0, 0xFF
    ctx->pc = 0x2a6c40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2a6c44: 0x46146bc0  add.s       $f15, $f13, $f20
    ctx->pc = 0x2a6c44u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
    // 0x2a6c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c4c: 0x46146b41  sub.s       $f13, $f13, $f20
    ctx->pc = 0x2a6c4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x2a6c50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a6c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c54: 0xc0ae37e  jal         func_2B8DF8
    ctx->pc = 0x2A6C54u;
    SET_GPR_U32(ctx, 31, 0x2A6C5Cu);
    ctx->pc = 0x2A6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C54u;
    // 0x2a6c58: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8DF8u, 0x2A6C54u, 0x2A6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C5Cu;
label_2a6c5c:
    // 0x2a6c5c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a6c60: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x2a6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x2a6c64: 0x34637f00  ori         $v1, $v1, 0x7F00
    ctx->pc = 0x2a6c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32512);
    // 0x2a6c68: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2a6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a6c6c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A6C6Cu;
    {
        const bool branch_taken_0x2a6c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C6Cu;
        // 0x2a6c70: 0x2434025  or          $t0, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c6c) {
            ctx->pc = 0x2A6CB8u;
            goto label_2a6cb8;
        }
    }
    ctx->pc = 0x2A6C74u;
    // 0x2a6c74: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6c78: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6c7c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2a6c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2a6c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6c84: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2a6c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6c88: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x2a6c88u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a6c8c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2a6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6c90: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2a6c90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a6c94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a6c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a6c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ca0: 0x460d13c0  add.s       $f15, $f2, $f13
    ctx->pc = 0x2a6ca0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x2a6ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ca8: 0x460c0b80  add.s       $f14, $f1, $f12
    ctx->pc = 0x2a6ca8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2a6cac: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x2a6cacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a6cb0: 0xc0ae37e  jal         func_2B8DF8
    ctx->pc = 0x2A6CB0u;
    SET_GPR_U32(ctx, 31, 0x2A6CB8u);
    ctx->pc = 0x2A6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CB0u;
    // 0x2a6cb4: 0x460d1341  sub.s       $f13, $f2, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8DF8u, 0x2A6CB0u, 0x2A6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CB8u;
label_2a6cb8:
    // 0x2a6cb8: 0x8f86b98c  lw          $a2, -0x4674($gp)
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949260)));
    // 0x2a6cbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a6cc0:
    // 0x2a6cc0: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2a6cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a6cc4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2A6CC4u;
    {
        const bool branch_taken_0x2a6cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CC4u;
        // 0x2a6cc8: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cc4) {
            ctx->pc = 0x2A6BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6bf0;
        }
    }
    ctx->pc = 0x2A6CCCu;
    // 0x2a6ccc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6cd0:
    // 0x2a6cd0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A6CD0u;
    SET_GPR_U32(ctx, 31, 0x2A6CD8u);
    ctx->pc = 0x2A6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CD0u;
    // 0x2a6cd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A6CD0u, 0x2A6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CD8u;
label_2a6cd8:
    // 0x2a6cd8: 0x8f86b990  lw          $a2, -0x4670($gp)
    ctx->pc = 0x2a6cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
    // 0x2a6cdc: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A6CDCu;
    {
        const bool branch_taken_0x2a6cdc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CDCu;
        // 0x2a6ce0: 0x3c1001ff  lui         $s0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cdc) {
            ctx->pc = 0x2A6D24u;
            goto label_2a6d24;
        }
    }
    ctx->pc = 0x2A6CE4u;
    // 0x2a6ce4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2a6ce8:
    // 0x2a6ce8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a6cec: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a6cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6cf0: 0x2605a740  addiu       $a1, $s0, -0x58C0
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944576));
    // 0x2a6cf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6cf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a6cfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6d00: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6D00u;
    {
        const bool branch_taken_0x2a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a6d00) {
            ctx->pc = 0x2A6D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6D00u;
            // 0x2a6d04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6D18u;
            goto label_2a6d18;
        }
    }
    ctx->pc = 0x2A6D08u;
    // 0x2a6d08: 0xc0a99ee  jal         func_2A67B8
    ctx->pc = 0x2A6D08u;
    SET_GPR_U32(ctx, 31, 0x2A6D10u);
    ctx->pc = 0x2A6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D08u;
    // 0x2a6d0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67B8u, 0x2A6D08u, 0x2A6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D10u;
label_2a6d10:
    // 0x2a6d10: 0x8f86b990  lw          $a2, -0x4670($gp)
    ctx->pc = 0x2a6d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
    // 0x2a6d14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a6d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a6d18:
    // 0x2a6d18: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2a6d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a6d1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A6D1Cu;
    {
        const bool branch_taken_0x2a6d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D1Cu;
        // 0x2a6d20: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d1c) {
            ctx->pc = 0x2A6CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6ce8;
        }
    }
    ctx->pc = 0x2A6D24u;
label_2a6d24:
    // 0x2a6d24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d28: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A6D28u;
    SET_GPR_U32(ctx, 31, 0x2A6D30u);
    ctx->pc = 0x2A6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D28u;
    // 0x2a6d2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A6D28u, 0x2A6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D30u;
label_2a6d30:
    // 0x2a6d30: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A6D30u;
    SET_GPR_U32(ctx, 31, 0x2A6D38u);
    ctx->pc = 0x2A6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D30u;
    // 0x2a6d34: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A6D30u, 0x2A6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D38u;
label_2a6d38:
    // 0x2a6d38: 0x8f86b994  lw          $a2, -0x466C($gp)
    ctx->pc = 0x2a6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949268)));
    // 0x2a6d3c: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6D3Cu;
    {
        const bool branch_taken_0x2a6d3c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D3Cu;
        // 0x2a6d40: 0x3c1001ff  lui         $s0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d3c) {
            ctx->pc = 0x2A6D80u;
            goto label_2a6d80;
        }
    }
    ctx->pc = 0x2A6D44u;
    // 0x2a6d44: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_2a6d48:
    // 0x2a6d48: 0x2602a860  addiu       $v0, $s0, -0x57A0
    ctx->pc = 0x2a6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944864));
    // 0x2a6d4c: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2a6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a6d50: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6d54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a6d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a6d5c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6D5Cu;
    {
        const bool branch_taken_0x2a6d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a6d5c) {
            ctx->pc = 0x2A6D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6D5Cu;
            // 0x2a6d60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6D74u;
            goto label_2a6d74;
        }
    }
    ctx->pc = 0x2A6D64u;
    // 0x2a6d64: 0xc0a9adc  jal         func_2A6B70
    ctx->pc = 0x2A6D64u;
    SET_GPR_U32(ctx, 31, 0x2A6D6Cu);
    ctx->pc = 0x2A6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D64u;
    // 0x2a6d68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B70u, 0x2A6D64u, 0x2A6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D6Cu;
label_2a6d6c:
    // 0x2a6d6c: 0x8f86b994  lw          $a2, -0x466C($gp)
    ctx->pc = 0x2a6d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949268)));
    // 0x2a6d70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a6d74:
    // 0x2a6d74: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2a6d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a6d78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A6D78u;
    {
        const bool branch_taken_0x2a6d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D78u;
        // 0x2a6d7c: 0x111940  sll         $v1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d78) {
            ctx->pc = 0x2A6D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6d48;
        }
    }
    ctx->pc = 0x2A6D80u;
label_2a6d80:
    // 0x2a6d80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6d84: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2a6d84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6d88: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a6d88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6d8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a6d8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6d90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a6d90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6d94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a6d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6d98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a6d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6d9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a6d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6da4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DA8u;
        // 0x2a6dac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6DB0u;
}
