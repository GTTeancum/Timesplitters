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

// Function: bulletMakeAttachedMinesInvisible
// Address: 0x28d2d8 - 0x28d3a4
void bulletMakeAttachedMinesInvisible_0x28d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletMakeAttachedMinesInvisible_0x28d2d8");
#endif

    switch (ctx->pc) {
        case 0x28d2f0u: goto label_28d2f0;
        default: break;
    }

    ctx->pc = 0x28d2d8u;

    // 0x28d2d8: 0x8f82b948  lw          $v0, -0x46B8($gp)
    ctx->pc = 0x28d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x28d2dc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x28d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x28d2e0: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x28d2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x28d2e4: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x28d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28d2e8: 0x24451590  addiu       $a1, $v0, 0x1590
    ctx->pc = 0x28d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5520));
    // 0x28d2ec: 0x0  nop
    ctx->pc = 0x28d2ecu;
    // NOP
label_28d2f0:
    // 0x28d2f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28d2f4: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x28D2F4u;
    {
        const bool branch_taken_0x28d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d2f4) {
            ctx->pc = 0x28D2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D2F4u;
            // 0x28d2f8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D394u;
            goto label_28d394;
        }
    }
    ctx->pc = 0x28D2FCu;
    // 0x28d2fc: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x28d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x28d300: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28D300u;
    {
        const bool branch_taken_0x28d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D300u;
        // 0x28d304: 0x8ca30060  lw          $v1, 0x60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d300) {
            ctx->pc = 0x28D34Cu;
            goto label_28d34c;
        }
    }
    ctx->pc = 0x28D308u;
    // 0x28d308: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D308u;
    {
        const bool branch_taken_0x28d308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d308) {
            ctx->pc = 0x28D30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D308u;
            // 0x28d30c: 0x8ca3008c  lw          $v1, 0x8C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D320u;
            goto label_28d320;
        }
    }
    ctx->pc = 0x28D310u;
    // 0x28d310: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d314: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x28d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x28d318: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28d318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x28d31c: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x28d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_28d320:
    // 0x28d320: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D320u;
    {
        const bool branch_taken_0x28d320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d320) {
            ctx->pc = 0x28D324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D320u;
            // 0x28d324: 0x8ca30090  lw          $v1, 0x90($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D338u;
            goto label_28d338;
        }
    }
    ctx->pc = 0x28D328u;
    // 0x28d328: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d32c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x28d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x28d330: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28d330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x28d334: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_28d338:
    // 0x28d338: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28D338u;
    {
        const bool branch_taken_0x28d338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d338) {
            ctx->pc = 0x28D33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D338u;
            // 0x28d33c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D394u;
            goto label_28d394;
        }
    }
    ctx->pc = 0x28D340u;
    // 0x28d340: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d344: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28D344u;
    {
        const bool branch_taken_0x28d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D344u;
        // 0x28d348: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d344) {
            ctx->pc = 0x28D38Cu;
            goto label_28d38c;
        }
    }
    ctx->pc = 0x28D34Cu;
label_28d34c:
    // 0x28d34c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D34Cu;
    {
        const bool branch_taken_0x28d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d34c) {
            ctx->pc = 0x28D350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D34Cu;
            // 0x28d350: 0x8ca3008c  lw          $v1, 0x8C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D364u;
            goto label_28d364;
        }
    }
    ctx->pc = 0x28D354u;
    // 0x28d354: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d358: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d35c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x28d360: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_28d364:
    // 0x28d364: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D364u;
    {
        const bool branch_taken_0x28d364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d364) {
            ctx->pc = 0x28D368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D364u;
            // 0x28d368: 0x8ca30090  lw          $v1, 0x90($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D37Cu;
            goto label_28d37c;
        }
    }
    ctx->pc = 0x28D36Cu;
    // 0x28d36c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d370: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d374: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28d374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x28d378: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x28d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_28d37c:
    // 0x28d37c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D37Cu;
    {
        const bool branch_taken_0x28d37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d37c) {
            ctx->pc = 0x28D380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D37Cu;
            // 0x28d380: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D394u;
            goto label_28d394;
        }
    }
    ctx->pc = 0x28D384u;
    // 0x28d384: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d388: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28d38c:
    // 0x28d38c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x28d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x28d390: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28d390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_28d394:
    // 0x28d394: 0x4e1ffd6  bgez        $a3, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28D394u;
    {
        const bool branch_taken_0x28d394 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x28D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D394u;
        // 0x28d398: 0x24a50114  addiu       $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d394) {
            ctx->pc = 0x28D2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d2f0;
        }
    }
    ctx->pc = 0x28D39Cu;
    // 0x28d39c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D3A4u;
}
