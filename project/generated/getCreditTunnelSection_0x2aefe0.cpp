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

// Function: getCreditTunnelSection
// Address: 0x2aefe0 - 0x2af22c
void getCreditTunnelSection_0x2aefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getCreditTunnelSection_0x2aefe0");
#endif

    switch (ctx->pc) {
        case 0x2af060u: goto label_2af060;
        case 0x2af06cu: goto label_2af06c;
        case 0x2af078u: goto label_2af078;
        case 0x2af080u: goto label_2af080;
        case 0x2af088u: goto label_2af088;
        case 0x2af158u: goto label_2af158;
        default: break;
    }

    ctx->pc = 0x2aefe0u;

    // 0x2aefe0: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x2aefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2aefe4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aefe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aefe8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2aefe8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2aefec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2aefecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2aeff0: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2aeff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2aeff4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2aeff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2aeff8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2aeff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2aeffc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2aeffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2af000: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2af000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2af004: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2af004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2af008: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2af008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af00c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AF00Cu;
    {
        const bool branch_taken_0x2af00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af00c) {
            ctx->pc = 0x2AF010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF00Cu;
            // 0x2af010: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF014u;
            goto label_2af014;
        }
    }
    ctx->pc = 0x2AF014u;
label_2af014:
    // 0x2af014: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2af014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2af018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af01c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2af01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2af020: 0xdc3398a0  ld          $s3, -0x6760($at)
    ctx->pc = 0x2af020u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x3A98A0u));
    // 0x2af024: 0x1810  mfhi        $v1
    ctx->pc = 0x2af024u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2af028: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x2af028u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2af02c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2af02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af030: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2af030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2af034: 0x0  nop
    ctx->pc = 0x2af034u;
    // NOP
    // 0x2af038: 0x0  nop
    ctx->pc = 0x2af038u;
    // NOP
    // 0x2af03c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2af03cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2af040: 0x8012  mflo        $s0
    ctx->pc = 0x2af040u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2af044: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2af044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af048: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2af048u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af04c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af050: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2af050u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2af054: 0x9010  mfhi        $s2
    ctx->pc = 0x2af054u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x2af058: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AF058u;
    SET_GPR_U32(ctx, 31, 0x2AF060u);
    ctx->pc = 0x2AF05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF058u;
    // 0x2af05c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AF058u, 0x2AF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF060u;
label_2af060:
    // 0x2af060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af064: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AF064u;
    SET_GPR_U32(ctx, 31, 0x2AF06Cu);
    ctx->pc = 0x2AF068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF064u;
    // 0x2af068: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AF064u, 0x2AF06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF06Cu;
label_2af06c:
    // 0x2af06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af070: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AF070u;
    SET_GPR_U32(ctx, 31, 0x2AF078u);
    ctx->pc = 0x2AF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF070u;
    // 0x2af074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AF070u, 0x2AF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF078u;
label_2af078:
    // 0x2af078: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AF078u;
    SET_GPR_U32(ctx, 31, 0x2AF080u);
    ctx->pc = 0x2AF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF078u;
    // 0x2af07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AF078u, 0x2AF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF080u;
label_2af080:
    // 0x2af080: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2AF080u;
    SET_GPR_U32(ctx, 31, 0x2AF088u);
    ctx->pc = 0x2AF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF080u;
    // 0x2af084: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2AF080u, 0x2AF088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF088u;
label_2af088:
    // 0x2af088: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2af088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2af08c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2af090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af094: 0x2078018  mult        $s0, $s0, $a3
    ctx->pc = 0x2af094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2af098: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2af098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2af09c: 0x2442ec98  addiu       $v0, $v0, -0x1368
    ctx->pc = 0x2af09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962328));
    // 0x2af0a0: 0x2479018  mult        $s2, $s2, $a3
    ctx->pc = 0x2af0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2af0a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af0a8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2af0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2af0ac: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2af0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2af0b0: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x2af0b0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x2af0b4: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2af0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2af0b8: 0x2054021  addu        $t0, $s0, $a1
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2af0bc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2af0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2af0c0: 0x460101c0  add.s       $f7, $f0, $f1
    ctx->pc = 0x2af0c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af0c4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x2af0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2af0c8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2af0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2af0cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2af0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2af0d0: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x2af0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2af0d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2af0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af0d8: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x2af0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2af0dc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2af0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af0e0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2af0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2af0e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2af0e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2af0e8: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x2af0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2af0ec: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2af0ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2af0f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2af0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af0f4: 0x262c0038  addiu       $t4, $s1, 0x38
    ctx->pc = 0x2af0f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2af0f8: 0x26290014  addiu       $t1, $s1, 0x14
    ctx->pc = 0x2af0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2af0fc: 0x46013902  mul.s       $f4, $f7, $f1
    ctx->pc = 0x2af0fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2af100: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2af100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2af104: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2af104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2af108: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2af108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2af10c: 0x46023942  mul.s       $f5, $f7, $f2
    ctx->pc = 0x2af10cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2af110: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2af110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2af114: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2af114u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2af118: 0x262b0010  addiu       $t3, $s1, 0x10
    ctx->pc = 0x2af118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2af11c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2af11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2af120: 0x46003982  mul.s       $f6, $f7, $f0
    ctx->pc = 0x2af120u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2af124: 0x262a000c  addiu       $t2, $s1, 0xC
    ctx->pc = 0x2af124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2af128: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2af128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2af12c: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2af12cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2af130: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2af130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af134: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2af134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2af138: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2af138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2af13c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2af13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af140: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2af140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2af144: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2af144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2af148: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2af148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af14c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2af14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2af150: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2af150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2af154: 0x0  nop
    ctx->pc = 0x2af154u;
    // NOP
label_2af158:
    // 0x2af158: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x2af158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x2af15c: 0x8e42fff8  lw          $v0, -0x8($s2)
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x2af160: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2af160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af164: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af168: 0x8e43fffc  lw          $v1, -0x4($s2)
    ctx->pc = 0x2af168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x2af16c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2af16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af170: 0x8e05fffc  lw          $a1, -0x4($s0)
    ctx->pc = 0x2af170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x2af174: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2af174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af178: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2af178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2af17c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af184: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af188: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2af188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af18c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2af18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2af190: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2af190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2af194: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x2af194u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2af198: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af19c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2af19cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af1a4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2af1a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2af1a8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2af1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2af1ac: 0x46023942  mul.s       $f5, $f7, $f2
    ctx->pc = 0x2af1acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2af1b0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2af1b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2af1b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2af1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2af1b8: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x2af1b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2af1bc: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2af1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2af1c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af1c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2af1c4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2af1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2af1c8: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x2af1c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x2af1cc: 0xc600fffc  lwc1        $f0, -0x4($s0)
    ctx->pc = 0x2af1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af1d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af1d4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2af1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2af1d8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2af1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2af1dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af1dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2af1e0: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x2af1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2af1e4: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x2af1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x2af1e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2af1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af1ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af1f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2af1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2af1f4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2af1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2af1f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af1f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2af1fc: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2af1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2af200: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x2af200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2af204: 0x12c102a  slt         $v0, $t1, $t4
    ctx->pc = 0x2af204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2af208: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2AF208u;
    {
        const bool branch_taken_0x2af208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF208u;
        // 0x2af20c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af208) {
            ctx->pc = 0x2AF158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af158;
        }
    }
    ctx->pc = 0x2AF210u;
    // 0x2af210: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2af210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af214: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2af214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af218: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2af218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af21c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2af21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af220: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2af220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af224: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF224u;
        // 0x2af228: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF22Cu;
}
