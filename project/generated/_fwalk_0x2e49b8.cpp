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

// Function: _fwalk
// Address: 0x2e49b8 - 0x2e4a4c
void _fwalk_0x2e49b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fwalk_0x2e49b8");
#endif

    switch (ctx->pc) {
        case 0x2e49b8u: goto label_2e49b8;
        case 0x2e49bcu: goto label_2e49bc;
        case 0x2e49c0u: goto label_2e49c0;
        case 0x2e49c4u: goto label_2e49c4;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49ccu: goto label_2e49cc;
        case 0x2e49d0u: goto label_2e49d0;
        case 0x2e49d4u: goto label_2e49d4;
        case 0x2e49d8u: goto label_2e49d8;
        case 0x2e49dcu: goto label_2e49dc;
        case 0x2e49e0u: goto label_2e49e0;
        case 0x2e49e4u: goto label_2e49e4;
        case 0x2e49e8u: goto label_2e49e8;
        case 0x2e49ecu: goto label_2e49ec;
        case 0x2e49f0u: goto label_2e49f0;
        case 0x2e49f4u: goto label_2e49f4;
        case 0x2e49f8u: goto label_2e49f8;
        case 0x2e49fcu: goto label_2e49fc;
        case 0x2e4a00u: goto label_2e4a00;
        case 0x2e4a04u: goto label_2e4a04;
        case 0x2e4a08u: goto label_2e4a08;
        case 0x2e4a0cu: goto label_2e4a0c;
        case 0x2e4a10u: goto label_2e4a10;
        case 0x2e4a14u: goto label_2e4a14;
        case 0x2e4a18u: goto label_2e4a18;
        case 0x2e4a1cu: goto label_2e4a1c;
        case 0x2e4a20u: goto label_2e4a20;
        case 0x2e4a24u: goto label_2e4a24;
        case 0x2e4a28u: goto label_2e4a28;
        case 0x2e4a2cu: goto label_2e4a2c;
        case 0x2e4a30u: goto label_2e4a30;
        case 0x2e4a34u: goto label_2e4a34;
        case 0x2e4a38u: goto label_2e4a38;
        case 0x2e4a3cu: goto label_2e4a3c;
        case 0x2e4a40u: goto label_2e4a40;
        case 0x2e4a44u: goto label_2e4a44;
        case 0x2e4a48u: goto label_2e4a48;
        default: break;
    }

    ctx->pc = 0x2e49b8u;

label_2e49b8:
    // 0x2e49b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e49b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e49bc:
    // 0x2e49bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e49bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2e49c0:
    // 0x2e49c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e49c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2e49c4:
    // 0x2e49c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e49c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e49c8:
    // 0x2e49c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e49c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e49cc:
    // 0x2e49cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e49ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e49d0:
    // 0x2e49d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e49d4:
    // 0x2e49d4: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x2e49d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_2e49d8:
    // 0x2e49d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e49dc:
    // 0x2e49dc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_2e49e0:
    if (ctx->pc == 0x2E49E0u) {
        ctx->pc = 0x2E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49DCu;
        // 0x2e49e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E49E4u;
        goto label_2e49e4;
    }
    ctx->pc = 0x2E49DCu;
    {
        const bool branch_taken_0x2e49dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49DCu;
        // 0x2e49e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49dc) {
            ctx->pc = 0x2E4A28u;
            goto label_2e4a28;
        }
    }
    ctx->pc = 0x2E49E4u;
label_2e49e4:
    // 0x2e49e4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e49e8:
    // 0x2e49e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e49e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e49ec:
    // 0x2e49ec: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_2e49f0:
    if (ctx->pc == 0x2E49F0u) {
        ctx->pc = 0x2E49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49ECu;
        // 0x2e49f0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E49F4u;
        goto label_2e49f4;
    }
    ctx->pc = 0x2E49ECu;
    {
        const bool branch_taken_0x2e49ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2E49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49ECu;
        // 0x2e49f0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49ec) {
            ctx->pc = 0x2E4A1Cu;
            goto label_2e4a1c;
        }
    }
    ctx->pc = 0x2E49F4u;
label_2e49f4:
    // 0x2e49f4: 0x0  nop
    ctx->pc = 0x2e49f4u;
    // NOP
label_2e49f8:
    // 0x2e49f8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2e49f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2e49fc:
    // 0x2e49fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2e4a00:
    if (ctx->pc == 0x2E4A00u) {
        ctx->pc = 0x2E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49FCu;
        // 0x2e4a00: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A04u;
        goto label_2e4a04;
    }
    ctx->pc = 0x2E49FCu;
    {
        const bool branch_taken_0x2e49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49fc) {
            ctx->pc = 0x2E4A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E49FCu;
            // 0x2e4a00: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A14u;
            goto label_2e4a14;
        }
    }
    ctx->pc = 0x2E4A04u;
label_2e4a04:
    // 0x2e4a04: 0x280f809  jalr        $s4
label_2e4a08:
    if (ctx->pc == 0x2E4A08u) {
        ctx->pc = 0x2E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A04u;
        // 0x2e4a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A0Cu;
        goto label_2e4a0c;
    }
    ctx->pc = 0x2E4A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2E4A0Cu);
        ctx->pc = 0x2E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A04u;
        // 0x2e4a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A04u, 0x2E4A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4A0Cu;
label_2e4a0c:
    // 0x2e4a0c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2e4a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2e4a10:
    // 0x2e4a10: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e4a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e4a14:
    // 0x2e4a14: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_2e4a18:
    if (ctx->pc == 0x2E4A18u) {
        ctx->pc = 0x2E4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A14u;
        // 0x2e4a18: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A1Cu;
        goto label_2e4a1c;
    }
    ctx->pc = 0x2E4A14u;
    {
        const bool branch_taken_0x2e4a14 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A14u;
        // 0x2e4a18: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a14) {
            ctx->pc = 0x2E49F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e49f8;
        }
    }
    ctx->pc = 0x2E4A1Cu;
label_2e4a1c:
    // 0x2e4a1c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x2e4a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4a20:
    // 0x2e4a20: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_2e4a24:
    if (ctx->pc == 0x2E4A24u) {
        ctx->pc = 0x2E4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A20u;
        // 0x2e4a24: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A28u;
        goto label_2e4a28;
    }
    ctx->pc = 0x2E4A20u;
    {
        const bool branch_taken_0x2e4a20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a20) {
            ctx->pc = 0x2E4A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4A20u;
            // 0x2e4a24: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E49E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e49e8;
        }
    }
    ctx->pc = 0x2E4A28u;
label_2e4a28:
    // 0x2e4a28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e4a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4a2c:
    // 0x2e4a2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e4a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4a30:
    // 0x2e4a30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e4a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e4a34:
    // 0x2e4a34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e4a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e4a38:
    // 0x2e4a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e4a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4a3c:
    // 0x2e4a3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e4a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4a40:
    // 0x2e4a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4a44:
    // 0x2e4a44: 0x3e00008  jr          $ra
label_2e4a48:
    if (ctx->pc == 0x2E4A48u) {
        ctx->pc = 0x2E4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A44u;
        // 0x2e4a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4A4Cu;
        goto label_fallthrough_0x2e4a44;
    }
    ctx->pc = 0x2E4A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A44u;
        // 0x2e4a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e4a44:
    ctx->pc = 0x2E4A4Cu;
}
