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

// Function: bgProcessGlasshits
// Address: 0x25a090 - 0x25a2f8
void bgProcessGlasshits_0x25a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgProcessGlasshits_0x25a090");
#endif

    switch (ctx->pc) {
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a124u: goto label_25a124;
        case 0x25a208u: goto label_25a208;
        case 0x25a268u: goto label_25a268;
        case 0x25a2b4u: goto label_25a2b4;
        default: break;
    }

    ctx->pc = 0x25a090u;

    // 0x25a090: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25a094: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x25a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x25a098: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x25a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x25a09c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x25a09cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0a0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x25a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25a0a4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0a8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x25a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25a0ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25a0acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0b0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x25a0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25a0b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0b8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25a0bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25a0bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25a0c0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x25a0c4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25a0c8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x25a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x25a0cc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25a0d0: 0x1ac0007c  blez        $s6, . + 4 + (0x7C << 2)
    ctx->pc = 0x25A0D0u;
    {
        const bool branch_taken_0x25a0d0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x25A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0D0u;
        // 0x25a0d4: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0d0) {
            ctx->pc = 0x25A2C4u;
            goto label_25a2c4;
        }
    }
    ctx->pc = 0x25A0D8u;
    // 0x25a0d8: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x25a0d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x25a0dc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x25a0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_25a0e0:
    // 0x25a0e0: 0x26a24748  addiu       $v0, $s5, 0x4748
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 18248));
    // 0x25a0e4: 0x2262018  mult        $a0, $s1, $a2
    ctx->pc = 0x25a0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25a0e8: 0x8f87a240  lw          $a3, -0x5DC0($gp)
    ctx->pc = 0x25a0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x25a0ec: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x25a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25a0f0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x25a0f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25a0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0f8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x25a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25a0fc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x25a0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25a100: 0x49880  sll         $s3, $a0, 2
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25a104: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25a108: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x25a108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25a10c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25a110: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a114: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a118: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x25a118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x25a11c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x25A11Cu;
    SET_GPR_U32(ctx, 31, 0x25A124u);
    ctx->pc = 0x25A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A11Cu;
    // 0x25a120: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x25A11Cu, 0x25A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A124u;
label_25a124:
    // 0x25a124: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A124u;
    {
        const bool branch_taken_0x25a124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A124u;
        // 0x25a128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a124) {
            ctx->pc = 0x25A138u;
            goto label_25a138;
        }
    }
    ctx->pc = 0x25A12Cu;
    // 0x25a12c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a130: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A130u;
    {
        const bool branch_taken_0x25a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A130u;
        // 0x25a134: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a130) {
            ctx->pc = 0x25A14Cu;
            goto label_25a14c;
        }
    }
    ctx->pc = 0x25A138u;
label_25a138:
    // 0x25a138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25a13c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25a144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25a148: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25a148u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25a14c:
    // 0x25a14c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x25a14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x25a150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a154: 0xc78382dc  lwc1        $f3, -0x7D24($gp)
    ctx->pc = 0x25a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25a158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25a15c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x25a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a160: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25a160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25a164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25a164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a168: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x25a168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25a16c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25a16cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a170: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x25a170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a174: 0x0  nop
    ctx->pc = 0x25a174u;
    // NOP
    // 0x25a178: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x25A178u;
    {
        const bool branch_taken_0x25a178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A178u;
        // 0x25a17c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a178) {
            ctx->pc = 0x25A280u;
            goto label_25a280;
        }
    }
    ctx->pc = 0x25A180u;
    // 0x25a180: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x25a180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a18c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x25a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a190: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x25a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x25a194: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x25a194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a198: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x25a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a19c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25a19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a1a0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x25a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x25a1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a1a8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x25a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a1ac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x25a1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25a1b0: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x25a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x25a1b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25a1b8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x25a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a1bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25a1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25a1c0: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x25a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1c4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x25a1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25a1c8: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x25a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a1cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x25a1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25a1d0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x25a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1d4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x25a1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25a1d8: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x25a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a1dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x25a1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x25a1e0: 0xc441008c  lwc1        $f1, 0x8C($v0)
    ctx->pc = 0x25a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a1e4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x25a1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25a1e8: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x25a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a1ec: 0x14740004  bne         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A1ECu;
    {
        const bool branch_taken_0x25a1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x25A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1ECu;
        // 0x25a1f0: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1ec) {
            ctx->pc = 0x25A200u;
            goto label_25a200;
        }
    }
    ctx->pc = 0x25A1F4u;
    // 0x25a1f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25a1f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25A1F8u;
    {
        const bool branch_taken_0x25a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1F8u;
        // 0x25a1fc: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1f8) {
            ctx->pc = 0x25A234u;
            goto label_25a234;
        }
    }
    ctx->pc = 0x25A200u;
label_25a200:
    // 0x25a200: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x25a200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25a204: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25a208:
    // 0x25a208: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x25a208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a20c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A20Cu;
    {
        const bool branch_taken_0x25a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A20Cu;
        // 0x25a210: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a20c) {
            ctx->pc = 0x25A234u;
            goto label_25a234;
        }
    }
    ctx->pc = 0x25A214u;
    // 0x25a214: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x25a214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25a218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a21c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a220: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25a224: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x25a228: 0x5465fff7  bnel        $v1, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25A228u;
    {
        const bool branch_taken_0x25a228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x25a228) {
            ctx->pc = 0x25A22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A228u;
            // 0x25a22c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a208;
        }
    }
    ctx->pc = 0x25A230u;
    // 0x25a230: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25a230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a234:
    // 0x25a234: 0x680001f  bltz        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A234u;
    {
        const bool branch_taken_0x25a234 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x25A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A234u;
        // 0x25a238: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a234) {
            ctx->pc = 0x25A2B4u;
            goto label_25a2b4;
        }
    }
    ctx->pc = 0x25A23Cu;
    // 0x25a23c: 0x26a64748  addiu       $a2, $s5, 0x4748
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 18248));
    // 0x25a240: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x25a240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25a244: 0x24c70018  addiu       $a3, $a2, 0x18
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x25a248: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x25a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a24c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x25a24cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a250: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x25a250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a254: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25a258: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x25a258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25a25c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x25a260: 0xc0a924e  jal         func_2A4938
    ctx->pc = 0x25A260u;
    SET_GPR_U32(ctx, 31, 0x25A268u);
    ctx->pc = 0x25A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A260u;
    // 0x25a264: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4938u, 0x25A260u, 0x25A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A268u;
label_25a268:
    // 0x25a268: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x25a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25a26c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x25a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25a270: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a274: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25a278: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25A278u;
    {
        const bool branch_taken_0x25a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A278u;
        // 0x25a27c: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a278) {
            ctx->pc = 0x25A2B4u;
            goto label_25a2b4;
        }
    }
    ctx->pc = 0x25A280u;
label_25a280:
    // 0x25a280: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x25a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x25a284: 0x26a54748  addiu       $a1, $s5, 0x4748
    ctx->pc = 0x25a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 18248));
    // 0x25a288: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x25a288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a28c: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x25a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x25a290: 0x24a7000c  addiu       $a3, $a1, 0xC
    ctx->pc = 0x25a290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x25a294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a298: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a29c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25a29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2a0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x25a2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25a2a4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x25a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25a2a8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x25a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25a2ac: 0xc0965e0  jal         func_259780
    ctx->pc = 0x25A2ACu;
    SET_GPR_U32(ctx, 31, 0x25A2B4u);
    ctx->pc = 0x25A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2ACu;
    // 0x25a2b0: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259780u, 0x25A2ACu, 0x25A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2B4u;
label_25a2b4:
    // 0x25a2b4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25a2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2b8: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x25a2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x25a2bc: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x25A2BCu;
    {
        const bool branch_taken_0x25a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2BCu;
        // 0x25a2c0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2bc) {
            ctx->pc = 0x25A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a0e0;
        }
    }
    ctx->pc = 0x25A2C4u;
label_25a2c4:
    // 0x25a2c4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25a2c8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x25a2c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25a2cc: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x25a2ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25a2d0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x25a2d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25a2d4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x25a2d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a2d8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25a2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a2dc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25a2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a2e0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a2e4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x25a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a2e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25a2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a2ec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x25a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2F0u;
        // 0x25a2f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A2F8u;
}
