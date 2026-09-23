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

// Function: particleGlassTick
// Address: 0x29b890 - 0x29bc54
void particleGlassTick_0x29b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGlassTick_0x29b890");
#endif

    switch (ctx->pc) {
        case 0x29b938u: goto label_29b938;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29ba40u: goto label_29ba40;
        default: break;
    }

    ctx->pc = 0x29b890u;

    // 0x29b890: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x29b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29b894: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x29b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b898: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x29b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29b89c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29b89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8a0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x29b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x29b8a4: 0x266203a0  addiu       $v0, $s3, 0x3A0
    ctx->pc = 0x29b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x29b8a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29b8ac: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x29b8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29b8b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x29b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29b8b4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x29b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x29b8b8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x29b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x29b8bc: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x29b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x29b8c0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x29b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x29b8c4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x29b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x29b8c8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29b8cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29b8d0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29b8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b8d8: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x29b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
    // 0x29b8e0: 0x0  nop
    ctx->pc = 0x29b8e0u;
    // NOP
    // 0x29b8e4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x29b8e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x29b8e8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x29b8ec: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x29b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29b8f0: 0x245003a0  addiu       $s0, $v0, 0x3A0
    ctx->pc = 0x29b8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x29b8f4: 0x8e091188  lw          $t1, 0x1188($s0)
    ctx->pc = 0x29b8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4488)));
    // 0x29b8f8: 0x192000c9  blez        $t1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x29B8F8u;
    {
        const bool branch_taken_0x29b8f8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x29B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8F8u;
        // 0x29b8fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8f8) {
            ctx->pc = 0x29BC20u;
            goto label_29bc20;
        }
    }
    ctx->pc = 0x29B900u;
    // 0x29b900: 0x266303d0  addiu       $v1, $s3, 0x3D0
    ctx->pc = 0x29b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
    // 0x29b904: 0x245208a0  addiu       $s2, $v0, 0x8A0
    ctx->pc = 0x29b904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x29b908: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29b90c: 0x245e13e0  addiu       $fp, $v0, 0x13E0
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 5088));
    // 0x29b910: 0x266303d4  addiu       $v1, $s3, 0x3D4
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 980));
    // 0x29b914: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x29b914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x29b918: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x29b918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x29b91c: 0x245208a4  addiu       $s2, $v0, 0x8A4
    ctx->pc = 0x29b91cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2212));
    // 0x29b920: 0x266303d8  addiu       $v1, $s3, 0x3D8
    ctx->pc = 0x29b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 984));
    // 0x29b924: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x29b924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x29b928: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x29b928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x29b92c: 0x245908a8  addiu       $t9, $v0, 0x8A8
    ctx->pc = 0x29b92cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 2216));
    // 0x29b930: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b934: 0x0  nop
    ctx->pc = 0x29b934u;
    // NOP
label_29b938:
    // 0x29b938: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x29b938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29b93c: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x29b93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29b940: 0x114180  sll         $t0, $s1, 6
    ctx->pc = 0x29b940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29b944: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x29b948: 0x2482021  addu        $a0, $s2, $t0
    ctx->pc = 0x29b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x29b94c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x29b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b950: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x29b950u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29b954: 0x3d43021  addu        $a2, $fp, $s4
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x29b958: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x29b958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29b95c: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x29b95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29b960: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x29b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29b964: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b968: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x29b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29b96c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x29b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29b970: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x29b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b974: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x29b974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x29b978: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b97c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x29b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29b980: 0x46143180  add.s       $f6, $f6, $f20
    ctx->pc = 0x29b980u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
    // 0x29b984: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x29b988: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29b988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b98c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x29b98cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x29b990: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b994: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b998: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29b998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29b99c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x29b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29b9a0: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x29b9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b9a4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x29b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b9a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29b9a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b9ac: 0xe4c60000  swc1        $f6, 0x0($a2)
    ctx->pc = 0x29b9acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29b9b0: 0x46022b40  add.s       $f13, $f5, $f2
    ctx->pc = 0x29b9b0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x29b9b4: 0x45000095  bc1f        . + 4 + (0x95 << 2)
    ctx->pc = 0x29B9B4u;
    {
        const bool branch_taken_0x29b9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9B4u;
        // 0x29b9b8: 0x46041b80  add.s       $f14, $f3, $f4 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9b4) {
            ctx->pc = 0x29BC0Cu;
            goto label_29bc0c;
        }
    }
    ctx->pc = 0x29B9BCu;
    // 0x29b9bc: 0x261508c0  addiu       $s5, $s0, 0x8C0
    ctx->pc = 0x29b9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
    // 0x29b9c0: 0x261608c4  addiu       $s6, $s0, 0x8C4
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 2244));
    // 0x29b9c4: 0x2a71021  addu        $v0, $s5, $a3
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x29b9c8: 0x261708c8  addiu       $s7, $s0, 0x8C8
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 2248));
    // 0x29b9cc: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x29b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29b9d0: 0x2e72821  addu        $a1, $s7, $a3
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x29b9d4: 0x2c71821  addu        $v1, $s6, $a3
    ctx->pc = 0x29b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x29b9d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9dc: 0xc4700000  lwc1        $f16, 0x0($v1)
    ctx->pc = 0x29b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x29b9e0: 0xc4b10000  lwc1        $f17, 0x0($a1)
    ctx->pc = 0x29b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x29b9e4: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x29b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29b9e8: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x29B9E8u;
    SET_GPR_U32(ctx, 31, 0x29B9F0u);
    ctx->pc = 0x29B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9E8u;
    // 0x29b9ec: 0x7fb90020  sq          $t9, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x29B9E8u, 0x29B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9F0u;
label_29b9f0:
    // 0x29b9f0: 0x3c01c0f0  lui         $at, 0xC0F0
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49392 << 16));
    // 0x29b9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b9f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29b9f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9fc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x29b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ba00: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29ba00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29ba04: 0x8f8bb460  lw          $t3, -0x4BA0($gp)
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x29ba08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29ba08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ba0c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x29ba0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x29ba10: 0x1960001c  blez        $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x29BA10u;
    {
        const bool branch_taken_0x29ba10 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x29BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA10u;
        // 0x29ba14: 0x7bb90020  lq          $t9, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba10) {
            ctx->pc = 0x29BA84u;
            goto label_29ba84;
        }
    }
    ctx->pc = 0x29BA18u;
    // 0x29ba18: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29ba1c: 0x260c0c80  addiu       $t4, $s0, 0xC80
    ctx->pc = 0x29ba1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3200));
    // 0x29ba20: 0x26050c84  addiu       $a1, $s0, 0xC84
    ctx->pc = 0x29ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3204));
    // 0x29ba24: 0x26060c88  addiu       $a2, $s0, 0xC88
    ctx->pc = 0x29ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3208));
    // 0x29ba28: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29ba2c: 0x260e0004  addiu       $t6, $s0, 0x4
    ctx->pc = 0x29ba2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29ba30: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29ba34: 0x260f000c  addiu       $t7, $s0, 0xC
    ctx->pc = 0x29ba34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x29ba38: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x29ba38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29ba3c: 0x0  nop
    ctx->pc = 0x29ba3cu;
    // NOP
label_29ba40:
    // 0x29ba40: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29ba44: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x29ba44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ba48: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x29ba48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29ba4c: 0xc7828d14  lwc1        $f2, -0x72EC($gp)
    ctx->pc = 0x29ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ba50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29ba50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29ba54: 0x14b202a  slt         $a0, $t2, $t3
    ctx->pc = 0x29ba54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x29ba58: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x29ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29ba5c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ba60: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x29ba64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29ba64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29ba68: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29ba6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ba70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29ba70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29ba74: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29BA74u;
    {
        const bool branch_taken_0x29ba74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA74u;
        // 0x29ba78: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba74) {
            ctx->pc = 0x29BA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ba40;
        }
    }
    ctx->pc = 0x29BA7Cu;
    // 0x29ba7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29BA7Cu;
    {
        const bool branch_taken_0x29ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA7Cu;
        // 0x29ba80: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba7c) {
            ctx->pc = 0x29BAACu;
            goto label_29baac;
        }
    }
    ctx->pc = 0x29BA84u;
label_29ba84:
    // 0x29ba84: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29ba88: 0x260c0c80  addiu       $t4, $s0, 0xC80
    ctx->pc = 0x29ba88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3200));
    // 0x29ba8c: 0x26050c84  addiu       $a1, $s0, 0xC84
    ctx->pc = 0x29ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3204));
    // 0x29ba90: 0x26060c88  addiu       $a2, $s0, 0xC88
    ctx->pc = 0x29ba90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3208));
    // 0x29ba94: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29ba98: 0x260e0004  addiu       $t6, $s0, 0x4
    ctx->pc = 0x29ba98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29ba9c: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x29ba9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29baa0: 0x260f000c  addiu       $t7, $s0, 0xC
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x29baa4: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x29baa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29baa8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29baac:
    // 0x29baac: 0x30e70100  andi        $a3, $a3, 0x100
    ctx->pc = 0x29baacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x29bab0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x29bab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29bab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29bab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29bab8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29bab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29babc: 0x1821821  addu        $v1, $t4, $v0
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x29bac0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x29bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x29bac4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bac8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29bacc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bad0: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x29bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29bad4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29bad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29bad8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29bad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29badc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x29badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x29bae0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29bae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29bae4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x29bae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29bae8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29baec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29baf0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29baf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29baf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29baf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29baf8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x29baf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29bafc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x29bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb00: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb04: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29bb04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29bb08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29bb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29bb0c: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x29BB0Cu;
    {
        const bool branch_taken_0x29bb0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB0Cu;
        // 0x29bb10: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb0c) {
            ctx->pc = 0x29BB44u;
            goto label_29bb44;
        }
    }
    ctx->pc = 0x29BB14u;
    // 0x29bb14: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x29bb18: 0xc7828d18  lwc1        $f2, -0x72E8($gp)
    ctx->pc = 0x29bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bb1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb20: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29bb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb24: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x29BB24u;
    {
        const bool branch_taken_0x29bb24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb24) {
            ctx->pc = 0x29BB60u;
            goto label_29bb60;
        }
    }
    ctx->pc = 0x29BB2Cu;
    // 0x29bb2c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29bb2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29bb30: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x29bb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x29bb34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29bb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bb38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29bb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bb3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BB3Cu;
    {
        const bool branch_taken_0x29bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB3Cu;
        // 0x29bb40: 0x460010c1  sub.s       $f3, $f2, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb3c) {
            ctx->pc = 0x29BB60u;
            goto label_29bb60;
        }
    }
    ctx->pc = 0x29BB44u;
label_29bb44:
    // 0x29bb44: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x29bb48: 0xc7818d1c  lwc1        $f1, -0x72E4($gp)
    ctx->pc = 0x29bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb50: 0x0  nop
    ctx->pc = 0x29bb50u;
    // NOP
    // 0x29bb54: 0x0  nop
    ctx->pc = 0x29bb54u;
    // NOP
    // 0x29bb58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29bb58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29bb5c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x29bb5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_29bb60:
    // 0x29bb60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb64: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x29bb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb68: 0x0  nop
    ctx->pc = 0x29bb68u;
    // NOP
    // 0x29bb6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29BB6Cu;
    {
        const bool branch_taken_0x29bb6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb6c) {
            ctx->pc = 0x29BB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BB6Cu;
            // 0x29bb70: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BB74u;
            goto label_29bb74;
        }
    }
    ctx->pc = 0x29BB74u;
label_29bb74:
    // 0x29bb74: 0x2083821  addu        $a3, $s0, $t0
    ctx->pc = 0x29bb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x29bb78: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x29bb7c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x29bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29bb80: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x29bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x29bb84: 0x1c83021  addu        $a2, $t6, $t0
    ctx->pc = 0x29bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x29bb88: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x29bb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x29bb8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29bb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29bb94: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x29bb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29bb98: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x29bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x29bb9c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x29bb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29bba0: 0x1e84021  addu        $t0, $t7, $t0
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x29bba4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29bba8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bbac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29bbacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29bbb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29bbb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29bbb8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29bbbc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x29bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29bbc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x29bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29bbc4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x29bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x29bbc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29bbcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29bbd0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x29bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x29bbd4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x29bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29bbd8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x29bbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x29bbdc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x29bbe0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29bbe4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29bbe8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29bbec: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x29bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29bbf0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x29bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x29bbf4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x29bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x29bbf8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29bbfc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29bc00: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x29bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x29bc04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BC04u;
    {
        const bool branch_taken_0x29bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC04u;
        // 0x29bc08: 0x8e091188  lw          $t1, 0x1188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc04) {
            ctx->pc = 0x29BC10u;
            goto label_29bc10;
        }
    }
    ctx->pc = 0x29BC0Cu;
label_29bc0c:
    // 0x29bc0c: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x29bc0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29bc10:
    // 0x29bc10: 0x1a0882d  daddu       $s1, $t5, $zero
    ctx->pc = 0x29bc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc14: 0x229102a  slt         $v0, $s1, $t1
    ctx->pc = 0x29bc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29bc18: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x29BC18u;
    {
        const bool branch_taken_0x29bc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC18u;
        // 0x29bc1c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc18) {
            ctx->pc = 0x29B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b938;
        }
    }
    ctx->pc = 0x29BC20u;
label_29bc20:
    // 0x29bc20: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x29bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bc24: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x29bc24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29bc28: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x29bc28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29bc2c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29bc30: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x29bc30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29bc34: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bc38: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x29bc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bc3c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bc40: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x29bc40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bc44: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29bc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bc48: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x29bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC4Cu;
        // 0x29bc50: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BC54u;
}
