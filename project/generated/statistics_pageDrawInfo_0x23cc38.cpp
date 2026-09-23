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

// Function: statistics_pageDrawInfo
// Address: 0x23cc38 - 0x23db1c
void statistics_pageDrawInfo_0x23cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statistics_pageDrawInfo_0x23cc38");
#endif

    switch (ctx->pc) {
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cde0u: goto label_23cde0;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce98u: goto label_23ce98;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cff4u: goto label_23cff4;
        case 0x23d014u: goto label_23d014;
        case 0x23d04cu: goto label_23d04c;
        case 0x23d058u: goto label_23d058;
        case 0x23d064u: goto label_23d064;
        case 0x23d084u: goto label_23d084;
        case 0x23d0bcu: goto label_23d0bc;
        case 0x23d0c8u: goto label_23d0c8;
        case 0x23d0d4u: goto label_23d0d4;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d180u: goto label_23d180;
        case 0x23d1c0u: goto label_23d1c0;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d218u: goto label_23d218;
        case 0x23d234u: goto label_23d234;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d314u: goto label_23d314;
        case 0x23d370u: goto label_23d370;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d410u: goto label_23d410;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d538u: goto label_23d538;
        case 0x23d544u: goto label_23d544;
        case 0x23d564u: goto label_23d564;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d630u: goto label_23d630;
        case 0x23d650u: goto label_23d650;
        case 0x23d688u: goto label_23d688;
        case 0x23d6ccu: goto label_23d6cc;
        case 0x23d6f0u: goto label_23d6f0;
        case 0x23d714u: goto label_23d714;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d758u: goto label_23d758;
        case 0x23d764u: goto label_23d764;
        case 0x23d784u: goto label_23d784;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d838u: goto label_23d838;
        case 0x23d844u: goto label_23d844;
        case 0x23d864u: goto label_23d864;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d918u: goto label_23d918;
        case 0x23d938u: goto label_23d938;
        case 0x23d970u: goto label_23d970;
        case 0x23d9b8u: goto label_23d9b8;
        case 0x23d9d8u: goto label_23d9d8;
        case 0x23da00u: goto label_23da00;
        case 0x23da20u: goto label_23da20;
        case 0x23da58u: goto label_23da58;
        case 0x23da80u: goto label_23da80;
        case 0x23daa8u: goto label_23daa8;
        case 0x23dac8u: goto label_23dac8;
        case 0x23dae8u: goto label_23dae8;
        default: break;
    }

    ctx->pc = 0x23cc38u;

    // 0x23cc38: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x23cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x23cc3c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x23cc40: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x23cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x23cc44: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x23cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
    // 0x23cc48: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x23cc48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc4c: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x23cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x23cc50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc54: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x23cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x23cc58: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x23cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
    // 0x23cc5c: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x23cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
    // 0x23cc60: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x23cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x23cc64: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x23cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x23cc68: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x23cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
    // 0x23cc6c: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x23cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x23cc70: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x23cc70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x23cc74: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x23cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x23cc78: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x23cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x23cc7c: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x23cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
    // 0x23cc80: 0xafaa0114  sw          $t2, 0x114($sp)
    ctx->pc = 0x23cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 10));
    // 0x23cc84: 0x15200219  bnez        $t1, . + 4 + (0x219 << 2)
    ctx->pc = 0x23CC84u;
    {
        const bool branch_taken_0x23cc84 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC84u;
        // 0x23cc88: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc84) {
            ctx->pc = 0x23D4ECu;
            goto label_23d4ec;
        }
    }
    ctx->pc = 0x23CC8Cu;
    // 0x23cc8c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cc90: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x23cc94: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x23cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x23cc98: 0x24772c18  addiu       $s7, $v1, 0x2C18
    ctx->pc = 0x23cc98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x23cc9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cca0: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x23cca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23cca4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23cca8: 0x27b50104  addiu       $s5, $sp, 0x104
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x23ccac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ccb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccbc: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CCBCu;
    SET_GPR_U32(ctx, 31, 0x23CCC4u);
    ctx->pc = 0x23CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCBCu;
    // 0x23ccc0: 0x8c660430  lw          $a2, 0x430($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CCBCu, 0x23CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCC4u;
label_23ccc4:
    // 0x23ccc4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x23ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ccc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23ccc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23cccc: 0xc78181f4  lwc1        $f1, -0x7E0C($gp)
    ctx->pc = 0x23ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ccd0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23ccd4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23ccd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CCD8u;
    {
        const bool branch_taken_0x23ccd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccd8) {
            ctx->pc = 0x23CCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCD8u;
            // 0x23ccdc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCE0u;
            goto label_23cce0;
        }
    }
    ctx->pc = 0x23CCE0u;
label_23cce0:
    // 0x23cce0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x23cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23cce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23cce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23cce8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x23cce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ccec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23ccecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23ccf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23ccf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23ccf4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x23ccf4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23ccf8: 0x2810  mfhi        $a1
    ctx->pc = 0x23ccf8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23ccfc: 0x8812  mflo        $s1
    ctx->pc = 0x23ccfcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x23cd00: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x23cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x23cd04: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x23cd04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23cd08: 0x2810  mfhi        $a1
    ctx->pc = 0x23cd08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23cd0c: 0x8012  mflo        $s0
    ctx->pc = 0x23cd0cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x23cd10: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x23cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x23cd14: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x23cd14u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23cd18: 0x2812  mflo        $a1
    ctx->pc = 0x23cd18u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x23cd1c: 0x9010  mfhi        $s2
    ctx->pc = 0x23cd1cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x23cd20: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CD20u;
    {
        const bool branch_taken_0x23cd20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD20u;
        // 0x23cd24: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd20) {
            ctx->pc = 0x23CD3Cu;
            goto label_23cd3c;
        }
    }
    ctx->pc = 0x23CD28u;
    // 0x23cd28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cd2c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23cd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cd34: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23CD34u;
    {
        const bool branch_taken_0x23cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD34u;
        // 0x23cd38: 0x8c710434  lw          $s1, 0x434($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd34) {
            ctx->pc = 0x23CE1Cu;
            goto label_23ce1c;
        }
    }
    ctx->pc = 0x23CD3Cu;
label_23cd3c:
    // 0x23cd3c: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23CD3Cu;
    {
        const bool branch_taken_0x23cd3c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD3Cu;
        // 0x23cd40: 0x3c1e003b  lui         $fp, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd3c) {
            ctx->pc = 0x23CD68u;
            goto label_23cd68;
        }
    }
    ctx->pc = 0x23CD44u;
    // 0x23cd44: 0x27c4e850  addiu       $a0, $fp, -0x17B0
    ctx->pc = 0x23cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961232));
    // 0x23cd48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cd4c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23cd50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cd54: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CD54u;
    SET_GPR_U32(ctx, 31, 0x23CD5Cu);
    ctx->pc = 0x23CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD54u;
    // 0x23cd58: 0x8c660438  lw          $a2, 0x438($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CD54u, 0x23CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD5Cu;
label_23cd5c:
    // 0x23cd5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd60: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x23CD60u;
    SET_GPR_U32(ctx, 31, 0x23CD68u);
    ctx->pc = 0x23CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD60u;
    // 0x23cd64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x23CD60u, 0x23CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD68u;
label_23cd68:
    // 0x23cd68: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x23CD68u;
    {
        const bool branch_taken_0x23cd68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD68u;
        // 0x23cd6c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd68) {
            ctx->pc = 0x23CDA4u;
            goto label_23cda4;
        }
    }
    ctx->pc = 0x23CD70u;
    // 0x23cd70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23cd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CD74u;
    {
        const bool branch_taken_0x23cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd74) {
            ctx->pc = 0x23CD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD74u;
            // 0x23cd78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD7Cu;
            goto label_23cd7c;
        }
    }
    ctx->pc = 0x23CD7Cu;
label_23cd7c:
    // 0x23cd7c: 0x27c4e850  addiu       $a0, $fp, -0x17B0
    ctx->pc = 0x23cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961232));
    // 0x23cd80: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cd88: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23cd8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cd90: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CD90u;
    SET_GPR_U32(ctx, 31, 0x23CD98u);
    ctx->pc = 0x23CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD90u;
    // 0x23cd94: 0x8c66043c  lw          $a2, 0x43C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CD90u, 0x23CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD98u;
label_23cd98:
    // 0x23cd98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd9c: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x23CD9Cu;
    SET_GPR_U32(ctx, 31, 0x23CDA4u);
    ctx->pc = 0x23CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD9Cu;
    // 0x23cda0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x23CD9Cu, 0x23CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDA4u;
label_23cda4:
    // 0x23cda4: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x23CDA4u;
    {
        const bool branch_taken_0x23cda4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDA4u;
        // 0x23cda8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cda4) {
            ctx->pc = 0x23CDE0u;
            goto label_23cde0;
        }
    }
    ctx->pc = 0x23CDACu;
    // 0x23cdac: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x23cdb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CDB0u;
    {
        const bool branch_taken_0x23cdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cdb0) {
            ctx->pc = 0x23CDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDB0u;
            // 0x23cdb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDB8u;
            goto label_23cdb8;
        }
    }
    ctx->pc = 0x23CDB8u;
label_23cdb8:
    // 0x23cdb8: 0x27c4e850  addiu       $a0, $fp, -0x17B0
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961232));
    // 0x23cdbc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cdc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cdc4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23cdc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cdcc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CDCCu;
    SET_GPR_U32(ctx, 31, 0x23CDD4u);
    ctx->pc = 0x23CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDCCu;
    // 0x23cdd0: 0x8c660440  lw          $a2, 0x440($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CDCCu, 0x23CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDD4u;
label_23cdd4:
    // 0x23cdd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdd8: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x23CDD8u;
    SET_GPR_U32(ctx, 31, 0x23CDE0u);
    ctx->pc = 0x23CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDD8u;
    // 0x23cddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x23CDD8u, 0x23CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDE0u;
label_23cde0:
    // 0x23cde0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x23cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23cde4: 0x27c4e850  addiu       $a0, $fp, -0x17B0
    ctx->pc = 0x23cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961232));
    // 0x23cde8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CDE8u;
    {
        const bool branch_taken_0x23cde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cde8) {
            ctx->pc = 0x23CDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDE8u;
            // 0x23cdec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDF0u;
            goto label_23cdf0;
        }
    }
    ctx->pc = 0x23CDF0u;
label_23cdf0:
    // 0x23cdf0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cdf4: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23cdf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cdfc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x23cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x23ce00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ce04: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CE04u;
    SET_GPR_U32(ctx, 31, 0x23CE0Cu);
    ctx->pc = 0x23CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE04u;
    // 0x23ce08: 0x8c660444  lw          $a2, 0x444($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CE04u, 0x23CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE0Cu;
label_23ce0c:
    // 0x23ce0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23ce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce10: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x23CE10u;
    SET_GPR_U32(ctx, 31, 0x23CE18u);
    ctx->pc = 0x23CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE10u;
    // 0x23ce14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x23CE10u, 0x23CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE18u;
label_23ce18:
    // 0x23ce18: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x23ce18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23ce1c:
    // 0x23ce1c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23ce20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce24: 0x24522c18  addiu       $s2, $v0, 0x2C18
    ctx->pc = 0x23ce24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x23ce28: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CE28u;
    SET_GPR_U32(ctx, 31, 0x23CE30u);
    ctx->pc = 0x23CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE28u;
    // 0x23ce2c: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CE28u, 0x23CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE30u;
label_23ce30:
    // 0x23ce30: 0x26f0e858  addiu       $s0, $s7, -0x17A8
    ctx->pc = 0x23ce30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961240));
    // 0x23ce34: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23ce38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23ce38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ce48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ce48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce4c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CE4Cu;
    SET_GPR_U32(ctx, 31, 0x23CE54u);
    ctx->pc = 0x23CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE4Cu;
    // 0x23ce50: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CE4Cu, 0x23CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE54u;
label_23ce54:
    // 0x23ce54: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23ce58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce5c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23ce60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce64: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23ce68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ce68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce6c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23ce70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ce74: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23ce78: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23ce7c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ce80: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23ce84: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CE84u;
    SET_GPR_U32(ctx, 31, 0x23CE8Cu);
    ctx->pc = 0x23CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE84u;
    // 0x23ce88: 0x8d060448  lw          $a2, 0x448($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CE84u, 0x23CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE8Cu;
label_23ce8c:
    // 0x23ce8c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x23ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23ce90: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CE90u;
    SET_GPR_U32(ctx, 31, 0x23CE98u);
    ctx->pc = 0x23CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE90u;
    // 0x23ce94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CE90u, 0x23CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE98u;
label_23ce98:
    // 0x23ce98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23ce98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce9c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CE9Cu;
    SET_GPR_U32(ctx, 31, 0x23CEA4u);
    ctx->pc = 0x23CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE9Cu;
    // 0x23cea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CE9Cu, 0x23CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEA4u;
label_23cea4:
    // 0x23cea4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23cea8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23cea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ceac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ceb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ceb4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ceb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ceb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cebc: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CEBCu;
    SET_GPR_U32(ctx, 31, 0x23CEC4u);
    ctx->pc = 0x23CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CEBCu;
    // 0x23cec0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CEBCu, 0x23CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEC4u;
label_23cec4:
    // 0x23cec4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23cec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23cec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cecc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23ced0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ced4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23ced8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ced8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cedc: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23cee0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cee4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23cee8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23ceec: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23ceecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cef0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23cef4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CEF4u;
    SET_GPR_U32(ctx, 31, 0x23CEFCu);
    ctx->pc = 0x23CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CEF4u;
    // 0x23cef8: 0x8d06044c  lw          $a2, 0x44C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CEF4u, 0x23CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEFCu;
label_23cefc:
    // 0x23cefc: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x23cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x23cf00: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CF00u;
    SET_GPR_U32(ctx, 31, 0x23CF08u);
    ctx->pc = 0x23CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF00u;
    // 0x23cf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CF00u, 0x23CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF08u;
label_23cf08:
    // 0x23cf08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23cf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf0c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CF0Cu;
    SET_GPR_U32(ctx, 31, 0x23CF14u);
    ctx->pc = 0x23CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF0Cu;
    // 0x23cf10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CF0Cu, 0x23CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF14u;
label_23cf14:
    // 0x23cf14: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23cf18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23cf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23cf28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf2c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CF2Cu;
    SET_GPR_U32(ctx, 31, 0x23CF34u);
    ctx->pc = 0x23CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF2Cu;
    // 0x23cf30: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CF2Cu, 0x23CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF34u;
label_23cf34:
    // 0x23cf34: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23cf38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf3c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cf40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf44: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23cf48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23cf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf4c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23cf50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23cf58: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23cf5c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23cf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cf60: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23cf64: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CF64u;
    SET_GPR_U32(ctx, 31, 0x23CF6Cu);
    ctx->pc = 0x23CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF64u;
    // 0x23cf68: 0x8d060450  lw          $a2, 0x450($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CF64u, 0x23CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF6Cu;
label_23cf6c:
    // 0x23cf6c: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x23cf70: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CF70u;
    SET_GPR_U32(ctx, 31, 0x23CF78u);
    ctx->pc = 0x23CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF70u;
    // 0x23cf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CF70u, 0x23CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF78u;
label_23cf78:
    // 0x23cf78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23cf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf7c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CF7Cu;
    SET_GPR_U32(ctx, 31, 0x23CF84u);
    ctx->pc = 0x23CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF7Cu;
    // 0x23cf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CF7Cu, 0x23CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF84u;
label_23cf84:
    // 0x23cf84: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23cf88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23cf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23cf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23cf98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf9c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CF9Cu;
    SET_GPR_U32(ctx, 31, 0x23CFA4u);
    ctx->pc = 0x23CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF9Cu;
    // 0x23cfa0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CF9Cu, 0x23CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFA4u;
label_23cfa4:
    // 0x23cfa4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23cfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23cfa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23cfb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23cfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfb4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23cfb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23cfb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfbc: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23cfc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cfc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23cfc8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23cfcc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23cfccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cfd0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23cfd4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23CFD4u;
    SET_GPR_U32(ctx, 31, 0x23CFDCu);
    ctx->pc = 0x23CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFD4u;
    // 0x23cfd8: 0x8d060454  lw          $a2, 0x454($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23CFD4u, 0x23CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFDCu;
label_23cfdc:
    // 0x23cfdc: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x23cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x23cfe0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23CFE0u;
    SET_GPR_U32(ctx, 31, 0x23CFE8u);
    ctx->pc = 0x23CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFE0u;
    // 0x23cfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23CFE0u, 0x23CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFE8u;
label_23cfe8:
    // 0x23cfe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23cfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfec: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23CFECu;
    SET_GPR_U32(ctx, 31, 0x23CFF4u);
    ctx->pc = 0x23CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFECu;
    // 0x23cff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23CFECu, 0x23CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFF4u;
label_23cff4:
    // 0x23cff4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23cff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23cff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d000: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d004: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d008: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d00c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D00Cu;
    SET_GPR_U32(ctx, 31, 0x23D014u);
    ctx->pc = 0x23D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D00Cu;
    // 0x23d010: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D00Cu, 0x23D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D014u;
label_23d014:
    // 0x23d014: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d018: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d01c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d020: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d024: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d028: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d02c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d034: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d038: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d03c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d040: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d044: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D044u;
    SET_GPR_U32(ctx, 31, 0x23D04Cu);
    ctx->pc = 0x23D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D044u;
    // 0x23d048: 0x8d060458  lw          $a2, 0x458($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D044u, 0x23D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D04Cu;
label_23d04c:
    // 0x23d04c: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x23d050: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D050u;
    SET_GPR_U32(ctx, 31, 0x23D058u);
    ctx->pc = 0x23D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D050u;
    // 0x23d054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D050u, 0x23D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D058u;
label_23d058:
    // 0x23d058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d05c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D05Cu;
    SET_GPR_U32(ctx, 31, 0x23D064u);
    ctx->pc = 0x23D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D05Cu;
    // 0x23d060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D05Cu, 0x23D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D064u;
label_23d064:
    // 0x23d064: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d06c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d070: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d074: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d078: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d07c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D07Cu;
    SET_GPR_U32(ctx, 31, 0x23D084u);
    ctx->pc = 0x23D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D07Cu;
    // 0x23d080: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D07Cu, 0x23D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D084u;
label_23d084:
    // 0x23d084: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d08c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d090: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d094: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d098: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d09c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d0a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d0a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d0a8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d0ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d0b0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d0b4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D0B4u;
    SET_GPR_U32(ctx, 31, 0x23D0BCu);
    ctx->pc = 0x23D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0B4u;
    // 0x23d0b8: 0x8d06045c  lw          $a2, 0x45C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D0B4u, 0x23D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0BCu;
label_23d0bc:
    // 0x23d0bc: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x23d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x23d0c0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D0C0u;
    SET_GPR_U32(ctx, 31, 0x23D0C8u);
    ctx->pc = 0x23D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0C0u;
    // 0x23d0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D0C0u, 0x23D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0C8u;
label_23d0c8:
    // 0x23d0c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0cc: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D0CCu;
    SET_GPR_U32(ctx, 31, 0x23D0D4u);
    ctx->pc = 0x23D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0CCu;
    // 0x23d0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D0CCu, 0x23D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0D4u;
label_23d0d4:
    // 0x23d0d4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d0d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d0e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d0e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0ec: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D0ECu;
    SET_GPR_U32(ctx, 31, 0x23D0F4u);
    ctx->pc = 0x23D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0ECu;
    // 0x23d0f0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D0ECu, 0x23D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0F4u;
label_23d0f4:
    // 0x23d0f4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d0f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0fc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d100: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d104: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d108: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d10c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d114: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d118: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d11c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d120: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d124: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D124u;
    SET_GPR_U32(ctx, 31, 0x23D12Cu);
    ctx->pc = 0x23D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D124u;
    // 0x23d128: 0x8d060460  lw          $a2, 0x460($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D124u, 0x23D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D12Cu;
label_23d12c:
    // 0x23d12c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x23d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23d130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d134: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23D134u;
    {
        const bool branch_taken_0x23d134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D134u;
        // 0x23d138: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d134) {
            ctx->pc = 0x23D1A0u;
            goto label_23d1a0;
        }
    }
    ctx->pc = 0x23D13Cu;
    // 0x23d13c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23d140: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D140u;
    {
        const bool branch_taken_0x23d140 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D140u;
        // 0x23d144: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d140) {
            ctx->pc = 0x23D188u;
            goto label_23d188;
        }
    }
    ctx->pc = 0x23D148u;
    // 0x23d148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d14c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d14cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d150: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x23d154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23d158: 0xc6c00154  lwc1        $f0, 0x154($s6)
    ctx->pc = 0x23d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d15c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23d15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23d160: 0x0  nop
    ctx->pc = 0x23d160u;
    // NOP
    // 0x23d164: 0x0  nop
    ctx->pc = 0x23d164u;
    // NOP
    // 0x23d168: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23d168u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x23d16c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23d16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23d170: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d174: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x23d174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23d178: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D178u;
    SET_GPR_U32(ctx, 31, 0x23D180u);
    ctx->pc = 0x23D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D178u;
    // 0x23d17c: 0x2484e860  addiu       $a0, $a0, -0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D178u, 0x23D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D180u;
label_23d180:
    // 0x23d180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D180u;
    {
        const bool branch_taken_0x23d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D180u;
        // 0x23d184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d180) {
            ctx->pc = 0x23D1B0u;
            goto label_23d1b0;
        }
    }
    ctx->pc = 0x23D188u;
label_23d188:
    // 0x23d188: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d190: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D198u;
    {
        const bool branch_taken_0x23d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D198u;
        // 0x23d19c: 0x8c710464  lw          $s1, 0x464($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d198) {
            ctx->pc = 0x23D1B0u;
            goto label_23d1b0;
        }
    }
    ctx->pc = 0x23D1A0u;
label_23d1a0:
    // 0x23d1a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d1a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23d1a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d1ac: 0x8c710468  lw          $s1, 0x468($v1)
    ctx->pc = 0x23d1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1128)));
label_23d1b0:
    // 0x23d1b0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x23d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x23d1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1b8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D1B8u;
    SET_GPR_U32(ctx, 31, 0x23D1C0u);
    ctx->pc = 0x23D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1B8u;
    // 0x23d1bc: 0x24502c18  addiu       $s0, $v0, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D1B8u, 0x23D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1C0u;
label_23d1c0:
    // 0x23d1c0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d1c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1d0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d1d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1d8: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D1D8u;
    SET_GPR_U32(ctx, 31, 0x23D1E0u);
    ctx->pc = 0x23D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1D8u;
    // 0x23d1dc: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D1D8u, 0x23D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1E0u;
label_23d1e0:
    // 0x23d1e0: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1e8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d1ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1f0: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d1f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1f8: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d1fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d200: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d204: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d208: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d20c: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d210: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D210u;
    SET_GPR_U32(ctx, 31, 0x23D218u);
    ctx->pc = 0x23D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D210u;
    // 0x23d214: 0x8d06046c  lw          $a2, 0x46C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D210u, 0x23D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D218u;
label_23d218:
    // 0x23d218: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23d21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d220: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D220u;
    {
        const bool branch_taken_0x23d220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D220u;
        // 0x23d224: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d220) {
            ctx->pc = 0x23D23Cu;
            goto label_23d23c;
        }
    }
    ctx->pc = 0x23D228u;
    // 0x23d228: 0x8ec50150  lw          $a1, 0x150($s6)
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
    // 0x23d22c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D22Cu;
    SET_GPR_U32(ctx, 31, 0x23D234u);
    ctx->pc = 0x23D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D22Cu;
    // 0x23d230: 0x26e4e858  addiu       $a0, $s7, -0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D22Cu, 0x23D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D234u;
label_23d234:
    // 0x23d234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D234u;
    {
        const bool branch_taken_0x23d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D234u;
        // 0x23d238: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d234) {
            ctx->pc = 0x23D24Cu;
            goto label_23d24c;
        }
    }
    ctx->pc = 0x23D23Cu;
label_23d23c:
    // 0x23d23c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d240: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d248: 0x8c710470  lw          $s1, 0x470($v1)
    ctx->pc = 0x23d248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1136)));
label_23d24c:
    // 0x23d24c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23d250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d254: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D254u;
    SET_GPR_U32(ctx, 31, 0x23D25Cu);
    ctx->pc = 0x23D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D254u;
    // 0x23d258: 0x24b02c18  addiu       $s0, $a1, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D254u, 0x23D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D25Cu;
label_23d25c:
    // 0x23d25c: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x23d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d264: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d268: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d26c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x23d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23d270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d274: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D274u;
    SET_GPR_U32(ctx, 31, 0x23D27Cu);
    ctx->pc = 0x23D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D274u;
    // 0x23d278: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D274u, 0x23D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D27Cu;
label_23d27c:
    // 0x23d27c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d280: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d284: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d288: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d28c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d290: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d294: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d29c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d2a0: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d2a4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d2a8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d2ac: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D2ACu;
    SET_GPR_U32(ctx, 31, 0x23D2B4u);
    ctx->pc = 0x23D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2ACu;
    // 0x23d2b0: 0x8d060590  lw          $a2, 0x590($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D2ACu, 0x23D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2B4u;
label_23d2b4:
    // 0x23d2b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x23d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23d2b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d2bc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x23D2BCu;
    {
        const bool branch_taken_0x23d2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2BCu;
        // 0x23d2c0: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2bc) {
            ctx->pc = 0x23D378u;
            goto label_23d378;
        }
    }
    ctx->pc = 0x23D2C4u;
    // 0x23d2c4: 0x26d600c8  addiu       $s6, $s6, 0xC8
    ctx->pc = 0x23d2c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
    // 0x23d2c8: 0xafb60120  sw          $s6, 0x120($sp)
    ctx->pc = 0x23d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 22));
    // 0x23d2cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23d2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23d2d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2d4: 0x2c7e0002  sltiu       $fp, $v1, 0x2
    ctx->pc = 0x23d2d4u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d2d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23d2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2dc: 0x0  nop
    ctx->pc = 0x23d2dcu;
    // NOP
label_23d2e0:
    // 0x23d2e0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D2E0u;
    {
        const bool branch_taken_0x23d2e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E0u;
        // 0x23d2e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2e0) {
            ctx->pc = 0x23D2F8u;
            goto label_23d2f8;
        }
    }
    ctx->pc = 0x23D2E8u;
    // 0x23d2e8: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23D2E8u;
    SET_GPR_U32(ctx, 31, 0x23D2F0u);
    ctx->pc = 0x23D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2E8u;
    // 0x23d2ec: 0x8fa40114  lw          $a0, 0x114($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23D2E8u, 0x23D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2F0u;
label_23d2f0:
    // 0x23d2f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23d2f4: 0x8c500140  lw          $s0, 0x140($v0)
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_23d2f8:
    // 0x23d2f8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23d2fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D2FCu;
    {
        const bool branch_taken_0x23d2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2FCu;
        // 0x23d300: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2fc) {
            ctx->pc = 0x23D30Cu;
            goto label_23d30c;
        }
    }
    ctx->pc = 0x23D304u;
    // 0x23d304: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D304u;
    {
        const bool branch_taken_0x23d304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x23D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D304u;
        // 0x23d308: 0x2d0102a  slt         $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d304) {
            ctx->pc = 0x23D324u;
            goto label_23d324;
        }
    }
    ctx->pc = 0x23D30Cu;
label_23d30c:
    // 0x23d30c: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23D30Cu;
    SET_GPR_U32(ctx, 31, 0x23D314u);
    ctx->pc = 0x23D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D30Cu;
    // 0x23d310: 0x8fa40114  lw          $a0, 0x114($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23D30Cu, 0x23D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D314u;
label_23d314:
    // 0x23d314: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23d318: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x23d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x23d31c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x23d31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23d320: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x23d320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_23d324:
    // 0x23d324: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D324u;
    {
        const bool branch_taken_0x23d324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d324) {
            ctx->pc = 0x23D328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D324u;
            // 0x23d328: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D338u;
            goto label_23d338;
        }
    }
    ctx->pc = 0x23D32Cu;
    // 0x23d32c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x23d32cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d330: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x23d330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d334: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d338:
    // 0x23d338: 0x2a42001e  slti        $v0, $s2, 0x1E
    ctx->pc = 0x23d338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x23d33c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23D33Cu;
    {
        const bool branch_taken_0x23d33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D33Cu;
        // 0x23d340: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d33c) {
            ctx->pc = 0x23D2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d2e0;
        }
    }
    ctx->pc = 0x23D344u;
    // 0x23d344: 0x6e10008  bgez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D344u;
    {
        const bool branch_taken_0x23d344 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d344) {
            ctx->pc = 0x23D368u;
            goto label_23d368;
        }
    }
    ctx->pc = 0x23D34Cu;
    // 0x23d34c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x23d350: 0x24c42c18  addiu       $a0, $a2, 0x2C18
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x23d354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d35c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d360: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23D360u;
    {
        const bool branch_taken_0x23d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D360u;
        // 0x23d364: 0x8c710594  lw          $s1, 0x594($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d360) {
            ctx->pc = 0x23D394u;
            goto label_23d394;
        }
    }
    ctx->pc = 0x23D368u;
label_23d368:
    // 0x23d368: 0xc08962e  jal         func_2258B8
    ctx->pc = 0x23D368u;
    SET_GPR_U32(ctx, 31, 0x23D370u);
    ctx->pc = 0x23D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D368u;
    // 0x23d36c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258B8u, 0x23D368u, 0x23D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D370u;
label_23d370:
    // 0x23d370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23D370u;
    {
        const bool branch_taken_0x23d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D370u;
        // 0x23d374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d370) {
            ctx->pc = 0x23D394u;
            goto label_23d394;
        }
    }
    ctx->pc = 0x23D378u;
label_23d378:
    // 0x23d378: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d37c: 0x26d600c8  addiu       $s6, $s6, 0xC8
    ctx->pc = 0x23d37cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
    // 0x23d380: 0xafb60120  sw          $s6, 0x120($sp)
    ctx->pc = 0x23d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 22));
    // 0x23d384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d388: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d38c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d390: 0x8c71059c  lw          $s1, 0x59C($v1)
    ctx->pc = 0x23d390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1436)));
label_23d394:
    // 0x23d394: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D394u;
    SET_GPR_U32(ctx, 31, 0x23D39Cu);
    ctx->pc = 0x23D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D394u;
    // 0x23d398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D394u, 0x23D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D39Cu;
label_23d39c:
    // 0x23d39c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d3a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3ac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d3b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3b4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D3B4u;
    SET_GPR_U32(ctx, 31, 0x23D3BCu);
    ctx->pc = 0x23D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3B4u;
    // 0x23d3b8: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D3B4u, 0x23D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3BCu;
label_23d3bc:
    // 0x23d3bc: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d3c0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x23d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x23d3c4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d3c8: 0x24852c18  addiu       $a1, $a0, 0x2C18
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x23d3cc: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d3d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3d4: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d3dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d3e0: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d3e4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d3e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3ec: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d3f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3f4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D3F4u;
    SET_GPR_U32(ctx, 31, 0x23D3FCu);
    ctx->pc = 0x23D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3F4u;
    // 0x23d3f8: 0x8d060474  lw          $a2, 0x474($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D3F4u, 0x23D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3FCu;
label_23d3fc:
    // 0x23d3fc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d404: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x23d404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x23d408: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23d408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d40c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23d40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d410:
    // 0x23d410: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x23d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d418: 0x0  nop
    ctx->pc = 0x23d418u;
    // NOP
    // 0x23d41c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23D41Cu;
    {
        const bool branch_taken_0x23d41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d41c) {
            ctx->pc = 0x23D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D41Cu;
            // 0x23d420: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D430u;
            goto label_23d430;
        }
    }
    ctx->pc = 0x23D424u;
    // 0x23d424: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x23d424u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23d428: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23d428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d42c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23d430:
    // 0x23d430: 0x28820022  slti        $v0, $a0, 0x22
    ctx->pc = 0x23d430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x23d434: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23D434u;
    {
        const bool branch_taken_0x23d434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D434u;
        // 0x23d438: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d434) {
            ctx->pc = 0x23D410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d410;
        }
    }
    ctx->pc = 0x23D43Cu;
    // 0x23d43c: 0x1cc00008  bgtz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D43Cu;
    {
        const bool branch_taken_0x23d43c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x23D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D43Cu;
        // 0x23d440: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d43c) {
            ctx->pc = 0x23D460u;
            goto label_23d460;
        }
    }
    ctx->pc = 0x23D444u;
    // 0x23d444: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x23d444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x23d448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d44c: 0x24822c18  addiu       $v0, $a0, 0x2C18
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x23d450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23d454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d458: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23D458u;
    {
        const bool branch_taken_0x23d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D458u;
        // 0x23d45c: 0x8c910478  lw          $s1, 0x478($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d458) {
            ctx->pc = 0x23D4BCu;
            goto label_23d4bc;
        }
    }
    ctx->pc = 0x23D460u;
label_23d460:
    // 0x23d460: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D460u;
    {
        const bool branch_taken_0x23d460 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d460) {
            ctx->pc = 0x23D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D460u;
            // 0x23d464: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D48Cu;
            goto label_23d48c;
        }
    }
    ctx->pc = 0x23D468u;
    // 0x23d468: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23d468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x23d46c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d470: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x23d474: 0x8782b274  lh          $v0, -0x4D8C($gp)
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294947444)));
    // 0x23d478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23d47c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d484: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23D484u;
    {
        const bool branch_taken_0x23d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D484u;
        // 0x23d488: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d484) {
            ctx->pc = 0x23D4B8u;
            goto label_23d4b8;
        }
    }
    ctx->pc = 0x23D48Cu;
label_23d48c:
    // 0x23d48c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x23d490: 0x248490f8  addiu       $a0, $a0, -0x6F08
    ctx->pc = 0x23d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938872));
    // 0x23d494: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x23d498: 0x24c52c18  addiu       $a1, $a2, 0x2C18
    ctx->pc = 0x23d498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x23d49c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23d4a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d4a4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23d4a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23d4ac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d4b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d4b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23d4b8:
    // 0x23d4b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x23d4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23d4bc:
    // 0x23d4bc: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D4BCu;
    SET_GPR_U32(ctx, 31, 0x23D4C4u);
    ctx->pc = 0x23D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4BCu;
    // 0x23d4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D4BCu, 0x23D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4C4u;
label_23d4c4:
    // 0x23d4c4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d4c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23d4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d4d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d4d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4dc: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D4DCu;
    SET_GPR_U32(ctx, 31, 0x23D4E4u);
    ctx->pc = 0x23D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4DCu;
    // 0x23d4e0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D4DCu, 0x23D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4E4u;
label_23d4e4:
    // 0x23d4e4: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x23D4E4u;
    {
        const bool branch_taken_0x23d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4E4u;
        // 0x23d4e8: 0xdfbf01c0  ld          $ra, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4e4) {
            ctx->pc = 0x23DAECu;
            goto label_23daec;
        }
    }
    ctx->pc = 0x23D4ECu;
label_23d4ec:
    // 0x23d4ec: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x23d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d4f0: 0x3c17002f  lui         $s7, 0x2F
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
    // 0x23d4f4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d4f8: 0x26f02c18  addiu       $s0, $s7, 0x2C18
    ctx->pc = 0x23d4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x23d4fc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x23d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x23d500: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23d504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d508: 0x27b40104  addiu       $s4, $sp, 0x104
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x23d50c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d518: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d51c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d520: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x23d520u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x23d524: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D524u;
    SET_GPR_U32(ctx, 31, 0x23D52Cu);
    ctx->pc = 0x23D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D524u;
    // 0x23d528: 0x8c660484  lw          $a2, 0x484($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D524u, 0x23D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D52Cu;
label_23d52c:
    // 0x23d52c: 0x8ec5001c  lw          $a1, 0x1C($s6)
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x23d530: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D530u;
    SET_GPR_U32(ctx, 31, 0x23D538u);
    ctx->pc = 0x23D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D530u;
    // 0x23d534: 0x27c4e858  addiu       $a0, $fp, -0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D530u, 0x23D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D538u;
label_23d538:
    // 0x23d538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d53c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D53Cu;
    SET_GPR_U32(ctx, 31, 0x23D544u);
    ctx->pc = 0x23D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D53Cu;
    // 0x23d540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D53Cu, 0x23D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D544u;
label_23d544:
    // 0x23d544: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x23d544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d550: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d554: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x23d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23d558: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x23d558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x23d55c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D55Cu;
    SET_GPR_U32(ctx, 31, 0x23D564u);
    ctx->pc = 0x23D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D55Cu;
    // 0x23d560: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D55Cu, 0x23D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D564u;
label_23d564:
    // 0x23d564: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d56c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d574: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d578: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d57c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d588: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d58c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d58cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d590: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d594: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D594u;
    SET_GPR_U32(ctx, 31, 0x23D59Cu);
    ctx->pc = 0x23D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D594u;
    // 0x23d598: 0x8d060488  lw          $a2, 0x488($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D594u, 0x23D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D59Cu;
label_23d59c:
    // 0x23d59c: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x23d5a0: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23D5A0u;
    {
        const bool branch_taken_0x23d5a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d5a0) {
            ctx->pc = 0x23D5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5A0u;
            // 0x23d5a4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D614u;
            goto label_23d614;
        }
    }
    ctx->pc = 0x23D5A8u;
    // 0x23d5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d5ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23d5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23d5b0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x23d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x23d5b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d5b8: 0xc6c20020  lwc1        $f2, 0x20($s6)
    ctx->pc = 0x23d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d5bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23d5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23d5c0: 0x0  nop
    ctx->pc = 0x23d5c0u;
    // NOP
    // 0x23d5c4: 0x0  nop
    ctx->pc = 0x23d5c4u;
    // NOP
    // 0x23d5c8: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x23d5c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x23d5cc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x23d5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x23d5d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d5d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23d5d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x23d5d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23d5d8: 0x0  nop
    ctx->pc = 0x23d5d8u;
    // NOP
    // 0x23d5dc: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D5DCu;
    {
        const bool branch_taken_0x23d5dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5DCu;
        // 0x23d5e0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5dc) {
            ctx->pc = 0x23D604u;
            goto label_23d604;
        }
    }
    ctx->pc = 0x23D5E4u;
    // 0x23d5e4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x23d5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x23d5e8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x23D5E8u;
    SET_GPR_U32(ctx, 31, 0x23D5F0u);
    ctx->pc = 0x23D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5E8u;
    // 0x23d5ec: 0x2610e868  addiu       $s0, $s0, -0x1798 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x23D5E8u, 0x23D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5F0u;
label_23d5f0:
    // 0x23d5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5f4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D5F4u;
    SET_GPR_U32(ctx, 31, 0x23D5FCu);
    ctx->pc = 0x23D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5F4u;
    // 0x23d5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D5F4u, 0x23D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5FCu;
label_23d5fc:
    // 0x23d5fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23D5FCu;
    {
        const bool branch_taken_0x23d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5FCu;
        // 0x23d600: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5fc) {
            ctx->pc = 0x23D624u;
            goto label_23d624;
        }
    }
    ctx->pc = 0x23D604u;
label_23d604:
    // 0x23d604: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D604u;
    SET_GPR_U32(ctx, 31, 0x23D60Cu);
    ctx->pc = 0x23D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D604u;
    // 0x23d608: 0x2484e860  addiu       $a0, $a0, -0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D604u, 0x23D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D60Cu;
label_23d60c:
    // 0x23d60c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D60Cu;
    {
        const bool branch_taken_0x23d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D60Cu;
        // 0x23d610: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d60c) {
            ctx->pc = 0x23D624u;
            goto label_23d624;
        }
    }
    ctx->pc = 0x23D614u;
label_23d614:
    // 0x23d614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d620: 0x8c71048c  lw          $s1, 0x48C($v1)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1164)));
label_23d624:
    // 0x23d624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d628: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D628u;
    SET_GPR_U32(ctx, 31, 0x23D630u);
    ctx->pc = 0x23D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D628u;
    // 0x23d62c: 0x26f02c18  addiu       $s0, $s7, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D628u, 0x23D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D630u;
label_23d630:
    // 0x23d630: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d63c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d640: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d644: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d648: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D648u;
    SET_GPR_U32(ctx, 31, 0x23D650u);
    ctx->pc = 0x23D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D648u;
    // 0x23d64c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D648u, 0x23D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D650u;
label_23d650:
    // 0x23d650: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d658: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d65c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d660: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d664: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d668: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d66c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d670: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d674: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d678: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d67c: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d680: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D680u;
    SET_GPR_U32(ctx, 31, 0x23D688u);
    ctx->pc = 0x23D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D680u;
    // 0x23d684: 0x8d060490  lw          $a2, 0x490($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D680u, 0x23D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D688u;
label_23d688:
    // 0x23d688: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x23d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x23d68c: 0x58400011  blezl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D68Cu;
    {
        const bool branch_taken_0x23d68c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d68c) {
            ctx->pc = 0x23D690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D68Cu;
            // 0x23d690: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D6D4u;
            goto label_23d6d4;
        }
    }
    ctx->pc = 0x23D694u;
    // 0x23d694: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23d694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23d698: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23d698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23d69c: 0xc6c00024  lwc1        $f0, 0x24($s6)
    ctx->pc = 0x23d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d6a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x23d6a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d6a8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x23d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x23d6ac: 0x0  nop
    ctx->pc = 0x23d6acu;
    // NOP
    // 0x23d6b0: 0x0  nop
    ctx->pc = 0x23d6b0u;
    // NOP
    // 0x23d6b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23d6b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x23d6b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23d6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23d6bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d6bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d6c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x23d6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23d6c4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D6C4u;
    SET_GPR_U32(ctx, 31, 0x23D6CCu);
    ctx->pc = 0x23D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6C4u;
    // 0x23d6c8: 0x2484e860  addiu       $a0, $a0, -0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D6C4u, 0x23D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6CCu;
label_23d6cc:
    // 0x23d6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D6CCu;
    {
        const bool branch_taken_0x23d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6CCu;
        // 0x23d6d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6cc) {
            ctx->pc = 0x23D6E4u;
            goto label_23d6e4;
        }
    }
    ctx->pc = 0x23D6D4u;
label_23d6d4:
    // 0x23d6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d6d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23d6dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d6e0: 0x8c710494  lw          $s1, 0x494($v1)
    ctx->pc = 0x23d6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1172)));
label_23d6e4:
    // 0x23d6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6e8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D6E8u;
    SET_GPR_U32(ctx, 31, 0x23D6F0u);
    ctx->pc = 0x23D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6E8u;
    // 0x23d6ec: 0x26f52c18  addiu       $s5, $s7, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D6E8u, 0x23D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6F0u;
label_23d6f0:
    // 0x23d6f0: 0x27d0e858  addiu       $s0, $fp, -0x17A8
    ctx->pc = 0x23d6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961240));
    // 0x23d6f4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d6f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d704: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d708: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d70c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D70Cu;
    SET_GPR_U32(ctx, 31, 0x23D714u);
    ctx->pc = 0x23D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D70Cu;
    // 0x23d710: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D70Cu, 0x23D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D714u;
label_23d714:
    // 0x23d714: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d71c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d720: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d724: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d728: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d72c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d734: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d738: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d73c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d740: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d744: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D744u;
    SET_GPR_U32(ctx, 31, 0x23D74Cu);
    ctx->pc = 0x23D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D744u;
    // 0x23d748: 0x8d0604b0  lw          $a2, 0x4B0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D744u, 0x23D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D74Cu;
label_23d74c:
    // 0x23d74c: 0x8ec50034  lw          $a1, 0x34($s6)
    ctx->pc = 0x23d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x23d750: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D750u;
    SET_GPR_U32(ctx, 31, 0x23D758u);
    ctx->pc = 0x23D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D750u;
    // 0x23d754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D750u, 0x23D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D758u;
label_23d758:
    // 0x23d758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d75c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D75Cu;
    SET_GPR_U32(ctx, 31, 0x23D764u);
    ctx->pc = 0x23D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D75Cu;
    // 0x23d760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D75Cu, 0x23D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D764u;
label_23d764:
    // 0x23d764: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d768: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d774: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d778: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d77c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D77Cu;
    SET_GPR_U32(ctx, 31, 0x23D784u);
    ctx->pc = 0x23D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D77Cu;
    // 0x23d780: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D77Cu, 0x23D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D784u;
label_23d784:
    // 0x23d784: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d78c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d790: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d794: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d798: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d79c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d7a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d7a4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d7a8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d7ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d7b0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d7b4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D7B4u;
    SET_GPR_U32(ctx, 31, 0x23D7BCu);
    ctx->pc = 0x23D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7B4u;
    // 0x23d7b8: 0x8d0604b4  lw          $a2, 0x4B4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D7B4u, 0x23D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7BCu;
label_23d7bc:
    // 0x23d7bc: 0x8ec50038  lw          $a1, 0x38($s6)
    ctx->pc = 0x23d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x23d7c0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D7C0u;
    SET_GPR_U32(ctx, 31, 0x23D7C8u);
    ctx->pc = 0x23D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7C0u;
    // 0x23d7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D7C0u, 0x23D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7C8u;
label_23d7c8:
    // 0x23d7c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7cc: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D7CCu;
    SET_GPR_U32(ctx, 31, 0x23D7D4u);
    ctx->pc = 0x23D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7CCu;
    // 0x23d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D7CCu, 0x23D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7D4u;
label_23d7d4:
    // 0x23d7d4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d7d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d7e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7ec: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D7ECu;
    SET_GPR_U32(ctx, 31, 0x23D7F4u);
    ctx->pc = 0x23D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7ECu;
    // 0x23d7f0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D7ECu, 0x23D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7F4u;
label_23d7f4:
    // 0x23d7f4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d7f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d7fc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d804: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d808: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d80c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d814: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d818: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d81c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d81cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d820: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d824: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D824u;
    SET_GPR_U32(ctx, 31, 0x23D82Cu);
    ctx->pc = 0x23D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D824u;
    // 0x23d828: 0x8d0604b8  lw          $a2, 0x4B8($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D824u, 0x23D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D82Cu;
label_23d82c:
    // 0x23d82c: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x23d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x23d830: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D830u;
    SET_GPR_U32(ctx, 31, 0x23D838u);
    ctx->pc = 0x23D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D830u;
    // 0x23d834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D830u, 0x23D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D838u;
label_23d838:
    // 0x23d838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d83c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D83Cu;
    SET_GPR_U32(ctx, 31, 0x23D844u);
    ctx->pc = 0x23D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D83Cu;
    // 0x23d840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D83Cu, 0x23D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D844u;
label_23d844:
    // 0x23d844: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d850: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d854: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d858: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d85c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D85Cu;
    SET_GPR_U32(ctx, 31, 0x23D864u);
    ctx->pc = 0x23D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D85Cu;
    // 0x23d860: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D85Cu, 0x23D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D864u;
label_23d864:
    // 0x23d864: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d86c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d870: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d874: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d878: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d87c: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d884: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d888: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d88c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d890: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d894: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D894u;
    SET_GPR_U32(ctx, 31, 0x23D89Cu);
    ctx->pc = 0x23D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D894u;
    // 0x23d898: 0x8d0604bc  lw          $a2, 0x4BC($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D894u, 0x23D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D89Cu;
label_23d89c:
    // 0x23d89c: 0xc6c20158  lwc1        $f2, 0x158($s6)
    ctx->pc = 0x23d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d8a0: 0xc78081f8  lwc1        $f0, -0x7E08($gp)
    ctx->pc = 0x23d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d8a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23d8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d8a8: 0x0  nop
    ctx->pc = 0x23d8a8u;
    // NOP
    // 0x23d8ac: 0x0  nop
    ctx->pc = 0x23d8acu;
    // NOP
    // 0x23d8b0: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x23d8b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
    // 0x23d8b4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x23d8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d8b8: 0x0  nop
    ctx->pc = 0x23d8b8u;
    // NOP
    // 0x23d8bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23D8BCu;
    {
        const bool branch_taken_0x23d8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8BCu;
        // 0x23d8c0: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8bc) {
            ctx->pc = 0x23D8F8u;
            goto label_23d8f8;
        }
    }
    ctx->pc = 0x23D8C4u;
    // 0x23d8c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d8c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d8c8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x23D8C8u;
    SET_GPR_U32(ctx, 31, 0x23D8D0u);
    ctx->pc = 0x23D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8C8u;
    // 0x23d8cc: 0x2610e870  addiu       $s0, $s0, -0x1790 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x23D8C8u, 0x23D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8D0u;
label_23d8d0:
    // 0x23d8d0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d8d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d8e0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x23d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23d8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d8e8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D8E8u;
    SET_GPR_U32(ctx, 31, 0x23D8F0u);
    ctx->pc = 0x23D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E8u;
    // 0x23d8ec: 0x8c4604c0  lw          $a2, 0x4C0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D8E8u, 0x23D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8F0u;
label_23d8f0:
    // 0x23d8f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23D8F0u;
    {
        const bool branch_taken_0x23d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f0) {
            ctx->pc = 0x23D90Cu;
            goto label_23d90c;
        }
    }
    ctx->pc = 0x23D8F8u;
label_23d8f8:
    // 0x23d8f8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d8fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d900: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d908: 0x8c710598  lw          $s1, 0x598($v1)
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1432)));
label_23d90c:
    // 0x23d90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d910: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D910u;
    SET_GPR_U32(ctx, 31, 0x23D918u);
    ctx->pc = 0x23D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D910u;
    // 0x23d914: 0x26f52c18  addiu       $s5, $s7, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D910u, 0x23D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D918u;
label_23d918:
    // 0x23d918: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23d91c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d924: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d928: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d92c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d930: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D930u;
    SET_GPR_U32(ctx, 31, 0x23D938u);
    ctx->pc = 0x23D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D930u;
    // 0x23d934: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D930u, 0x23D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D938u;
label_23d938:
    // 0x23d938: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23d938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23d93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d940: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d944: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d948: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23d94c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23d94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d950: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23d954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d958: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d95c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23d960: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23d960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d964: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23d964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23d968: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23D968u;
    SET_GPR_U32(ctx, 31, 0x23D970u);
    ctx->pc = 0x23D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D968u;
    // 0x23d96c: 0x8d0604c4  lw          $a2, 0x4C4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23D968u, 0x23D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D970u;
label_23d970:
    // 0x23d970: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x23d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23d974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23d978: 0xc78281fc  lwc1        $f2, -0x7E04($gp)
    ctx->pc = 0x23d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d97c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x23d97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23d980: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x23d980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x23d984: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d988: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23d988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23d98c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23d98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d990: 0x0  nop
    ctx->pc = 0x23d990u;
    // NOP
    // 0x23d994: 0x0  nop
    ctx->pc = 0x23d994u;
    // NOP
    // 0x23d998: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x23d998u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x23d99c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x23D99Cu;
    {
        const bool branch_taken_0x23d99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D99Cu;
        // 0x23d9a0: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d99c) {
            ctx->pc = 0x23D9E0u;
            goto label_23d9e0;
        }
    }
    ctx->pc = 0x23D9A4u;
    // 0x23d9a4: 0x0  nop
    ctx->pc = 0x23d9a4u;
    // NOP
    // 0x23d9a8: 0x0  nop
    ctx->pc = 0x23d9a8u;
    // NOP
    // 0x23d9ac: 0x4601a303  div.s       $f12, $f20, $f1
    ctx->pc = 0x23d9acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[1];
    // 0x23d9b0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x23D9B0u;
    SET_GPR_U32(ctx, 31, 0x23D9B8u);
    ctx->pc = 0x23D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9B0u;
    // 0x23d9b4: 0x2610e878  addiu       $s0, $s0, -0x1788 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x23D9B0u, 0x23D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9B8u;
label_23d9b8:
    // 0x23d9b8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d9bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d9c8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23d9cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d9d0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23D9D0u;
    SET_GPR_U32(ctx, 31, 0x23D9D8u);
    ctx->pc = 0x23D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9D0u;
    // 0x23d9d4: 0x8c4604c8  lw          $a2, 0x4C8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23D9D0u, 0x23D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9D8u;
label_23d9d8:
    // 0x23d9d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23D9D8u;
    {
        const bool branch_taken_0x23d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D8u;
        // 0x23d9dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9d8) {
            ctx->pc = 0x23D9F4u;
            goto label_23d9f4;
        }
    }
    ctx->pc = 0x23D9E0u;
label_23d9e0:
    // 0x23d9e0: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23d9e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d9e8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23d9ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d9f0: 0x8c7105a0  lw          $s1, 0x5A0($v1)
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
label_23d9f4:
    // 0x23d9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9f8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23D9F8u;
    SET_GPR_U32(ctx, 31, 0x23DA00u);
    ctx->pc = 0x23D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9F8u;
    // 0x23d9fc: 0x26f02c18  addiu       $s0, $s7, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23D9F8u, 0x23DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA00u;
label_23da00:
    // 0x23da00: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23da04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23da04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23da14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23da14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da18: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23DA18u;
    SET_GPR_U32(ctx, 31, 0x23DA20u);
    ctx->pc = 0x23DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA18u;
    // 0x23da1c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23DA18u, 0x23DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA20u;
label_23da20:
    // 0x23da20: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x23da20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x23da24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23da24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da28: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23da2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da30: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x23da34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23da34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da38: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x23da38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x23da3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23da40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23da44: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x23da44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23da48: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da4c: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x23da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x23da50: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23DA50u;
    SET_GPR_U32(ctx, 31, 0x23DA58u);
    ctx->pc = 0x23DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA50u;
    // 0x23da54: 0x8d06047c  lw          $a2, 0x47C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23DA50u, 0x23DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA58u;
label_23da58:
    // 0x23da58: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x23da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23da5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DA5Cu;
    {
        const bool branch_taken_0x23da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA5Cu;
        // 0x23da60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da5c) {
            ctx->pc = 0x23DA74u;
            goto label_23da74;
        }
    }
    ctx->pc = 0x23DA64u;
    // 0x23da64: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x23da64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23da68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23da6c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23DA6Cu;
    {
        const bool branch_taken_0x23da6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA6Cu;
        // 0x23da70: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da6c) {
            ctx->pc = 0x23DAB0u;
            goto label_23dab0;
        }
    }
    ctx->pc = 0x23DA74u;
label_23da74:
    // 0x23da74: 0x26c7015c  addiu       $a3, $s6, 0x15C
    ctx->pc = 0x23da74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 348));
    // 0x23da78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da7c: 0x0  nop
    ctx->pc = 0x23da7cu;
    // NOP
label_23da80:
    // 0x23da80: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x23da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x23da84: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23da88: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23da8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23da90: 0x28c30030  slti        $v1, $a2, 0x30
    ctx->pc = 0x23da90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x23da94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23da98: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23DA98u;
    {
        const bool branch_taken_0x23da98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA98u;
        // 0x23da9c: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da98) {
            ctx->pc = 0x23DA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da80;
        }
    }
    ctx->pc = 0x23DAA0u;
    // 0x23daa0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x23DAA0u;
    SET_GPR_U32(ctx, 31, 0x23DAA8u);
    ctx->pc = 0x23DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAA0u;
    // 0x23daa4: 0x27c4e858  addiu       $a0, $fp, -0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x23DAA0u, 0x23DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAA8u;
label_23daa8:
    // 0x23daa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23DAA8u;
    {
        const bool branch_taken_0x23daa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAA8u;
        // 0x23daac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daa8) {
            ctx->pc = 0x23DAC0u;
            goto label_23dac0;
        }
    }
    ctx->pc = 0x23DAB0u;
label_23dab0:
    // 0x23dab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dab4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23dab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dabc: 0x8c7105a4  lw          $s1, 0x5A4($v1)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_23dac0:
    // 0x23dac0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23DAC0u;
    SET_GPR_U32(ctx, 31, 0x23DAC8u);
    ctx->pc = 0x23DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAC0u;
    // 0x23dac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23DAC0u, 0x23DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAC8u;
label_23dac8:
    // 0x23dac8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x23dacc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23daccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dad0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23dad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dad4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23dad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dad8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x23dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23dadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23dadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dae0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x23DAE0u;
    SET_GPR_U32(ctx, 31, 0x23DAE8u);
    ctx->pc = 0x23DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAE0u;
    // 0x23dae4: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x23DAE0u, 0x23DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAE8u;
label_23dae8:
    // 0x23dae8: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x23dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_23daec:
    // 0x23daec: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x23daecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x23daf0: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x23daf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23daf4: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x23daf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x23daf8: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x23daf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x23dafc: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x23dafcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x23db00: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x23db00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x23db04: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x23db08: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x23db08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x23db0c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x23db0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x23db10: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x23db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23db14: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB14u;
        // 0x23db18: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB1Cu;
}
