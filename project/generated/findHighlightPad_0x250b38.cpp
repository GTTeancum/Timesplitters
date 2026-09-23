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

// Function: findHighlightPad
// Address: 0x250b38 - 0x250d88
void findHighlightPad_0x250b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findHighlightPad_0x250b38");
#endif

    switch (ctx->pc) {
        case 0x250bc8u: goto label_250bc8;
        case 0x250c04u: goto label_250c04;
        case 0x250c18u: goto label_250c18;
        default: break;
    }

    ctx->pc = 0x250b38u;

    // 0x250b38: 0x8f82a208  lw          $v0, -0x5DF8($gp)
    ctx->pc = 0x250b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x250b3c: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x250b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x250b40: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x250b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x250b44: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x250b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x250b48: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x250b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x250b4c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x250b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x250b50: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x250b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x250b54: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x250b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x250b58: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x250b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x250b5c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x250b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x250b60: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x250b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x250b64: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x250b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x250b68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x250b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x250b6c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x250b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x250b70: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x250B70u;
    {
        const bool branch_taken_0x250b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B70u;
        // 0x250b74: 0xaf80a220  sw          $zero, -0x5DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b70) {
            ctx->pc = 0x250D54u;
            goto label_250d54;
        }
    }
    ctx->pc = 0x250B78u;
    // 0x250b78: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x250b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x250b7c: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x250b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x250b80: 0x26a299f0  addiu       $v0, $s5, -0x6610
    ctx->pc = 0x250b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x250b84: 0x8ea799f0  lw          $a3, -0x6610($s5)
    ctx->pc = 0x250b84u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3299F0u));
    // 0x250b88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x250b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x250b8c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x250b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x250b90: 0x84a60026  lh          $a2, 0x26($a1)
    ctx->pc = 0x250b90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x250b94: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x250b94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x250b98: 0x84a40022  lh          $a0, 0x22($a1)
    ctx->pc = 0x250b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x250b9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x250b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ba0: 0x8f82b888  lw          $v0, -0x4778($gp)
    ctx->pc = 0x250ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x250ba4: 0xc3f021  addu        $fp, $a2, $v1
    ctx->pc = 0x250ba4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x250ba8: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x250ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x250bac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x250bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x250bb0: 0x18400068  blez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x250BB0u;
    {
        const bool branch_taken_0x250bb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BB0u;
        // 0x250bb4: 0x87b821  addu        $s7, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bb0) {
            ctx->pc = 0x250D54u;
            goto label_250d54;
        }
    }
    ctx->pc = 0x250BB8u;
    // 0x250bb8: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x250bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x250bbc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x250bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250bc0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x250bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x250bc4: 0x0  nop
    ctx->pc = 0x250bc4u;
    // NOP
label_250bc8:
    // 0x250bc8: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x250bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x250bcc: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x250bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x250bd0: 0x26d34108  addiu       $s3, $s6, 0x4108
    ctx->pc = 0x250bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 16648));
    // 0x250bd4: 0x8c6406e4  lw          $a0, 0x6E4($v1)
    ctx->pc = 0x250bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
    // 0x250bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x250bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bdc: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x250bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x250be0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x250be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250be4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x250be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250be8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x250be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250bec: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x250becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250bf0: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x250bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250bf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x250bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250bf8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x250bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250bfc: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x250BFCu;
    SET_GPR_U32(ctx, 31, 0x250C04u);
    ctx->pc = 0x250C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250BFCu;
    // 0x250c00: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x250BFCu, 0x250C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C04u;
label_250c04:
    // 0x250c04: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x250c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x250c08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x250c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c0c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x250c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c10: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x250C10u;
    SET_GPR_U32(ctx, 31, 0x250C18u);
    ctx->pc = 0x250C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C10u;
    // 0x250c14: 0x8c4406e0  lw          $a0, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x250C10u, 0x250C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C18u;
label_250c18:
    // 0x250c18: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x250c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250c1c: 0x26a599f0  addiu       $a1, $s5, -0x6610
    ctx->pc = 0x250c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x250c20: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x250c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x250c24: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x250c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x250c28: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x250c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x250c2c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x250c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250c30: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x250c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250c38: 0x0  nop
    ctx->pc = 0x250c38u;
    // NOP
    // 0x250c3c: 0x0  nop
    ctx->pc = 0x250c3cu;
    // NOP
    // 0x250c40: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x250c40u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[3];
    // 0x250c44: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x250c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250c48: 0x0  nop
    ctx->pc = 0x250c48u;
    // NOP
    // 0x250c4c: 0x0  nop
    ctx->pc = 0x250c4cu;
    // NOP
    // 0x250c50: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x250c50u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[3];
    // 0x250c54: 0x8ea299f0  lw          $v0, -0x6610($s5)
    ctx->pc = 0x250c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x250c58: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x250c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x250c5c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x250c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x250c60: 0x0  nop
    ctx->pc = 0x250c60u;
    // NOP
    // 0x250c64: 0x0  nop
    ctx->pc = 0x250c64u;
    // NOP
    // 0x250c68: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x250c68u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x250c6c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x250c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250c70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x250c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x250c74: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x250c74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x250c78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x250c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x250c7c: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x250c7cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x250c80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x250c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x250c84: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x250c88: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x250c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x250c8c: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250c8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x250c90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x250c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x250c94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x250c98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x250c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x250c9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x250c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x250ca0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x250CA0u;
    {
        const bool branch_taken_0x250ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CA0u;
        // 0x250ca4: 0x8f82b888  lw          $v0, -0x4778($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ca0) {
            ctx->pc = 0x250D44u;
            goto label_250d44;
        }
    }
    ctx->pc = 0x250CA8u;
    // 0x250ca8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x250ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x250cac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x250cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250cb0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x250CB0u;
    {
        const bool branch_taken_0x250cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB0u;
        // 0x250cb4: 0x8f82b888  lw          $v0, -0x4778($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cb0) {
            ctx->pc = 0x250D44u;
            goto label_250d44;
        }
    }
    ctx->pc = 0x250CB8u;
    // 0x250cb8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x250cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x250cbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x250cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x250cc0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x250CC0u;
    {
        const bool branch_taken_0x250cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CC0u;
        // 0x250cc4: 0x8f82b888  lw          $v0, -0x4778($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cc0) {
            ctx->pc = 0x250D44u;
            goto label_250d44;
        }
    }
    ctx->pc = 0x250CC8u;
    // 0x250cc8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x250cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x250ccc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x250cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250cd0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x250CD0u;
    {
        const bool branch_taken_0x250cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CD0u;
        // 0x250cd4: 0x8f82b888  lw          $v0, -0x4778($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cd0) {
            ctx->pc = 0x250D44u;
            goto label_250d44;
        }
    }
    ctx->pc = 0x250CD8u;
    // 0x250cd8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x250cd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250cdc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x250cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x250ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ce8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x250ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250cec: 0x0  nop
    ctx->pc = 0x250cecu;
    // NOP
    // 0x250cf0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x250CF0u;
    {
        const bool branch_taken_0x250cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF0u;
        // 0x250cf4: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cf0) {
            ctx->pc = 0x250D40u;
            goto label_250d40;
        }
    }
    ctx->pc = 0x250CF8u;
    // 0x250cf8: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x250cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x250cfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x250cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x250d00: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x250d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x250d04: 0x70421018  mult1       $v0, $v0, $v0
    ctx->pc = 0x250d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250d08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x250d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250d0c: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x250d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x250d10: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x250D10u;
    {
        const bool branch_taken_0x250d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D10u;
        // 0x250d14: 0x2441023  subu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d10) {
            ctx->pc = 0x250D40u;
            goto label_250d40;
        }
    }
    ctx->pc = 0x250D18u;
    // 0x250d18: 0x2842007e  slti        $v0, $v0, 0x7E
    ctx->pc = 0x250d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x250d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250D1Cu;
    {
        const bool branch_taken_0x250d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D1Cu;
        // 0x250d20: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d1c) {
            ctx->pc = 0x250D34u;
            goto label_250d34;
        }
    }
    ctx->pc = 0x250D24u;
    // 0x250d24: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x250d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250d28: 0x0  nop
    ctx->pc = 0x250d28u;
    // NOP
    // 0x250d2c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x250D2Cu;
    {
        const bool branch_taken_0x250d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250d2c) {
            ctx->pc = 0x250D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250D2Cu;
            // 0x250d30: 0x8f82b888  lw          $v0, -0x4778($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250D44u;
            goto label_250d44;
        }
    }
    ctx->pc = 0x250D34u;
label_250d34:
    // 0x250d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x250d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d38: 0xaf82a220  sw          $v0, -0x5DE0($gp)
    ctx->pc = 0x250d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 2));
    // 0x250d3c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x250d3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_250d40:
    // 0x250d40: 0x8f82b888  lw          $v0, -0x4778($gp)
    ctx->pc = 0x250d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
label_250d44:
    // 0x250d44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x250d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x250d48: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x250d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250d4c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x250D4Cu;
    {
        const bool branch_taken_0x250d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D4Cu;
        // 0x250d50: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d4c) {
            ctx->pc = 0x250BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250bc8;
        }
    }
    ctx->pc = 0x250D54u;
label_250d54:
    // 0x250d54: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x250d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x250d58: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x250d58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250d5c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250d60: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x250d60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250d64: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x250d64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250d68: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x250d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250d6c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x250d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250d70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x250d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250d74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x250d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250d78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x250d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250d7c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x250d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250d80: 0x3e00008  jr          $ra
    ctx->pc = 0x250D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D80u;
        // 0x250d84: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250D88u;
}
