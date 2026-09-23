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

// Function: r_deleteroute
// Address: 0x2666c0 - 0x266764
void r_deleteroute_0x2666c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_deleteroute_0x2666c0");
#endif

    switch (ctx->pc) {
        case 0x266708u: goto label_266708;
        default: break;
    }

    ctx->pc = 0x2666c0u;

    // 0x2666c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2666c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2666c4: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2666C4u;
    {
        const bool branch_taken_0x2666c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2666C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666C4u;
        // 0x2666c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666c4) {
            ctx->pc = 0x2666ECu;
            goto label_2666ec;
        }
    }
    ctx->pc = 0x2666CCu;
    // 0x2666cc: 0x3c0a01fd  lui         $t2, 0x1FD
    ctx->pc = 0x2666ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)509 << 16));
    // 0x2666d0: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x2666d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2666d4: 0x2542a310  addiu       $v0, $t2, -0x5CF0
    ctx->pc = 0x2666d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x2666d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2666d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2666dc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2666dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2666e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2666e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2666e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2666E4u;
    {
        const bool branch_taken_0x2666e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666E4u;
        // 0x2666e8: 0x9788b8f0  lhu         $t0, -0x4710($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666e4) {
            ctx->pc = 0x266750u;
            goto label_266750;
        }
    }
    ctx->pc = 0x2666ECu;
label_2666ec:
    // 0x2666ec: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2666ECu;
    {
        const bool branch_taken_0x2666ec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666ECu;
        // 0x2666f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666ec) {
            ctx->pc = 0x266744u;
            goto label_266744;
        }
    }
    ctx->pc = 0x2666F4u;
    // 0x2666f4: 0x9788b8f0  lhu         $t0, -0x4710($gp)
    ctx->pc = 0x2666f4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949104)));
    // 0x2666f8: 0x3c0a01fd  lui         $t2, 0x1FD
    ctx->pc = 0x2666f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)509 << 16));
    // 0x2666fc: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x2666fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x266700: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x266704: 0x0  nop
    ctx->pc = 0x266704u;
    // NOP
label_266708:
    // 0x266708: 0x2543a310  addiu       $v1, $t2, -0x5CF0
    ctx->pc = 0x266708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x26670c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266710: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x266710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266714: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x266714u;
    {
        const bool branch_taken_0x266714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x266714) {
            ctx->pc = 0x266718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266714u;
            // 0x266718: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26672Cu;
            goto label_26672c;
        }
    }
    ctx->pc = 0x26671Cu;
    // 0x26671c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x26671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x266720: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266724: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x266724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266728: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x266728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_26672c:
    // 0x26672c: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x26672Cu;
    {
        const bool branch_taken_0x26672c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x266730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26672Cu;
        // 0x266730: 0x2542a310  addiu       $v0, $t2, -0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26672c) {
            ctx->pc = 0x266754u;
            goto label_266754;
        }
    }
    ctx->pc = 0x266734u;
    // 0x266734: 0x5120fff4  beql        $t1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x266734u;
    {
        const bool branch_taken_0x266734 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x266734) {
            ctx->pc = 0x266738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266734u;
            // 0x266738: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266708;
        }
    }
    ctx->pc = 0x26673Cu;
    // 0x26673c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26673Cu;
    {
        const bool branch_taken_0x26673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26673Cu;
        // 0x266740: 0xaf85b8f0  sw          $a1, -0x4710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26673c) {
            ctx->pc = 0x266758u;
            goto label_266758;
        }
    }
    ctx->pc = 0x266744u;
label_266744:
    // 0x266744: 0x9788b8f0  lhu         $t0, -0x4710($gp)
    ctx->pc = 0x266744u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949104)));
    // 0x266748: 0x3c0a01fd  lui         $t2, 0x1FD
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)509 << 16));
    // 0x26674c: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x26674cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_266750:
    // 0x266750: 0x2542a310  addiu       $v0, $t2, -0x5CF0
    ctx->pc = 0x266750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
label_266754:
    // 0x266754: 0xaf85b8f0  sw          $a1, -0x4710($gp)
    ctx->pc = 0x266754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 5));
label_266758:
    // 0x266758: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x266758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26675c: 0x3e00008  jr          $ra
    ctx->pc = 0x26675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26675Cu;
        // 0x266760: 0xa4480000  sh          $t0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26675Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266764u;
}
