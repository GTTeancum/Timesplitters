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

// Function: particleNewSparks
// Address: 0x296ec0 - 0x2971e0
void particleNewSparks_0x296ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewSparks_0x296ec0");
#endif

    switch (ctx->pc) {
        case 0x296f00u: goto label_296f00;
        case 0x296f30u: goto label_296f30;
        case 0x296f68u: goto label_296f68;
        case 0x296f70u: goto label_296f70;
        case 0x296fdcu: goto label_296fdc;
        case 0x297048u: goto label_297048;
        case 0x2971b0u: goto label_2971b0;
        default: break;
    }

    ctx->pc = 0x296ec0u;

    // 0x296ec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x296ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x296ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296ec8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x296ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ed0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x296ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296ed4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x296ed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ed8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296edc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x296edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ee0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296ee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ee8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x296ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x296eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x296eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ef0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x296ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x296ef4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x296ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x296ef8: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x296EF8u;
    SET_GPR_U32(ctx, 31, 0x296F00u);
    ctx->pc = 0x296EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EF8u;
    // 0x296efc: 0xffb50050  sd          $s5, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x296EF8u, 0x296F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F00u;
label_296f00:
    // 0x296f00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f04: 0xc7808c98  lwc1        $f0, -0x7368($gp)
    ctx->pc = 0x296f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296f08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296f10: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x296f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x296f14: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x296f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x296f18: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x296f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x296f1c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x296f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x296f20: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x296f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x296f24: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x296f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x296f28: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x296F28u;
    SET_GPR_U32(ctx, 31, 0x296F30u);
    ctx->pc = 0x296F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F28u;
    // 0x296f2c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x296F28u, 0x296F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F30u;
label_296f30:
    // 0x296f30: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x296f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296f34: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x296f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x296f38: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x296f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
    // 0x296f3c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x296f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x296f40: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x296f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296f44: 0xe62003a4  swc1        $f0, 0x3A4($s1)
    ctx->pc = 0x296f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 932), bits); }
    // 0x296f48: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x296f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296f4c: 0x1840005f  blez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x296F4Cu;
    {
        const bool branch_taken_0x296f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x296F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F4Cu;
        // 0x296f50: 0xe62103a8  swc1        $f1, 0x3A8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f4c) {
            ctx->pc = 0x2970CCu;
            goto label_2970cc;
        }
    }
    ctx->pc = 0x296F54u;
    // 0x296f54: 0x263603ac  addiu       $s6, $s1, 0x3AC
    ctx->pc = 0x296f54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x296f58: 0x263503b0  addiu       $s5, $s1, 0x3B0
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x296f5c: 0x263003b4  addiu       $s0, $s1, 0x3B4
    ctx->pc = 0x296f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x296f60: 0x26370048  addiu       $s7, $s1, 0x48
    ctx->pc = 0x296f60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x296f64: 0x0  nop
    ctx->pc = 0x296f64u;
    // NOP
label_296f68:
    // 0x296f68: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x296F68u;
    SET_GPR_U32(ctx, 31, 0x296F70u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x296F68u, 0x296F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F70u;
label_296f70:
    // 0x296f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f74: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x296f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296f78: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x296f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296f7c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296F7Cu;
    {
        const bool branch_taken_0x296f7c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x296F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F7Cu;
        // 0x296f80: 0x762821  addu        $a1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f7c) {
            ctx->pc = 0x296F90u;
            goto label_296f90;
        }
    }
    ctx->pc = 0x296F84u;
    // 0x296f84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x296f84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296f88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x296F88u;
    {
        const bool branch_taken_0x296f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F88u;
        // 0x296f8c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f88) {
            ctx->pc = 0x296FA8u;
            goto label_296fa8;
        }
    }
    ctx->pc = 0x296F90u;
label_296f90:
    // 0x296f90: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x296f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x296f94: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x296f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x296f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x296f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296fa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x296fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x296fa4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x296fa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_296fa8:
    // 0x296fa8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x296fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x296fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296fb0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x296fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x296fb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x296fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x296fb8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x296fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x296fbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x296fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x296fc0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x296fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x296fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x296fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296fc8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x296fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x296fcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x296fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296fd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x296fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x296fd4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x296FD4u;
    SET_GPR_U32(ctx, 31, 0x296FDCu);
    ctx->pc = 0x296FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FD4u;
    // 0x296fd8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x296FD4u, 0x296FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FDCu;
label_296fdc:
    // 0x296fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fe0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x296fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296fe4: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x296fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296fe8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296FE8u;
    {
        const bool branch_taken_0x296fe8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x296FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FE8u;
        // 0x296fec: 0x752821  addu        $a1, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fe8) {
            ctx->pc = 0x296FFCu;
            goto label_296ffc;
        }
    }
    ctx->pc = 0x296FF0u;
    // 0x296ff0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x296ff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296ff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x296FF4u;
    {
        const bool branch_taken_0x296ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FF4u;
        // 0x296ff8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ff4) {
            ctx->pc = 0x297014u;
            goto label_297014;
        }
    }
    ctx->pc = 0x296FFCu;
label_296ffc:
    // 0x296ffc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x296ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297000: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29700c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29700cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297010: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297014:
    // 0x297014: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29701c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x29701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29702c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x297030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297034: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x297034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x297038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29703c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29703cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297040: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297040u;
    SET_GPR_U32(ctx, 31, 0x297048u);
    ctx->pc = 0x297044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297040u;
    // 0x297044: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297040u, 0x297048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297048u;
label_297048:
    // 0x297048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29704c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297050: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x297050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297054: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297054u;
    {
        const bool branch_taken_0x297054 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297054u;
        // 0x297058: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297054) {
            ctx->pc = 0x297068u;
            goto label_297068;
        }
    }
    ctx->pc = 0x29705Cu;
    // 0x29705c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29705cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297060u;
    {
        const bool branch_taken_0x297060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297060u;
        // 0x297064: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297060) {
            ctx->pc = 0x297080u;
            goto label_297080;
        }
    }
    ctx->pc = 0x297068u;
label_297068:
    // 0x297068: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29706c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29707c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29707cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297080:
    // 0x297080: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297088: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x297088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29708c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x29708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297090: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297094: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x297094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29709c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2970a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2970a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2970a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2970a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2970a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2970a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2970ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2970acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2970b0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2970b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2970b4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2970b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2970b8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2970b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2970bc: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2970BCu;
    {
        const bool branch_taken_0x2970bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2970bc) {
            ctx->pc = 0x296F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296f68;
        }
    }
    ctx->pc = 0x2970C4u;
    // 0x2970c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2970C4u;
    {
        const bool branch_taken_0x2970c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2970c4) {
            ctx->pc = 0x2970D0u;
            goto label_2970d0;
        }
    }
    ctx->pc = 0x2970CCu;
label_2970cc:
    // 0x2970cc: 0x26370048  addiu       $s7, $s1, 0x48
    ctx->pc = 0x2970ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_2970d0:
    // 0x2970d0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2970d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2970d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2970d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970d8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2970d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970dc: 0xc6710008  lwc1        $f17, 0x8($s3)
    ctx->pc = 0x2970dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2970e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2970e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2970e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2970e8: 0x46070b80  add.s       $f14, $f1, $f7
    ctx->pc = 0x2970e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2970ec: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2970ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2970f0: 0x46078900  add.s       $f4, $f17, $f7
    ctx->pc = 0x2970f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[17], ctx->f[7]);
    // 0x2970f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2970f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2970f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2970f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2970fc: 0x46038c40  add.s       $f17, $f17, $f3
    ctx->pc = 0x2970fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
    // 0x297100: 0x46030340  add.s       $f13, $f0, $f3
    ctx->pc = 0x297100u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x297104: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297108: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x297108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x29710c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x29710cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x297110: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x297110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297114: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x297114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x297118: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x297118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x29711c: 0xc7868c9c  lwc1        $f6, -0x7364($gp)
    ctx->pc = 0x29711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x297120: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x297120u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x297124: 0xc68f0004  lwc1        $f15, 0x4($s4)
    ctx->pc = 0x297124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x297128: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x297128u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x29712c: 0xc6900008  lwc1        $f16, 0x8($s4)
    ctx->pc = 0x29712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x297130: 0x46028c42  mul.s       $f17, $f17, $f2
    ctx->pc = 0x297130u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[2]);
    // 0x297134: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x297134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297138: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x297138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29713c: 0xc7878ca0  lwc1        $f7, -0x7360($gp)
    ctx->pc = 0x29713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x297140: 0x46087381  sub.s       $f14, $f14, $f8
    ctx->pc = 0x297140u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[8]);
    // 0x297144: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x297144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x297148: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x297148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x29714c: 0x46058c41  sub.s       $f17, $f17, $f5
    ctx->pc = 0x29714cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[5]);
    // 0x297150: 0x46056b41  sub.s       $f13, $f13, $f5
    ctx->pc = 0x297150u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x297154: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x297154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x297158: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x297158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x29715c: 0x46067382  mul.s       $f14, $f14, $f6
    ctx->pc = 0x29715cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x297160: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x297160u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x297164: 0x46068c42  mul.s       $f17, $f17, $f6
    ctx->pc = 0x297164u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
    // 0x297168: 0x46066b42  mul.s       $f13, $f13, $f6
    ctx->pc = 0x297168u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x29716c: 0x460e7b80  add.s       $f14, $f15, $f14
    ctx->pc = 0x29716cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x297170: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x297170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x297174: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x297174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x297178: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x297178u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x29717c: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x29717cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x297180: 0x46118440  add.s       $f17, $f16, $f17
    ctx->pc = 0x297180u;
    ctx->f[17] = FPU_ADD_S(ctx->f[16], ctx->f[17]);
    // 0x297184: 0x46077380  add.s       $f14, $f14, $f7
    ctx->pc = 0x297184u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[7]);
    // 0x297188: 0x46017bc0  add.s       $f15, $f15, $f1
    ctx->pc = 0x297188u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
    // 0x29718c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x29718cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x297190: 0x46048400  add.s       $f16, $f16, $f4
    ctx->pc = 0x297190u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
    // 0x297194: 0x46038c40  add.s       $f17, $f17, $f3
    ctx->pc = 0x297194u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[3]);
    // 0x297198: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x297198u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x29719c: 0x46036b40  add.s       $f13, $f13, $f3
    ctx->pc = 0x29719cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[3]);
    // 0x2971a0: 0x46037381  sub.s       $f14, $f14, $f3
    ctx->pc = 0x2971a0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[3]);
    // 0x2971a4: 0x46037bc0  add.s       $f15, $f15, $f3
    ctx->pc = 0x2971a4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x2971a8: 0xc095046  jal         func_254118
    ctx->pc = 0x2971A8u;
    SET_GPR_U32(ctx, 31, 0x2971B0u);
    ctx->pc = 0x2971ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971A8u;
    // 0x2971ac: 0x46038401  sub.s       $f16, $f16, $f3 (Delay Slot)
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x2971A8u, 0x2971B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971B0u;
label_2971b0:
    // 0x2971b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2971b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2971b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2971b8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2971b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2971bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2971bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2971c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2971c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2971c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2971c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2971c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2971c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2971cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2971ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2971d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2971d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2971d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2971d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2971D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971D8u;
        // 0x2971dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2971E0u;
}
