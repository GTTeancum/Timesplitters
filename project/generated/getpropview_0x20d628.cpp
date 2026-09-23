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

// Function: getpropview
// Address: 0x20d628 - 0x20d6e0
void getpropview_0x20d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getpropview_0x20d628");
#endif

    switch (ctx->pc) {
        case 0x20d638u: goto label_20d638;
        default: break;
    }

    ctx->pc = 0x20d628u;

    // 0x20d628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d630: 0xc09f8c6  jal         func_27E318
    ctx->pc = 0x20D630u;
    SET_GPR_U32(ctx, 31, 0x20D638u);
    ctx->pc = 0x27E318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E318u, 0x20D630u, 0x20D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D638u;
label_20d638:
    // 0x20d638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d63c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20d640: 0x8c430388  lw          $v1, 0x388($v0)
    ctx->pc = 0x20d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x20d644: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D644u;
    {
        const bool branch_taken_0x20d644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D644u;
        // 0x20d648: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d644) {
            ctx->pc = 0x20D654u;
            goto label_20d654;
        }
    }
    ctx->pc = 0x20D64Cu;
    // 0x20d64c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20D64Cu;
    {
        const bool branch_taken_0x20d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D64Cu;
        // 0x20d650: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d64c) {
            ctx->pc = 0x20D6D4u;
            goto label_20d6d4;
        }
    }
    ctx->pc = 0x20D654u;
label_20d654:
    // 0x20d654: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20D654u;
    {
        const bool branch_taken_0x20d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D654u;
        // 0x20d658: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d654) {
            ctx->pc = 0x20D6C4u;
            goto label_20d6c4;
        }
    }
    ctx->pc = 0x20D65Cu;
    // 0x20d65c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x20d65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20d660: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D660u;
    {
        const bool branch_taken_0x20d660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D660u;
        // 0x20d664: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d660) {
            ctx->pc = 0x20D67Cu;
            goto label_20d67c;
        }
    }
    ctx->pc = 0x20D668u;
    // 0x20d668: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20d66c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D66Cu;
    {
        const bool branch_taken_0x20d66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D66Cu;
        // 0x20d670: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d66c) {
            ctx->pc = 0x20D69Cu;
            goto label_20d69c;
        }
    }
    ctx->pc = 0x20D674u;
    // 0x20d674: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20D674u;
    {
        const bool branch_taken_0x20d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D674u;
        // 0x20d678: 0x3c0701fb  lui         $a3, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d674) {
            ctx->pc = 0x20D6C8u;
            goto label_20d6c8;
        }
    }
    ctx->pc = 0x20D67Cu;
label_20d67c:
    // 0x20d67c: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x20d680: 0xdc44a108  ld          $a0, -0x5EF8($v0)
    ctx->pc = 0x20d680u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294942984)));
    // 0x20d684: 0x2443a108  addiu       $v1, $v0, -0x5EF8
    ctx->pc = 0x20d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942984));
    // 0x20d688: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x20d688u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20d68c: 0x24e23220  addiu       $v0, $a3, 0x3220
    ctx->pc = 0x20d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12832));
    // 0x20d690: 0xfce43220  sd          $a0, 0x3220($a3)
    ctx->pc = 0x20d690u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FB3220u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1FB3220u, _value); } while (0);
    // 0x20d694: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20D694u;
    {
        const bool branch_taken_0x20d694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D694u;
        // 0x20d698: 0xa0450008  sb          $a1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d694) {
            ctx->pc = 0x20D6D4u;
            goto label_20d6d4;
        }
    }
    ctx->pc = 0x20D69Cu;
label_20d69c:
    // 0x20d69c: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20d69cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x20d6a0: 0x2443e4b8  addiu       $v1, $v0, -0x1B48
    ctx->pc = 0x20d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960312));
    // 0x20d6a4: 0x8c46e4b8  lw          $a2, -0x1B48($v0)
    ctx->pc = 0x20d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960312)));
    // 0x20d6a8: 0x90640006  lbu         $a0, 0x6($v1)
    ctx->pc = 0x20d6a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x20d6ac: 0x24e23220  addiu       $v0, $a3, 0x3220
    ctx->pc = 0x20d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12832));
    // 0x20d6b0: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x20d6b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20d6b4: 0xa0440006  sb          $a0, 0x6($v0)
    ctx->pc = 0x20d6b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1FB3226u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1FB3226u, _value); } while (0);
    // 0x20d6b8: 0xace63220  sw          $a2, 0x3220($a3)
    ctx->pc = 0x20d6b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1FB3220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FB3220u, _value); } while (0);
    // 0x20d6bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20D6BCu;
    {
        const bool branch_taken_0x20d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6BCu;
        // 0x20d6c0: 0xa4450004  sh          $a1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6bc) {
            ctx->pc = 0x20D6D4u;
            goto label_20d6d4;
        }
    }
    ctx->pc = 0x20D6C4u;
label_20d6c4:
    // 0x20d6c4: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
label_20d6c8:
    // 0x20d6c8: 0x8c62e4c0  lw          $v0, -0x1B40($v1)
    ctx->pc = 0x20d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960320)));
    // 0x20d6cc: 0xace23220  sw          $v0, 0x3220($a3)
    ctx->pc = 0x20d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12832), GPR_U32(ctx, 2));
    // 0x20d6d0: 0x24e23220  addiu       $v0, $a3, 0x3220
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12832));
label_20d6d4:
    // 0x20d6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6D8u;
        // 0x20d6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D6E0u;
}
