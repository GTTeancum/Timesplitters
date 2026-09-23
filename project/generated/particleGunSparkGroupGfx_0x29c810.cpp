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

// Function: particleGunSparkGroupGfx
// Address: 0x29c810 - 0x29ce70
void particleGunSparkGroupGfx_0x29c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGunSparkGroupGfx_0x29c810");
#endif

    switch (ctx->pc) {
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c96cu: goto label_29c96c;
        case 0x29cb68u: goto label_29cb68;
        default: break;
    }

    ctx->pc = 0x29c810u;

    // 0x29c810: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x29c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x29c814: 0xc7838d28  lwc1        $f3, -0x72D8($gp)
    ctx->pc = 0x29c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29c818: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x29c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x29c81c: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x29c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x29c820: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29c820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c824: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x29c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x29c828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c82c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x29c82cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x29c830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c834: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x29c834u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x29c838: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x29c838u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x29c83c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x29c83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x29c840: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x29c840u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29c844: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x29c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x29c848: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x29c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x29c84c: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x29c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x29c850: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x29c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x29c854: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x29c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x29c858: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x29c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x29c85c: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x29c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x29c860: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x29c860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x29c864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29c864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c868: 0xc609000c  lwc1        $f9, 0xC($s0)
    ctx->pc = 0x29c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29c86c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x29c86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x29c870: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29c870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29c874: 0x46091801  sub.s       $f0, $f3, $f9
    ctx->pc = 0x29c874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x29c878: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x29c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x29c87c: 0x460c4d00  add.s       $f20, $f9, $f12
    ctx->pc = 0x29c87cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[9], ctx->f[12]);
    // 0x29c880: 0x46014882  mul.s       $f2, $f9, $f1
    ctx->pc = 0x29c880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x29c884: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x29c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29c888: 0x0  nop
    ctx->pc = 0x29c888u;
    // NOP
    // 0x29c88c: 0x0  nop
    ctx->pc = 0x29c88cu;
    // NOP
    // 0x29c890: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x29c890u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x29c894: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29c894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29c898: 0x46091582  mul.s       $f22, $f2, $f9
    ctx->pc = 0x29c898u;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x29c89c: 0x46140dc2  mul.s       $f23, $f1, $f20
    ctx->pc = 0x29c89cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x29c8a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29c8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29c8a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c8a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29c8a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29c8a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29c8ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c8b0: 0x1860015f  blez        $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x29C8B0u;
    {
        const bool branch_taken_0x29c8b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8B0u;
        // 0x29c8b4: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8b0) {
            ctx->pc = 0x29CE30u;
            goto label_29ce30;
        }
    }
    ctx->pc = 0x29C8B8u;
    // 0x29c8b8: 0x261e03ac  addiu       $fp, $s0, 0x3AC
    ctx->pc = 0x29c8b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
    // 0x29c8bc: 0x261703b0  addiu       $s7, $s0, 0x3B0
    ctx->pc = 0x29c8bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x29c8c0: 0x261503b4  addiu       $s5, $s0, 0x3B4
    ctx->pc = 0x29c8c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x29c8c4: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x29c8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c8c8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x29c8c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c8cc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x29c8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29c8d0:
    // 0x29c8d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c8d4: 0xc60503a4  lwc1        $f5, 0x3A4($s0)
    ctx->pc = 0x29c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29c8d8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x29c8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c8dc: 0xc60603a0  lwc1        $f6, 0x3A0($s0)
    ctx->pc = 0x29c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29c8e0: 0xc60703a8  lwc1        $f7, 0x3A8($s0)
    ctx->pc = 0x29c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29c8e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8ec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29c8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8f0: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x29c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x29c8f4: 0x2a23821  addu        $a3, $s5, $v0
    ctx->pc = 0x29c8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x29c8f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c8fc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x29c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x29c900: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x29c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c904: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x29c904u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29c908: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x29c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29c90c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x29c90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x29c910: 0x46091202  mul.s       $f8, $f2, $f9
    ctx->pc = 0x29c910u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x29c914: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x29c914u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x29c918: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x29c918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x29c91c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29c91cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29c920: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x29c920u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x29c924: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x29c924u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x29c928: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x29c928u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x29c92c: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x29c92cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x29c930: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x29c930u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x29c934: 0x46162940  add.s       $f5, $f5, $f22
    ctx->pc = 0x29c934u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[22]);
    // 0x29c938: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29c938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29c93c: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x29c93cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x29c940: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x29c940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29c944: 0x46172100  add.s       $f4, $f4, $f23
    ctx->pc = 0x29c944u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[23]);
    // 0x29c948: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x29c948u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c94c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x29c94cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c950: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x29c950u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29c954: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29C954u;
    SET_GPR_U32(ctx, 31, 0x29C95Cu);
    ctx->pc = 0x29C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C954u;
    // 0x29c958: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29C954u, 0x29C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C95Cu;
label_29c95c:
    // 0x29c95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c960: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c964: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29C964u;
    SET_GPR_U32(ctx, 31, 0x29C96Cu);
    ctx->pc = 0x29C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C964u;
    // 0x29c968: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29C964u, 0x29C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C96Cu;
label_29c96c:
    // 0x29c96c: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x29c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29c970: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c974: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x29c974u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x29c978: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c97c: 0x0  nop
    ctx->pc = 0x29c97cu;
    // NOP
    // 0x29c980: 0x45020127  bc1fl       . + 4 + (0x127 << 2)
    ctx->pc = 0x29C980u;
    {
        const bool branch_taken_0x29c980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c980) {
            ctx->pc = 0x29C984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C980u;
            // 0x29c984: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29C988u;
    // 0x29c988: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x29c988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c98c: 0x0  nop
    ctx->pc = 0x29c98cu;
    // NOP
    // 0x29c990: 0x45000122  bc1f        . + 4 + (0x122 << 2)
    ctx->pc = 0x29C990u;
    {
        const bool branch_taken_0x29c990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C990u;
        // 0x29c994: 0xc7a90024  lwc1        $f9, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c990) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29C998u;
    // 0x29c998: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x29c998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c99c: 0x0  nop
    ctx->pc = 0x29c99cu;
    // NOP
    // 0x29c9a0: 0x4502011f  bc1fl       . + 4 + (0x11F << 2)
    ctx->pc = 0x29C9A0u;
    {
        const bool branch_taken_0x29c9a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c9a0) {
            ctx->pc = 0x29C9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9A0u;
            // 0x29c9a4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29C9A8u;
    // 0x29c9a8: 0x46064836  c.le.s      $f9, $f6
    ctx->pc = 0x29c9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9ac: 0x0  nop
    ctx->pc = 0x29c9acu;
    // NOP
    // 0x29c9b0: 0x4500011a  bc1f        . + 4 + (0x11A << 2)
    ctx->pc = 0x29C9B0u;
    {
        const bool branch_taken_0x29c9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B0u;
        // 0x29c9b4: 0xc7af0028  lwc1        $f15, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9b0) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29C9B8u;
    // 0x29c9b8: 0x460f0836  c.le.s      $f1, $f15
    ctx->pc = 0x29c9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9bc: 0x0  nop
    ctx->pc = 0x29c9bcu;
    // NOP
    // 0x29c9c0: 0x45020117  bc1fl       . + 4 + (0x117 << 2)
    ctx->pc = 0x29C9C0u;
    {
        const bool branch_taken_0x29c9c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c9c0) {
            ctx->pc = 0x29C9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9C0u;
            // 0x29c9c4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29C9C8u;
    // 0x29c9c8: 0x46067836  c.le.s      $f15, $f6
    ctx->pc = 0x29c9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9cc: 0x0  nop
    ctx->pc = 0x29c9ccu;
    // NOP
    // 0x29c9d0: 0x45000112  bc1f        . + 4 + (0x112 << 2)
    ctx->pc = 0x29C9D0u;
    {
        const bool branch_taken_0x29c9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9D0u;
        // 0x29c9d4: 0xc7a5003c  lwc1        $f5, 0x3C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9d0) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29C9D8u;
    // 0x29c9d8: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x29c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29c9dc: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x29c9dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x29c9e0: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x29c9e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9e4: 0x0  nop
    ctx->pc = 0x29c9e4u;
    // NOP
    // 0x29c9e8: 0x4502010d  bc1fl       . + 4 + (0x10D << 2)
    ctx->pc = 0x29C9E8u;
    {
        const bool branch_taken_0x29c9e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c9e8) {
            ctx->pc = 0x29C9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9E8u;
            // 0x29c9ec: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29C9F0u;
    // 0x29c9f0: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x29c9f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9f4: 0x0  nop
    ctx->pc = 0x29c9f4u;
    // NOP
    // 0x29c9f8: 0x45000108  bc1f        . + 4 + (0x108 << 2)
    ctx->pc = 0x29C9F8u;
    {
        const bool branch_taken_0x29c9f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9F8u;
        // 0x29c9fc: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9f8) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CA00u;
    // 0x29ca00: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x29ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ca04: 0x0  nop
    ctx->pc = 0x29ca04u;
    // NOP
    // 0x29ca08: 0x45020105  bc1fl       . + 4 + (0x105 << 2)
    ctx->pc = 0x29CA08u;
    {
        const bool branch_taken_0x29ca08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ca08) {
            ctx->pc = 0x29CA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA08u;
            // 0x29ca0c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29CA10u;
    // 0x29ca10: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x29ca10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ca14: 0x0  nop
    ctx->pc = 0x29ca14u;
    // NOP
    // 0x29ca18: 0x45000100  bc1f        . + 4 + (0x100 << 2)
    ctx->pc = 0x29CA18u;
    {
        const bool branch_taken_0x29ca18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA18u;
        // 0x29ca1c: 0xc7ae0038  lwc1        $f14, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca18) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CA20u;
    // 0x29ca20: 0x460e1036  c.le.s      $f2, $f14
    ctx->pc = 0x29ca20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ca24: 0x0  nop
    ctx->pc = 0x29ca24u;
    // NOP
    // 0x29ca28: 0x450200fd  bc1fl       . + 4 + (0xFD << 2)
    ctx->pc = 0x29CA28u;
    {
        const bool branch_taken_0x29ca28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ca28) {
            ctx->pc = 0x29CA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CA28u;
            // 0x29ca2c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE20u;
            goto label_29ce20;
        }
    }
    ctx->pc = 0x29CA30u;
    // 0x29ca30: 0x46057036  c.le.s      $f14, $f5
    ctx->pc = 0x29ca30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ca34: 0x0  nop
    ctx->pc = 0x29ca34u;
    // NOP
    // 0x29ca38: 0x450000f8  bc1f        . + 4 + (0xF8 << 2)
    ctx->pc = 0x29CA38u;
    {
        const bool branch_taken_0x29ca38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA38u;
        // 0x29ca3c: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca38) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CA40u;
    // 0x29ca40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29ca44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29ca44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29ca48: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x29ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x29ca4c: 0xc78d8d2c  lwc1        $f13, -0x72D4($gp)
    ctx->pc = 0x29ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29ca50: 0x0  nop
    ctx->pc = 0x29ca50u;
    // NOP
    // 0x29ca54: 0x0  nop
    ctx->pc = 0x29ca54u;
    // NOP
    // 0x29ca58: 0x46051a83  div.s       $f10, $f3, $f5
    ctx->pc = 0x29ca58u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[10] = ctx->f[3] / ctx->f[5];
    // 0x29ca5c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x29ca60: 0x0  nop
    ctx->pc = 0x29ca60u;
    // NOP
    // 0x29ca64: 0x0  nop
    ctx->pc = 0x29ca64u;
    // NOP
    // 0x29ca68: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x29ca68u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[6];
    // 0x29ca6c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29ca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29ca70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29ca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ca74: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29ca78: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x29ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ca7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29ca7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29ca80: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x29ca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29ca84: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29ca84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29ca88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29ca8c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x29ca8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29ca90: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x29ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29ca94: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x29ca94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x29ca98: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x29ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x29ca9c: 0xc467001c  lwc1        $f7, 0x1C($v1)
    ctx->pc = 0x29ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29caa0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29caa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29caa4: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x29caa4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x29caa8: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x29caa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x29caac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x29caacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29cab0: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x29cab0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x29cab4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x29cab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29cab8: 0x46013142  mul.s       $f5, $f6, $f1
    ctx->pc = 0x29cab8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29cabc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x29cabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29cac0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x29cac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x29cac4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29cac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29cac8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29cac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29cacc: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x29caccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29cad0: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x29cad0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x29cad4: 0x46044100  add.s       $f4, $f8, $f4
    ctx->pc = 0x29cad4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x29cad8: 0x46053940  add.s       $f5, $f7, $f5
    ctx->pc = 0x29cad8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x29cadc: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x29cadcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x29cae0: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x29cae0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x29cae4: 0x460a7282  mul.s       $f10, $f14, $f10
    ctx->pc = 0x29cae4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x29cae8: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x29cae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x29caec: 0x46072801  sub.s       $f0, $f5, $f7
    ctx->pc = 0x29caecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x29caf0: 0x460d5082  mul.s       $f2, $f10, $f13
    ctx->pc = 0x29caf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x29caf4: 0xe7aa0038  swc1        $f10, 0x38($sp)
    ctx->pc = 0x29caf4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29caf8: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x29caf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x29cafc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x29cafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x29cb00: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29cb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29cb04: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x29cb04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x29cb08: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x29cb08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29cb0c: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x29cb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x29cb10: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x29cb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x29cb14: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x29cb14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x29cb18: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x29cb18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29cb1c: 0x46012a40  add.s       $f9, $f5, $f1
    ctx->pc = 0x29cb1cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x29cb20: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x29cb20u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x29cb24: 0x46004281  sub.s       $f10, $f8, $f0
    ctx->pc = 0x29cb24u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x29cb28: 0x46013880  add.s       $f2, $f7, $f1
    ctx->pc = 0x29cb28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x29cb2c: 0xe7a90054  swc1        $f9, 0x54($sp)
    ctx->pc = 0x29cb2cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29cb30: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x29cb30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x29cb34: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x29cb34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29cb38: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x29cb38u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x29cb3c: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x29cb3cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29cb40: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x29cb40u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x29cb44: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x29cb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29cb48: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x29cb48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x29cb4c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x29cb4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29cb50: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x29cb50u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x29cb54: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x29cb54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29cb58: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x29cb58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29cb5c: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x29cb5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29cb60: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29CB60u;
    SET_GPR_U32(ctx, 31, 0x29CB68u);
    ctx->pc = 0x29CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB60u;
    // 0x29cb64: 0xe7a50074  swc1        $f5, 0x74($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29CB60u, 0x29CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB68u;
label_29cb68:
    // 0x29cb68: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29cb6c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29cb70: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x29cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x29cb74: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x29cb74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29cb78: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29cb78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29cb7c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29cb80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29cb84: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29cb88: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29cb8c: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29cb90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29cb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29cb94: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29cb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29cb98: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x29cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x29cb9c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x29cb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29cba0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cba4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cba8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29cbac: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x29cbacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29cbb0: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x29cbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x29cbb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cbb8: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x29cbb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29cbbc: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x29cbbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x29cbc0: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x29cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29cbc4: 0x252c0010  addiu       $t4, $t1, 0x10
    ctx->pc = 0x29cbc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x29cbc8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29cbcc: 0x240d0800  addiu       $t5, $zero, 0x800
    ctx->pc = 0x29cbccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29cbd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29cbd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cbd8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x29cbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29cbdc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29cbe0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x29cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x29cbe4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cbe8: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x29cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x29cbec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cbf0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29cbf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cbf8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cbf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29cbfc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29cbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29cc00: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cc04: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x29cc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29cc08: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29cc0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cc10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cc14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29cc18: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29cc1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29cc20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc24: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29cc28: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29cc2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29cc30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc34: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29cc38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cc3c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29cc40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29cc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29cc48: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cc4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29cc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29cc50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cc54: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x29cc54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x29cc58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cc5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cc60: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x29cc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x29cc64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cc68: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x29cc68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x29cc6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc70: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29cc74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc78: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x29cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cc7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cc80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc84: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cc84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29cc88: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x29cc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29cc8c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cc90: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29cc94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cc98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cc98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cc9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cc9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29cca0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29cca4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29cca8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ccac: 0xa5270000  sh          $a3, 0x0($t1)
    ctx->pc = 0x29ccacu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x29ccb0: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29ccb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ccb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ccbc: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x29ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x29ccc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ccc4: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29ccc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cccc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29ccd0: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x29ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x29ccd4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x29ccd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29ccd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ccdc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29ccdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29cce0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cce4: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x29cce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
    // 0x29cce8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ccec: 0x34e707fc  ori         $a3, $a3, 0x7FC
    ctx->pc = 0x29ccecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2044);
    // 0x29ccf0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29ccf4: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x29ccf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x29ccf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ccfc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cd00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd04: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29cd08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd0c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29cd10: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cd14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd18: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29cd1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd20: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cd20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29cd24: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29cd24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29cd28: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x29cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cd2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cd30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cd34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cd38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cd38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29cd3c: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29cd40: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29cd44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd48: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29cd4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cd50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29cd54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd58: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29cd5c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29cd60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29cd64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd68: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29cd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29cd6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cd70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29cd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29cd74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd78: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29cd7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd80: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x29cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cd84: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29cd88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cd8c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cd8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29cd90: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29cd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29cd94: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x29cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cd98: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29cd9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cda0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cda0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cda4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29cda8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cdac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29cdb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdb4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29cdb8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29cdbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29cdc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdc4: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29cdc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cdcc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29cdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29cdd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdd4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29cdd8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29cddc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29cddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29cde0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cde4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29cde8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29cdf0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdf4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29cdf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29cdfc: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29ce00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ce04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ce08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ce0c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29ce10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ce14: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29ce18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29ce1c:
    // 0x29ce1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x29ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_29ce20:
    // 0x29ce20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29ce24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29ce24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ce28: 0x5440fea9  bnel        $v0, $zero, . + 4 + (-0x157 << 2)
    ctx->pc = 0x29CE28u;
    {
        const bool branch_taken_0x29ce28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce28) {
            ctx->pc = 0x29CE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CE28u;
            // 0x29ce2c: 0xc609000c  lwc1        $f9, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c8d0;
        }
    }
    ctx->pc = 0x29CE30u;
label_29ce30:
    // 0x29ce30: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x29ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29ce34: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x29ce34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29ce38: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x29ce38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29ce3c: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x29ce3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29ce40: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x29ce40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29ce44: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x29ce44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29ce48: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x29ce48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29ce4c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x29ce4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29ce50: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x29ce50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ce54: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x29ce54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ce58: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x29ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29ce5c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x29ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29ce60: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x29ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ce64: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x29ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE68u;
        // 0x29ce6c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE70u;
}
