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

// Function: bgPortalCalcInit
// Address: 0x257680 - 0x257774
void bgPortalCalcInit_0x257680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCalcInit_0x257680");
#endif

    switch (ctx->pc) {
        case 0x257698u: goto label_257698;
        case 0x257700u: goto label_257700;
        default: break;
    }

    ctx->pc = 0x257680u;

    // 0x257680: 0x8f8ba268  lw          $t3, -0x5D98($gp)
    ctx->pc = 0x257680u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x257684: 0x19600017  blez        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x257684u;
    {
        const bool branch_taken_0x257684 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x257688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257684u;
        // 0x257688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257684) {
            ctx->pc = 0x2576E4u;
            goto label_2576e4;
        }
    }
    ctx->pc = 0x25768Cu;
    // 0x25768c: 0x8f88a230  lw          $t0, -0x5DD0($gp)
    ctx->pc = 0x25768cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x257690: 0x3c0e0035  lui         $t6, 0x35
    ctx->pc = 0x257690u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)53 << 16));
    // 0x257694: 0x8f8ab234  lw          $t2, -0x4DCC($gp)
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_257698:
    // 0x257698: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25769c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x25769cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2576a0: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x2576a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2576a4: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2576a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2576a8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2576ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2576b0: 0x12b302a  slt         $a2, $t1, $t3
    ctx->pc = 0x2576b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2576b4: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2576b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2576b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2576bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2576bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2576c0: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x2576c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 7));
    // 0x2576c4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2576c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2576c8: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x2576c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x2576cc: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x2576ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2576d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2576d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2576d4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2576D4u;
    {
        const bool branch_taken_0x2576d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2576D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D4u;
        // 0x2576d8: 0xac470020  sw          $a3, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576d4) {
            ctx->pc = 0x257698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257698;
        }
    }
    ctx->pc = 0x2576DCu;
    // 0x2576dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2576DCu;
    {
        const bool branch_taken_0x2576dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576DCu;
        // 0x2576e0: 0x8f8ca264  lw          $t4, -0x5D9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576dc) {
            ctx->pc = 0x2576F0u;
            goto label_2576f0;
        }
    }
    ctx->pc = 0x2576E4u;
label_2576e4:
    // 0x2576e4: 0x8f8ab234  lw          $t2, -0x4DCC($gp)
    ctx->pc = 0x2576e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2576e8: 0x3c0e0035  lui         $t6, 0x35
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)53 << 16));
    // 0x2576ec: 0x8f8ca264  lw          $t4, -0x5D9C($gp)
    ctx->pc = 0x2576ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_2576f0:
    // 0x2576f0: 0x19800019  blez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2576F0u;
    {
        const bool branch_taken_0x2576f0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2576F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576F0u;
        // 0x2576f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576f0) {
            ctx->pc = 0x257758u;
            goto label_257758;
        }
    }
    ctx->pc = 0x2576F8u;
    // 0x2576f8: 0x8f8bb894  lw          $t3, -0x476C($gp)
    ctx->pc = 0x2576f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949012)));
    // 0x2576fc: 0x3c0d0035  lui         $t5, 0x35
    ctx->pc = 0x2576fcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)53 << 16));
label_257700:
    // 0x257700: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x257700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x257704: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x257704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x257708: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x257708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25770c: 0x25a67330  addiu       $a2, $t5, 0x7330
    ctx->pc = 0x25770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 29488));
    // 0x257710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257714: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257718: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x257718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25771c: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x25771cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x257720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257724: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x257728: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25772c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257730: 0x12c382a  slt         $a3, $t1, $t4
    ctx->pc = 0x257730u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x257734: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x257734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x257738: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x257738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25773c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257740: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x257744: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257748: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25774c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x25774cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x257750: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x257750u;
    {
        const bool branch_taken_0x257750 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x257754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257750u;
        // 0x257754: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257750) {
            ctx->pc = 0x257700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257700;
        }
    }
    ctx->pc = 0x257758u;
label_257758:
    // 0x257758: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x257758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25775c: 0x25c37340  addiu       $v1, $t6, 0x7340
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 29504));
    // 0x257760: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x257760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25776c: 0x3e00008  jr          $ra
    ctx->pc = 0x25776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25776Cu;
        // 0x257770: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25776Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257774u;
}
