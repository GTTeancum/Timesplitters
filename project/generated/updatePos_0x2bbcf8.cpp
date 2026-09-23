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

// Function: updatePos
// Address: 0x2bbcf8 - 0x2bc5d0
void updatePos_0x2bbcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updatePos_0x2bbcf8");
#endif

    switch (ctx->pc) {
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdc4u: goto label_2bbdc4;
        case 0x2bbddcu: goto label_2bbddc;
        case 0x2bbdecu: goto label_2bbdec;
        case 0x2bbdf8u: goto label_2bbdf8;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf28u: goto label_2bbf28;
        case 0x2bbf54u: goto label_2bbf54;
        case 0x2bbf6cu: goto label_2bbf6c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc044u: goto label_2bc044;
        case 0x2bc11cu: goto label_2bc11c;
        case 0x2bc14cu: goto label_2bc14c;
        case 0x2bc1ccu: goto label_2bc1cc;
        case 0x2bc230u: goto label_2bc230;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc3e4u: goto label_2bc3e4;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc488u: goto label_2bc488;
        default: break;
    }

    ctx->pc = 0x2bbcf8u;

    // 0x2bbcf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2bbcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2bbcfc: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2bbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2bbd00: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2bbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bbd04: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2bbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2bbd08: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2bbd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2bbd0c: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2bbd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2bbd10: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2bbd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2bbd14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bbd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd18: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2bbd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2bbd1c: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2bbd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2bbd20: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2bbd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2bbd24: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2bbd24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bbd28: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x2bbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2bbd2c: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x2bbd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2bbd30: 0xc4a30080  lwc1        $f3, 0x80($a1)
    ctx->pc = 0x2bbd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbd34: 0x8e240a94  lw          $a0, 0xA94($s1)
    ctx->pc = 0x2bbd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2bbd38: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2bbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bbd3c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2bbd3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbd40: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2bbd40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bbd44: 0x30841000  andi        $a0, $a0, 0x1000
    ctx->pc = 0x2bbd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x2bbd48: 0xc4a20084  lwc1        $f2, 0x84($a1)
    ctx->pc = 0x2bbd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbd4c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2bbd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bbd50: 0x3a103  sra         $s4, $v1, 4
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bbd54: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x2bbd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbd58: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2BBD58u;
    {
        const bool branch_taken_0x2bbd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD58u;
        // 0x2bbd5c: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd58) {
            ctx->pc = 0x2BBF9Cu;
            goto label_2bbf9c;
        }
    }
    ctx->pc = 0x2BBD60u;
    // 0x2bbd60: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2bbd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbd64: 0xc7828ffc  lwc1        $f2, -0x7004($gp)
    ctx->pc = 0x2bbd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbd68: 0xc6210b30  lwc1        $f1, 0xB30($s1)
    ctx->pc = 0x2bbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbd6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bbd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbd70: 0xc7829000  lwc1        $f2, -0x7000($gp)
    ctx->pc = 0x2bbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbd74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bbd74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bbd78: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bbd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbd7c: 0x0  nop
    ctx->pc = 0x2bbd7cu;
    // NOP
    // 0x2bbd80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBD80u;
    {
        const bool branch_taken_0x2bbd80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD80u;
        // 0x2bbd84: 0xe6210b30  swc1        $f1, 0xB30($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd80) {
            ctx->pc = 0x2BBD8Cu;
            goto label_2bbd8c;
        }
    }
    ctx->pc = 0x2BBD88u;
    // 0x2bbd88: 0xe6220b30  swc1        $f2, 0xB30($s1)
    ctx->pc = 0x2bbd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2864), bits); }
label_2bbd8c:
    // 0x2bbd8c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2bbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2bbd90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bbd90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd94: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2bbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2bbd98: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BBD98u;
    SET_GPR_U32(ctx, 31, 0x2BBDA0u);
    ctx->pc = 0x2BBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD98u;
    // 0x2bbd9c: 0xc62c0b3c  lwc1        $f12, 0xB3C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BBD98u, 0x2BBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDA0u;
label_2bbda0:
    // 0x2bbda0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbda4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bbda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbda8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BBDA8u;
    SET_GPR_U32(ctx, 31, 0x2BBDB0u);
    ctx->pc = 0x2BBDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDA8u;
    // 0x2bbdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BBDA8u, 0x2BBDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDB0u;
label_2bbdb0:
    // 0x2bbdb0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBDB0u;
    {
        const bool branch_taken_0x2bbdb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bbdb0) {
            ctx->pc = 0x2BBDC8u;
            goto label_2bbdc8;
        }
    }
    ctx->pc = 0x2BBDB8u;
    // 0x2bbdb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bbdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbdbc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BBDBCu;
    SET_GPR_U32(ctx, 31, 0x2BBDC4u);
    ctx->pc = 0x2BBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDBCu;
    // 0x2bbdc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BBDBCu, 0x2BBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDC4u;
label_2bbdc4:
    // 0x2bbdc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbdc8:
    // 0x2bbdc8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bbdcc: 0xdc259cb0  ld          $a1, -0x6350($at)
    ctx->pc = 0x2bbdccu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CB0u));
    // 0x2bbdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbdd4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2BBDD4u;
    SET_GPR_U32(ctx, 31, 0x2BBDDCu);
    ctx->pc = 0x2BBDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDD4u;
    // 0x2bbdd8: 0x26530030  addiu       $s3, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2BBDD4u, 0x2BBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDDCu;
label_2bbddc:
    // 0x2bbddc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bbddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bbde0: 0xdc259cb8  ld          $a1, -0x6348($at)
    ctx->pc = 0x2bbde0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CB8u));
    // 0x2bbde4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BBDE4u;
    SET_GPR_U32(ctx, 31, 0x2BBDECu);
    ctx->pc = 0x2BBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDE4u;
    // 0x2bbde8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BBDE4u, 0x2BBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDECu;
label_2bbdec:
    // 0x2bbdec: 0xc78cb468  lwc1        $f12, -0x4B98($gp)
    ctx->pc = 0x2bbdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbdf0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BBDF0u;
    SET_GPR_U32(ctx, 31, 0x2BBDF8u);
    ctx->pc = 0x2BBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDF0u;
    // 0x2bbdf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BBDF0u, 0x2BBDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDF8u;
label_2bbdf8:
    // 0x2bbdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbdfc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BBDFCu;
    SET_GPR_U32(ctx, 31, 0x2BBE04u);
    ctx->pc = 0x2BBE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBDFCu;
    // 0x2bbe00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BBDFCu, 0x2BBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE04u;
label_2bbe04:
    // 0x2bbe04: 0x3405809c  ori         $a1, $zero, 0x809C
    ctx->pc = 0x2bbe04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32924);
    // 0x2bbe08: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2bbe08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2bbe0c: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BBE0Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE14u);
    ctx->pc = 0x2BBE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE0Cu;
    // 0x2bbe10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BBE0Cu, 0x2BBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE14u;
label_2bbe14:
    // 0x2bbe14: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BBE14u;
    SET_GPR_U32(ctx, 31, 0x2BBE1Cu);
    ctx->pc = 0x2BBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE14u;
    // 0x2bbe18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BBE14u, 0x2BBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE1Cu;
label_2bbe1c:
    // 0x2bbe1c: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x2bbe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbe20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe24: 0xc7819004  lwc1        $f1, -0x6FFC($gp)
    ctx->pc = 0x2bbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbe28: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2bbe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2bbe2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bbe2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bbe30: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2bbe30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2bbe34: 0x0  nop
    ctx->pc = 0x2bbe34u;
    // NOP
    // 0x2bbe38: 0x0  nop
    ctx->pc = 0x2bbe38u;
    // NOP
    // 0x2bbe3c: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2bbe3cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x2bbe40: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2BBE40u;
    SET_GPR_U32(ctx, 31, 0x2BBE48u);
    ctx->pc = 0x2BBE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE40u;
    // 0x2bbe44: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2BBE40u, 0x2BBE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE48u;
label_2bbe48:
    // 0x2bbe48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe4c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2BBE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE54u);
    ctx->pc = 0x2BBE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE4Cu;
    // 0x2bbe50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2BBE4Cu, 0x2BBE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE54u;
label_2bbe54:
    // 0x2bbe54: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2bbe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbe58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bbe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe5c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2bbe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbe60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bbe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe64: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2bbe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbe68: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbe6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbe6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbe70: 0xc784b468  lwc1        $f4, -0x4B98($gp)
    ctx->pc = 0x2bbe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bbe74: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2bbe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbe78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbe78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe7c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2bbe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbe80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbe84: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bbe88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bbe88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bbe8c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2bbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2bbe90: 0xc6200b30  lwc1        $f0, 0xB30($s1)
    ctx->pc = 0x2bbe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbe94: 0xc78c9008  lwc1        $f12, -0x6FF8($gp)
    ctx->pc = 0x2bbe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbe98: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2bbe98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bbe9c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2bbe9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bbea0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bbea0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bbea4: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2bbea4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bbea8: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x2BBEA8u;
    SET_GPR_U32(ctx, 31, 0x2BBEB0u);
    ctx->pc = 0x2BBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEA8u;
    // 0x2bbeac: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x2BBEA8u, 0x2BBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEB0u;
label_2bbeb0:
    // 0x2bbeb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bbeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bbeb4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2BBEB4u;
    {
        const bool branch_taken_0x2bbeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbeb4) {
            ctx->pc = 0x2BBEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBEB4u;
            // 0x2bbeb8: 0x8e230a94  lw          $v1, 0xA94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBEE4u;
            goto label_2bbee4;
        }
    }
    ctx->pc = 0x2BBEBCu;
    // 0x2bbebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbec0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BBEC0u;
    SET_GPR_U32(ctx, 31, 0x2BBEC8u);
    ctx->pc = 0x2BBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEC0u;
    // 0x2bbec4: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BBEC0u, 0x2BBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEC8u;
label_2bbec8:
    // 0x2bbec8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BBEC8u;
    {
        const bool branch_taken_0x2bbec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEC8u;
        // 0x2bbecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbec8) {
            ctx->pc = 0x2BBF60u;
            goto label_2bbf60;
        }
    }
    ctx->pc = 0x2BBED0u;
    // 0x2bbed0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BBED0u;
    SET_GPR_U32(ctx, 31, 0x2BBED8u);
    ctx->pc = 0x2BBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBED0u;
    // 0x2bbed4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BBED0u, 0x2BBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBED8u;
label_2bbed8:
    // 0x2bbed8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BBED8u;
    {
        const bool branch_taken_0x2bbed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbed8) {
            ctx->pc = 0x2BBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBED8u;
            // 0x2bbedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBF60u;
            goto label_2bbf60;
        }
    }
    ctx->pc = 0x2BBEE0u;
    // 0x2bbee0: 0x8e230a94  lw          $v1, 0xA94($s1)
    ctx->pc = 0x2bbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
label_2bbee4:
    // 0x2bbee4: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x2bbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2bbee8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2bbee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bbeec: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2bbeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2bbef0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BBEF0u;
    {
        const bool branch_taken_0x2bbef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF0u;
        // 0x2bbef4: 0xae220a94  sw          $v0, 0xA94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbef0) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBEF8u;
    // 0x2bbef8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2bbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bbefc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBEFCu;
    {
        const bool branch_taken_0x2bbefc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEFCu;
        // 0x2bbf00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbefc) {
            ctx->pc = 0x2BBF0Cu;
            goto label_2bbf0c;
        }
    }
    ctx->pc = 0x2BBF04u;
    // 0x2bbf04: 0xc081546  jal         func_205518
    ctx->pc = 0x2BBF04u;
    SET_GPR_U32(ctx, 31, 0x2BBF0Cu);
    ctx->pc = 0x2BBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF04u;
    // 0x2bbf08: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2BBF04u, 0x2BBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF0Cu;
label_2bbf0c:
    // 0x2bbf0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bbf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bbf14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bbf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bbf1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf20: 0xc0a228c  jal         func_288A30
    ctx->pc = 0x2BBF20u;
    SET_GPR_U32(ctx, 31, 0x2BBF28u);
    ctx->pc = 0x2BBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF20u;
    // 0x2bbf24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A30u, 0x2BBF20u, 0x2BBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF28u;
label_2bbf28:
    // 0x2bbf28: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2bbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2bbf2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2bbf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bbf30: 0x8e240a9c  lw          $a0, 0xA9C($s1)
    ctx->pc = 0x2bbf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2bbf34: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2bbf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2bbf38: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2bbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2bbf3c: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2bbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2bbf40: 0xae240aa0  sw          $a0, 0xAA0($s1)
    ctx->pc = 0x2bbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 4));
    // 0x2bbf44: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x2BBF44u;
    {
        const bool branch_taken_0x2bbf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF44u;
        // 0x2bbf48: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf44) {
            ctx->pc = 0x2BC5ACu;
            goto label_2bc5ac;
        }
    }
    ctx->pc = 0x2BBF4Cu;
label_2bbf4c:
    // 0x2bbf4c: 0xc0afe48  jal         func_2BF920
    ctx->pc = 0x2BBF4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF54u);
    ctx->pc = 0x2BBF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF4Cu;
    // 0x2bbf50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF920u, 0x2BBF4Cu, 0x2BBF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF54u;
label_2bbf54:
    // 0x2bbf54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBF58u;
    {
        const bool branch_taken_0x2bbf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF58u;
        // 0x2bbf5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf58) {
            ctx->pc = 0x2BBF64u;
            goto label_2bbf64;
        }
    }
    ctx->pc = 0x2BBF60u;
label_2bbf60:
    // 0x2bbf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bbf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbf64:
    // 0x2bbf64: 0xc0b1fc8  jal         func_2C7F20
    ctx->pc = 0x2BBF64u;
    SET_GPR_U32(ctx, 31, 0x2BBF6Cu);
    ctx->pc = 0x2C7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F20u, 0x2BBF64u, 0x2BBF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF6Cu;
label_2bbf6c:
    // 0x2bbf6c: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2bbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2bbf70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bbf74: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x2bbf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
    // 0x2bbf78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bbf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bbf7c: 0xae230a90  sw          $v1, 0xA90($s1)
    ctx->pc = 0x2bbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
    // 0x2bbf80: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf84: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bbf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf88: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bbf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbf8c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2bbf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2bbf90: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2bbf90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2bbf94: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2BBF94u;
    {
        const bool branch_taken_0x2bbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF94u;
        // 0x2bbf98: 0xe6420038  swc1        $f2, 0x38($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf94) {
            ctx->pc = 0x2BC3E4u;
            goto label_2bc3e4;
        }
    }
    ctx->pc = 0x2BBF9Cu;
label_2bbf9c:
    // 0x2bbf9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bbf9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbfa0: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x2bbfa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbfa4: 0x0  nop
    ctx->pc = 0x2bbfa4u;
    // NOP
    // 0x2bbfa8: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2BBFA8u;
    {
        const bool branch_taken_0x2bbfa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbfa8) {
            ctx->pc = 0x2BBFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBFA8u;
            // 0x2bbfac: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBFD4u;
            goto label_2bbfd4;
        }
    }
    ctx->pc = 0x2BBFB0u;
    // 0x2bbfb0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2bbfb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbfb4: 0x0  nop
    ctx->pc = 0x2bbfb4u;
    // NOP
    // 0x2bbfb8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBFB8u;
    {
        const bool branch_taken_0x2bbfb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbfb8) {
            ctx->pc = 0x2BBFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBFB8u;
            // 0x2bbfbc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBFD4u;
            goto label_2bbfd4;
        }
    }
    ctx->pc = 0x2BBFC0u;
    // 0x2bbfc0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2bbfc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbfc4: 0x0  nop
    ctx->pc = 0x2bbfc4u;
    // NOP
    // 0x2bbfc8: 0x45030107  bc1tl       . + 4 + (0x107 << 2)
    ctx->pc = 0x2BBFC8u;
    {
        const bool branch_taken_0x2bbfc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbfc8) {
            ctx->pc = 0x2BBFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBFC8u;
            // 0x2bbfcc: 0x8e240a9c  lw          $a0, 0xA9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC3E8u;
            goto label_2bc3e8;
        }
    }
    ctx->pc = 0x2BBFD0u;
    // 0x2bbfd0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2bbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2bbfd4:
    // 0x2bbfd4: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2bbfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x2bbfd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bbfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bbfdc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BBFDCu;
    {
        const bool branch_taken_0x2bbfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfdc) {
            ctx->pc = 0x2BBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBFDCu;
            // 0x2bbfe0: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBFFCu;
            goto label_2bbffc;
        }
    }
    ctx->pc = 0x2BBFE4u;
    // 0x2bbfe4: 0x8e240a9c  lw          $a0, 0xA9C($s1)
    ctx->pc = 0x2bbfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2bbfe8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2bbfec: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2bbfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2bbff0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2bbff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2bbff4: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2BBFF4u;
    {
        const bool branch_taken_0x2bbff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF4u;
        // 0x2bbff8: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbff4) {
            ctx->pc = 0x2BC270u;
            goto label_2bc270;
        }
    }
    ctx->pc = 0x2BBFFCu;
label_2bbffc:
    // 0x2bbffc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2bbffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2bc000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC000u;
    {
        const bool branch_taken_0x2bc000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC000u;
        // 0x2bc004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc000) {
            ctx->pc = 0x2BC010u;
            goto label_2bc010;
        }
    }
    ctx->pc = 0x2BC008u;
    // 0x2bc008: 0xc0b1fc8  jal         func_2C7F20
    ctx->pc = 0x2BC008u;
    SET_GPR_U32(ctx, 31, 0x2BC010u);
    ctx->pc = 0x2BC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC008u;
    // 0x2bc00c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F20u, 0x2BC008u, 0x2BC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC010u;
label_2bc010:
    // 0x2bc010: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x2bc010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc014: 0xc780900c  lwc1        $f0, -0x6FF4($gp)
    ctx->pc = 0x2bc014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc018: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2bc01c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc020: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2bc020u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bc024: 0x0  nop
    ctx->pc = 0x2bc024u;
    // NOP
    // 0x2bc028: 0x0  nop
    ctx->pc = 0x2bc028u;
    // NOP
    // 0x2bc02c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2bc02cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2bc030: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2BC030u;
    SET_GPR_U32(ctx, 31, 0x2BC038u);
    ctx->pc = 0x2BC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC030u;
    // 0x2bc034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2BC030u, 0x2BC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC038u;
label_2bc038:
    // 0x2bc038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc03c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2BC03Cu;
    SET_GPR_U32(ctx, 31, 0x2BC044u);
    ctx->pc = 0x2BC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC03Cu;
    // 0x2bc040: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2BC03Cu, 0x2BC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC044u;
label_2bc044:
    // 0x2bc044: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2bc044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2bc048: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2bc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc04c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2bc04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc050: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2bc050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc054: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2bc054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc058: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2bc05c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bc05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bc060: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bc060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bc064: 0x2442fdca  addiu       $v0, $v0, -0x236
    ctx->pc = 0x2bc064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966730));
    // 0x2bc068: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bc06c: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2bc06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2bc070: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BC070u;
    {
        const bool branch_taken_0x2bc070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC070u;
        // 0x2bc074: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc070) {
            ctx->pc = 0x2BC0D4u;
            goto label_2bc0d4;
        }
    }
    ctx->pc = 0x2BC078u;
    // 0x2bc078: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc084: 0xc6221198  lwc1        $f2, 0x1198($s1)
    ctx->pc = 0x2bc084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc088: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bc088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc08c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bc08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc090: 0x0  nop
    ctx->pc = 0x2bc090u;
    // NOP
    // 0x2bc094: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC094u;
    {
        const bool branch_taken_0x2bc094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC094u;
        // 0x2bc098: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc094) {
            ctx->pc = 0x2BC0B0u;
            goto label_2bc0b0;
        }
    }
    ctx->pc = 0x2BC09Cu;
    // 0x2bc09c: 0xc7809010  lwc1        $f0, -0x6FF0($gp)
    ctx->pc = 0x2bc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc0a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bc0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bc0a4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2bc0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2bc0a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc0a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc0ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2bc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc0b0:
    // 0x2bc0b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bc0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc0b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2bc0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bc0b8: 0xc6211198  lwc1        $f1, 0x1198($s1)
    ctx->pc = 0x2bc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc0bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bc0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc0c0: 0x0  nop
    ctx->pc = 0x2bc0c0u;
    // NOP
    // 0x2bc0c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC0C4u;
    {
        const bool branch_taken_0x2bc0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc0c4) {
            ctx->pc = 0x2BC0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC0C4u;
            // 0x2bc0c8: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC0DCu;
            goto label_2bc0dc;
        }
    }
    ctx->pc = 0x2BC0CCu;
    // 0x2bc0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC0CCu;
    {
        const bool branch_taken_0x2bc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0CCu;
        // 0x2bc0d0: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0cc) {
            ctx->pc = 0x2BC0E0u;
            goto label_2bc0e0;
        }
    }
    ctx->pc = 0x2BC0D4u;
label_2bc0d4:
    // 0x2bc0d4: 0xc6201198  lwc1        $f0, 0x1198($s1)
    ctx->pc = 0x2bc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc0d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2bc0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2bc0dc:
    // 0x2bc0dc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2bc0e0:
    // 0x2bc0e0: 0x2442fdf4  addiu       $v0, $v0, -0x20C
    ctx->pc = 0x2bc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966772));
    // 0x2bc0e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bc0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bc0e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC0E8u;
    {
        const bool branch_taken_0x2bc0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0E8u;
        // 0x2bc0ec: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0e8) {
            ctx->pc = 0x2BC10Cu;
            goto label_2bc10c;
        }
    }
    ctx->pc = 0x2BC0F0u;
    // 0x2bc0f0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2bc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc0f4: 0xc6211198  lwc1        $f1, 0x1198($s1)
    ctx->pc = 0x2bc0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc0f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bc0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc0fc: 0x0  nop
    ctx->pc = 0x2bc0fcu;
    // NOP
    // 0x2bc100: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC100u;
    {
        const bool branch_taken_0x2bc100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc100) {
            ctx->pc = 0x2BC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC100u;
            // 0x2bc104: 0xe6410034  swc1        $f1, 0x34($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC10Cu;
            goto label_2bc10c;
        }
    }
    ctx->pc = 0x2BC108u;
    // 0x2bc108: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2bc108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2bc10c:
    // 0x2bc10c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc114: 0xc0a141c  jal         func_285070
    ctx->pc = 0x2BC114u;
    SET_GPR_U32(ctx, 31, 0x2BC11Cu);
    ctx->pc = 0x2BC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC114u;
    // 0x2bc118: 0x2646004c  addiu       $a2, $s2, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x2BC114u, 0x2BC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC11Cu;
label_2bc11c:
    // 0x2bc11c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2bc11cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2bc120: 0xc6201198  lwc1        $f0, 0x1198($s1)
    ctx->pc = 0x2bc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc124: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc128: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2bc128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2bc12c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc130: 0xe6200b8c  swc1        $f0, 0xB8C($s1)
    ctx->pc = 0x2bc130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2956), bits); }
    // 0x2bc134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bc134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc138: 0xc78c9014  lwc1        $f12, -0x6FEC($gp)
    ctx->pc = 0x2bc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc13c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bc13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc140: 0xc44d0084  lwc1        $f13, 0x84($v0)
    ctx->pc = 0x2bc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc144: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x2BC144u;
    SET_GPR_U32(ctx, 31, 0x2BC14Cu);
    ctx->pc = 0x2BC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC144u;
    // 0x2bc148: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x2BC144u, 0x2BC14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC14Cu;
label_2bc14c:
    // 0x2bc14c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc150: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2BC150u;
    {
        const bool branch_taken_0x2bc150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC150u;
        // 0x2bc154: 0x8e230a90  lw          $v1, 0xA90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc150) {
            ctx->pc = 0x2BC23Cu;
            goto label_2bc23c;
        }
    }
    ctx->pc = 0x2BC158u;
    // 0x2bc158: 0xc6200b8c  lwc1        $f0, 0xB8C($s1)
    ctx->pc = 0x2bc158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc15c: 0xc6211198  lwc1        $f1, 0x1198($s1)
    ctx->pc = 0x2bc15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc160: 0xc7829018  lwc1        $f2, -0x6FE8($gp)
    ctx->pc = 0x2bc160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc164: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bc164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bc168: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bc168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc16c: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x2BC16Cu;
    {
        const bool branch_taken_0x2bc16c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc16c) {
            ctx->pc = 0x2BC23Cu;
            goto label_2bc23c;
        }
    }
    ctx->pc = 0x2BC174u;
    // 0x2bc174: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2bc174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2bc178: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BC178u;
    {
        const bool branch_taken_0x2bc178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC178u;
        // 0x2bc17c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc178) {
            ctx->pc = 0x2BC240u;
            goto label_2bc240;
        }
    }
    ctx->pc = 0x2BC180u;
    // 0x2bc180: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc188: 0xc780901c  lwc1        $f0, -0x6FE4($gp)
    ctx->pc = 0x2bc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc18c: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x2bc18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x2bc190: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2bc194: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bc194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc198: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2bc198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc19c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc1a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2bc1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2bc1a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc1a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bc1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bc1ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bc1b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc1b4: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x2bc1b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2bc1b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2bc1b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2bc1bc: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2bc1c0: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2bc1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2bc1c4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BC1C4u;
    SET_GPR_U32(ctx, 31, 0x2BC1CCu);
    ctx->pc = 0x2BC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1C4u;
    // 0x2bc1c8: 0xae220a94  sw          $v0, 0xA94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BC1C4u, 0x2BC1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1CCu;
label_2bc1cc:
    // 0x2bc1cc: 0xc6200b8c  lwc1        $f0, 0xB8C($s1)
    ctx->pc = 0x2bc1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc1d0: 0xc6211198  lwc1        $f1, 0x1198($s1)
    ctx->pc = 0x2bc1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc1d4: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2bc1d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc1dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bc1dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bc1e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bc1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc1e4: 0x0  nop
    ctx->pc = 0x2bc1e4u;
    // NOP
    // 0x2bc1e8: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2BC1E8u;
    {
        const bool branch_taken_0x2bc1e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc1e8) {
            ctx->pc = 0x2BC1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1E8u;
            // 0x2bc1ec: 0xae200b30  sw          $zero, 0xB30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2864), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC234u;
            goto label_2bc234;
        }
    }
    ctx->pc = 0x2BC1F0u;
    // 0x2bc1f0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2bc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2bc1f4: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2bc1f8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2bc1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2bc1fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC1FCu;
    {
        const bool branch_taken_0x2bc1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1FCu;
        // 0x2bc200: 0xe47400a4  swc1        $f20, 0xA4($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1fc) {
            ctx->pc = 0x2BC230u;
            goto label_2bc230;
        }
    }
    ctx->pc = 0x2BC204u;
    // 0x2bc204: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2bc208: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2bc208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bc20c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC20Cu;
    {
        const bool branch_taken_0x2bc20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC20Cu;
        // 0x2bc210: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc20c) {
            ctx->pc = 0x2BC21Cu;
            goto label_2bc21c;
        }
    }
    ctx->pc = 0x2BC214u;
    // 0x2bc214: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC214u;
    {
        const bool branch_taken_0x2bc214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc214) {
            ctx->pc = 0x2BC218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC214u;
            // 0x2bc218: 0xae200b30  sw          $zero, 0xB30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2864), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC234u;
            goto label_2bc234;
        }
    }
    ctx->pc = 0x2BC21Cu;
label_2bc21c:
    // 0x2bc21c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2bc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bc220: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC220u;
    {
        const bool branch_taken_0x2bc220 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC220u;
        // 0x2bc224: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc220) {
            ctx->pc = 0x2BC230u;
            goto label_2bc230;
        }
    }
    ctx->pc = 0x2BC228u;
    // 0x2bc228: 0xc081546  jal         func_205518
    ctx->pc = 0x2BC228u;
    SET_GPR_U32(ctx, 31, 0x2BC230u);
    ctx->pc = 0x2BC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC228u;
    // 0x2bc22c: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2BC228u, 0x2BC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0xae200b30  sw          $zero, 0xB30($s1)
    ctx->pc = 0x2bc230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2864), GPR_U32(ctx, 0));
label_2bc234:
    // 0x2bc234: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC234u;
    {
        const bool branch_taken_0x2bc234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC234u;
        // 0x2bc238: 0x8e230a90  lw          $v1, 0xA90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc234) {
            ctx->pc = 0x2BC254u;
            goto label_2bc254;
        }
    }
    ctx->pc = 0x2BC23Cu;
label_2bc23c:
    // 0x2bc23c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc240:
    // 0x2bc240: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc244: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc248: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2bc248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2bc24c: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2bc250: 0xe6420038  swc1        $f2, 0x38($s2)
    ctx->pc = 0x2bc250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_2bc254:
    // 0x2bc254: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bc254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bc258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc25c: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x2bc25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
    // 0x2bc260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2bc264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bc268: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2BC268u;
    {
        const bool branch_taken_0x2bc268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC268u;
        // 0x2bc26c: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc268) {
            ctx->pc = 0x2BC3DCu;
            goto label_2bc3dc;
        }
    }
    ctx->pc = 0x2BC270u;
label_2bc270:
    // 0x2bc270: 0x30830300  andi        $v1, $a0, 0x300
    ctx->pc = 0x2bc270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
    // 0x2bc274: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2bc274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2bc278: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC278u;
    {
        const bool branch_taken_0x2bc278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC278u;
        // 0x2bc27c: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc278) {
            ctx->pc = 0x2BC294u;
            goto label_2bc294;
        }
    }
    ctx->pc = 0x2BC280u;
    // 0x2bc280: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2bc280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bc288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc28c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2BC28Cu;
    {
        const bool branch_taken_0x2bc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC28Cu;
        // 0x2bc290: 0xe6201198  swc1        $f0, 0x1198($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc28c) {
            ctx->pc = 0x2BC3DCu;
            goto label_2bc3dc;
        }
    }
    ctx->pc = 0x2BC294u;
label_2bc294:
    // 0x2bc294: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bc294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bc298: 0x3442084c  ori         $v0, $v0, 0x84C
    ctx->pc = 0x2bc298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2124);
    // 0x2bc29c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2bc29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2bc2a0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2BC2A0u;
    {
        const bool branch_taken_0x2bc2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2A0u;
        // 0x2bc2a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2a0) {
            ctx->pc = 0x2BC3ECu;
            goto label_2bc3ec;
        }
    }
    ctx->pc = 0x2BC2A8u;
    // 0x2bc2a8: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2bc2ac: 0x440004f  bltz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BC2ACu;
    {
        const bool branch_taken_0x2bc2ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2ACu;
        // 0x2bc2b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2ac) {
            ctx->pc = 0x2BC3ECu;
            goto label_2bc3ec;
        }
    }
    ctx->pc = 0x2BC2B4u;
    // 0x2bc2b4: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2bc2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2b8: 0xc6220aec  lwc1        $f2, 0xAEC($s1)
    ctx->pc = 0x2bc2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc2bc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc2c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bc2c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bc2c4: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x2bc2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc2c8: 0xc7839020  lwc1        $f3, -0x6FE0($gp)
    ctx->pc = 0x2bc2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc2cc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2bc2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc2d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bc2d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bc2d4: 0xc6200af0  lwc1        $f0, 0xAF0($s1)
    ctx->pc = 0x2bc2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bc2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bc2dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bc2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bc2e0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2bc2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bc2e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bc2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bc2e8: 0xc6210af4  lwc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2bc2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc2ec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bc2ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2bc2f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bc2f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bc2f4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2bc2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bc2f8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2bc2f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bc2fc: 0x0  nop
    ctx->pc = 0x2bc2fcu;
    // NOP
    // 0x2bc300: 0x0  nop
    ctx->pc = 0x2bc300u;
    // NOP
    // 0x2bc304: 0x460c0104  c1          0xC0104
    ctx->pc = 0x2bc304u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bc308: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x2bc308u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc30c: 0x0  nop
    ctx->pc = 0x2bc30cu;
    // NOP
    // 0x2bc310: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC310u;
    {
        const bool branch_taken_0x2bc310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC310u;
        // 0x2bc314: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc310) {
            ctx->pc = 0x2BC324u;
            goto label_2bc324;
        }
    }
    ctx->pc = 0x2BC318u;
    // 0x2bc318: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BC318u;
    SET_GPR_U32(ctx, 31, 0x2BC320u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BC318u, 0x2BC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC320u;
label_2bc320:
    // 0x2bc320: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2bc320u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_2bc324:
    // 0x2bc324: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2bc324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc328: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2bc328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc32c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bc32cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bc330: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2bc330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc334: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bc334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bc338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc33c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bc33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc340: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bc340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bc344: 0x0  nop
    ctx->pc = 0x2bc344u;
    // NOP
    // 0x2bc348: 0x0  nop
    ctx->pc = 0x2bc348u;
    // NOP
    // 0x2bc34c: 0x46041d03  div.s       $f20, $f3, $f4
    ctx->pc = 0x2bc34cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[4];
    // 0x2bc350: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bc350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bc354: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2bc354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc358: 0x0  nop
    ctx->pc = 0x2bc358u;
    // NOP
    // 0x2bc35c: 0x0  nop
    ctx->pc = 0x2bc35cu;
    // NOP
    // 0x2bc360: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bc360u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bc364: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bc364u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc368: 0x0  nop
    ctx->pc = 0x2bc368u;
    // NOP
    // 0x2bc36c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC36Cu;
    {
        const bool branch_taken_0x2bc36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc36c) {
            ctx->pc = 0x2BC370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC36Cu;
            // 0x2bc370: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC380u;
            goto label_2bc380;
        }
    }
    ctx->pc = 0x2BC374u;
    // 0x2bc374: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BC374u;
    SET_GPR_U32(ctx, 31, 0x2BC37Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BC374u, 0x2BC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC37Cu;
label_2bc37c:
    // 0x2bc37c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2bc37cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2bc380:
    // 0x2bc380: 0xc7809024  lwc1        $f0, -0x6FDC($gp)
    ctx->pc = 0x2bc380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc388: 0x0  nop
    ctx->pc = 0x2bc388u;
    // NOP
    // 0x2bc38c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC38Cu;
    {
        const bool branch_taken_0x2bc38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC38Cu;
        // 0x2bc390: 0xc7a50060  lwc1        $f5, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc38c) {
            ctx->pc = 0x2BC398u;
            goto label_2bc398;
        }
    }
    ctx->pc = 0x2BC394u;
    // 0x2bc394: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bc394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bc398:
    // 0x2bc398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc39c: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x2bc39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3a4: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x2bc3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc3a8: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2bc3a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bc3ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bc3acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bc3b0: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x2bc3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc3b4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bc3b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bc3b8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2bc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3bc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc3c0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2bc3c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2bc3c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bc3c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bc3c8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2bc3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2bc3cc: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x2bc3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2bc3d0: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2bc3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2bc3d4: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2bc3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2bc3d8: 0xe6211198  swc1        $f1, 0x1198($s1)
    ctx->pc = 0x2bc3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4504), bits); }
label_2bc3dc:
    // 0x2bc3dc: 0xc0b1fc8  jal         func_2C7F20
    ctx->pc = 0x2BC3DCu;
    SET_GPR_U32(ctx, 31, 0x2BC3E4u);
    ctx->pc = 0x2C7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7F20u, 0x2BC3DCu, 0x2BC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3E4u;
label_2bc3e4:
    // 0x2bc3e4: 0x8e240a9c  lw          $a0, 0xA9C($s1)
    ctx->pc = 0x2bc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
label_2bc3e8:
    // 0x2bc3e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2bc3ec:
    // 0x2bc3ec: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC3ECu;
    {
        const bool branch_taken_0x2bc3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3ECu;
        // 0x2bc3f0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3ec) {
            ctx->pc = 0x2BC404u;
            goto label_2bc404;
        }
    }
    ctx->pc = 0x2BC3F4u;
    // 0x2bc3f4: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC3F4u;
    {
        const bool branch_taken_0x2bc3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc3f4) {
            ctx->pc = 0x2BC3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC3F4u;
            // 0x2bc3f8: 0x8e230a94  lw          $v1, 0xA94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC408u;
            goto label_2bc408;
        }
    }
    ctx->pc = 0x2BC3FCu;
    // 0x2bc3fc: 0xc0af174  jal         func_2BC5D0
    ctx->pc = 0x2BC3FCu;
    SET_GPR_U32(ctx, 31, 0x2BC404u);
    ctx->pc = 0x2BC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3FCu;
    // 0x2bc400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D0u, 0x2BC3FCu, 0x2BC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC404u;
label_2bc404:
    // 0x2bc404: 0x8e230a94  lw          $v1, 0xA94($s1)
    ctx->pc = 0x2bc404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
label_2bc408:
    // 0x2bc408: 0x30620403  andi        $v0, $v1, 0x403
    ctx->pc = 0x2bc408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1027);
    // 0x2bc40c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2BC40Cu;
    {
        const bool branch_taken_0x2bc40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC40Cu;
        // 0x2bc410: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc40c) {
            ctx->pc = 0x2BC4F0u;
            goto label_2bc4f0;
        }
    }
    ctx->pc = 0x2BC414u;
    // 0x2bc414: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BC414u;
    {
        const bool branch_taken_0x2bc414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC414u;
        // 0x2bc418: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc414) {
            ctx->pc = 0x2BC49Cu;
            goto label_2bc49c;
        }
    }
    ctx->pc = 0x2BC41Cu;
    // 0x2bc41c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BC41Cu;
    {
        const bool branch_taken_0x2bc41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc41c) {
            ctx->pc = 0x2BC420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC41Cu;
            // 0x2bc420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC47Cu;
            goto label_2bc47c;
        }
    }
    ctx->pc = 0x2BC424u;
    // 0x2bc424: 0xc6210b3c  lwc1        $f1, 0xB3C($s1)
    ctx->pc = 0x2bc424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc428: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bc428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc42c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bc42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc430: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC430u;
    {
        const bool branch_taken_0x2bc430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc430) {
            ctx->pc = 0x2BC44Cu;
            goto label_2bc44c;
        }
    }
    ctx->pc = 0x2BC438u;
    // 0x2bc438: 0xc6200b34  lwc1        $f0, 0xB34($s1)
    ctx->pc = 0x2bc438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bc43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc440: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bc440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc444: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC444u;
    {
        const bool branch_taken_0x2bc444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC444u;
        // 0x2bc448: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc444) {
            ctx->pc = 0x2BC46Cu;
            goto label_2bc46c;
        }
    }
    ctx->pc = 0x2BC44Cu;
label_2bc44c:
    // 0x2bc44c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bc44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc450: 0x0  nop
    ctx->pc = 0x2bc450u;
    // NOP
    // 0x2bc454: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC454u;
    {
        const bool branch_taken_0x2bc454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc454) {
            ctx->pc = 0x2BC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC454u;
            // 0x2bc458: 0xc6200b38  lwc1        $f0, 0xB38($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4BCu;
            goto label_2bc4bc;
        }
    }
    ctx->pc = 0x2BC45Cu;
    // 0x2bc45c: 0xc6200b34  lwc1        $f0, 0xB34($s1)
    ctx->pc = 0x2bc45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc460: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bc460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc464: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bc464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc468: 0xe6200b3c  swc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
label_2bc46c:
    // 0x2bc46c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC46Cu;
    {
        const bool branch_taken_0x2bc46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC46Cu;
        // 0x2bc470: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc46c) {
            ctx->pc = 0x2BC4B4u;
            goto label_2bc4b4;
        }
    }
    ctx->pc = 0x2BC474u;
    // 0x2bc474: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC474u;
    {
        const bool branch_taken_0x2bc474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC474u;
        // 0x2bc478: 0xe6220b3c  swc1        $f2, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc474) {
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC47Cu;
label_2bc47c:
    // 0x2bc47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc480: 0xc0b1b32  jal         func_2C6CC8
    ctx->pc = 0x2BC480u;
    SET_GPR_U32(ctx, 31, 0x2BC488u);
    ctx->pc = 0x2BC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC480u;
    // 0x2bc484: 0x26250b04  addiu       $a1, $s1, 0xB04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6CC8u, 0x2BC480u, 0x2BC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC488u;
label_2bc488:
    // 0x2bc488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC488u;
    {
        const bool branch_taken_0x2bc488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC488u;
        // 0x2bc48c: 0xc6200b3c  lwc1        $f0, 0xB3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc488) {
            ctx->pc = 0x2BC4A0u;
            goto label_2bc4a0;
        }
    }
    ctx->pc = 0x2BC490u;
    // 0x2bc490: 0xc6210b34  lwc1        $f1, 0xB34($s1)
    ctx->pc = 0x2bc490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC494u;
    {
        const bool branch_taken_0x2bc494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC494u;
        // 0x2bc498: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc494) {
            ctx->pc = 0x2BC4A8u;
            goto label_2bc4a8;
        }
    }
    ctx->pc = 0x2BC49Cu;
label_2bc49c:
    // 0x2bc49c: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc4a0:
    // 0x2bc4a0: 0xc6210b34  lwc1        $f1, 0xB34($s1)
    ctx->pc = 0x2bc4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc4a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2bc4a8:
    // 0x2bc4a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc4a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc4ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC4ACu;
    {
        const bool branch_taken_0x2bc4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4ACu;
        // 0x2bc4b0: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4ac) {
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC4B4u;
label_2bc4b4:
    // 0x2bc4b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc4b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2bc4b8:
    // 0x2bc4b8: 0xc6200b38  lwc1        $f0, 0xB38($s1)
    ctx->pc = 0x2bc4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc4bc:
    // 0x2bc4bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bc4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc4c0: 0x0  nop
    ctx->pc = 0x2bc4c0u;
    // NOP
    // 0x2bc4c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC4C4u;
    {
        const bool branch_taken_0x2bc4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc4c4) {
            ctx->pc = 0x2BC4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4C4u;
            // 0x2bc4c8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4D8u;
            goto label_2bc4d8;
        }
    }
    ctx->pc = 0x2BC4CCu;
    // 0x2bc4cc: 0xe6200b3c  swc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
    // 0x2bc4d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc4d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc4d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc4d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2bc4d8:
    // 0x2bc4d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc4dc: 0x0  nop
    ctx->pc = 0x2bc4dcu;
    // NOP
    // 0x2bc4e0: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x2BC4E0u;
    {
        const bool branch_taken_0x2bc4e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc4e0) {
            ctx->pc = 0x2BC4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4E0u;
            // 0x2bc4e4: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5ACu;
            goto label_2bc5ac;
        }
    }
    ctx->pc = 0x2BC4E8u;
    // 0x2bc4e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2BC4E8u;
    {
        const bool branch_taken_0x2bc4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4E8u;
        // 0x2bc4ec: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4e8) {
            ctx->pc = 0x2BC5B0u;
            goto label_2bc5b0;
        }
    }
    ctx->pc = 0x2BC4F0u;
label_2bc4f0:
    // 0x2bc4f0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2bc4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2bc4f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC4F4u;
    {
        const bool branch_taken_0x2bc4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4F4u;
        // 0x2bc4f8: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4f4) {
            ctx->pc = 0x2BC550u;
            goto label_2bc550;
        }
    }
    ctx->pc = 0x2BC4FCu;
    // 0x2bc4fc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC4FCu;
    {
        const bool branch_taken_0x2bc4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4fc) {
            ctx->pc = 0x2BC500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4FCu;
            // 0x2bc500: 0xc6200b28  lwc1        $f0, 0xB28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC508u;
            goto label_2bc508;
        }
    }
    ctx->pc = 0x2BC504u;
    // 0x2bc504: 0xc6200b2c  lwc1        $f0, 0xB2C($s1)
    ctx->pc = 0x2bc504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc508:
    // 0x2bc508: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2bc508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2bc50c: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc510: 0xc6210b34  lwc1        $f1, 0xB34($s1)
    ctx->pc = 0x2bc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc514: 0xc6220b38  lwc1        $f2, 0xB38($s1)
    ctx->pc = 0x2bc514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bc518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bc51c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bc51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc520: 0x0  nop
    ctx->pc = 0x2bc520u;
    // NOP
    // 0x2bc524: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC524u;
    {
        const bool branch_taken_0x2bc524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC524u;
        // 0x2bc528: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc524) {
            ctx->pc = 0x2BC530u;
            goto label_2bc530;
        }
    }
    ctx->pc = 0x2BC52Cu;
    // 0x2bc52c: 0xe6220b3c  swc1        $f2, 0xB3C($s1)
    ctx->pc = 0x2bc52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
label_2bc530:
    // 0x2bc530: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2bc530u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc534: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc538: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bc538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc53c: 0x0  nop
    ctx->pc = 0x2bc53cu;
    // NOP
    // 0x2bc540: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC540u;
    {
        const bool branch_taken_0x2bc540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc540) {
            ctx->pc = 0x2BC544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC540u;
            // 0x2bc544: 0xe6210b3c  swc1        $f1, 0xB3C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5ACu;
            goto label_2bc5ac;
        }
    }
    ctx->pc = 0x2BC548u;
    // 0x2bc548: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC548u;
    {
        const bool branch_taken_0x2bc548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC548u;
        // 0x2bc54c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc548) {
            ctx->pc = 0x2BC5B0u;
            goto label_2bc5b0;
        }
    }
    ctx->pc = 0x2BC550u;
label_2bc550:
    // 0x2bc550: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2bc550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bc554: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC554u;
    {
        const bool branch_taken_0x2bc554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC554u;
        // 0x2bc558: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc554) {
            ctx->pc = 0x2BC5B0u;
            goto label_2bc5b0;
        }
    }
    ctx->pc = 0x2BC55Cu;
    // 0x2bc55c: 0xc6210b3c  lwc1        $f1, 0xB3C($s1)
    ctx->pc = 0x2bc55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc560: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bc560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc564: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bc564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc568: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC568u;
    {
        const bool branch_taken_0x2bc568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc568) {
            ctx->pc = 0x2BC584u;
            goto label_2bc584;
        }
    }
    ctx->pc = 0x2BC570u;
    // 0x2bc570: 0xc6200b34  lwc1        $f0, 0xB34($s1)
    ctx->pc = 0x2bc570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc574: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bc574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc578: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bc578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc57c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC57Cu;
    {
        const bool branch_taken_0x2bc57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC57Cu;
        // 0x2bc580: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc57c) {
            ctx->pc = 0x2BC5A4u;
            goto label_2bc5a4;
        }
    }
    ctx->pc = 0x2BC584u;
label_2bc584:
    // 0x2bc584: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bc584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc588: 0x0  nop
    ctx->pc = 0x2bc588u;
    // NOP
    // 0x2bc58c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC58Cu;
    {
        const bool branch_taken_0x2bc58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC58Cu;
        // 0x2bc590: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc58c) {
            ctx->pc = 0x2BC5B0u;
            goto label_2bc5b0;
        }
    }
    ctx->pc = 0x2BC594u;
    // 0x2bc594: 0xc6200b34  lwc1        $f0, 0xB34($s1)
    ctx->pc = 0x2bc594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc598: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bc598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc59c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bc59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc5a0: 0xe6200b3c  swc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2bc5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
label_2bc5a4:
    // 0x2bc5a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BC5A4u;
    {
        const bool branch_taken_0x2bc5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc5a4) {
            ctx->pc = 0x2BC5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5A4u;
            // 0x2bc5a8: 0xe6220b3c  swc1        $f2, 0xB3C($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5ACu;
            goto label_2bc5ac;
        }
    }
    ctx->pc = 0x2BC5ACu;
label_2bc5ac:
    // 0x2bc5ac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2bc5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2bc5b0:
    // 0x2bc5b0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc5b4: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2bc5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc5b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2bc5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc5bc: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2bc5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc5c0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2bc5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc5c4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2bc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5C8u;
        // 0x2bc5cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC5D0u;
}
