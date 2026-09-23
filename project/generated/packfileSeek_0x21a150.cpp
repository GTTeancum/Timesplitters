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

// Function: packfileSeek
// Address: 0x21a150 - 0x21a284
void packfileSeek_0x21a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("packfileSeek_0x21a150");
#endif

    switch (ctx->pc) {
        case 0x21a16cu: goto label_21a16c;
        case 0x21a188u: goto label_21a188;
        case 0x21a198u: goto label_21a198;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a200u: goto label_21a200;
        case 0x21a220u: goto label_21a220;
        default: break;
    }

    ctx->pc = 0x21a150u;

    // 0x21a150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21a154: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21a158: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21a15c: 0x24a5e550  addiu       $a1, $a1, -0x1AB0
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x21a160: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21a164: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x21A164u;
    SET_GPR_U32(ctx, 31, 0x21A16Cu);
    ctx->pc = 0x21A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A164u;
    // 0x21a168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x21A164u, 0x21A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A16Cu;
label_21a16c:
    // 0x21a16c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x21a16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21a170: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x21a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x21a174: 0x8f859d58  lw          $a1, -0x62A8($gp)
    ctx->pc = 0x21a174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942040)));
    // 0x21a178: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x21A178u;
    {
        const bool branch_taken_0x21a178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A178u;
        // 0x21a17c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a178) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A180u;
    // 0x21a180: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x21A180u;
    SET_GPR_U32(ctx, 31, 0x21A188u);
    ctx->pc = 0x21A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A180u;
    // 0x21a184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x21A180u, 0x21A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A188u;
label_21a188:
    // 0x21a188: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A188u;
    {
        const bool branch_taken_0x21a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A188u;
        // 0x21a18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a188) {
            ctx->pc = 0x21A1B8u;
            goto label_21a1b8;
        }
    }
    ctx->pc = 0x21A190u;
    // 0x21a190: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x21A190u;
    {
        const bool branch_taken_0x21a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A190u;
        // 0x21a194: 0x8f829d58  lw          $v0, -0x62A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a190) {
            ctx->pc = 0x21A274u;
            goto label_21a274;
        }
    }
    ctx->pc = 0x21A198u;
label_21a198:
    // 0x21a198: 0x25c34c40  addiu       $v1, $t6, 0x4C40
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 19520));
    // 0x21a19c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21a19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1a0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x21a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x21a1a4: 0xaf869d58  sw          $a2, -0x62A8($gp)
    ctx->pc = 0x21a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942040), GPR_U32(ctx, 6));
    // 0x21a1a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a1ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21A1ACu;
    {
        const bool branch_taken_0x21a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1ACu;
        // 0x21a1b0: 0xaf84b6c0  sw          $a0, -0x4940($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948544), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1ac) {
            ctx->pc = 0x21A274u;
            goto label_21a274;
        }
    }
    ctx->pc = 0x21A1B4u;
label_21a1b4:
    // 0x21a1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a1b8:
    // 0x21a1b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1bc: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x21A1BCu;
    SET_GPR_U32(ctx, 31, 0x21A1C4u);
    ctx->pc = 0x21A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1BCu;
    // 0x21a1c0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x21A1BCu, 0x21A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1C4u;
label_21a1c4:
    // 0x21a1c4: 0x8f8db6b8  lw          $t5, -0x4948($gp)
    ctx->pc = 0x21a1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
    // 0x21a1c8: 0x19a00029  blez        $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x21A1C8u;
    {
        const bool branch_taken_0x21a1c8 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x21A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1C8u;
        // 0x21a1cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1c8) {
            ctx->pc = 0x21A270u;
            goto label_21a270;
        }
    }
    ctx->pc = 0x21A1D0u;
    // 0x21a1d0: 0x3c0e01fb  lui         $t6, 0x1FB
    ctx->pc = 0x21a1d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)507 << 16));
    // 0x21a1d4: 0x25c24c40  addiu       $v0, $t6, 0x4C40
    ctx->pc = 0x21a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 19520));
label_21a1d8:
    // 0x21a1d8: 0x96080  sll         $t4, $t1, 2
    ctx->pc = 0x21a1d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x21a1dc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21a1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a1e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21a1ec: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21A1ECu;
    {
        const bool branch_taken_0x21a1ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1ECu;
        // 0x21a1f0: 0x8c660014  lw          $a2, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1ec) {
            ctx->pc = 0x21A260u;
            goto label_21a260;
        }
    }
    ctx->pc = 0x21A1F4u;
    // 0x21a1f4: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x21a1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a1f8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x21a1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1fc: 0x0  nop
    ctx->pc = 0x21a1fcu;
    // NOP
label_21a200:
    // 0x21a200: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a204: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a208: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A208u;
    {
        const bool branch_taken_0x21a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A208u;
        // 0x21a20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a208) {
            ctx->pc = 0x21A24Cu;
            goto label_21a24c;
        }
    }
    ctx->pc = 0x21A210u;
    // 0x21a210: 0x544b000e  bnel        $v0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x21A210u;
    {
        const bool branch_taken_0x21a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x21a210) {
            ctx->pc = 0x21A214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A210u;
            // 0x21a214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A24Cu;
            goto label_21a24c;
        }
    }
    ctx->pc = 0x21A218u;
    // 0x21a218: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a21c: 0x0  nop
    ctx->pc = 0x21a21cu;
    // NOP
label_21a220:
    // 0x21a220: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21a224: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A224u;
    {
        const bool branch_taken_0x21a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A224u;
        // 0x21a228: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a224) {
            ctx->pc = 0x21A24Cu;
            goto label_21a24c;
        }
    }
    ctx->pc = 0x21A22Cu;
    // 0x21a22c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x21a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21a230: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a234: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A234u;
    {
        const bool branch_taken_0x21a234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A234u;
        // 0x21a238: 0x3a31021  addu        $v0, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a234) {
            ctx->pc = 0x21A24Cu;
            goto label_21a24c;
        }
    }
    ctx->pc = 0x21A23Cu;
    // 0x21a23c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a240: 0x5083fff7  beql        $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21A240u;
    {
        const bool branch_taken_0x21a240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a240) {
            ctx->pc = 0x21A244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A240u;
            // 0x21a244: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a220;
        }
    }
    ctx->pc = 0x21A248u;
    // 0x21a248: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a24c:
    // 0x21a24c: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x21A24Cu;
    {
        const bool branch_taken_0x21a24c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A24Cu;
        // 0x21a250: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a24c) {
            ctx->pc = 0x21A198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a198;
        }
    }
    ctx->pc = 0x21A254u;
    // 0x21a254: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x21a254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x21a258: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x21A258u;
    {
        const bool branch_taken_0x21a258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A258u;
        // 0x21a25c: 0x24c6003c  addiu       $a2, $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a258) {
            ctx->pc = 0x21A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a200;
        }
    }
    ctx->pc = 0x21A260u;
label_21a260:
    // 0x21a260: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21a264: 0x12d102a  slt         $v0, $t1, $t5
    ctx->pc = 0x21a264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x21a268: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21A268u;
    {
        const bool branch_taken_0x21a268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A268u;
        // 0x21a26c: 0x25c24c40  addiu       $v0, $t6, 0x4C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 19520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a268) {
            ctx->pc = 0x21A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a1d8;
        }
    }
    ctx->pc = 0x21A270u;
label_21a270:
    // 0x21a270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a274:
    // 0x21a274: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21a274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a278: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21a278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a27c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A27Cu;
        // 0x21a280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A284u;
}
