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

// Function: decalRemoveFromDrawList
// Address: 0x2a31c8 - 0x2a3270
void decalRemoveFromDrawList_0x2a31c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalRemoveFromDrawList_0x2a31c8");
#endif

    ctx->pc = 0x2a31c8u;

    // 0x2a31c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a31c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31cc: 0x8ca400c0  lw          $a0, 0xC0($a1)
    ctx->pc = 0x2a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2a31d0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A31D0u;
    {
        const bool branch_taken_0x2a31d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31D0u;
        // 0x2a31d4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31d0) {
            ctx->pc = 0x2A3210u;
            goto label_2a3210;
        }
    }
    ctx->pc = 0x2A31D8u;
    // 0x2a31d8: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2a31dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A31DCu;
    {
        const bool branch_taken_0x2a31dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a31dc) {
            ctx->pc = 0x2A3240u;
            goto label_2a3240;
        }
    }
    ctx->pc = 0x2A31E4u;
    // 0x2a31e4: 0x8ca400d0  lw          $a0, 0xD0($a1)
    ctx->pc = 0x2a31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2a31e8: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A31E8u;
    {
        const bool branch_taken_0x2a31e8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31E8u;
        // 0x2a31ec: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31e8) {
            ctx->pc = 0x2A3268u;
            goto label_2a3268;
        }
    }
    ctx->pc = 0x2A31F0u;
    // 0x2a31f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a31f4: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x2a31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x2a31f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a31fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3200: 0x50650019  beql        $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A3200u;
    {
        const bool branch_taken_0x2a3200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a3200) {
            ctx->pc = 0x2A3204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3200u;
            // 0x2a3204: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3268u;
            goto label_2a3268;
        }
    }
    ctx->pc = 0x2A3208u;
    // 0x2a3208: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3208u;
        // 0x2a320c: 0xaca000d0  sw          $zero, 0xD0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3210u;
label_2a3210:
    // 0x2a3210: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x2a3210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2a3214: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3214u;
    {
        const bool branch_taken_0x2a3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3214) {
            ctx->pc = 0x2A3240u;
            goto label_2a3240;
        }
    }
    ctx->pc = 0x2A321Cu;
    // 0x2a321c: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x2a321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2a3220: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a3220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a3224: 0x24639d48  addiu       $v1, $v1, -0x62B8
    ctx->pc = 0x2a3224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942024));
    // 0x2a3228: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x2a3228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x2a322c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3230: 0xaca000c0  sw          $zero, 0xC0($a1)
    ctx->pc = 0x2a3230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
    // 0x2a3234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3238: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A3238u;
    {
        const bool branch_taken_0x2a3238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3238u;
        // 0x2a323c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3238) {
            ctx->pc = 0x2A3268u;
            goto label_2a3268;
        }
    }
    ctx->pc = 0x2A3240u;
label_2a3240:
    // 0x2a3240: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3240u;
    {
        const bool branch_taken_0x2a3240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3240) {
            ctx->pc = 0x2A3244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3240u;
            // 0x2a3244: 0xac8200c4  sw          $v0, 0xC4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3254u;
            goto label_2a3254;
        }
    }
    ctx->pc = 0x2A3248u;
    // 0x2a3248: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2a3248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2a324c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A324Cu;
    {
        const bool branch_taken_0x2a324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A324Cu;
        // 0x2a3250: 0xaca000c4  sw          $zero, 0xC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a324c) {
            ctx->pc = 0x2A3268u;
            goto label_2a3268;
        }
    }
    ctx->pc = 0x2A3254u;
label_2a3254:
    // 0x2a3254: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x2a3254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2a3258: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x2a3258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2a325c: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2a325cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x2a3260: 0xaca000c4  sw          $zero, 0xC4($a1)
    ctx->pc = 0x2a3260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 0));
    // 0x2a3264: 0xaca000c0  sw          $zero, 0xC0($a1)
    ctx->pc = 0x2a3264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
label_2a3268:
    // 0x2a3268: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3268u;
        // 0x2a326c: 0xaca000d0  sw          $zero, 0xD0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3270u;
}
