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

// Function: soZoomStart
// Address: 0x23f190 - 0x23f288
void soZoomStart_0x23f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soZoomStart_0x23f190");
#endif

    switch (ctx->pc) {
        case 0x23f1e8u: goto label_23f1e8;
        case 0x23f230u: goto label_23f230;
        default: break;
    }

    ctx->pc = 0x23f190u;

    // 0x23f190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f194: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23f198: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23f19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f1a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1a8: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F1A8u;
    {
        const bool branch_taken_0x23f1a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1A8u;
        // 0x23f1ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1a8) {
            ctx->pc = 0x23F1DCu;
            goto label_23f1dc;
        }
    }
    ctx->pc = 0x23F1B0u;
    // 0x23f1b0: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x23f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x23f1b4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x23f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23f1b8: 0x248233a0  addiu       $v0, $a0, 0x33A0
    ctx->pc = 0x23f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13216));
    // 0x23f1bc: 0xac8533a0  sw          $a1, 0x33A0($a0)
    ctx->pc = 0x23f1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1FC33A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33A0u, _value); } while (0);
    // 0x23f1c0: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x23f1c4: 0x2407017f  addiu       $a3, $zero, 0x17F
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x23f1c8: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x23f1cc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x23f1ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1FC33A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33A4u, _value); } while (0);
    // 0x23f1d0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x23f1d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1FC33ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33ACu, _value); } while (0);
    // 0x23f1d4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23F1D4u;
    {
        const bool branch_taken_0x23f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D4u;
        // 0x23f1d8: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1d4) {
            ctx->pc = 0x23F264u;
            goto label_23f264;
        }
    }
    ctx->pc = 0x23F1DCu;
label_23f1dc:
    // 0x23f1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1e0: 0xc08c32a  jal         func_230CA8
    ctx->pc = 0x23F1E0u;
    SET_GPR_U32(ctx, 31, 0x23F1E8u);
    ctx->pc = 0x23F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1E0u;
    // 0x23f1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23F1E0u, 0x23F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1E8u;
label_23f1e8:
    // 0x23f1e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x23f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x23f1ec: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x23f1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x23f1f0: 0x8c8299f0  lw          $v0, -0x6610($a0)
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x23f1f4: 0x248599f0  addiu       $a1, $a0, -0x6610
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x23f1f8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x23f1fc: 0x24d033a0  addiu       $s0, $a2, 0x33A0
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 13216));
    // 0x23f200: 0x24470118  addiu       $a3, $v0, 0x118
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x23f204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f208: 0x24680062  addiu       $t0, $v1, 0x62
    ctx->pc = 0x23f208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 98));
    // 0x23f20c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x23f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23f210: 0xacc233a0  sw          $v0, 0x33A0($a2)
    ctx->pc = 0x23f210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FC33A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33A0u, _value); } while (0);
    // 0x23f214: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x23f218: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23f218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1FC33A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33A4u, _value); } while (0);
    // 0x23f21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f220: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x23f220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1FC33A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FC33A8u, _value); } while (0);
    // 0x23f224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f228: 0xc08c32a  jal         func_230CA8
    ctx->pc = 0x23F228u;
    SET_GPR_U32(ctx, 31, 0x23F230u);
    ctx->pc = 0x23F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F228u;
    // 0x23f22c: 0xae08000c  sw          $t0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23F228u, 0x23F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F230u;
label_23f230:
    // 0x23f230: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23f234: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x23f234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f238: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F238u;
    {
        const bool branch_taken_0x23f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F238u;
        // 0x23f23c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f238) {
            ctx->pc = 0x23F268u;
            goto label_23f268;
        }
    }
    ctx->pc = 0x23F240u;
    // 0x23f240: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x23f240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f244: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F244u;
    {
        const bool branch_taken_0x23f244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F244u;
        // 0x23f248: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f244) {
            ctx->pc = 0x23F268u;
            goto label_23f268;
        }
    }
    ctx->pc = 0x23F24Cu;
    // 0x23f24c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f250: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23f254: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x23f258: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x23f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x23f25c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23f260: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x23f260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_23f264:
    // 0x23f264: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23f268:
    // 0x23f268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f26c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f270: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23f270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f278: 0xaf82b7a8  sw          $v0, -0x4858($gp)
    ctx->pc = 0x23f278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948776), GPR_U32(ctx, 2));
    // 0x23f27c: 0xaf83b7ac  sw          $v1, -0x4854($gp)
    ctx->pc = 0x23f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948780), GPR_U32(ctx, 3));
    // 0x23f280: 0x3e00008  jr          $ra
    ctx->pc = 0x23F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F280u;
        // 0x23f284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F288u;
}
