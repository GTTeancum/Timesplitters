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

// Function: StatsSetChar
// Address: 0x224250 - 0x224334
void StatsSetChar_0x224250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsSetChar_0x224250");
#endif

    switch (ctx->pc) {
        case 0x2242a4u: goto label_2242a4;
        default: break;
    }

    ctx->pc = 0x224250u;

    // 0x224250: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x224250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224254: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x224254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x224258: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x224258u;
    {
        const bool branch_taken_0x224258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224258u;
        // 0x22425c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224258) {
            ctx->pc = 0x2242A4u;
            goto label_2242a4;
        }
    }
    ctx->pc = 0x224260u;
    // 0x224260: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224264: 0x2483c4a8  addiu       $v1, $a0, -0x3B58
    ctx->pc = 0x224264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
    // 0x224268: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x224268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x22426c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224270: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224274: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x224274u;
    {
        const bool branch_taken_0x224274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224274u;
        // 0x224278: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224274) {
            ctx->pc = 0x2242ACu;
            goto label_2242ac;
        }
    }
    ctx->pc = 0x22427Cu;
    // 0x22427c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x224280: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x224280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x224284: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224284u;
    {
        const bool branch_taken_0x224284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224284u;
        // 0x224288: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224284) {
            ctx->pc = 0x2242ACu;
            goto label_2242ac;
        }
    }
    ctx->pc = 0x22428Cu;
    // 0x22428c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x224290: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x224294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224298: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x224298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22429c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22429Cu;
    {
        const bool branch_taken_0x22429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22429Cu;
        // 0x2242a0: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22429c) {
            ctx->pc = 0x2242B4u;
            goto label_2242b4;
        }
    }
    ctx->pc = 0x2242A4u;
label_2242a4:
    // 0x2242a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2242A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2242A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2242ACu;
label_2242ac:
    // 0x2242ac: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2242ACu;
    {
        const bool branch_taken_0x2242ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242ACu;
        // 0x2242b0: 0x28c2000e  slti        $v0, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242ac) {
            ctx->pc = 0x2242A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2242a4;
        }
    }
    ctx->pc = 0x2242B4u;
label_2242b4:
    // 0x2242b4: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2242B4u;
    {
        const bool branch_taken_0x2242b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242B4u;
        // 0x2242b8: 0x2483c4a8  addiu       $v1, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242b4) {
            ctx->pc = 0x2242A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2242a4;
        }
    }
    ctx->pc = 0x2242BCu;
    // 0x2242bc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2242bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2242c0: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2242c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2242c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2242c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2242C8u;
    {
        const bool branch_taken_0x2242c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C8u;
        // 0x2242cc: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242c8) {
            ctx->pc = 0x224300u;
            goto label_224300;
        }
    }
    ctx->pc = 0x2242D0u;
    // 0x2242d0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2242d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2242d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2242d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2242d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2242D8u;
    {
        const bool branch_taken_0x2242d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242D8u;
        // 0x2242dc: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242d8) {
            ctx->pc = 0x224300u;
            goto label_224300;
        }
    }
    ctx->pc = 0x2242E0u;
    // 0x2242e0: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2242e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2242e4: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2242e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2242e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2242e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2242ec: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2242ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2242f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2242F0u;
    {
        const bool branch_taken_0x2242f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2242F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242F0u;
        // 0x2242f4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242f0) {
            ctx->pc = 0x224308u;
            goto label_224308;
        }
    }
    ctx->pc = 0x2242F8u;
    // 0x2242f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2242F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2242F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224300u;
label_224300:
    // 0x224300: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x224300u;
    {
        const bool branch_taken_0x224300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224300u;
        // 0x224304: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224300) {
            ctx->pc = 0x2242A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2242a4;
        }
    }
    ctx->pc = 0x224308u;
label_224308:
    // 0x224308: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x22430c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x22430cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x224310: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x224310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x224314: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x224314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x224318: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22431c: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x22431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x224320: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224324: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x224328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22432c: 0x3e00008  jr          $ra
    ctx->pc = 0x22432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22432Cu;
        // 0x224330: 0xe46c03a8  swc1        $f12, 0x3A8($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 936), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224334u;
}
