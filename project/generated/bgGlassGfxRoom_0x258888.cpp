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

// Function: bgGlassGfxRoom
// Address: 0x258888 - 0x258cec
void bgGlassGfxRoom_0x258888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGlassGfxRoom_0x258888");
#endif

    switch (ctx->pc) {
        case 0x2588c4u: goto label_2588c4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588e0u: goto label_2588e0;
        case 0x2588f8u: goto label_2588f8;
        case 0x258920u: goto label_258920;
        case 0x258988u: goto label_258988;
        default: break;
    }

    ctx->pc = 0x258888u;

    // 0x258888: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x258888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25888c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x258890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258894: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x258894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x258898: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x258898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x25889c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x25889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2588a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2588a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2588a4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2588a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2588a8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2588a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2588ac: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2588acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2588b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2588b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2588b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2588b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2588b8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2588b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2588bc: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2588BCu;
    SET_GPR_U32(ctx, 31, 0x2588C4u);
    ctx->pc = 0x2588C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588BCu;
    // 0x2588c0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2588BCu, 0x2588C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588C4u;
label_2588c4:
    // 0x2588c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2588c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588c8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2588c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2588cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2588ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588d0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2588D0u;
    SET_GPR_U32(ctx, 31, 0x2588D8u);
    ctx->pc = 0x2588D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588D0u;
    // 0x2588d4: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2588D0u, 0x2588D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588D8u;
label_2588d8:
    // 0x2588d8: 0xc095d88  jal         func_257620
    ctx->pc = 0x2588D8u;
    SET_GPR_U32(ctx, 31, 0x2588E0u);
    ctx->pc = 0x2588DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588D8u;
    // 0x2588dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257620u, 0x2588D8u, 0x2588E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588E0u;
label_2588e0:
    // 0x2588e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2588e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2588e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2588e8: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2588E8u;
    {
        const bool branch_taken_0x2588e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588E8u;
        // 0x2588ec: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588e8) {
            ctx->pc = 0x258CC0u;
            goto label_258cc0;
        }
    }
    ctx->pc = 0x2588F0u;
    // 0x2588f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2588f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588f4: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x2588f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_2588f8:
    // 0x2588f8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2588f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2588fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2588fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x258900: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x258900u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258904: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x258904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258908: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x258908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25890c: 0x0  nop
    ctx->pc = 0x25890cu;
    // NOP
    // 0x258910: 0x450000e2  bc1f        . + 4 + (0xE2 << 2)
    ctx->pc = 0x258910u;
    {
        const bool branch_taken_0x258910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258910u;
        // 0x258914: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258910) {
            ctx->pc = 0x258C9Cu;
            goto label_258c9c;
        }
    }
    ctx->pc = 0x258918u;
    // 0x258918: 0xc0807de  jal         func_201F78
    ctx->pc = 0x258918u;
    SET_GPR_U32(ctx, 31, 0x258920u);
    ctx->pc = 0x25891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258918u;
    // 0x25891c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x258918u, 0x258920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258920u;
label_258920:
    // 0x258920: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x258920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x258924: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x258924u;
    {
        const bool branch_taken_0x258924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258924u;
        // 0x258928: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258924) {
            ctx->pc = 0x25893Cu;
            goto label_25893c;
        }
    }
    ctx->pc = 0x25892Cu;
    // 0x25892c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x25892cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x258930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258934u;
    {
        const bool branch_taken_0x258934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258934u;
        // 0x258938: 0x43b80a  movz        $s7, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258934) {
            ctx->pc = 0x258940u;
            goto label_258940;
        }
    }
    ctx->pc = 0x25893Cu;
label_25893c:
    // 0x25893c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25893cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258940:
    // 0x258940: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x258940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x258944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258948: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x258948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25894c: 0x0  nop
    ctx->pc = 0x25894cu;
    // NOP
    // 0x258950: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x258950u;
    {
        const bool branch_taken_0x258950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258950u;
        // 0x258954: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258950) {
            ctx->pc = 0x258960u;
            goto label_258960;
        }
    }
    ctx->pc = 0x258958u;
    // 0x258958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x258958u;
    {
        const bool branch_taken_0x258958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258958u;
        // 0x25895c: 0x34427f7f  ori         $v0, $v0, 0x7F7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258958) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258960u;
label_258960:
    // 0x258960: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x258964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x258964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258968: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25896c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25896cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x258970: 0x460c1300  add.s       $f12, $f2, $f12
    ctx->pc = 0x258970u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x258974: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x258974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x258978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25897c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x25897cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x258980: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x258980u;
    SET_GPR_U32(ctx, 31, 0x258988u);
    ctx->pc = 0x258984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258980u;
    // 0x258984: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x258980u, 0x258988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258988u;
label_258988:
    // 0x258988: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x258988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x25898c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x25898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x258990: 0x34637f7f  ori         $v1, $v1, 0x7F7F
    ctx->pc = 0x258990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32639);
    // 0x258994: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x258994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_258998:
    // 0x258998: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x258998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x25899c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2589a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2589a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2589a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2589a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2589a8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2589a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2589ac: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2589acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2589b0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2589b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2589b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2589b8: 0xa04d0003  sb          $t5, 0x3($v0)
    ctx->pc = 0x2589b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2589bc: 0x24637350  addiu       $v1, $v1, 0x7350
    ctx->pc = 0x2589bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29520));
    // 0x2589c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2589c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2589c4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x2589c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x2589c8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2589c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2589cc: 0x24e77360  addiu       $a3, $a3, 0x7360
    ctx->pc = 0x2589ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29536));
    // 0x2589d0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2589d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2589d4: 0x176080  sll         $t4, $s7, 2
    ctx->pc = 0x2589d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2589d8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2589d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2589dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2589dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2589e0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2589e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2589e4: 0x24a50538  addiu       $a1, $a1, 0x538
    ctx->pc = 0x2589e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1336));
    // 0x2589e8: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x2589e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2589ec: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x2589ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2589f0: 0xa08d0003  sb          $t5, 0x3($a0)
    ctx->pc = 0x2589f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2589f4: 0x3c086c01  lui         $t0, 0x6C01
    ctx->pc = 0x2589f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27649 << 16));
    // 0x2589f8: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x2589f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2589fc: 0x34108004  ori         $s0, $zero, 0x8004
    ctx->pc = 0x2589fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x258a00: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x258a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x258a04: 0x3c09302e  lui         $t1, 0x302E
    ctx->pc = 0x258a04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12334 << 16));
    // 0x258a08: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x258a08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x258a0c: 0x240f0412  addiu       $t7, $zero, 0x412
    ctx->pc = 0x258a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x258a10: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x258a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x258a14: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x258a14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x258a18: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x258a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x258a1c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x258a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x258a20: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x258a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x258a24: 0x24c60550  addiu       $a2, $a2, 0x550
    ctx->pc = 0x258a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1360));
    // 0x258a28: 0xa06d0003  sb          $t5, 0x3($v1)
    ctx->pc = 0x258a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x258a2c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x258a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x258a30: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x258a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x258a34: 0x24420568  addiu       $v0, $v0, 0x568
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1384));
    // 0x258a38: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x258a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x258a3c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x258a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x258a40: 0x240b0009  addiu       $t3, $zero, 0x9
    ctx->pc = 0x258a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x258a44: 0x3c0a6804  lui         $t2, 0x6804
    ctx->pc = 0x258a44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26628 << 16));
    // 0x258a48: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x258a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x258a4c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x258a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x258a50: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x258a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x258a54: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x258a54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x258a58: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x258a58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x258a5c: 0x3c076e04  lui         $a3, 0x6E04
    ctx->pc = 0x258a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28164 << 16));
    // 0x258a60: 0xa08d0003  sb          $t5, 0x3($a0)
    ctx->pc = 0x258a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x258a64: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x258a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x258a68: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x258a68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x258a6c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x258a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a70: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x258a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x258a74: 0x174140  sll         $t0, $s7, 5
    ctx->pc = 0x258a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x258a78: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x258a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a7c: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x258a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x258a80: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x258a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x258a84: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x258a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x258a88: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258a88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258a8c: 0xa44b0000  sh          $t3, 0x0($v0)
    ctx->pc = 0x258a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x258a90: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x258a90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x258a94: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x258a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x258a98: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258a9c: 0x24420460  addiu       $v0, $v0, 0x460
    ctx->pc = 0x258a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
    // 0x258aa0: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x258aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x258aa4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x258aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x258aa8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258aac: 0xaf9293a0  sw          $s2, -0x6C60($gp)
    ctx->pc = 0x258aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 18));
    // 0x258ab0: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x258ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
    // 0x258ab4: 0x24180008  addiu       $t8, $zero, 0x8
    ctx->pc = 0x258ab4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258ab8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258abc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x258abcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x258ac0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258ac4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x258ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258ac8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x258ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x258acc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x258accu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x258ad0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258ad4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258ad8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258adc: 0xc6c0003c  lwc1        $f0, 0x3C($s6)
    ctx->pc = 0x258adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ae0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258ae4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258ae8: 0xc6c00040  lwc1        $f0, 0x40($s6)
    ctx->pc = 0x258ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258aec: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258af0: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x258af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258af4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258af8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x258af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x258afc: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x258afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b00: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b04: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x258b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x258b08: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x258b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b0c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b10: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b14: 0xc6c00018  lwc1        $f0, 0x18($s6)
    ctx->pc = 0x258b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b18: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b1c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b20: 0xc6c00060  lwc1        $f0, 0x60($s6)
    ctx->pc = 0x258b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b24: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b28: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b2c: 0xc6c00064  lwc1        $f0, 0x64($s6)
    ctx->pc = 0x258b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b30: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b34: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b38: 0xc6c00068  lwc1        $f0, 0x68($s6)
    ctx->pc = 0x258b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b3c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b40: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b44: 0xc6c00088  lwc1        $f0, 0x88($s6)
    ctx->pc = 0x258b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b48: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b4c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b50: 0xc6c0008c  lwc1        $f0, 0x8C($s6)
    ctx->pc = 0x258b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b54: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b58: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b5c: 0xc6c00090  lwc1        $f0, 0x90($s6)
    ctx->pc = 0x258b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b60: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b64: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b68: 0xc6c00044  lwc1        $f0, 0x44($s6)
    ctx->pc = 0x258b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b6c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x258b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x258b70: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b74: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b78: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b7c: 0xc6c00048  lwc1        $f0, 0x48($s6)
    ctx->pc = 0x258b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b80: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b84: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b88: 0xc6c0004c  lwc1        $f0, 0x4C($s6)
    ctx->pc = 0x258b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b8c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b90: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258b94: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x258b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258b98: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258b9c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258ba0: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x258ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ba4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258ba8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bac: 0xc6c00024  lwc1        $f0, 0x24($s6)
    ctx->pc = 0x258bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bb0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258bb4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bb8: 0xc6c0006c  lwc1        $f0, 0x6C($s6)
    ctx->pc = 0x258bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bbc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258bc0: 0xc6c10070  lwc1        $f1, 0x70($s6)
    ctx->pc = 0x258bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258bc4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bc8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x258bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x258bcc: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x258bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258bd0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bd4: 0x8f82b498  lw          $v0, -0x4B68($gp)
    ctx->pc = 0x258bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x258bd8: 0xc6c00074  lwc1        $f0, 0x74($s6)
    ctx->pc = 0x258bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bdc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x258bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x258be0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x258be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258be4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258be8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258be8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bec: 0x8f85a23c  lw          $a1, -0x5DC4($gp)
    ctx->pc = 0x258becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x258bf0: 0xc6c00094  lwc1        $f0, 0x94($s6)
    ctx->pc = 0x258bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258bf4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258bf8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258bfc: 0xc6c00098  lwc1        $f0, 0x98($s6)
    ctx->pc = 0x258bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258c00: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258c04: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258c04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258c08: 0xc6c0009c  lwc1        $f0, 0x9C($s6)
    ctx->pc = 0x258c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258c0c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x258c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x258c10: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258c14: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x258c14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x258c18: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258c1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x258c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258c20: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x258c20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x258c24: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258c28: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x258c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x258c2c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x258c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x258c30: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x258c30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x258c34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x258c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x258c38: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x258c38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x258c3c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x258c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x258c40: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x258c40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x258c44: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x258c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x258c48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x258c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x258c4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x258c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x258c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x258c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258c54: 0x1c2702a  slt         $t6, $t6, $v0
    ctx->pc = 0x258c54u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258c58: 0xe100a  movz        $v0, $zero, $t6
    ctx->pc = 0x258c58u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x258c5c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x258c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x258c60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x258c64: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x258c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x258c68: 0xa24d0003  sb          $t5, 0x3($s2)
    ctx->pc = 0x258c68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x258c6c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x258c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x258c70: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x258c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x258c74: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x258c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x258c78: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x258c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x258c7c: 0xa4580000  sh          $t8, 0x0($v0)
    ctx->pc = 0x258c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x258c80: 0xa06d0003  sb          $t5, 0x3($v1)
    ctx->pc = 0x258c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x258c84: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x258c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x258c88: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x258c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x258c8c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x258c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x258c90: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x258c90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x258c94: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x258c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x258c98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_258c9c:
    // 0x258c9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258ca0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x258ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x258ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x258ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cac: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x258cb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x258cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258cb4: 0x1440ff10  bnez        $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x258CB4u;
    {
        const bool branch_taken_0x258cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CB4u;
        // 0x258cb8: 0x9e1021  addu        $v0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cb4) {
            ctx->pc = 0x2588F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2588f8;
        }
    }
    ctx->pc = 0x258CBCu;
    // 0x258cbc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x258cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_258cc0:
    // 0x258cc0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x258cc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x258cc4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x258cc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258cc8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x258cc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x258ccc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x258cccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258cd0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x258cd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258cd4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x258cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258cd8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x258cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258cdc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x258cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258ce0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x258ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x258CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CE4u;
        // 0x258ce8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258CECu;
}
