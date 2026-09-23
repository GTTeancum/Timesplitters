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

// Function: partSetTextureOffset
// Address: 0x260128 - 0x260220
void partSetTextureOffset_0x260128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partSetTextureOffset_0x260128");
#endif

    switch (ctx->pc) {
        case 0x260148u: goto label_260148;
        case 0x260178u: goto label_260178;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601fcu: goto label_2601fc;
        default: break;
    }

    ctx->pc = 0x260128u;

label_260128:
    // 0x260128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26012c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x260130: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260134: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x260134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x260138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26013c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26013cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260144: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_260148:
    // 0x260148: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x260148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26014c: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x26014cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x260150: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x260150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260154: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x260154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x260158: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x260158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26015c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x260160: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x260160u;
    {
        const bool branch_taken_0x260160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260160u;
        // 0x260164: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260160) {
            ctx->pc = 0x26019Cu;
            goto label_26019c;
        }
    }
    ctx->pc = 0x260168u;
    // 0x260168: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26016c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26016Cu;
    {
        const bool branch_taken_0x26016c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26016Cu;
        // 0x260170: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26016c) {
            ctx->pc = 0x2601A0u;
            goto label_2601a0;
        }
    }
    ctx->pc = 0x260174u;
    // 0x260174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260178:
    // 0x260178: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260178u;
    {
        const bool branch_taken_0x260178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260178u;
        // 0x26017c: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260178) {
            ctx->pc = 0x260184u;
            goto label_260184;
        }
    }
    ctx->pc = 0x260180u;
    // 0x260180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x260180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_260184:
    // 0x260184: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x260184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x260188: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x260188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26018c: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26018Cu;
    {
        const bool branch_taken_0x26018c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26018c) {
            ctx->pc = 0x260190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26018Cu;
            // 0x260190: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260178;
        }
    }
    ctx->pc = 0x260194u;
    // 0x260194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260194u;
    {
        const bool branch_taken_0x260194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260194) {
            ctx->pc = 0x2601A0u;
            goto label_2601a0;
        }
    }
    ctx->pc = 0x26019Cu;
label_26019c:
    // 0x26019c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2601a0:
    // 0x2601a0: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2601A0u;
    {
        const bool branch_taken_0x2601a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601a0) {
            ctx->pc = 0x2601A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2601A0u;
            // 0x2601a4: 0x82050003  lb          $a1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2601E0u;
            goto label_2601e0;
        }
    }
    ctx->pc = 0x2601A8u;
    // 0x2601a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2601a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601ac: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2601acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2601b0: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2601B0u;
    {
        const bool branch_taken_0x2601b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2601b0) {
            ctx->pc = 0x2601B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2601B0u;
            // 0x2601b4: 0x82050003  lb          $a1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2601E0u;
            goto label_2601e0;
        }
    }
    ctx->pc = 0x2601B8u;
    // 0x2601b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2601b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2601bc: 0x0  nop
    ctx->pc = 0x2601bcu;
    // NOP
label_2601c0:
    // 0x2601c0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2601C0u;
    {
        const bool branch_taken_0x2601c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2601C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601C0u;
        // 0x2601c4: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601c0) {
            ctx->pc = 0x2601CCu;
            goto label_2601cc;
        }
    }
    ctx->pc = 0x2601C8u;
    // 0x2601c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2601c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2601cc:
    // 0x2601cc: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2601ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2601d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2601d4: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2601D4u;
    {
        const bool branch_taken_0x2601d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2601d4) {
            ctx->pc = 0x2601D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2601D4u;
            // 0x2601d8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2601C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2601c0;
        }
    }
    ctx->pc = 0x2601DCu;
    // 0x2601dc: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x2601dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2601e0:
    // 0x2601e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2601E0u;
    {
        const bool branch_taken_0x2601e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2601E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601E0u;
        // 0x2601e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601e0) {
            ctx->pc = 0x2601FCu;
            goto label_2601fc;
        }
    }
    ctx->pc = 0x2601E8u;
    // 0x2601e8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2601e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2601ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2601ECu;
    {
        const bool branch_taken_0x2601ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601ECu;
        // 0x2601f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601ec) {
            ctx->pc = 0x2601FCu;
            goto label_2601fc;
        }
    }
    ctx->pc = 0x2601F4u;
    // 0x2601f4: 0xc09804a  jal         func_260128
    ctx->pc = 0x2601F4u;
    SET_GPR_U32(ctx, 31, 0x2601FCu);
    ctx->pc = 0x2601F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601F4u;
    // 0x2601f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260128u;
    goto label_260128;
    ctx->pc = 0x2601FCu;
label_2601fc:
    // 0x2601fc: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2601fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x260200: 0x4a3ffd1  bgezl       $a1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x260200u;
    {
        const bool branch_taken_0x260200 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x260200) {
            ctx->pc = 0x260204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260200u;
            // 0x260204: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260148;
        }
    }
    ctx->pc = 0x260208u;
    // 0x260208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x260208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26020c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26020cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260210: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260218: 0x3e00008  jr          $ra
    ctx->pc = 0x260218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260218u;
        // 0x26021c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260220u;
}
