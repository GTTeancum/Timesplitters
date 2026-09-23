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

// Function: updateShotgunReload
// Address: 0x291d38 - 0x292118
void updateShotgunReload_0x291d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateShotgunReload_0x291d38");
#endif

    switch (ctx->pc) {
        case 0x291dc0u: goto label_291dc0;
        case 0x291de4u: goto label_291de4;
        case 0x291df4u: goto label_291df4;
        case 0x291e14u: goto label_291e14;
        case 0x291e24u: goto label_291e24;
        case 0x291ed4u: goto label_291ed4;
        case 0x291f20u: goto label_291f20;
        case 0x291f78u: goto label_291f78;
        case 0x291f88u: goto label_291f88;
        case 0x291f94u: goto label_291f94;
        case 0x292058u: goto label_292058;
        case 0x292064u: goto label_292064;
        case 0x292070u: goto label_292070;
        default: break;
    }

    ctx->pc = 0x291d38u;

    // 0x291d38: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x291d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x291d3c: 0xffb70150  sd          $s7, 0x150($sp)
    ctx->pc = 0x291d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 23));
    // 0x291d40: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x291d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x291d44: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x291d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
    // 0x291d48: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d4c: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x291d4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x291d50: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x291d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x291d54: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x291d54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x291d58: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x291d58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x291d5c: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x291d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x291d60: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x291d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x291d64: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x291d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
    // 0x291d68: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x291d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x291d6c: 0xffb100f0  sd          $s1, 0xF0($sp)
    ctx->pc = 0x291d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
    // 0x291d70: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x291d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x291d74: 0xc7958bb8  lwc1        $f21, -0x7448($gp)
    ctx->pc = 0x291d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x291d78: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x291d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x291d7c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x291d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x291d80: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x291d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x291d84: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x291d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x291d88: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x291d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x291d8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291d90: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x291d90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x291d94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x291d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291d98: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x291d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x291d9c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x291d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x291da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291da4: 0xa2b823  subu        $s7, $a1, $v0
    ctx->pc = 0x291da4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x291da8: 0x8ef00048  lw          $s0, 0x48($s7)
    ctx->pc = 0x291da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x291dac: 0x26150024  addiu       $s5, $s0, 0x24
    ctx->pc = 0x291dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x291db0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x291db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291db4: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x291db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291db8: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291DB8u;
    SET_GPR_U32(ctx, 31, 0x291DC0u);
    ctx->pc = 0x291DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DB8u;
    // 0x291dbc: 0xc6ae0008  lwc1        $f14, 0x8($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291DB8u, 0x291DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DC0u;
label_291dc0:
    // 0x291dc0: 0xc6cc0088  lwc1        $f12, 0x88($s6)
    ctx->pc = 0x291dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291dc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dc8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291dc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291dcc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x291dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x291dd0: 0x0  nop
    ctx->pc = 0x291dd0u;
    // NOP
    // 0x291dd4: 0x0  nop
    ctx->pc = 0x291dd4u;
    // NOP
    // 0x291dd8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x291dd8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x291ddc: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291DDCu;
    SET_GPR_U32(ctx, 31, 0x291DE4u);
    ctx->pc = 0x291DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DDCu;
    // 0x291de0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291DDCu, 0x291DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DE4u;
label_291de4:
    // 0x291de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dec: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291DECu;
    SET_GPR_U32(ctx, 31, 0x291DF4u);
    ctx->pc = 0x291DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DECu;
    // 0x291df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291DECu, 0x291DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DF4u;
label_291df4:
    // 0x291df4: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x291df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291df8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dfc: 0xc6ae0008  lwc1        $f14, 0x8($s5)
    ctx->pc = 0x291dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291e00: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x291e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291e04: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x291e04u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x291e08: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x291e08u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x291e0c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x291E0Cu;
    SET_GPR_U32(ctx, 31, 0x291E14u);
    ctx->pc = 0x291E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E0Cu;
    // 0x291e10: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x291E0Cu, 0x291E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E14u;
label_291e14:
    // 0x291e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x291e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e1c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x291E1Cu;
    SET_GPR_U32(ctx, 31, 0x291E24u);
    ctx->pc = 0x291E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E1Cu;
    // 0x291e20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x291E1Cu, 0x291E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E24u;
label_291e24:
    // 0x291e24: 0x8ec4008c  lw          $a0, 0x8C($s6)
    ctx->pc = 0x291e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x291e28: 0x108000ae  beqz        $a0, . + 4 + (0xAE << 2)
    ctx->pc = 0x291E28u;
    {
        const bool branch_taken_0x291e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E28u;
        // 0x291e2c: 0xdfbf0160  ld          $ra, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e28) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291E30u;
    // 0x291e30: 0x8ec50090  lw          $a1, 0x90($s6)
    ctx->pc = 0x291e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x291e34: 0x10a000ab  beqz        $a1, . + 4 + (0xAB << 2)
    ctx->pc = 0x291E34u;
    {
        const bool branch_taken_0x291e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E34u;
        // 0x291e38: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e34) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291E3Cu;
    // 0x291e3c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x291e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x291e40: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x291E40u;
    {
        const bool branch_taken_0x291e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291e40) {
            ctx->pc = 0x291E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291E40u;
            // 0x291e44: 0xc6cc0088  lwc1        $f12, 0x88($s6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291EACu;
            goto label_291eac;
        }
    }
    ctx->pc = 0x291E48u;
    // 0x291e48: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x291e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e4c: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x291e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291e50: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x291e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291e54: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x291e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291e58: 0xc4840040  lwc1        $f4, 0x40($a0)
    ctx->pc = 0x291e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291e5c: 0xc4850044  lwc1        $f5, 0x44($a0)
    ctx->pc = 0x291e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x291e60: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x291e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x291e64: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x291e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x291e68: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x291e68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x291e6c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x291e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x291e70: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x291e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x291e74: 0xe4820038  swc1        $f2, 0x38($a0)
    ctx->pc = 0x291e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x291e78: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x291e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e7c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x291e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291e80: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x291e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291e84: 0xc4a3003c  lwc1        $f3, 0x3C($a1)
    ctx->pc = 0x291e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291e88: 0xc4a40040  lwc1        $f4, 0x40($a1)
    ctx->pc = 0x291e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291e8c: 0xc4a50044  lwc1        $f5, 0x44($a1)
    ctx->pc = 0x291e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x291e90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x291e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x291e94: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x291e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x291e98: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x291e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x291e9c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x291e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x291ea0: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x291ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x291ea4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x291EA4u;
    {
        const bool branch_taken_0x291ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EA4u;
        // 0x291ea8: 0xe4a20038  swc1        $f2, 0x38($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ea4) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291EACu;
label_291eac:
    // 0x291eac: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x291eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291eb0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291eb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291eb4: 0x8ed3000c  lw          $s3, 0xC($s6)
    ctx->pc = 0x291eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x291eb8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x291eb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x291ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ec0: 0x0  nop
    ctx->pc = 0x291ec0u;
    // NOP
    // 0x291ec4: 0x0  nop
    ctx->pc = 0x291ec4u;
    // NOP
    // 0x291ec8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x291ec8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x291ecc: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291ECCu;
    SET_GPR_U32(ctx, 31, 0x291ED4u);
    ctx->pc = 0x291ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291ECCu;
    // 0x291ed0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291ECCu, 0x291ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291ED4u;
label_291ed4:
    // 0x291ed4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x291ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x291ed8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x291ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x291edc: 0xc44e0058  lwc1        $f14, 0x58($v0)
    ctx->pc = 0x291edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291ee0: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x291ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291ee4: 0xc44d004c  lwc1        $f13, 0x4C($v0)
    ctx->pc = 0x291ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291ee8: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x291ee8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x291eec: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x291eecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x291ef0: 0x46156b42  mul.s       $f13, $f13, $f21
    ctx->pc = 0x291ef0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x291ef4: 0x0  nop
    ctx->pc = 0x291ef4u;
    // NOP
    // 0x291ef8: 0x0  nop
    ctx->pc = 0x291ef8u;
    // NOP
    // 0x291efc: 0x46167383  div.s       $f14, $f14, $f22
    ctx->pc = 0x291efcu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[22];
    // 0x291f00: 0x0  nop
    ctx->pc = 0x291f00u;
    // NOP
    // 0x291f04: 0x0  nop
    ctx->pc = 0x291f04u;
    // NOP
    // 0x291f08: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x291f08u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x291f0c: 0x0  nop
    ctx->pc = 0x291f0cu;
    // NOP
    // 0x291f10: 0x0  nop
    ctx->pc = 0x291f10u;
    // NOP
    // 0x291f14: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x291f14u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[22];
    // 0x291f18: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x291F18u;
    SET_GPR_U32(ctx, 31, 0x291F20u);
    ctx->pc = 0x291F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F18u;
    // 0x291f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x291F18u, 0x291F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F20u;
label_291f20:
    // 0x291f20: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x291f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x291f24: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x291f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f30: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x291f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291f34: 0x24550024  addiu       $s5, $v0, 0x24
    ctx->pc = 0x291f34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x291f38: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x291f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x291f3c: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x291f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291f40: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x291f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x291f44: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x291f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291f48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x291f48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f4c: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x291f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x291f50: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x291f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x291f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x291f58: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x291f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x291f5c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x291f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291f60: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x291f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x291f64: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x291f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x291f68: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x291f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x291f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x291f70: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x291F70u;
    SET_GPR_U32(ctx, 31, 0x291F78u);
    ctx->pc = 0x291F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F70u;
    // 0x291f74: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x291F70u, 0x291F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F78u;
label_291f78:
    // 0x291f78: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x291f78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x291f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f80: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x291F80u;
    SET_GPR_U32(ctx, 31, 0x291F88u);
    ctx->pc = 0x291F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F80u;
    // 0x291f84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x291F80u, 0x291F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F88u;
label_291f88:
    // 0x291f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f8c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x291F8Cu;
    SET_GPR_U32(ctx, 31, 0x291F94u);
    ctx->pc = 0x291F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F8Cu;
    // 0x291f90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x291F8Cu, 0x291F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F94u;
label_291f94:
    // 0x291f94: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x291f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f9c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x291f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fa4: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x291fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291fa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x291fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291fac: 0x8ec2008c  lw          $v0, 0x8C($s6)
    ctx->pc = 0x291facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x291fb0: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x291fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x291fb4: 0x8ee60048  lw          $a2, 0x48($s7)
    ctx->pc = 0x291fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x291fb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x291fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x291fbc: 0x24d50024  addiu       $s5, $a2, 0x24
    ctx->pc = 0x291fbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x291fc0: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x291fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x291fc4: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x291fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291fc8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x291fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291fcc: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x291fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291fd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291fd8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x291fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x291fdc: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x291fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291fe0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x291fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291fe4: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x291fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291fe8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291fec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291ff0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x291ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x291ff4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x291ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291ff8: 0xc6c00088  lwc1        $f0, 0x88($s6)
    ctx->pc = 0x291ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ffc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x291ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292000: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x292000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x292004: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x292004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292008: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x292008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x29200c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x29200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292010: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x292010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x292014: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x292014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292018: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x292018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29201c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x29201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292020: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x292020u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x292024: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x292024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292028: 0x24d5000c  addiu       $s5, $a2, 0xC
    ctx->pc = 0x292028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x29202c: 0xe7a400d8  swc1        $f4, 0xD8($sp)
    ctx->pc = 0x29202cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x292030: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x292030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292034: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x292034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x292038: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x292038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29203c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x29203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292040: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x292040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x292044: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x292044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x292048: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x292048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29204c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x29204cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x292050: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x292050u;
    SET_GPR_U32(ctx, 31, 0x292058u);
    ctx->pc = 0x292054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292050u;
    // 0x292054: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x292050u, 0x292058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292058u;
label_292058:
    // 0x292058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x292058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29205c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x29205Cu;
    SET_GPR_U32(ctx, 31, 0x292064u);
    ctx->pc = 0x292060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29205Cu;
    // 0x292060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x29205Cu, 0x292064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292064u;
label_292064:
    // 0x292064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292068: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x292068u;
    SET_GPR_U32(ctx, 31, 0x292070u);
    ctx->pc = 0x29206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292068u;
    // 0x29206c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x292068u, 0x292070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292070u;
label_292070:
    // 0x292070: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x292070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292074: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x292074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292078: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x292078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29207c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29207cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x292080: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x292084: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x292084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x292088: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x292088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29208c: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x29208cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x292090: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x292090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292094: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x292094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292098: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x292098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29209c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29209cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2920a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2920a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2920a4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2920a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2920a8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2920a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920ac: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2920acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2920b0: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x2920b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2920b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2920b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2920b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2920b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2920bc: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x2920bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2920c0: 0xc6c20088  lwc1        $f2, 0x88($s6)
    ctx->pc = 0x2920c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2920c4: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x2920c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2920c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2920cc: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2920ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2920d0: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x2920d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2920d4: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x2920d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2920d8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x2920d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920dc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2920dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2920e0: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2920e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2920e4:
    // 0x2920e4: 0xdfb70150  ld          $s7, 0x150($sp)
    ctx->pc = 0x2920e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2920e8: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2920e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2920ec: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x2920ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2920f0: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2920f4: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x2920f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2920f8: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2920f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2920fc: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2920fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x292100: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x292100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x292104: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x292104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x292108: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x292108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29210c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x29210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292110: 0x3e00008  jr          $ra
    ctx->pc = 0x292110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292110u;
        // 0x292114: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292118u;
}
