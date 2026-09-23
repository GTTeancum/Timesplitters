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

// Function: soZoomGfx
// Address: 0x23f288 - 0x23f37c
void soZoomGfx_0x23f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soZoomGfx_0x23f288");
#endif

    switch (ctx->pc) {
        case 0x23f35cu: goto label_23f35c;
        default: break;
    }

    ctx->pc = 0x23f288u;

    // 0x23f288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f28c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f294: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f298: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F298u;
    {
        const bool branch_taken_0x23f298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f298) {
            ctx->pc = 0x23F29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F298u;
            // 0x23f29c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F2A0u;
            goto label_23f2a0;
        }
    }
    ctx->pc = 0x23F2A0u;
label_23f2a0:
    // 0x23f2a0: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x23f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23f2a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f2a8: 0x24c333a0  addiu       $v1, $a2, 0x33A0
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 13216));
    // 0x23f2ac: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x23f2acu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1FC33ACu));
    // 0x23f2b0: 0x240a00a7  addiu       $t2, $zero, 0xA7
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x23f2b4: 0x8cce33a0  lw          $t6, 0x33A0($a2)
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x1FC33A0u));
    // 0x23f2b8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x23f2bc: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x23f2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x23f2c0: 0x8c6d0004  lw          $t5, 0x4($v1)
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23f2c4: 0x144001a  div         $zero, $t2, $a0
    ctx->pc = 0x23f2c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23f2c8: 0xae2823  subu        $a1, $a1, $t6
    ctx->pc = 0x23f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x23f2cc: 0x70a4001a  div1        $zero, $a1, $a0
    ctx->pc = 0x23f2ccu;
    { int32_t divisor = GPR_S32(ctx, 4); int32_t dividend = GPR_S32(ctx, 5); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x23f2d0: 0x240c0038  addiu       $t4, $zero, 0x38
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x23f2d4: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x23f2d8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23f2dc: 0x240b022f  addiu       $t3, $zero, 0x22F
    ctx->pc = 0x23f2dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x23f2e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f2e4: 0x1665823  subu        $t3, $t3, $a2
    ctx->pc = 0x23f2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x23f2e8: 0x8f83b7a8  lw          $v1, -0x4858($gp)
    ctx->pc = 0x23f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948776)));
    // 0x23f2ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23f2f0: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x23f2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x23f2f4: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x23f2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x23f2f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f2fc: 0x35297f80  ori         $t1, $t1, 0x7F80
    ctx->pc = 0x23f2fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32640);
    // 0x23f300: 0x5012  mflo        $t2
    ctx->pc = 0x23f300u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x23f304: 0x184001a  div         $zero, $t4, $a0
    ctx->pc = 0x23f304u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23f308: 0x70002812  mflo1       $a1
    ctx->pc = 0x23f308u;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x23f30c: 0x7164001a  div1        $zero, $t3, $a0
    ctx->pc = 0x23f30cu;
    { int32_t divisor = GPR_S32(ctx, 4); int32_t dividend = GPR_S32(ctx, 11); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x23f310: 0x6012  mflo        $t4
    ctx->pc = 0x23f310u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x23f314: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x23f314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f318: 0x70005812  mflo1       $t3
    ctx->pc = 0x23f318u;
    SET_GPR_U64(ctx, 11, ctx->lo1);
    // 0x23f31c: 0x675021  addu        $t2, $v1, $a3
    ctx->pc = 0x23f31cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23f320: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x23f320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f324: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x23f324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f328: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x23f328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x23f32c: 0x6e2821  addu        $a1, $v1, $t6
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23f330: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x23f330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f338: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23f338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x23f33c: 0x6d6021  addu        $t4, $v1, $t5
    ctx->pc = 0x23f33cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23f340: 0x1621818  mult        $v1, $t3, $v0
    ctx->pc = 0x23f340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f344: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x23f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f348: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x23f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x23f34c: 0x665821  addu        $t3, $v1, $a2
    ctx->pc = 0x23f34cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23f350: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x23f350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f354: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x23F354u;
    SET_GPR_U32(ctx, 31, 0x23F35Cu);
    ctx->pc = 0x23F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F354u;
    // 0x23f358: 0xafab0008  sw          $t3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x23F354u, 0x23F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F35Cu;
label_23f35c:
    // 0x23f35c: 0x8f83b7a8  lw          $v1, -0x4858($gp)
    ctx->pc = 0x23f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948776)));
    // 0x23f360: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f364: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F364u;
    {
        const bool branch_taken_0x23f364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F364u;
        // 0x23f368: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f364) {
            ctx->pc = 0x23F374u;
            goto label_23f374;
        }
    }
    ctx->pc = 0x23F36Cu;
    // 0x23f36c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x23f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23f370: 0xaf82b7a8  sw          $v0, -0x4858($gp)
    ctx->pc = 0x23f370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 2));
label_23f374:
    // 0x23f374: 0x3e00008  jr          $ra
    ctx->pc = 0x23F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F374u;
        // 0x23f378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F37Cu;
}
