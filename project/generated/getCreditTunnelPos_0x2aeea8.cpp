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

// Function: getCreditTunnelPos
// Address: 0x2aeea8 - 0x2aefe0
void getCreditTunnelPos_0x2aeea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getCreditTunnelPos_0x2aeea8");
#endif

    switch (ctx->pc) {
        case 0x2aef24u: goto label_2aef24;
        case 0x2aef30u: goto label_2aef30;
        case 0x2aef3cu: goto label_2aef3c;
        case 0x2aef44u: goto label_2aef44;
        case 0x2aef4cu: goto label_2aef4c;
        default: break;
    }

    ctx->pc = 0x2aeea8u;

    // 0x2aeea8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2aeea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2aeeac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aeeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeeb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aeeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aeeb4: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2aeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2aeeb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2aeeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2aeebc: 0x0  nop
    ctx->pc = 0x2aeebcu;
    // NOP
    // 0x2aeec0: 0x0  nop
    ctx->pc = 0x2aeec0u;
    // NOP
    // 0x2aeec4: 0x46006043  div.s       $f1, $f12, $f0
    ctx->pc = 0x2aeec4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[1] = ctx->f[12] / ctx->f[0];
    // 0x2aeec8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2aeec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2aeecc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2aeeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2aeed0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2aeed4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2aeed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2aeed8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2aeed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeedc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2aeedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2aeee0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2aeee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeee4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aeee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aeee8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEEE8u;
    {
        const bool branch_taken_0x2aeee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeee8) {
            ctx->pc = 0x2AEEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEEE8u;
            // 0x2aeeec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEEF0u;
            goto label_2aeef0;
        }
    }
    ctx->pc = 0x2AEEF0u;
label_2aeef0:
    // 0x2aeef0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2aeef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2aeef4: 0xdc329898  ld          $s2, -0x6768($at)
    ctx->pc = 0x2aeef4u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A9898u));
    // 0x2aeef8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aeef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2aeefc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2aeefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aef00: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2aef00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2aef04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2aef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aef08: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aef08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aef0c: 0x8010  mfhi        $s0
    ctx->pc = 0x2aef0cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2aef10: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2aef14: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2aef14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2aef18: 0x8810  mfhi        $s1
    ctx->pc = 0x2aef18u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x2aef1c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF24u);
    ctx->pc = 0x2AEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF1Cu;
    // 0x2aef20: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AEF1Cu, 0x2AEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF24u;
label_2aef24:
    // 0x2aef24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aef24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef28: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AEF28u;
    SET_GPR_U32(ctx, 31, 0x2AEF30u);
    ctx->pc = 0x2AEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF28u;
    // 0x2aef2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AEF28u, 0x2AEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF30u;
label_2aef30:
    // 0x2aef30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef34: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AEF34u;
    SET_GPR_U32(ctx, 31, 0x2AEF3Cu);
    ctx->pc = 0x2AEF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF34u;
    // 0x2aef38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AEF34u, 0x2AEF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF3Cu;
label_2aef3c:
    // 0x2aef3c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AEF3Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF44u);
    ctx->pc = 0x2AEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF3Cu;
    // 0x2aef40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AEF3Cu, 0x2AEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF44u;
label_2aef44:
    // 0x2aef44: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2AEF44u;
    SET_GPR_U32(ctx, 31, 0x2AEF4Cu);
    ctx->pc = 0x2AEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF44u;
    // 0x2aef48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2AEF44u, 0x2AEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF4Cu;
label_2aef4c:
    // 0x2aef4c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2aef50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aef54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aef54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aef58: 0x2058018  mult        $s0, $s0, $a1
    ctx->pc = 0x2aef58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aef5c: 0x2258818  mult        $s1, $s1, $a1
    ctx->pc = 0x2aef5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2aef60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aef60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aef64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aef68: 0x2442ec98  addiu       $v0, $v0, -0x1368
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962328));
    // 0x2aef6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aef70: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2aef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2aef74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2aef74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aef78: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2aef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2aef7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aef7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aef80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2aef84: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2aef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aef88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aef8c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2aef90: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2aef90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2aef94: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2aef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aef98: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aef98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aef9c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2aef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aefa0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2aefa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aefa4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2aefa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2aefa8: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2aefa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aefac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2aefacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aefb0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2aefb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2aefb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2aefb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aefb8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2aefb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2aefbc: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x2aefbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2aefc0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2aefc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aefc4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2aefc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aefc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2aefc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aefcc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2aefccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aefd0: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x2aefd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2aefd4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2aefd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aefd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFD8u;
        // 0x2aefdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEFE0u;
}
