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

// Function: padAddTilePads
// Address: 0x2650e8 - 0x265558
void padAddTilePads_0x2650e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padAddTilePads_0x2650e8");
#endif

    switch (ctx->pc) {
        case 0x265148u: goto label_265148;
        case 0x265178u: goto label_265178;
        case 0x265264u: goto label_265264;
        case 0x2652c8u: goto label_2652c8;
        case 0x2653d8u: goto label_2653d8;
        case 0x265420u: goto label_265420;
        default: break;
    }

    ctx->pc = 0x2650e8u;

    // 0x2650e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2650e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2650ec: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2650ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2650f0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2650f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2650f4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2650f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2650f8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2650fc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2650fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x265100: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x265100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x265104: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x265104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265108: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x265108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x26510c: 0x2494000c  addiu       $s4, $a0, 0xC
    ctx->pc = 0x26510cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x265110: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x265110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x265114: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x265114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x265118: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x265118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26511c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x265120: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x265120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x265124: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x265124u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265128: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x265128u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26512c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x26512cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265130: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x265130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x265134: 0x1aa0000c  blez        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x265134u;
    {
        const bool branch_taken_0x265134 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x265138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265134u;
        // 0x265138: 0x282b821  addu        $s7, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265134) {
            ctx->pc = 0x265168u;
            goto label_265168;
        }
    }
    ctx->pc = 0x26513Cu;
    // 0x26513c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265140: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x265140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265144: 0x0  nop
    ctx->pc = 0x265144u;
    // NOP
label_265148:
    // 0x265148: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x265148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26514c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x26514cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x265150: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x265150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x265154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x265158: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x265158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26515c: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x26515cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x265160: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x265160u;
    {
        const bool branch_taken_0x265160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x265160) {
            ctx->pc = 0x265148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265148;
        }
    }
    ctx->pc = 0x265168u;
label_265168:
    // 0x265168: 0x1aa00097  blez        $s5, . + 4 + (0x97 << 2)
    ctx->pc = 0x265168u;
    {
        const bool branch_taken_0x265168 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x26516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265168u;
        // 0x26516c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265168) {
            ctx->pc = 0x2653C8u;
            goto label_2653c8;
        }
    }
    ctx->pc = 0x265170u;
    // 0x265170: 0x8f89a2ec  lw          $t1, -0x5D14($gp)
    ctx->pc = 0x265170u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265174: 0x8f84a348  lw          $a0, -0x5CB8($gp)
    ctx->pc = 0x265174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_265178:
    // 0x265178: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x265178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26517c: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x26517cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x265180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265184: 0x909021  addu        $s2, $a0, $s0
    ctx->pc = 0x265184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x265188: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x265188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26518c: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x26518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x265190: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x265190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265194: 0x9785a354  lhu         $a1, -0x5CAC($gp)
    ctx->pc = 0x265194u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943572)));
    // 0x265198: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x265198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x26519c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x26519cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2651a0: 0x264403e9  addiu       $a0, $s2, 0x3E9
    ctx->pc = 0x2651a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1001));
    // 0x2651a4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2651a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2651a8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2651a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651ac: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2651acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2651b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2651b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2651b4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2651b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2651b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2651b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2651bc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2651bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651c0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2651c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2651c4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2651c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2651c8: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x2651c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2651cc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2651ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2651d0: 0xa4e50008  sh          $a1, 0x8($a3)
    ctx->pc = 0x2651d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2651d4: 0x14860005  bne         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2651D4u;
    {
        const bool branch_taken_0x2651d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2651D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651D4u;
        // 0x2651d8: 0xe4e10018  swc1        $f1, 0x18($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651d4) {
            ctx->pc = 0x2651ECu;
            goto label_2651ec;
        }
    }
    ctx->pc = 0x2651DCu;
    // 0x2651dc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2651dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2651e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2651e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2651e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2651E4u;
    {
        const bool branch_taken_0x2651e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E4u;
        // 0x2651e8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651e4) {
            ctx->pc = 0x26521Cu;
            goto label_26521c;
        }
    }
    ctx->pc = 0x2651ECu;
label_2651ec:
    // 0x2651ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2651ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2651f0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2651F0u;
    {
        const bool branch_taken_0x2651f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2651F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651F0u;
        // 0x2651f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651f0) {
            ctx->pc = 0x265208u;
            goto label_265208;
        }
    }
    ctx->pc = 0x2651F8u;
    // 0x2651f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2651f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2651fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2651fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265200: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x265200u;
    {
        const bool branch_taken_0x265200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265200u;
        // 0x265204: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265200) {
            ctx->pc = 0x26521Cu;
            goto label_26521c;
        }
    }
    ctx->pc = 0x265208u;
label_265208:
    // 0x265208: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265208u;
    {
        const bool branch_taken_0x265208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265208u;
        // 0x26520c: 0x2413001c  addiu       $s3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265208) {
            ctx->pc = 0x265224u;
            goto label_265224;
        }
    }
    ctx->pc = 0x265210u;
    // 0x265210: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x265210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x265214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x265218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26521c:
    // 0x26521c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x26521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x265220: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_265224:
    // 0x265224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x265224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265228: 0x2538818  mult        $s1, $s2, $s3
    ctx->pc = 0x265228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x26522c: 0x2292821  addu        $a1, $s1, $t1
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x265230: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x265230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x265234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265238: 0x0  nop
    ctx->pc = 0x265238u;
    // NOP
    // 0x26523c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26523Cu;
    {
        const bool branch_taken_0x26523c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26523Cu;
        // 0x265240: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26523c) {
            ctx->pc = 0x265258u;
            goto label_265258;
        }
    }
    ctx->pc = 0x265244u;
    // 0x265244: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x265244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x265248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26524c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26524cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x265250: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x265250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x265254: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x265254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_265258:
    // 0x265258: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x265258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x26525c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x26525Cu;
    SET_GPR_U32(ctx, 31, 0x265264u);
    ctx->pc = 0x265260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26525Cu;
    // 0x265260: 0x7faa0010  sq          $t2, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x26525Cu, 0x265264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265264u;
label_265264:
    // 0x265264: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x265268: 0x7baa0010  lq          $t2, 0x10($sp)
    ctx->pc = 0x265268u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26526c: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x26526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x265270: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x265270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x265274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265278u;
    {
        const bool branch_taken_0x265278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265278u;
        // 0x26527c: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265278) {
            ctx->pc = 0x26528Cu;
            goto label_26528c;
        }
    }
    ctx->pc = 0x265280u;
    // 0x265280: 0x8f82b8b0  lw          $v0, -0x4750($gp)
    ctx->pc = 0x265280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x265284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265288: 0xaf82b8b0  sw          $v0, -0x4750($gp)
    ctx->pc = 0x265288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 2));
label_26528c:
    // 0x26528c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x26528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x265290: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x265290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x265294: 0x24a378e8  addiu       $v1, $a1, 0x78E8
    ctx->pc = 0x265294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30952));
    // 0x265298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26529c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2652a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2652a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2652a4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2652a8: 0x18a00042  blez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2652A8u;
    {
        const bool branch_taken_0x2652a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2652ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652A8u;
        // 0x2652ac: 0x94c70000  lhu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652a8) {
            ctx->pc = 0x2653B4u;
            goto label_2653b4;
        }
    }
    ctx->pc = 0x2652B0u;
    // 0x2652b0: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x2652b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2652b4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2652b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2652b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2652b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2652bc: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2652BCu;
    {
        const bool branch_taken_0x2652bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2652C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652BCu;
        // 0x2652c0: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652bc) {
            ctx->pc = 0x2652F4u;
            goto label_2652f4;
        }
    }
    ctx->pc = 0x2652C4u;
    // 0x2652c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2652c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2652c8:
    // 0x2652c8: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x2652c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2652cc: 0x18a0003a  blez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2652CCu;
    {
        const bool branch_taken_0x2652cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2652D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652CCu;
        // 0x2652d0: 0x94c70000  lhu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652cc) {
            ctx->pc = 0x2653B8u;
            goto label_2653b8;
        }
    }
    ctx->pc = 0x2652D4u;
    // 0x2652d4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2652d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2652d8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2652d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2652dc: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2652e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2652e4: 0x54a3fff8  bnel        $a1, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2652E4u;
    {
        const bool branch_taken_0x2652e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2652e4) {
            ctx->pc = 0x2652E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2652E4u;
            // 0x2652e8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2652C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2652c8;
        }
    }
    ctx->pc = 0x2652ECu;
    // 0x2652ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2652ECu;
    {
        const bool branch_taken_0x2652ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652ECu;
        // 0x2652f0: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652ec) {
            ctx->pc = 0x2652F8u;
            goto label_2652f8;
        }
    }
    ctx->pc = 0x2652F4u;
label_2652f4:
    // 0x2652f4: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2652f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2652f8:
    // 0x2652f8: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2652F8u;
    {
        const bool branch_taken_0x2652f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652F8u;
        // 0x2652fc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652f8) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x265300u;
    // 0x265300: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x265300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x265304: 0x96c30014  lhu         $v1, 0x14($s6)
    ctx->pc = 0x265304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x265308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x265308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26530c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26530Cu;
    {
        const bool branch_taken_0x26530c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26530Cu;
        // 0x265310: 0x215102a  slt         $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26530c) {
            ctx->pc = 0x2653C0u;
            goto label_2653c0;
        }
    }
    ctx->pc = 0x265314u;
    // 0x265314: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x265314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x265318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x265318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26531c: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x26531cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x265320: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265324: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x265324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265328: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x265328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26532c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26532Cu;
    {
        const bool branch_taken_0x26532c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26532c) {
            ctx->pc = 0x265344u;
            goto label_265344;
        }
    }
    ctx->pc = 0x265334u;
    // 0x265334: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x265334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265338: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x265338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x26533c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26533Cu;
    {
        const bool branch_taken_0x26533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26533Cu;
        // 0x265340: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26533c) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x265344u;
label_265344:
    // 0x265344: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x265344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x265348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26534c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26534cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265350: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x265350u;
    {
        const bool branch_taken_0x265350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265350) {
            ctx->pc = 0x265368u;
            goto label_265368;
        }
    }
    ctx->pc = 0x265358u;
    // 0x265358: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x265358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26535c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x26535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x265360: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x265360u;
    {
        const bool branch_taken_0x265360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265360u;
        // 0x265364: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265360) {
            ctx->pc = 0x2653B8u;
            goto label_2653b8;
        }
    }
    ctx->pc = 0x265368u;
label_265368:
    // 0x265368: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x265368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x26536c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26536cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265370: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x265370u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265374: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x265374u;
    {
        const bool branch_taken_0x265374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265374) {
            ctx->pc = 0x26538Cu;
            goto label_26538c;
        }
    }
    ctx->pc = 0x26537Cu;
    // 0x26537c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x265380: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x265380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x265384: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265384u;
    {
        const bool branch_taken_0x265384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265384u;
        // 0x265388: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265384) {
            ctx->pc = 0x2653B8u;
            goto label_2653b8;
        }
    }
    ctx->pc = 0x26538Cu;
label_26538c:
    // 0x26538c: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x26538cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x265390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265394: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x265394u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265398: 0x0  nop
    ctx->pc = 0x265398u;
    // NOP
    // 0x26539c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26539Cu;
    {
        const bool branch_taken_0x26539c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2653A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26539Cu;
        // 0x2653a0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26539c) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x2653A4u;
    // 0x2653a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2653a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2653a8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2653a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2653ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2653ACu;
    {
        const bool branch_taken_0x2653ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653ACu;
        // 0x2653b0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653ac) {
            ctx->pc = 0x2653BCu;
            goto label_2653bc;
        }
    }
    ctx->pc = 0x2653B4u;
label_2653b4:
    // 0x2653b4: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2653b8:
    // 0x2653b8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2653b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2653bc:
    // 0x2653bc: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x2653bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2653c0:
    // 0x2653c0: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
    ctx->pc = 0x2653C0u;
    {
        const bool branch_taken_0x2653c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2653C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653C0u;
        // 0x2653c4: 0x8f84a348  lw          $a0, -0x5CB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653c0) {
            ctx->pc = 0x265178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265178;
        }
    }
    ctx->pc = 0x2653C8u;
label_2653c8:
    // 0x2653c8: 0x1940004e  blez        $t2, . + 4 + (0x4E << 2)
    ctx->pc = 0x2653C8u;
    {
        const bool branch_taken_0x2653c8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2653CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653C8u;
        // 0x2653cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653c8) {
            ctx->pc = 0x265504u;
            goto label_265504;
        }
    }
    ctx->pc = 0x2653D0u;
    // 0x2653d0: 0x8f89a2f0  lw          $t1, -0x5D10($gp)
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2653d4: 0x8f83a34c  lw          $v1, -0x5CB4($gp)
    ctx->pc = 0x2653d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
label_2653d8:
    // 0x2653d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2653d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2653dc: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x2653dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2653e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2653e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653e4: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x2653e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2653e8: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x2653e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2653ec: 0xb72021  addu        $a0, $a1, $s7
    ctx->pc = 0x2653ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2653f0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2653f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2653f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2653f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2653f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2653fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2653fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x265400: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x265400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x265404: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x265404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x265408: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x265408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x26540c: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x26540Cu;
    {
        const bool branch_taken_0x26540c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x265410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26540Cu;
        // 0x265410: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26540c) {
            ctx->pc = 0x265490u;
            goto label_265490;
        }
    }
    ctx->pc = 0x265414u;
    // 0x265414: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x265414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x265418: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x265418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26541c: 0x0  nop
    ctx->pc = 0x26541cu;
    // NOP
label_265420:
    // 0x265420: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x265420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x265424: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x265424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265428: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x265428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x26542c: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x26542cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265430: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x265430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x265434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265438: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26543c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26543Cu;
    {
        const bool branch_taken_0x26543c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26543c) {
            ctx->pc = 0x265440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26543Cu;
            // 0x265440: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26545Cu;
            goto label_26545c;
        }
    }
    ctx->pc = 0x265444u;
    // 0x265444: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x265444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265448: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x265448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x26544c: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x26544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265450: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x265450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x265454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x265454u;
    {
        const bool branch_taken_0x265454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265454u;
        // 0x265458: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265454) {
            ctx->pc = 0x265478u;
            goto label_265478;
        }
    }
    ctx->pc = 0x26545Cu;
label_26545c:
    // 0x26545c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26545Cu;
    {
        const bool branch_taken_0x26545c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26545c) {
            ctx->pc = 0x265460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26545Cu;
            // 0x265460: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26547Cu;
            goto label_26547c;
        }
    }
    ctx->pc = 0x265464u;
    // 0x265464: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x265464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x265468: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x265468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x26546c: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x26546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265470: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x265470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x265474: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x265474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_265478:
    // 0x265478: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x265478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_26547c:
    // 0x26547c: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x26547cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x265480: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x265480u;
    {
        const bool branch_taken_0x265480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265480u;
        // 0x265484: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265480) {
            ctx->pc = 0x265420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265420;
        }
    }
    ctx->pc = 0x265488u;
    // 0x265488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265488u;
    {
        const bool branch_taken_0x265488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265488u;
        // 0x26548c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265488) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265490u;
label_265490:
    // 0x265490: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x265490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x265494: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x265494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_265498:
    // 0x265498: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x265498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26549c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x26549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2654a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2654a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2654a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2654a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2654a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2654A8u;
    {
        const bool branch_taken_0x2654a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654A8u;
        // 0x2654ac: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654a8) {
            ctx->pc = 0x2654F4u;
            goto label_2654f4;
        }
    }
    ctx->pc = 0x2654B0u;
    // 0x2654b0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2654b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2654b4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2654b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2654b8: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2654b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2654bc: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x2654bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2654c0: 0xc32818  mult        $a1, $a2, $v1
    ctx->pc = 0x2654c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2654c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2654c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2654c8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2654c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2654cc: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x2654ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2654d0: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x2654d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2654d4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2654D4u;
    {
        const bool branch_taken_0x2654d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2654D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654D4u;
        // 0x2654d8: 0x8f82b8b8  lw          $v0, -0x4748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654d4) {
            ctx->pc = 0x2654ECu;
            goto label_2654ec;
        }
    }
    ctx->pc = 0x2654DCu;
    // 0x2654dc: 0x8f82b8b4  lw          $v0, -0x474C($gp)
    ctx->pc = 0x2654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x2654e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2654e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2654e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2654E4u;
    {
        const bool branch_taken_0x2654e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654E4u;
        // 0x2654e8: 0xaf82b8b4  sw          $v0, -0x474C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654e4) {
            ctx->pc = 0x2654F4u;
            goto label_2654f4;
        }
    }
    ctx->pc = 0x2654ECu;
label_2654ec:
    // 0x2654ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2654ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2654f0: 0xaf82b8b8  sw          $v0, -0x4748($gp)
    ctx->pc = 0x2654f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 2));
label_2654f4:
    // 0x2654f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2654f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f8: 0x20a102a  slt         $v0, $s0, $t2
    ctx->pc = 0x2654f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2654fc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2654FCu;
    {
        const bool branch_taken_0x2654fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654FCu;
        // 0x265500: 0x8f83a34c  lw          $v1, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654fc) {
            ctx->pc = 0x2653D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2653d8;
        }
    }
    ctx->pc = 0x265504u;
label_265504:
    // 0x265504: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x265504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x265508: 0x8f84a354  lw          $a0, -0x5CAC($gp)
    ctx->pc = 0x265508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943572)));
    // 0x26550c: 0x8f83a34c  lw          $v1, -0x5CB4($gp)
    ctx->pc = 0x26550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x265510: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x265510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x265514: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x265518: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x265518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26551c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x26551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x265520: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x265520u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x265524: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x265524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265528: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x265528u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26552c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x26552cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265530: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x265530u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265534: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x265534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265538: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x265538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26553c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26553cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265540: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x265540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265544: 0xaf82a348  sw          $v0, -0x5CB8($gp)
    ctx->pc = 0x265544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 2));
    // 0x265548: 0xaf83a34c  sw          $v1, -0x5CB4($gp)
    ctx->pc = 0x265548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 3));
    // 0x26554c: 0xaf84a354  sw          $a0, -0x5CAC($gp)
    ctx->pc = 0x26554cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 4));
    // 0x265550: 0x3e00008  jr          $ra
    ctx->pc = 0x265550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265550u;
        // 0x265554: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265558u;
}
