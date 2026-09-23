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

// Function: particleNewPulse
// Address: 0x297fa8 - 0x298100
void particleNewPulse_0x297fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewPulse_0x297fa8");
#endif

    switch (ctx->pc) {
        case 0x297ff4u: goto label_297ff4;
        case 0x298078u: goto label_298078;
        case 0x298080u: goto label_298080;
        default: break;
    }

    ctx->pc = 0x297fa8u;

    // 0x297fa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x297fac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297fb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x297fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297fbc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x297fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297fc4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x297fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297fcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fd0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x297fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fd4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x297fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x297fd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x297fdc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x297fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x297fe0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x297fe0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x297fe4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x297fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x297fe8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x297fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x297fec: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x297FECu;
    SET_GPR_U32(ctx, 31, 0x297FF4u);
    ctx->pc = 0x297FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FECu;
    // 0x297ff0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x297FECu, 0x297FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FF4u;
label_297ff4:
    // 0x297ff4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297ff8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x297ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x297ffc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x297ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x298000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298004: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x298004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298008: 0xaeb103a0  sw          $s1, 0x3A0($s5)
    ctx->pc = 0x298008u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 928), GPR_U32(ctx, 17));
    // 0x29800c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298010: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x298010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x298014: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x298014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x298018: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x298018u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x29801c: 0x26b103bc  addiu       $s1, $s5, 0x3BC
    ctx->pc = 0x29801cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 956));
    // 0x298020: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x298020u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
    // 0x298024: 0xaeb30014  sw          $s3, 0x14($s5)
    ctx->pc = 0x298024u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 19));
    // 0x298028: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x298028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29802c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29802cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x298030: 0xe6a003a4  swc1        $f0, 0x3A4($s5)
    ctx->pc = 0x298030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 932), bits); }
    // 0x298034: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x298034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x298038: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x298038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29803c: 0xaeb40030  sw          $s4, 0x30($s5)
    ctx->pc = 0x29803cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 20));
    // 0x298040: 0xe6a003a8  swc1        $f0, 0x3A8($s5)
    ctx->pc = 0x298040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 936), bits); }
    // 0x298044: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x298044u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x298048: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x298048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29804c: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x29804cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x298050: 0xe6a003ac  swc1        $f0, 0x3AC($s5)
    ctx->pc = 0x298050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 940), bits); }
    // 0x298054: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x298054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x298058: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x298058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29805c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298060: 0xe6a003b0  swc1        $f0, 0x3B0($s5)
    ctx->pc = 0x298060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 944), bits); }
    // 0x298064: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x298064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298068: 0xe6a103b4  swc1        $f1, 0x3B4($s5)
    ctx->pc = 0x298068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 948), bits); }
    // 0x29806c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x29806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298070: 0xe6a003b8  swc1        $f0, 0x3B8($s5)
    ctx->pc = 0x298070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 952), bits); }
    // 0x298074: 0x0  nop
    ctx->pc = 0x298074u;
    // NOP
label_298078:
    // 0x298078: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x298078u;
    SET_GPR_U32(ctx, 31, 0x298080u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x298078u, 0x298080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298080u;
label_298080:
    // 0x298080: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298080u;
    {
        const bool branch_taken_0x298080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298080u;
        // 0x298084: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298080) {
            ctx->pc = 0x298098u;
            goto label_298098;
        }
    }
    ctx->pc = 0x298088u;
    // 0x298088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29808c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29808cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x298090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298090u;
    {
        const bool branch_taken_0x298090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298090u;
        // 0x298094: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298090) {
            ctx->pc = 0x2980B0u;
            goto label_2980b0;
        }
    }
    ctx->pc = 0x298098u;
label_298098:
    // 0x298098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29809c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2980a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2980a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2980a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2980a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2980a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2980a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2980ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2980acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2980b0:
    // 0x2980b0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2980b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2980b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2980b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2980b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2980b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2980bc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2980c0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2980c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2980c4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2980C4u;
    {
        const bool branch_taken_0x2980c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2980C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980C4u;
        // 0x2980c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980c4) {
            ctx->pc = 0x298078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298078;
        }
    }
    ctx->pc = 0x2980CCu;
    // 0x2980cc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2980ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2980d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2980d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2980d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2980d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2980d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2980dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2980dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2980e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2980e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2980e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2980e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2980e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2980e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2980ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2980ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2980f0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2980f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2980f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2980f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2980f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2980F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980F8u;
        // 0x2980fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2980F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298100u;
}
