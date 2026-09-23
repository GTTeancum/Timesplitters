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

// Function: draw_slider
// Address: 0x22d0e0 - 0x22d22c
void draw_slider_0x22d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_slider_0x22d0e0");
#endif

    switch (ctx->pc) {
        case 0x22d198u: goto label_22d198;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1d0u: goto label_22d1d0;
        default: break;
    }

    ctx->pc = 0x22d0e0u;

    // 0x22d0e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22d0e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22d0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22d0e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22d0ec: 0xc7828194  lwc1        $f2, -0x7E6C($gp)
    ctx->pc = 0x22d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d0f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22d0f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22d0f8: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x22d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x22d0fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22d100: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x22d100u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x22d104: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x22d104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x22d108: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22d10c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22d10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22d110: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d118: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22d11c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22d11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d124: 0x0  nop
    ctx->pc = 0x22d124u;
    // NOP
    // 0x22d128: 0x0  nop
    ctx->pc = 0x22d128u;
    // NOP
    // 0x22d12c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x22d12cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x22d130: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22d134: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x22d134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d138: 0xc7848198  lwc1        $f4, -0x7E68($gp)
    ctx->pc = 0x22d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d13c: 0x2664fffe  addiu       $a0, $s3, -0x2
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x22d140: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x22d140u;
    { uint32_t bits = FAST_READ32(0x329A10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22d144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22d148: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x22d148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22d14c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x22d14cu;
    { uint32_t bits = FAST_READ32(0x3299FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22d150: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x22d154: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x22d154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22d158: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x22d158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x22d15c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22d15cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x22d160: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22d160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22d164: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x22d168: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x22d168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x22d16c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22d170: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x22d170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22d174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22d178: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x22d178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x22d17c: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x22d17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x22d180: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x22d180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x22d184: 0x24f4ffff  addiu       $s4, $a3, -0x1
    ctx->pc = 0x22d184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x22d188: 0x24d5ffff  addiu       $s5, $a2, -0x1
    ctx->pc = 0x22d188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22d18c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x22d18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22d190: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22D190u;
    SET_GPR_U32(ctx, 31, 0x22D198u);
    ctx->pc = 0x22D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D190u;
    // 0x22d194: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22D190u, 0x22D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D198u;
label_22d198:
    // 0x22d198: 0x3c08287f  lui         $t0, 0x287F
    ctx->pc = 0x22d198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10367 << 16));
    // 0x22d19c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1a4: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x22d1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22d1a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22d1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1ac: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22D1ACu;
    SET_GPR_U32(ctx, 31, 0x22D1B4u);
    ctx->pc = 0x22D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1ACu;
    // 0x22d1b0: 0x3508147f  ori         $t0, $t0, 0x147F (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5247);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22D1ACu, 0x22D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1B4u;
label_22d1b4:
    // 0x22d1b4: 0x3c082840  lui         $t0, 0x2840
    ctx->pc = 0x22d1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10304 << 16));
    // 0x22d1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22d1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22d1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1c8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22D1C8u;
    SET_GPR_U32(ctx, 31, 0x22D1D0u);
    ctx->pc = 0x22D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1C8u;
    // 0x22d1cc: 0x3508147f  ori         $t0, $t0, 0x147F (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5247);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22D1C8u, 0x22D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1D0u;
label_22d1d0:
    // 0x22d1d0: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x22D1D0u;
    {
        const bool branch_taken_0x22d1d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D0u;
        // 0x22d1d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1d0) {
            ctx->pc = 0x22D20Cu;
            goto label_22d20c;
        }
    }
    ctx->pc = 0x22D1D8u;
    // 0x22d1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22d1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22d1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1e8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22d1ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22d1ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d1f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22d1f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d1f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22d1f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d1f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d1f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d1fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22d1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d204: 0x80ae108  j           func_2B8420
    ctx->pc = 0x22D204u;
    ctx->pc = 0x22D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D204u;
    // 0x22d208: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    dlFillRectangle_0x2b8420(rdram, ctx, runtime); return;
    ctx->pc = 0x22D20Cu;
label_22d20c:
    // 0x22d20c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d210: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22d210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d214: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22d214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d218: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d21c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22d21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d224: 0x3e00008  jr          $ra
    ctx->pc = 0x22D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D224u;
        // 0x22d228: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D22Cu;
}
