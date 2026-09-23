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

// Function: playerSetStartPos
// Address: 0x27f138 - 0x27f4d8
void playerSetStartPos_0x27f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerSetStartPos_0x27f138");
#endif

    switch (ctx->pc) {
        case 0x27f198u: goto label_27f198;
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f214u: goto label_27f214;
        case 0x27f228u: goto label_27f228;
        case 0x27f240u: goto label_27f240;
        case 0x27f260u: goto label_27f260;
        case 0x27f354u: goto label_27f354;
        case 0x27f398u: goto label_27f398;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f3fcu: goto label_27f3fc;
        case 0x27f450u: goto label_27f450;
        case 0x27f474u: goto label_27f474;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f4acu: goto label_27f4ac;
        default: break;
    }

    ctx->pc = 0x27f138u;

    // 0x27f138: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27f13c: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x27f140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f144: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27f148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f14c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x27f150: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27f154: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27f158: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27f15c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27f160: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27f164: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27f168: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f16c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27f16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f170: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x27F170u;
    {
        const bool branch_taken_0x27f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F170u;
        // 0x27f174: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f170) {
            ctx->pc = 0x27F2A0u;
            goto label_27f2a0;
        }
    }
    ctx->pc = 0x27F178u;
    // 0x27f178: 0x2684c4a8  addiu       $a0, $s4, -0x3B58
    ctx->pc = 0x27f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27f17c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27f180: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x27f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27f184: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x27F184u;
    {
        const bool branch_taken_0x27f184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F184u;
        // 0x27f188: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f184) {
            ctx->pc = 0x27F1F8u;
            goto label_27f1f8;
        }
    }
    ctx->pc = 0x27F18Cu;
    // 0x27f18c: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x27f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x27f190: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x27F190u;
    SET_GPR_U32(ctx, 31, 0x27F198u);
    ctx->pc = 0x27F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F190u;
    // 0x27f194: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x27F190u, 0x27F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F198u;
label_27f198:
    // 0x27f198: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x27f198u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f19c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1a0: 0x2616008c  addiu       $s6, $s0, 0x8C
    ctx->pc = 0x27f1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x27f1a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F1A4u;
    {
        const bool branch_taken_0x27f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1A4u;
        // 0x27f1a8: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1a4) {
            ctx->pc = 0x27F1B4u;
            goto label_27f1b4;
        }
    }
    ctx->pc = 0x27F1ACu;
    // 0x27f1ac: 0x0  nop
    ctx->pc = 0x27f1acu;
    // NOP
label_27f1b0:
    // 0x27f1b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27f1b4:
    // 0x27f1b4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x27f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x27f1b8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27f1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f1bc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27F1BCu;
    {
        const bool branch_taken_0x27f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1BCu;
        // 0x27f1c0: 0x148900  sll         $s1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1bc) {
            ctx->pc = 0x27F26Cu;
            goto label_27f26c;
        }
    }
    ctx->pc = 0x27F1C4u;
    // 0x27f1c4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x27f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x27f1c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f1cc: 0xc08a362  jal         func_228D88
    ctx->pc = 0x27F1CCu;
    SET_GPR_U32(ctx, 31, 0x27F1D4u);
    ctx->pc = 0x27F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1CCu;
    // 0x27f1d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228D88u, 0x27F1CCu, 0x27F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1D4u;
label_27f1d4:
    // 0x27f1d4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f1b0;
        }
    }
    ctx->pc = 0x27F1DCu;
    // 0x27f1dc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27f1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x27f1e0: 0x1642fff4  bne         $s2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F1E0u;
    {
        const bool branch_taken_0x27f1e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1E0u;
        // 0x27f1e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1e0) {
            ctx->pc = 0x27F1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f1b4;
        }
    }
    ctx->pc = 0x27F1E8u;
    // 0x27f1e8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x27f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x27f1ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f1f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27F1F0u;
    {
        const bool branch_taken_0x27f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1F0u;
        // 0x27f1f4: 0x8c55000c  lw          $s5, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1f0) {
            ctx->pc = 0x27F26Cu;
            goto label_27f26c;
        }
    }
    ctx->pc = 0x27F1F8u;
label_27f1f8:
    // 0x27f1f8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x27f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x27f1fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27f200: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27F200u;
    {
        const bool branch_taken_0x27f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F200u;
        // 0x27f204: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f200) {
            ctx->pc = 0x27F24Cu;
            goto label_27f24c;
        }
    }
    ctx->pc = 0x27F208u;
    // 0x27f208: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x27f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x27f20c: 0xc087c18  jal         func_21F060
    ctx->pc = 0x27F20Cu;
    SET_GPR_U32(ctx, 31, 0x27F214u);
    ctx->pc = 0x27F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F20Cu;
    // 0x27f210: 0x8c510160  lw          $s1, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x27F20Cu, 0x27F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F214u;
label_27f214:
    // 0x27f214: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x27f218: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F218u;
    {
        const bool branch_taken_0x27f218 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F218u;
        // 0x27f21c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f218) {
            ctx->pc = 0x27F230u;
            goto label_27f230;
        }
    }
    ctx->pc = 0x27F220u;
    // 0x27f220: 0xc099380  jal         func_264E00
    ctx->pc = 0x27F220u;
    SET_GPR_U32(ctx, 31, 0x27F228u);
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x27F220u, 0x27F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F228u;
label_27f228:
    // 0x27f228: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27f228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f230:
    // 0x27f230: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F230u;
    {
        const bool branch_taken_0x27f230 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F230u;
        // 0x27f234: 0x2616008c  addiu       $s6, $s0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f230) {
            ctx->pc = 0x27F268u;
            goto label_27f268;
        }
    }
    ctx->pc = 0x27F238u;
    // 0x27f238: 0xc08a0dc  jal         func_228370
    ctx->pc = 0x27F238u;
    SET_GPR_U32(ctx, 31, 0x27F240u);
    ctx->pc = 0x27F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F238u;
    // 0x27f23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228370u, 0x27F238u, 0x27F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F240u;
label_27f240:
    // 0x27f240: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x27f244: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27F244u;
    {
        const bool branch_taken_0x27f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F244u;
        // 0x27f248: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f244) {
            ctx->pc = 0x27F26Cu;
            goto label_27f26c;
        }
    }
    ctx->pc = 0x27F24Cu;
label_27f24c:
    // 0x27f24c: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x27f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x27f250: 0x2616008c  addiu       $s6, $s0, 0x8C
    ctx->pc = 0x27f250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x27f254: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x27f254u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x27f258: 0xc08a0dc  jal         func_228370
    ctx->pc = 0x27F258u;
    SET_GPR_U32(ctx, 31, 0x27F260u);
    ctx->pc = 0x27F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F258u;
    // 0x27f25c: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228370u, 0x27F258u, 0x27F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F260u;
label_27f260:
    // 0x27f260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F260u;
    {
        const bool branch_taken_0x27f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F260u;
        // 0x27f264: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f260) {
            ctx->pc = 0x27F26Cu;
            goto label_27f26c;
        }
    }
    ctx->pc = 0x27F268u;
label_27f268:
    // 0x27f268: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x27f268u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
label_27f26c:
    // 0x27f26c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27f270: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x27f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x27f274: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x27f274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27f278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f27c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f280: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x27f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x27f284: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x27f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f288: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x27f288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x27f28c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x27f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f290: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x27f290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x27f294: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x27f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27F298u;
    {
        const bool branch_taken_0x27f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F298u;
        // 0x27f29c: 0xe6010114  swc1        $f1, 0x114($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f298) {
            ctx->pc = 0x27F2BCu;
            goto label_27f2bc;
        }
    }
    ctx->pc = 0x27F2A0u;
label_27f2a0:
    // 0x27f2a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f2a8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x27f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x27f2ac: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x27f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x27f2b0: 0x2616008c  addiu       $s6, $s0, 0x8C
    ctx->pc = 0x27f2b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x27f2b4: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x27f2b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x27f2b8: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x27f2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_27f2bc:
    // 0x27f2bc: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x27f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x27f2c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27f2c4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F2C4u;
            // 0x27f2c8: 0xc603008c  lwc1        $f3, 0x8C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F2DCu;
            goto label_27f2dc;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27f2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27f2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2d4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x27f2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x27f2d8: 0xc603008c  lwc1        $f3, 0x8C($s0)
    ctx->pc = 0x27f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27f2dc:
    // 0x27f2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27f2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2e0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x27f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x27f2e4: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x27f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x27f2e8: 0xe4430030  swc1        $f3, 0x30($v0)
    ctx->pc = 0x27f2e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x27f2ec: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x27f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x27f2f0: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x27f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f2f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f2f8: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x27f2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x27f2fc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x27f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f300: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x27f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x27f304: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x27f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f308: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x27f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x27f30c: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x27f30cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x27f310: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x27f310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x27f314: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x27f314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x27f318: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x27f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27f31c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x27f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f320: 0xc602008c  lwc1        $f2, 0x8C($s0)
    ctx->pc = 0x27f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f324: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27f324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27f328: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x27f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f32c: 0xe603015c  swc1        $f3, 0x15C($s0)
    ctx->pc = 0x27f32cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    // 0x27f330: 0xe6020164  swc1        $f2, 0x164($s0)
    ctx->pc = 0x27f330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x27f334: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x27f334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x27f338: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x27f338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x27f33c: 0xe6020098  swc1        $f2, 0x98($s0)
    ctx->pc = 0x27f33cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x27f340: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x27f340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x27f344: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x27f344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x27f348: 0xe6020158  swc1        $f2, 0x158($s0)
    ctx->pc = 0x27f348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x27f34c: 0xc099ae4  jal         func_266B90
    ctx->pc = 0x27F34Cu;
    SET_GPR_U32(ctx, 31, 0x27F354u);
    ctx->pc = 0x27F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F34Cu;
    // 0x27f350: 0xe6010160  swc1        $f1, 0x160($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266B90u, 0x27F34Cu, 0x27F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F354u;
label_27f354:
    // 0x27f354: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x27f354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x27f358: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x27f358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x27f35c: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x27f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x27f360: 0x24c3ff9b  addiu       $v1, $a2, -0x65
    ctx->pc = 0x27f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967195));
    // 0x27f364: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x27f364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f368: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F368u;
    {
        const bool branch_taken_0x27f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F368u;
        // 0x27f36c: 0xaca202a8  sw          $v0, 0x2A8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f368) {
            ctx->pc = 0x27F384u;
            goto label_27f384;
        }
    }
    ctx->pc = 0x27F370u;
    // 0x27f370: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x27f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x27f374: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F374u;
    {
        const bool branch_taken_0x27f374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F374u;
        // 0x27f378: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f374) {
            ctx->pc = 0x27F384u;
            goto label_27f384;
        }
    }
    ctx->pc = 0x27F37Cu;
    // 0x27f37c: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F37Cu;
    {
        const bool branch_taken_0x27f37c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f37c) {
            ctx->pc = 0x27F380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F37Cu;
            // 0x27f380: 0xc60c0068  lwc1        $f12, 0x68($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F384u;
label_27f384:
    // 0x27f384: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x27F384u;
    {
        const bool branch_taken_0x27f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F384u;
        // 0x27f388: 0xae00031c  sw          $zero, 0x31C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f384) {
            ctx->pc = 0x27F490u;
            goto label_27f490;
        }
    }
    ctx->pc = 0x27F38Cu;
label_27f38c:
    // 0x27f38c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f390: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x27F390u;
    SET_GPR_U32(ctx, 31, 0x27F398u);
    ctx->pc = 0x27F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F390u;
    // 0x27f394: 0xc60d0084  lwc1        $f13, 0x84($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x27F390u, 0x27F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F398u;
label_27f398:
    // 0x27f398: 0xc6050098  lwc1        $f5, 0x98($s0)
    ctx->pc = 0x27f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27f39c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a0: 0xc602008c  lwc1        $f2, 0x8C($s0)
    ctx->pc = 0x27f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f3a4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x27f3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a8: 0xc604009c  lwc1        $f4, 0x9C($s0)
    ctx->pc = 0x27f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27f3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27f3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b0: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x27f3b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x27f3b4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x27f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f3b8: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x27f3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27f3bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27f3bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3c0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x27f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f3c4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x27f3c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x27f3c8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x27f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x27f3cc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x27f3ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27f3d0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27f3d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f3d4: 0x8c520160  lw          $s2, 0x160($v0)
    ctx->pc = 0x27f3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x27f3d8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27f3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f3dc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x27F3DCu;
    {
        const bool branch_taken_0x27f3dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3DCu;
        // 0x27f3e0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3dc) {
            ctx->pc = 0x27F41Cu;
            goto label_27f41c;
        }
    }
    ctx->pc = 0x27F3E4u;
    // 0x27f3e4: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x27f3e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_27f3e8:
    // 0x27f3e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27f3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27f3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3f4: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x27F3F4u;
    SET_GPR_U32(ctx, 31, 0x27F3FCu);
    ctx->pc = 0x27F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3F4u;
    // 0x27f3f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x27F3F4u, 0x27F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3FCu;
label_27f3fc:
    // 0x27f3fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27f3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27f400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f404: 0x1467fff8  bne         $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27F404u;
    {
        const bool branch_taken_0x27f404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x27F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F404u;
        // 0x27f408: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f404) {
            ctx->pc = 0x27F3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f3e8;
        }
    }
    ctx->pc = 0x27F40Cu;
    // 0x27f40c: 0xc6050098  lwc1        $f5, 0x98($s0)
    ctx->pc = 0x27f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27f410: 0xc604009c  lwc1        $f4, 0x9C($s0)
    ctx->pc = 0x27f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27f414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F414u;
    {
        const bool branch_taken_0x27f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F414u;
        // 0x27f418: 0xc60300a0  lwc1        $f3, 0xA0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f414) {
            ctx->pc = 0x27F420u;
            goto label_27f420;
        }
    }
    ctx->pc = 0x27F41Cu;
label_27f41c:
    // 0x27f41c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x27f41cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_27f420:
    // 0x27f420: 0x8e4411a4  lw          $a0, 0x11A4($s2)
    ctx->pc = 0x27f420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4516)));
    // 0x27f424: 0xe6050374  swc1        $f5, 0x374($s0)
    ctx->pc = 0x27f424u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
    // 0x27f428: 0xe6040378  swc1        $f4, 0x378($s0)
    ctx->pc = 0x27f428u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
    // 0x27f42c: 0xe603037c  swc1        $f3, 0x37C($s0)
    ctx->pc = 0x27f42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x27f430: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x27f430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
    // 0x27f434: 0xae03031c  sw          $v1, 0x31C($s0)
    ctx->pc = 0x27f434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 3));
    // 0x27f438: 0xae030380  sw          $v1, 0x380($s0)
    ctx->pc = 0x27f438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 3));
    // 0x27f43c: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x27f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x27f440: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F440u;
    {
        const bool branch_taken_0x27f440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F440u;
        // 0x27f444: 0xae000338  sw          $zero, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f440) {
            ctx->pc = 0x27F454u;
            goto label_27f454;
        }
    }
    ctx->pc = 0x27F448u;
    // 0x27f448: 0xc0ab870  jal         func_2AE1C0
    ctx->pc = 0x27F448u;
    SET_GPR_U32(ctx, 31, 0x27F450u);
    ctx->pc = 0x2AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE1C0u, 0x27F448u, 0x27F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F450u;
label_27f450:
    // 0x27f450: 0xae4011a4  sw          $zero, 0x11A4($s2)
    ctx->pc = 0x27f450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4516), GPR_U32(ctx, 0));
label_27f454:
    // 0x27f454: 0x2682c4a8  addiu       $v0, $s4, -0x3B58
    ctx->pc = 0x27f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952104));
    // 0x27f458: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27f45c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x27f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27f460: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F460u;
    {
        const bool branch_taken_0x27f460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x27F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F460u;
        // 0x27f464: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f460) {
            ctx->pc = 0x27F490u;
            goto label_27f490;
        }
    }
    ctx->pc = 0x27F468u;
    // 0x27f468: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f46c: 0xc0ab900  jal         func_2AE400
    ctx->pc = 0x27F46Cu;
    SET_GPR_U32(ctx, 31, 0x27F474u);
    ctx->pc = 0x27F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F46Cu;
    // 0x27f470: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE400u, 0x27F46Cu, 0x27F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f478: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f47c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f480: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27f480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f484: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x27F484u;
    SET_GPR_U32(ctx, 31, 0x27F48Cu);
    ctx->pc = 0x27F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F484u;
    // 0x27f488: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x27F484u, 0x27F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F48Cu;
label_27f48c:
    // 0x27f48c: 0xae4211a4  sw          $v0, 0x11A4($s2)
    ctx->pc = 0x27f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4516), GPR_U32(ctx, 2));
label_27f490:
    // 0x27f490: 0xc6e0f9e8  lwc1        $f0, -0x618($s7)
    ctx->pc = 0x27f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294965736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f498: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x27f498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
    // 0x27f49c: 0xae000710  sw          $zero, 0x710($s0)
    ctx->pc = 0x27f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 0));
    // 0x27f4a0: 0xae000714  sw          $zero, 0x714($s0)
    ctx->pc = 0x27f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 0));
    // 0x27f4a4: 0xc09fc26  jal         func_27F098
    ctx->pc = 0x27F4A4u;
    SET_GPR_U32(ctx, 31, 0x27F4ACu);
    ctx->pc = 0x27F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4A4u;
    // 0x27f4a8: 0xe6000718  swc1        $f0, 0x718($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F098u, 0x27F4A4u, 0x27F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4ACu;
label_27f4ac:
    // 0x27f4ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f4b0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27f4b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f4b4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27f4b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f4b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27f4b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f4bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27f4bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f4c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27f4c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f4c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27f4c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f4c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27f4c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f4cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4D0u;
        // 0x27f4d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4D8u;
}
