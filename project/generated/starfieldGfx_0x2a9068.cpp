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

// Function: starfieldGfx
// Address: 0x2a9068 - 0x2a96dc
void starfieldGfx_0x2a9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("starfieldGfx_0x2a9068");
#endif

    switch (ctx->pc) {
        case 0x2a90c4u: goto label_2a90c4;
        case 0x2a9130u: goto label_2a9130;
        case 0x2a9204u: goto label_2a9204;
        case 0x2a9228u: goto label_2a9228;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a93f0u: goto label_2a93f0;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a9618u: goto label_2a9618;
        case 0x2a963cu: goto label_2a963c;
        case 0x2a9648u: goto label_2a9648;
        case 0x2a9650u: goto label_2a9650;
        case 0x2a9668u: goto label_2a9668;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a9698u: goto label_2a9698;
        default: break;
    }

    ctx->pc = 0x2a9068u;

    // 0x2a9068: 0x27bdef60  addiu       $sp, $sp, -0x10A0
    ctx->pc = 0x2a9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963040));
    // 0x2a906c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2a9070: 0xffbf1060  sd          $ra, 0x1060($sp)
    ctx->pc = 0x2a9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4192), GPR_U64(ctx, 31));
    // 0x2a9074: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2a9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a9078: 0xffbe1050  sd          $fp, 0x1050($sp)
    ctx->pc = 0x2a9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4176), GPR_U64(ctx, 30));
    // 0x2a907c: 0xffb71040  sd          $s7, 0x1040($sp)
    ctx->pc = 0x2a907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4160), GPR_U64(ctx, 23));
    // 0x2a9080: 0xffb61030  sd          $s6, 0x1030($sp)
    ctx->pc = 0x2a9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4144), GPR_U64(ctx, 22));
    // 0x2a9084: 0xffb51020  sd          $s5, 0x1020($sp)
    ctx->pc = 0x2a9084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4128), GPR_U64(ctx, 21));
    // 0x2a9088: 0xffb41010  sd          $s4, 0x1010($sp)
    ctx->pc = 0x2a9088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4112), GPR_U64(ctx, 20));
    // 0x2a908c: 0xffb31000  sd          $s3, 0x1000($sp)
    ctx->pc = 0x2a908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4096), GPR_U64(ctx, 19));
    // 0x2a9090: 0xffb20ff0  sd          $s2, 0xFF0($sp)
    ctx->pc = 0x2a9090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4080), GPR_U64(ctx, 18));
    // 0x2a9094: 0xffb10fe0  sd          $s1, 0xFE0($sp)
    ctx->pc = 0x2a9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4064), GPR_U64(ctx, 17));
    // 0x2a9098: 0xffb00fd0  sd          $s0, 0xFD0($sp)
    ctx->pc = 0x2a9098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4048), GPR_U64(ctx, 16));
    // 0x2a909c: 0xe7b81090  swc1        $f24, 0x1090($sp)
    ctx->pc = 0x2a909cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4240), bits); }
    // 0x2a90a0: 0xe7b71088  swc1        $f23, 0x1088($sp)
    ctx->pc = 0x2a90a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4232), bits); }
    // 0x2a90a4: 0xe7b61080  swc1        $f22, 0x1080($sp)
    ctx->pc = 0x2a90a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4224), bits); }
    // 0x2a90a8: 0xe7b51078  swc1        $f21, 0x1078($sp)
    ctx->pc = 0x2a90a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4216), bits); }
    // 0x2a90ac: 0x1462017a  bne         $v1, $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x2A90ACu;
    {
        const bool branch_taken_0x2a90ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90ACu;
        // 0x2a90b0: 0xe7b41070  swc1        $f20, 0x1070($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90ac) {
            ctx->pc = 0x2A9698u;
            goto label_2a9698;
        }
    }
    ctx->pc = 0x2A90B4u;
    // 0x2a90b4: 0xafa00fc0  sw          $zero, 0xFC0($sp)
    ctx->pc = 0x2a90b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4032), GPR_U32(ctx, 0));
    // 0x2a90b8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a90b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90bc: 0xc094fe0  jal         func_253F80
    ctx->pc = 0x2A90BCu;
    SET_GPR_U32(ctx, 31, 0x2A90C4u);
    ctx->pc = 0x2A90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A90BCu;
    // 0x2a90c0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F80u, 0x2A90BCu, 0x2A90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90C4u;
label_2a90c4:
    // 0x2a90c4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A90C4u;
    {
        const bool branch_taken_0x2a90c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90C4u;
        // 0x2a90c8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90c4) {
            ctx->pc = 0x2A9220u;
            goto label_2a9220;
        }
    }
    ctx->pc = 0x2A90CCu;
    // 0x2a90cc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a90d0: 0x2452a710  addiu       $s2, $v0, -0x58F0
    ctx->pc = 0x2a90d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
    // 0x2a90d4: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x2a90d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x2a90d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a90d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a90dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a90e0: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2a90e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2a90e4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a90e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a90e8: 0xafa20fc0  sw          $v0, 0xFC0($sp)
    ctx->pc = 0x2a90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4032), GPR_U32(ctx, 2));
    // 0x2a90ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a90ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2a90f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a90f4: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x2a90f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a90f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a90f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a90fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a90fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9100: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x2a9100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a9104: 0x24629658  addiu       $v0, $v1, -0x69A8
    ctx->pc = 0x2a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940248));
    // 0x2a9108: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2a9108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a910c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2a910cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a9110: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2a9110u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A9660u));
    // 0x2a9114: 0xb3a40fb7  sdl         $a0, 0xFB7($sp)
    ctx->pc = 0x2a9114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9118: 0xb7a40fb0  sdr         $a0, 0xFB0($sp)
    ctx->pc = 0x2a9118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4016); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a911c: 0xafa50fb8  sw          $a1, 0xFB8($sp)
    ctx->pc = 0x2a911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4024), GPR_U32(ctx, 5));
    // 0x2a9120: 0x27b30960  addiu       $s3, $sp, 0x960
    ctx->pc = 0x2a9120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
    // 0x2a9124: 0x26570014  addiu       $s7, $s2, 0x14
    ctx->pc = 0x2a9124u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2a9128: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2a9128u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a912c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a912cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9130:
    // 0x2a9130: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2a9134: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2a9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9138: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2a9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a913c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a913cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9140: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9144: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a9144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a9148: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2a9148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a914c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a914cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a9150: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2a9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2a9154: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x2a9154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a9158: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a9158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a915c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2a915cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a9160: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2a9160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2a9164: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2a9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9168: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x2a9168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x2a916c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2a916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a9170: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2a9170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2a9174: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2a9174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2a9178: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a9178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a917c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a917cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a9180: 0xc785b468  lwc1        $f5, -0x4B98($gp)
    ctx->pc = 0x2a9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a9184: 0x4604b882  mul.s       $f2, $f23, $f4
    ctx->pc = 0x2a9184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
    // 0x2a9188: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x2a9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2a918c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a918cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a9190: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x2a9190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2a9194: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2a9194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2a9198: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2a9198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2a919c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a919cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2a91a0: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x2a91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a91a4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2a91a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2a91a8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a91a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a91ac: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2a91acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2a91b0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2a91b4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a91b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a91b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a91b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a91bc: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a91bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a91c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a91c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a91c4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a91c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a91c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a91c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a91cc: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2a91ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a91d0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a91d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a91d4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2a91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2a91d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a91d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a91dc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2a91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2a91e0: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x2a91e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2a91e4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2a91e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a91e8: 0x0  nop
    ctx->pc = 0x2a91e8u;
    // NOP
    // 0x2a91ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A91ECu;
    {
        const bool branch_taken_0x2a91ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91ECu;
        // 0x2a91f0: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91ec) {
            ctx->pc = 0x2A9204u;
            goto label_2a9204;
        }
    }
    ctx->pc = 0x2A91F4u;
    // 0x2a91f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a91f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2a91f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91fc: 0xc0aa19c  jal         func_2A8670
    ctx->pc = 0x2A91FCu;
    SET_GPR_U32(ctx, 31, 0x2A9204u);
    ctx->pc = 0x2A9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A91FCu;
    // 0x2a9200: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8670u, 0x2A91FCu, 0x2A9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9204u;
label_2a9204:
    // 0x2a9204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a9208: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a9208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a920c: 0x26f7001c  addiu       $s7, $s7, 0x1C
    ctx->pc = 0x2a920cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x2a9210: 0x26d6001c  addiu       $s6, $s6, 0x1C
    ctx->pc = 0x2a9210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x2a9214: 0x2a0200c8  slti        $v0, $s0, 0xC8
    ctx->pc = 0x2a9214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2a9218: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2A9218u;
    {
        const bool branch_taken_0x2a9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9218u;
        // 0x2a921c: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9218) {
            ctx->pc = 0x2A9130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9130;
        }
    }
    ctx->pc = 0x2A9220u;
label_2a9220:
    // 0x2a9220: 0xc094fe0  jal         func_253F80
    ctx->pc = 0x2A9220u;
    SET_GPR_U32(ctx, 31, 0x2A9228u);
    ctx->pc = 0x2A9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9220u;
    // 0x2a9224: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F80u, 0x2A9220u, 0x2A9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9228u;
label_2a9228:
    // 0x2a9228: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2A9228u;
    {
        const bool branch_taken_0x2a9228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9228u;
        // 0x2a922c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9228) {
            ctx->pc = 0x2A94A4u;
            goto label_2a94a4;
        }
    }
    ctx->pc = 0x2A9230u;
    // 0x2a9230: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a9230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a9234: 0x2451a710  addiu       $s1, $v0, -0x58F0
    ctx->pc = 0x2a9234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
    // 0x2a9238: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a923c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2a923cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2a9240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9244: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x2a9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a9248: 0xafa20fc0  sw          $v0, 0xFC0($sp)
    ctx->pc = 0x2a9248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4032), GPR_U32(ctx, 2));
    // 0x2a924c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9258: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x2a9258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a925c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2a925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2a9260: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a9260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a9264: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x2a9264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a9268: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2a9268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a926c: 0x27be0c80  addiu       $fp, $sp, 0xC80
    ctx->pc = 0x2a926cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 3200));
    // 0x2a9270: 0x24629668  addiu       $v0, $v1, -0x6998
    ctx->pc = 0x2a9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940264));
    // 0x2a9274: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2a9274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a9278: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2a9278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a927c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2a927cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A9670u));
    // 0x2a9280: 0xb3a40fb7  sdl         $a0, 0xFB7($sp)
    ctx->pc = 0x2a9280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9284: 0xb7a40fb0  sdr         $a0, 0xFB0($sp)
    ctx->pc = 0x2a9284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4016); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9288: 0xafa50fb8  sw          $a1, 0xFB8($sp)
    ctx->pc = 0x2a9288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4024), GPR_U32(ctx, 5));
    // 0x2a928c: 0x27b70c84  addiu       $s7, $sp, 0xC84
    ctx->pc = 0x2a928cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 3204));
    // 0x2a9290: 0x27b60c88  addiu       $s6, $sp, 0xC88
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 3208));
    // 0x2a9294: 0x27b30ee0  addiu       $s3, $sp, 0xEE0
    ctx->pc = 0x2a9294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 3808));
    // 0x2a9298: 0x27b20960  addiu       $s2, $sp, 0x960
    ctx->pc = 0x2a9298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
    // 0x2a929c: 0x0  nop
    ctx->pc = 0x2a929cu;
    // NOP
label_2a92a0:
    // 0x2a92a0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a92a4: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2a92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2a92a8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2a92a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a92ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a92b0: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x2a92b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a92b4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2a92b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2a92b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a92b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a92bc: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2a92bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2a92c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a92c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a92c4: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x2a92c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x2a92c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a92c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a92cc: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x2a92ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a92d0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2a92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2a92d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a92d8: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2a92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a92dc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2a92dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a92e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a92e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92e4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2a92e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a92e8: 0x3a54021  addu        $t0, $sp, $a1
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2a92ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a92ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a92f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a92f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a92f4: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x2a92f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a92f8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a92fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a92fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a9300: 0x2463a724  addiu       $v1, $v1, -0x58DC
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944548));
    // 0x2a9304: 0x4604a081  sub.s       $f2, $f20, $f4
    ctx->pc = 0x2a9304u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x2a9308: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2a9308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2a930c: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2a930cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2a9310: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a9314: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2a9314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2a9318: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2a9318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a931c: 0x4604c0c2  mul.s       $f3, $f24, $f4
    ctx->pc = 0x2a931cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[4]);
    // 0x2a9320: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2a9320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2a9324: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a9324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a9328: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2a9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a932c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a932cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a9330: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a9330u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a9334: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2a9334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2a9338: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x2a9338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x2a933c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2a933cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2a9340: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2a9340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2a9344: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2a9344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a9348: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a934c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x2a934cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a9350: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a9350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a9354: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2a9354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a9358: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a935c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a9360: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2a9360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2a9364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9368: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2a9368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2a936c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2a936cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a9370: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2a9370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9374: 0x0  nop
    ctx->pc = 0x2a9374u;
    // NOP
    // 0x2a9378: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9378u;
    {
        const bool branch_taken_0x2a9378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9378u;
        // 0x2a937c: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9378) {
            ctx->pc = 0x2A9394u;
            goto label_2a9394;
        }
    }
    ctx->pc = 0x2A9380u;
    // 0x2a9380: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a9380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2a9384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9388: 0xc0aa19c  jal         func_2A8670
    ctx->pc = 0x2A9388u;
    SET_GPR_U32(ctx, 31, 0x2A9390u);
    ctx->pc = 0x2A938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9388u;
    // 0x2a938c: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8670u, 0x2A9388u, 0x2A9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9390u;
label_2a9390:
    // 0x2a9390: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x2a9390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a9394:
    // 0x2a9394: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a9398: 0x2a0200c8  slti        $v0, $s0, 0xC8
    ctx->pc = 0x2a9398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2a939c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2A939Cu;
    {
        const bool branch_taken_0x2a939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A939Cu;
        // 0x2a93a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a939c) {
            ctx->pc = 0x2A92A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a92a0;
        }
    }
    ctx->pc = 0x2A93A4u;
    // 0x2a93a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a93a8: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x2a93a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x2a93ac: 0x2442bcf0  addiu       $v0, $v0, -0x4310
    ctx->pc = 0x2a93acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950128));
    // 0x2a93b0: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x2a93b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a93b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93b8: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x2a93bc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2a93bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2a93c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a93c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a93c4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2a93c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a93c8: 0x4600aa46  mov.s       $f9, $f21
    ctx->pc = 0x2a93c8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[21]);
    // 0x2a93cc: 0xc7878e58  lwc1        $f7, -0x71A8($gp)
    ctx->pc = 0x2a93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a93d0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2a93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2a93d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a93d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93d8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2a93d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93dc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2a93dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a93e0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2a93e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a93e4: 0x354a55ff  ori         $t2, $t2, 0x55FF
    ctx->pc = 0x2a93e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)22015);
    // 0x2a93e8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2a93e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2a93ec: 0x24100031  addiu       $s0, $zero, 0x31
    ctx->pc = 0x2a93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2a93f0:
    // 0x2a93f0: 0xc485fffc  lwc1        $f5, -0x4($a0)
    ctx->pc = 0x2a93f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a93f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93f8: 0x46055081  sub.s       $f2, $f10, $f5
    ctx->pc = 0x2a93f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x2a93fc: 0xc484fff4  lwc1        $f4, -0xC($a0)
    ctx->pc = 0x2a93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9400: 0x46004041  sub.s       $f1, $f8, $f0
    ctx->pc = 0x2a9400u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2a9404: 0xc483fff8  lwc1        $f3, -0x8($a0)
    ctx->pc = 0x2a9404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9408: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2a9408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a940c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a940cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a9410: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a9410u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a9414: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2a9414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a9418: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2a9418u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2a941c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2a941cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2a9420: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x2a9420u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a9424: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x2a9424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a9428: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a9428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a942c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a942cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a9430: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9430u;
    {
        const bool branch_taken_0x2a9430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9430u;
        // 0x2a9434: 0xe5050000  swc1        $f5, 0x0($t0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9430) {
            ctx->pc = 0x2A9444u;
            goto label_2a9444;
        }
    }
    ctx->pc = 0x2A9438u;
    // 0x2a9438: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2a9438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2a943c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A943Cu;
    {
        const bool branch_taken_0x2a943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A943Cu;
        // 0x2a9440: 0x4a1025  or          $v0, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a943c) {
            ctx->pc = 0x2A9454u;
            goto label_2a9454;
        }
    }
    ctx->pc = 0x2A9444u;
label_2a9444:
    // 0x2a9444: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a9448: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2a9448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2a944c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a9450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a9454:
    // 0x2a9454: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2a9454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2a9458: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a9458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a945c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9460: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2a9460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2a9464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9468: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a946c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a946cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9470: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a9470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9474: 0x0  nop
    ctx->pc = 0x2a9474u;
    // NOP
    // 0x2a9478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9478u;
    {
        const bool branch_taken_0x2a9478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9478u;
        // 0x2a947c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9478) {
            ctx->pc = 0x2A9488u;
            goto label_2a9488;
        }
    }
    ctx->pc = 0x2A9480u;
    // 0x2a9480: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9484: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2a9488:
    // 0x2a9488: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2a9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2a948c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a9490: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x2a9490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2a9494: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2a9494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2a9498: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a9498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a949c: 0x601ffd4  bgez        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2A949Cu;
    {
        const bool branch_taken_0x2a949c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A949Cu;
        // 0x2a94a0: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a949c) {
            ctx->pc = 0x2A93F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a93f0;
        }
    }
    ctx->pc = 0x2A94A4u;
label_2a94a4:
    // 0x2a94a4: 0xc094fe0  jal         func_253F80
    ctx->pc = 0x2A94A4u;
    SET_GPR_U32(ctx, 31, 0x2A94ACu);
    ctx->pc = 0x2A94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94A4u;
    // 0x2a94a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F80u, 0x2A94A4u, 0x2A94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94ACu;
label_2a94ac:
    // 0x2a94ac: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2A94ACu;
    {
        const bool branch_taken_0x2a94ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94ACu;
        // 0x2a94b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94ac) {
            ctx->pc = 0x2A9628u;
            goto label_2a9628;
        }
    }
    ctx->pc = 0x2A94B4u;
    // 0x2a94b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a94b8: 0x2452a710  addiu       $s2, $v0, -0x58F0
    ctx->pc = 0x2a94b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
    // 0x2a94bc: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2a94bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2a94c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a94c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a94c4: 0x24669678  addiu       $a2, $v1, -0x6988
    ctx->pc = 0x2a94c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940280));
    // 0x2a94c8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a94c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a94cc: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a94ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a94d0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2a94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9680u));
    // 0x2a94d4: 0xb3a20fb7  sdl         $v0, 0xFB7($sp)
    ctx->pc = 0x2a94d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a94d8: 0xb7a20fb0  sdr         $v0, 0xFB0($sp)
    ctx->pc = 0x2a94d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4016); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a94dc: 0xafa40fb8  sw          $a0, 0xFB8($sp)
    ctx->pc = 0x2a94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4024), GPR_U32(ctx, 4));
    // 0x2a94e0: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x2a94e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2a94e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a94e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a94e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a94ec: 0xafa20fc0  sw          $v0, 0xFC0($sp)
    ctx->pc = 0x2a94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4032), GPR_U32(ctx, 2));
    // 0x2a94f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a94f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94f4: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a94f8: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x2a94f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a94fc: 0x27b10960  addiu       $s1, $sp, 0x960
    ctx->pc = 0x2a94fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_2a9500:
    // 0x2a9500: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2a9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a9504: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2a9504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2a9508: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x2a9508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a950c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9514: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x2a9514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a9518: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x2a9518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a951c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x2a951cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2a9520: 0x460001c0  add.s       $f7, $f0, $f0
    ctx->pc = 0x2a9520u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a9524: 0x46143834  c.lt.s      $f7, $f20
    ctx->pc = 0x2a9524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9528: 0x0  nop
    ctx->pc = 0x2a9528u;
    // NOP
    // 0x2a952c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A952Cu;
    {
        const bool branch_taken_0x2a952c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a952c) {
            ctx->pc = 0x2A9530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A952Cu;
            // 0x2a9530: 0x460039c7  neg.s       $f7, $f7 (Delay Slot)
            ctx->f[7] = FPU_NEG_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9534u;
            goto label_2a9534;
        }
    }
    ctx->pc = 0x2A9534u;
label_2a9534:
    // 0x2a9534: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x2a9534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2a9538: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2a9538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a953c: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2a953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a9540: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x2a9544: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9548: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a9548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a954c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9550: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2a9550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9554: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2a9554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2a9558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a955c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2a955cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2a9560: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x2a9560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x2a9564: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2a9564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a9568: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a956c: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x2a956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x2a9570: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a9570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a9574: 0x4608a802  mul.s       $f0, $f21, $f8
    ctx->pc = 0x2a9574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
    // 0x2a9578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a957c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2a957cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a9580: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2a9580u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2a9584: 0xc7818e5c  lwc1        $f1, -0x71A4($gp)
    ctx->pc = 0x2a9584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9588: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x2a9588u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x2a958c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2a958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2a9590: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2a9590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2a9594: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x2a9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a9598: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a9598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a959c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2a959cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2a95a0: 0x46074901  sub.s       $f4, $f9, $f7
    ctx->pc = 0x2a95a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x2a95a4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2a95a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a95a8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2a95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2a95ac: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2a95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2a95b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a95b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a95b4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2a95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a95b8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a95b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a95bc: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2a95bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2a95c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a95c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a95c4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a95c8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2a95cc: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2a95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a95d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a95d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a95d4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2a95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2a95d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a95d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a95dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a95dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a95e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a95e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a95e4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a95e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a95e8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a95e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a95ec: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2a95ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2a95f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a95f4: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x2a95f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a95f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a95f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a95fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a9600: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9600u;
    {
        const bool branch_taken_0x2a9600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9600u;
        // 0x2a9604: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9600) {
            ctx->pc = 0x2A9618u;
            goto label_2a9618;
        }
    }
    ctx->pc = 0x2A9608u;
    // 0x2a9608: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2a9608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2a960c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9610: 0xc0aa19c  jal         func_2A8670
    ctx->pc = 0x2A9610u;
    SET_GPR_U32(ctx, 31, 0x2A9618u);
    ctx->pc = 0x2A9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9610u;
    // 0x2a9614: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8670u, 0x2A9610u, 0x2A9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9618u;
label_2a9618:
    // 0x2a9618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a961c: 0x2a0200c8  slti        $v0, $s0, 0xC8
    ctx->pc = 0x2a961cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2a9620: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2A9620u;
    {
        const bool branch_taken_0x2a9620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9620u;
        // 0x2a9624: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9620) {
            ctx->pc = 0x2A9500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9500;
        }
    }
    ctx->pc = 0x2A9628u;
label_2a9628:
    // 0x2a9628: 0x8fa20fc0  lw          $v0, 0xFC0($sp)
    ctx->pc = 0x2a9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4032)));
    // 0x2a962c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A962Cu;
    {
        const bool branch_taken_0x2a962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A962Cu;
        // 0x2a9630: 0xdfbf1060  ld          $ra, 0x1060($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a962c) {
            ctx->pc = 0x2A969Cu;
            goto label_2a969c;
        }
    }
    ctx->pc = 0x2A9634u;
    // 0x2a9634: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A9634u;
    SET_GPR_U32(ctx, 31, 0x2A963Cu);
    ctx->pc = 0x2A9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9634u;
    // 0x2a9638: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A9634u, 0x2A963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A963Cu;
label_2a963c:
    // 0x2a963c: 0x8f84b338  lw          $a0, -0x4CC8($gp)
    ctx->pc = 0x2a963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947640)));
    // 0x2a9640: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A9640u;
    SET_GPR_U32(ctx, 31, 0x2A9648u);
    ctx->pc = 0x2A9644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9640u;
    // 0x2a9644: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A9640u, 0x2A9648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9648u;
label_2a9648:
    // 0x2a9648: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A9648u;
    SET_GPR_U32(ctx, 31, 0x2A9650u);
    ctx->pc = 0x2A964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9648u;
    // 0x2a964c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A9648u, 0x2A9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9650u;
label_2a9650:
    // 0x2a9650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9654: 0x27a50960  addiu       $a1, $sp, 0x960
    ctx->pc = 0x2a9654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
    // 0x2a9658: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2a9658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a965c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a9660: 0xc0aa2d2  jal         func_2A8B48
    ctx->pc = 0x2A9660u;
    SET_GPR_U32(ctx, 31, 0x2A9668u);
    ctx->pc = 0x2A9664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9660u;
    // 0x2a9664: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B48u, 0x2A9660u, 0x2A9668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9668u;
label_2a9668:
    // 0x2a9668: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9668u;
    {
        const bool branch_taken_0x2a9668 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9668) {
            ctx->pc = 0x2A9690u;
            goto label_2a9690;
        }
    }
    ctx->pc = 0x2A9670u;
    // 0x2a9670: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A9670u;
    SET_GPR_U32(ctx, 31, 0x2A9678u);
    ctx->pc = 0x2A9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9670u;
    // 0x2a9674: 0x8f84b33c  lw          $a0, -0x4CC4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A9670u, 0x2A9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9678u;
label_2a9678:
    // 0x2a9678: 0x27a40c80  addiu       $a0, $sp, 0xC80
    ctx->pc = 0x2a9678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3200));
    // 0x2a967c: 0x27a50ee0  addiu       $a1, $sp, 0xEE0
    ctx->pc = 0x2a967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3808));
    // 0x2a9680: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2a9680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a9684: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a9684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a9688: 0xc0aa2d2  jal         func_2A8B48
    ctx->pc = 0x2A9688u;
    SET_GPR_U32(ctx, 31, 0x2A9690u);
    ctx->pc = 0x2A968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9688u;
    // 0x2a968c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B48u, 0x2A9688u, 0x2A9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9690u;
label_2a9690:
    // 0x2a9690: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A9690u;
    SET_GPR_U32(ctx, 31, 0x2A9698u);
    ctx->pc = 0x2A9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9690u;
    // 0x2a9694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A9690u, 0x2A9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9698u;
label_2a9698:
    // 0x2a9698: 0xdfbf1060  ld          $ra, 0x1060($sp)
    ctx->pc = 0x2a9698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4192)));
label_2a969c:
    // 0x2a969c: 0xdfbe1050  ld          $fp, 0x1050($sp)
    ctx->pc = 0x2a969cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x2a96a0: 0xdfb71040  ld          $s7, 0x1040($sp)
    ctx->pc = 0x2a96a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x2a96a4: 0xdfb61030  ld          $s6, 0x1030($sp)
    ctx->pc = 0x2a96a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x2a96a8: 0xdfb51020  ld          $s5, 0x1020($sp)
    ctx->pc = 0x2a96a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x2a96ac: 0xdfb41010  ld          $s4, 0x1010($sp)
    ctx->pc = 0x2a96acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x2a96b0: 0xdfb31000  ld          $s3, 0x1000($sp)
    ctx->pc = 0x2a96b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x2a96b4: 0xdfb20ff0  ld          $s2, 0xFF0($sp)
    ctx->pc = 0x2a96b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 4080)));
    // 0x2a96b8: 0xdfb10fe0  ld          $s1, 0xFE0($sp)
    ctx->pc = 0x2a96b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 4064)));
    // 0x2a96bc: 0xdfb00fd0  ld          $s0, 0xFD0($sp)
    ctx->pc = 0x2a96bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4048)));
    // 0x2a96c0: 0xc7b81090  lwc1        $f24, 0x1090($sp)
    ctx->pc = 0x2a96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a96c4: 0xc7b71088  lwc1        $f23, 0x1088($sp)
    ctx->pc = 0x2a96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a96c8: 0xc7b61080  lwc1        $f22, 0x1080($sp)
    ctx->pc = 0x2a96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a96cc: 0xc7b51078  lwc1        $f21, 0x1078($sp)
    ctx->pc = 0x2a96ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a96d0: 0xc7b41070  lwc1        $f20, 0x1070($sp)
    ctx->pc = 0x2a96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a96d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96D4u;
        // 0x2a96d8: 0x27bd10a0  addiu       $sp, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A96D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A96DCu;
}
