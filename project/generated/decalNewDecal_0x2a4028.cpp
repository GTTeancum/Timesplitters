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

// Function: decalNewDecal
// Address: 0x2a4028 - 0x2a4758
void decalNewDecal_0x2a4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalNewDecal_0x2a4028");
#endif

    switch (ctx->pc) {
        case 0x2a4120u: goto label_2a4120;
        case 0x2a4138u: goto label_2a4138;
        case 0x2a4154u: goto label_2a4154;
        case 0x2a4198u: goto label_2a4198;
        case 0x2a41ccu: goto label_2a41cc;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a427cu: goto label_2a427c;
        case 0x2a42bcu: goto label_2a42bc;
        case 0x2a42f0u: goto label_2a42f0;
        case 0x2a4330u: goto label_2a4330;
        case 0x2a43a4u: goto label_2a43a4;
        case 0x2a43e4u: goto label_2a43e4;
        case 0x2a4418u: goto label_2a4418;
        case 0x2a4458u: goto label_2a4458;
        case 0x2a44ccu: goto label_2a44cc;
        case 0x2a450cu: goto label_2a450c;
        case 0x2a4540u: goto label_2a4540;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a45f4u: goto label_2a45f4;
        case 0x2a4634u: goto label_2a4634;
        case 0x2a4668u: goto label_2a4668;
        case 0x2a46a8u: goto label_2a46a8;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a4728u: goto label_2a4728;
        default: break;
    }

    ctx->pc = 0x2a4028u;

    // 0x2a4028: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2a4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2a402c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a402cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4030: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2a4030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2a4034: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x2a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
    // 0x2a4038: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x2a4038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x2a403c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4040: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2a4040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2a4044: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2a4044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4048: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x2a4048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x2a404c: 0x28820013  slti        $v0, $a0, 0x13
    ctx->pc = 0x2a404cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2a4050: 0xffb70160  sd          $s7, 0x160($sp)
    ctx->pc = 0x2a4050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 23));
    // 0x2a4054: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x2a4054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x2a4058: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x2a4058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x2a405c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2a405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2a4060: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x2a4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x2a4064: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2a4064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2a4068: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x2a4068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x2a406c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A406Cu;
    {
        const bool branch_taken_0x2a406c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A406Cu;
        // 0x2a4070: 0xffb000f0  sd          $s0, 0xF0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a406c) {
            ctx->pc = 0x2A407Cu;
            goto label_2a407c;
        }
    }
    ctx->pc = 0x2A4074u;
    // 0x2a4074: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2a4074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a4078: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2a4078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a407c:
    // 0x2a407c: 0x106001a8  beqz        $v1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2A407Cu;
    {
        const bool branch_taken_0x2a407c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A407Cu;
        // 0x2a4080: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a407c) {
            ctx->pc = 0x2A4720u;
            goto label_2a4720;
        }
    }
    ctx->pc = 0x2A4084u;
    // 0x2a4084: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A4084u;
    {
        const bool branch_taken_0x2a4084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4084u;
        // 0x2a4088: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4084) {
            ctx->pc = 0x2A40D0u;
            goto label_2a40d0;
        }
    }
    ctx->pc = 0x2A408Cu;
    // 0x2a408c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4090: 0xc7848de8  lwc1        $f4, -0x7218($gp)
    ctx->pc = 0x2a4090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a4094: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a4098: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a4098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a409c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a40a0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a40a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a40a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a40a8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2a40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a40ac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a40acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a40b0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2a40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a40b4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a40b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a40b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a40b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a40bc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2a40bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a40c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2a40c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a40c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a40c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a40c8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a40c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a40cc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2a40ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a40d0:
    // 0x2a40d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a40d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a40d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a40d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a40d8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2a40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a40dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2a40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a40e0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a40e4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a40e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a40e8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a40e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a40ec: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2a40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2a40f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a40f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40f4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2a40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2a40f8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2a40f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a4100: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a4100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4104: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a4104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a4108: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a410c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a4110: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a4114: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a4114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a4118: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A4118u;
    SET_GPR_U32(ctx, 31, 0x2A4120u);
    ctx->pc = 0x2A411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4118u;
    // 0x2a411c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A4118u, 0x2A4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4120u;
label_2a4120:
    // 0x2a4120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4124: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4124u;
    {
        const bool branch_taken_0x2a4124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4124u;
        // 0x2a4128: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4124) {
            ctx->pc = 0x2A4158u;
            goto label_2a4158;
        }
    }
    ctx->pc = 0x2A412Cu;
    // 0x2a412c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4130: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A4130u;
    SET_GPR_U32(ctx, 31, 0x2A4138u);
    ctx->pc = 0x2A4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4130u;
    // 0x2a4134: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A4130u, 0x2A4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4138u;
label_2a4138:
    // 0x2a4138: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2a4138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2a413c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2a413cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4140: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4148: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a4148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a414c: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A414Cu;
    SET_GPR_U32(ctx, 31, 0x2A4154u);
    ctx->pc = 0x2A4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A414Cu;
    // 0x2a4150: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A414Cu, 0x2A4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4154u;
label_2a4154:
    // 0x2a4154: 0x0  nop
    ctx->pc = 0x2a4154u;
    // NOP
label_2a4158:
    // 0x2a4158: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a4158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2a415c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a415cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4160: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a4160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4164: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a4168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a416c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a4170: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4174: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x2a4174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a4178: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a4178u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a417c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4180: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a4180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a4184: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a4184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a4188: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a4188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a418c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a4190: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A4190u;
    SET_GPR_U32(ctx, 31, 0x2A4198u);
    ctx->pc = 0x2A4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4190u;
    // 0x2a4194: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A4190u, 0x2A4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4198u;
label_2a4198:
    // 0x2a4198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a419c: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A419Cu;
    {
        const bool branch_taken_0x2a419c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A419Cu;
        // 0x2a41a0: 0x158080  sll         $s0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a419c) {
            ctx->pc = 0x2A427Cu;
            goto label_2a427c;
        }
    }
    ctx->pc = 0x2A41A4u;
    // 0x2a41a4: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a41a8: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a41ac: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a41b0: 0x3d09021  addu        $s2, $fp, $s0
    ctx->pc = 0x2a41b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2a41b4: 0x2f09821  addu        $s3, $s7, $s0
    ctx->pc = 0x2a41b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2a41b8: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x2a41b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2a41bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a41bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a41c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41c4: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A41C4u;
    SET_GPR_U32(ctx, 31, 0x2A41CCu);
    ctx->pc = 0x2A41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41C4u;
    // 0x2a41c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A41C4u, 0x2A41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41CCu;
label_2a41cc:
    // 0x2a41cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a41d0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a41d4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x2a41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x2a41d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a41d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a41dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41e0: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a41e4: 0x1aa0001d  blez        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A41E4u;
    {
        const bool branch_taken_0x2a41e4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2A41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41E4u;
        // 0x2a41e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41e4) {
            ctx->pc = 0x2A425Cu;
            goto label_2a425c;
        }
    }
    ctx->pc = 0x2A41ECu;
    // 0x2a41ec: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2a41ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a41f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a41f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a41f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41fc: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2a41fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4200: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a4200u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4204: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a4204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a4208:
    // 0x2a4208: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a420c: 0x5582000d  bnel        $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A420Cu;
    {
        const bool branch_taken_0x2a420c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a420c) {
            ctx->pc = 0x2A4210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A420Cu;
            // 0x2a4210: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4244u;
            goto label_2a4244;
        }
    }
    ctx->pc = 0x2A4214u;
    // 0x2a4214: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a4214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4218: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a421c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A421Cu;
    {
        const bool branch_taken_0x2a421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A421Cu;
        // 0x2a4220: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a421c) {
            ctx->pc = 0x2A4244u;
            goto label_2a4244;
        }
    }
    ctx->pc = 0x2A4224u;
    // 0x2a4224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4228: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a422c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A422Cu;
    {
        const bool branch_taken_0x2a422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a422c) {
            ctx->pc = 0x2A4244u;
            goto label_2a4244;
        }
    }
    ctx->pc = 0x2A4234u;
    // 0x2a4234: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4238: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a423c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A423Cu;
    {
        const bool branch_taken_0x2a423c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a423c) {
            ctx->pc = 0x2A4240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A423Cu;
            // 0x2a4240: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A425Cu;
            goto label_2a425c;
        }
    }
    ctx->pc = 0x2A4244u;
label_2a4244:
    // 0x2a4244: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a4244u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a4248: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a4248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a424c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a424cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a4250: 0xf5102a  slt         $v0, $a3, $s5
    ctx->pc = 0x2a4250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2a4254: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A4254u;
    {
        const bool branch_taken_0x2a4254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4254u;
        // 0x2a4258: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4254) {
            ctx->pc = 0x2A4208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4208;
        }
    }
    ctx->pc = 0x2A425Cu;
label_2a425c:
    // 0x2a425c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a4260: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4260u;
    {
        const bool branch_taken_0x2a4260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4260u;
        // 0x2a4264: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4260) {
            ctx->pc = 0x2A427Cu;
            goto label_2a427c;
        }
    }
    ctx->pc = 0x2A4268u;
    // 0x2a4268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a426c: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a426cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a4270: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a4274: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A4274u;
    SET_GPR_U32(ctx, 31, 0x2A427Cu);
    ctx->pc = 0x2A4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4274u;
    // 0x2a4278: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A4274u, 0x2A427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A427Cu;
label_2a427c:
    // 0x2a427c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a4280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4284: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a4284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4288: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a4288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a428c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a428cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4290: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a4290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a4294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4298: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x2a4298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a429c: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a42a0: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a42a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a42a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a42a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a42ac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a42acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a42b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a42b4: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A42B4u;
    SET_GPR_U32(ctx, 31, 0x2A42BCu);
    ctx->pc = 0x2A42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42B4u;
    // 0x2a42b8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A42B4u, 0x2A42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42BCu;
label_2a42bc:
    // 0x2a42bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a42bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42c0: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A42C0u;
    {
        const bool branch_taken_0x2a42c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42C0u;
        // 0x2a42c4: 0x158080  sll         $s0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42c0) {
            ctx->pc = 0x2A43A4u;
            goto label_2a43a4;
        }
    }
    ctx->pc = 0x2A42C8u;
    // 0x2a42c8: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2a42c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a42cc: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a42d0: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2a42d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a42d4: 0x3d09021  addu        $s2, $fp, $s0
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2a42d8: 0x2f09821  addu        $s3, $s7, $s0
    ctx->pc = 0x2a42d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2a42dc: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x2a42dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2a42e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a42e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a42e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42e8: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A42E8u;
    SET_GPR_U32(ctx, 31, 0x2A42F0u);
    ctx->pc = 0x2A42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42E8u;
    // 0x2a42ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A42E8u, 0x2A42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42F0u;
label_2a42f0:
    // 0x2a42f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a42f4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a42f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a42f8: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2a42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2a42fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a42fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4304: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a4308: 0x1aa0001e  blez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A4308u;
    {
        const bool branch_taken_0x2a4308 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2A430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4308u;
        // 0x2a430c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4308) {
            ctx->pc = 0x2A4384u;
            goto label_2a4384;
        }
    }
    ctx->pc = 0x2A4310u;
    // 0x2a4310: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2a4310u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a431c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a431cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4320: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2a4320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4324: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a4324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4328: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a4328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a432c: 0x0  nop
    ctx->pc = 0x2a432cu;
    // NOP
label_2a4330:
    // 0x2a4330: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a4334: 0x5582000d  bnel        $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4334u;
    {
        const bool branch_taken_0x2a4334 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4334) {
            ctx->pc = 0x2A4338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4334u;
            // 0x2a4338: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A436Cu;
            goto label_2a436c;
        }
    }
    ctx->pc = 0x2A433Cu;
    // 0x2a433c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4340: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a4344: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4344u;
    {
        const bool branch_taken_0x2a4344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4344u;
        // 0x2a4348: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4344) {
            ctx->pc = 0x2A436Cu;
            goto label_2a436c;
        }
    }
    ctx->pc = 0x2A434Cu;
    // 0x2a434c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4350: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a4354: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4354u;
    {
        const bool branch_taken_0x2a4354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4354) {
            ctx->pc = 0x2A436Cu;
            goto label_2a436c;
        }
    }
    ctx->pc = 0x2A435Cu;
    // 0x2a435c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4360: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a4364: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4364u;
    {
        const bool branch_taken_0x2a4364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4364) {
            ctx->pc = 0x2A4368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4364u;
            // 0x2a4368: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4384u;
            goto label_2a4384;
        }
    }
    ctx->pc = 0x2A436Cu;
label_2a436c:
    // 0x2a436c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a4370: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a4370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a4374: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a4374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a4378: 0xf5102a  slt         $v0, $a3, $s5
    ctx->pc = 0x2a4378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2a437c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A437Cu;
    {
        const bool branch_taken_0x2a437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A437Cu;
        // 0x2a4380: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a437c) {
            ctx->pc = 0x2A4330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4330;
        }
    }
    ctx->pc = 0x2A4384u;
label_2a4384:
    // 0x2a4384: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2a4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a4388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4388u;
    {
        const bool branch_taken_0x2a4388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4388u;
        // 0x2a438c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4388) {
            ctx->pc = 0x2A43A4u;
            goto label_2a43a4;
        }
    }
    ctx->pc = 0x2A4390u;
    // 0x2a4390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4394: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a4394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a4398: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a439c: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A439Cu;
    SET_GPR_U32(ctx, 31, 0x2A43A4u);
    ctx->pc = 0x2A43A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A439Cu;
    // 0x2a43a0: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A439Cu, 0x2A43A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43A4u;
label_2a43a4:
    // 0x2a43a4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2a43a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a43a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a43ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a43acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a43b0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a43b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a43b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43b8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a43bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a43bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43c0: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x2a43c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a43c4: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a43c8: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a43c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a43cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a43d0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a43d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a43d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a43d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a43dc: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A43DCu;
    SET_GPR_U32(ctx, 31, 0x2A43E4u);
    ctx->pc = 0x2A43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43DCu;
    // 0x2a43e0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A43DCu, 0x2A43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43E4u;
label_2a43e4:
    // 0x2a43e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a43e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43e8: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A43E8u;
    {
        const bool branch_taken_0x2a43e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43E8u;
        // 0x2a43ec: 0x158080  sll         $s0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43e8) {
            ctx->pc = 0x2A44CCu;
            goto label_2a44cc;
        }
    }
    ctx->pc = 0x2A43F0u;
    // 0x2a43f0: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2a43f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a43f4: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2a43f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a43f8: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2a43f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a43fc: 0x3d09021  addu        $s2, $fp, $s0
    ctx->pc = 0x2a43fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2a4400: 0x2f09821  addu        $s3, $s7, $s0
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2a4404: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x2a4404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2a4408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a440c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a440cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4410: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A4410u;
    SET_GPR_U32(ctx, 31, 0x2A4418u);
    ctx->pc = 0x2A4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4410u;
    // 0x2a4414: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A4410u, 0x2A4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4418u;
label_2a4418:
    // 0x2a4418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a441c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4420: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2a4420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2a4424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a442c: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2a442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a4430: 0x1aa0001e  blez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A4430u;
    {
        const bool branch_taken_0x2a4430 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2A4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4430u;
        // 0x2a4434: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4430) {
            ctx->pc = 0x2A44ACu;
            goto label_2a44ac;
        }
    }
    ctx->pc = 0x2A4438u;
    // 0x2a4438: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2a4438u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a443c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4440: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4444: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a4444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4448: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2a4448u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a444c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a444cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4450: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a4450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4454: 0x0  nop
    ctx->pc = 0x2a4454u;
    // NOP
label_2a4458:
    // 0x2a4458: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a445c: 0x5582000d  bnel        $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A445Cu;
    {
        const bool branch_taken_0x2a445c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a445c) {
            ctx->pc = 0x2A4460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A445Cu;
            // 0x2a4460: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4494u;
            goto label_2a4494;
        }
    }
    ctx->pc = 0x2A4464u;
    // 0x2a4464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a4464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4468: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a446c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A446Cu;
    {
        const bool branch_taken_0x2a446c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A446Cu;
        // 0x2a4470: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a446c) {
            ctx->pc = 0x2A4494u;
            goto label_2a4494;
        }
    }
    ctx->pc = 0x2A4474u;
    // 0x2a4474: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4478: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a447c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A447Cu;
    {
        const bool branch_taken_0x2a447c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a447c) {
            ctx->pc = 0x2A4494u;
            goto label_2a4494;
        }
    }
    ctx->pc = 0x2A4484u;
    // 0x2a4484: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4488: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a448c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A448Cu;
    {
        const bool branch_taken_0x2a448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a448c) {
            ctx->pc = 0x2A4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A448Cu;
            // 0x2a4490: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A44ACu;
            goto label_2a44ac;
        }
    }
    ctx->pc = 0x2A4494u;
label_2a4494:
    // 0x2a4494: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a4494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a4498: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a4498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a449c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a449cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a44a0: 0xf5102a  slt         $v0, $a3, $s5
    ctx->pc = 0x2a44a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2a44a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A44A4u;
    {
        const bool branch_taken_0x2a44a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44A4u;
        // 0x2a44a8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44a4) {
            ctx->pc = 0x2A4458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4458;
        }
    }
    ctx->pc = 0x2A44ACu;
label_2a44ac:
    // 0x2a44ac: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2a44b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A44B0u;
    {
        const bool branch_taken_0x2a44b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44B0u;
        // 0x2a44b4: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44b0) {
            ctx->pc = 0x2A44CCu;
            goto label_2a44cc;
        }
    }
    ctx->pc = 0x2A44B8u;
    // 0x2a44b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a44b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44bc: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a44c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a44c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a44c4: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A44C4u;
    SET_GPR_U32(ctx, 31, 0x2A44CCu);
    ctx->pc = 0x2A44C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44C4u;
    // 0x2a44c8: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A44C4u, 0x2A44CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44CCu;
label_2a44cc:
    // 0x2a44cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a44ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a44d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a44d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a44d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a44d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a44d8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a44dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a44dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44e0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a44e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a44e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a44e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44e8: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a44ec: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a44f0: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a44f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a44f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a44f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a44fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a4500: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a4500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a4504: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A4504u;
    SET_GPR_U32(ctx, 31, 0x2A450Cu);
    ctx->pc = 0x2A4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4504u;
    // 0x2a4508: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A4504u, 0x2A450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A450Cu;
label_2a450c:
    // 0x2a450c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a450cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4510: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A4510u;
    {
        const bool branch_taken_0x2a4510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4510u;
        // 0x2a4514: 0x158080  sll         $s0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4510) {
            ctx->pc = 0x2A45F4u;
            goto label_2a45f4;
        }
    }
    ctx->pc = 0x2A4518u;
    // 0x2a4518: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2a4518u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a451c: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2a451cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4520: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2a4520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4524: 0x3d09021  addu        $s2, $fp, $s0
    ctx->pc = 0x2a4524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2a4528: 0x2f09821  addu        $s3, $s7, $s0
    ctx->pc = 0x2a4528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2a452c: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x2a452cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2a4530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4538: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A4538u;
    SET_GPR_U32(ctx, 31, 0x2A4540u);
    ctx->pc = 0x2A453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4538u;
    // 0x2a453c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A4538u, 0x2A4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4540u;
label_2a4540:
    // 0x2a4540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4544: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a4544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4548: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2a4548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2a454c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4554: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2a4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a4558: 0x1aa0001e  blez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A4558u;
    {
        const bool branch_taken_0x2a4558 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2A455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4558u;
        // 0x2a455c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4558) {
            ctx->pc = 0x2A45D4u;
            goto label_2a45d4;
        }
    }
    ctx->pc = 0x2A4560u;
    // 0x2a4560: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2a4560u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4568: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a456c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a456cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4570: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2a4570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4574: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a4574u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4578: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a4578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a457c: 0x0  nop
    ctx->pc = 0x2a457cu;
    // NOP
label_2a4580:
    // 0x2a4580: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a4584: 0x5582000d  bnel        $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4584u;
    {
        const bool branch_taken_0x2a4584 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4584) {
            ctx->pc = 0x2A4588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4584u;
            // 0x2a4588: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A45BCu;
            goto label_2a45bc;
        }
    }
    ctx->pc = 0x2A458Cu;
    // 0x2a458c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4590: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2a4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a4594: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4594u;
    {
        const bool branch_taken_0x2a4594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4594u;
        // 0x2a4598: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4594) {
            ctx->pc = 0x2A45BCu;
            goto label_2a45bc;
        }
    }
    ctx->pc = 0x2A459Cu;
    // 0x2a459c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a45a0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a45a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A45A4u;
    {
        const bool branch_taken_0x2a45a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a45a4) {
            ctx->pc = 0x2A45BCu;
            goto label_2a45bc;
        }
    }
    ctx->pc = 0x2A45ACu;
    // 0x2a45ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a45acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a45b0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2a45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a45b4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A45B4u;
    {
        const bool branch_taken_0x2a45b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a45b4) {
            ctx->pc = 0x2A45B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A45B4u;
            // 0x2a45b8: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A45D4u;
            goto label_2a45d4;
        }
    }
    ctx->pc = 0x2A45BCu;
label_2a45bc:
    // 0x2a45bc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a45c0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a45c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a45c4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a45c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a45c8: 0xf5102a  slt         $v0, $a3, $s5
    ctx->pc = 0x2a45c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2a45cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A45CCu;
    {
        const bool branch_taken_0x2a45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45CCu;
        // 0x2a45d0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45cc) {
            ctx->pc = 0x2A4580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4580;
        }
    }
    ctx->pc = 0x2A45D4u;
label_2a45d4:
    // 0x2a45d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2a45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a45d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A45D8u;
    {
        const bool branch_taken_0x2a45d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45D8u;
        // 0x2a45dc: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45d8) {
            ctx->pc = 0x2A45F4u;
            goto label_2a45f4;
        }
    }
    ctx->pc = 0x2A45E0u;
    // 0x2a45e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a45e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45e4: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a45e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a45e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a45ec: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A45ECu;
    SET_GPR_U32(ctx, 31, 0x2A45F4u);
    ctx->pc = 0x2A45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45ECu;
    // 0x2a45f0: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A45ECu, 0x2A45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45F4u;
label_2a45f4:
    // 0x2a45f4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a45f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2a45f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a45f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a45fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a45fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4600: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2a4604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4608: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a4608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a460c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a460cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4610: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a4614: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2a4614u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a4618: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a461c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a461cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a4620: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a4620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a4624: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a4624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a4628: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a4628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a462c: 0xc09640e  jal         func_259038
    ctx->pc = 0x2A462Cu;
    SET_GPR_U32(ctx, 31, 0x2A4634u);
    ctx->pc = 0x2A4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A462Cu;
    // 0x2a4630: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2A462Cu, 0x2A4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4634u;
label_2a4634:
    // 0x2a4634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4638: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A4638u;
    {
        const bool branch_taken_0x2a4638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4638u;
        // 0x2a463c: 0x158080  sll         $s0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4638) {
            ctx->pc = 0x2A4728u;
            goto label_2a4728;
        }
    }
    ctx->pc = 0x2A4640u;
    // 0x2a4640: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4644: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2a4644u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4648: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2a4648u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a464c: 0x3d09021  addu        $s2, $fp, $s0
    ctx->pc = 0x2a464cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2a4650: 0x2f09821  addu        $s3, $s7, $s0
    ctx->pc = 0x2a4650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2a4654: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x2a4654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2a4658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a465c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4660: 0xc098dcc  jal         func_263730
    ctx->pc = 0x2A4660u;
    SET_GPR_U32(ctx, 31, 0x2A4668u);
    ctx->pc = 0x2A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4660u;
    // 0x2a4664: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263730u, 0x2A4660u, 0x2A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4668u;
label_2a4668:
    // 0x2a4668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a466c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a466cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4670: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2a4670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2a4674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a467c: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2a467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2a4680: 0x1aa0001e  blez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A4680u;
    {
        const bool branch_taken_0x2a4680 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4680u;
        // 0x2a4684: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4680) {
            ctx->pc = 0x2A46FCu;
            goto label_2a46fc;
        }
    }
    ctx->pc = 0x2A4688u;
    // 0x2a4688: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2a4688u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a468c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4690: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4694: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a4694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4698: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2a4698u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a469c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a469cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46a0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a46a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46a4: 0x0  nop
    ctx->pc = 0x2a46a4u;
    // NOP
label_2a46a8:
    // 0x2a46a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a46ac: 0x5582000d  bnel        $t4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A46ACu;
    {
        const bool branch_taken_0x2a46ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a46ac) {
            ctx->pc = 0x2A46B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A46ACu;
            // 0x2a46b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A46E4u;
            goto label_2a46e4;
        }
    }
    ctx->pc = 0x2A46B4u;
    // 0x2a46b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a46b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2a46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a46bc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A46BCu;
    {
        const bool branch_taken_0x2a46bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46BCu;
        // 0x2a46c0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46bc) {
            ctx->pc = 0x2A46E4u;
            goto label_2a46e4;
        }
    }
    ctx->pc = 0x2A46C4u;
    // 0x2a46c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a46c8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a46cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A46CCu;
    {
        const bool branch_taken_0x2a46cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a46cc) {
            ctx->pc = 0x2A46E4u;
            goto label_2a46e4;
        }
    }
    ctx->pc = 0x2A46D4u;
    // 0x2a46d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a46d8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a46dc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A46DCu;
    {
        const bool branch_taken_0x2a46dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a46dc) {
            ctx->pc = 0x2A46E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A46DCu;
            // 0x2a46e0: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A46FCu;
            goto label_2a46fc;
        }
    }
    ctx->pc = 0x2A46E4u;
label_2a46e4:
    // 0x2a46e4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a46e8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2a46ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a46ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2a46f0: 0xf5102a  slt         $v0, $a3, $s5
    ctx->pc = 0x2a46f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2a46f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A46F4u;
    {
        const bool branch_taken_0x2a46f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46F4u;
        // 0x2a46f8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46f4) {
            ctx->pc = 0x2A46A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a46a8;
        }
    }
    ctx->pc = 0x2A46FCu;
label_2a46fc:
    // 0x2a46fc: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2a46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a4700: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4700u;
    {
        const bool branch_taken_0x2a4700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4700u;
        // 0x2a4704: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4700) {
            ctx->pc = 0x2A4728u;
            goto label_2a4728;
        }
    }
    ctx->pc = 0x2A4708u;
    // 0x2a4708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a470c: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2a470cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2a4710: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A4710u;
    SET_GPR_U32(ctx, 31, 0x2A4718u);
    ctx->pc = 0x2A4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4710u;
    // 0x2a4714: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A4710u, 0x2A4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4718u;
label_2a4718:
    // 0x2a4718: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4718u;
    {
        const bool branch_taken_0x2a4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4718u;
        // 0x2a471c: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4718) {
            ctx->pc = 0x2A472Cu;
            goto label_2a472c;
        }
    }
    ctx->pc = 0x2A4720u;
label_2a4720:
    // 0x2a4720: 0xc0a8ef6  jal         func_2A3BD8
    ctx->pc = 0x2A4720u;
    SET_GPR_U32(ctx, 31, 0x2A4728u);
    ctx->pc = 0x2A4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4720u;
    // 0x2a4724: 0x8fa600c8  lw          $a2, 0xC8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3BD8u, 0x2A4720u, 0x2A4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4728u;
label_2a4728:
    // 0x2a4728: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2a4728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2a472c:
    // 0x2a472c: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x2a472cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a4730: 0xdfb70160  ld          $s7, 0x160($sp)
    ctx->pc = 0x2a4730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a4734: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x2a4734u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a4738: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x2a4738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a473c: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2a473cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a4740: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x2a4740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a4744: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2a4744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a4748: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x2a4748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a474c: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2a474cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a4750: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4750u;
        // 0x2a4754: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4758u;
}
