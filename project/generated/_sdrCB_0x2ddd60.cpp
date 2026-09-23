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

// Function: _sdrCB
// Address: 0x2ddd60 - 0x2dde40
void _sdrCB_0x2ddd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sdrCB_0x2ddd60");
#endif

    switch (ctx->pc) {
        case 0x2ddd60u: goto label_2ddd60;
        case 0x2ddd64u: goto label_2ddd64;
        case 0x2ddd68u: goto label_2ddd68;
        case 0x2ddd6cu: goto label_2ddd6c;
        case 0x2ddd70u: goto label_2ddd70;
        case 0x2ddd74u: goto label_2ddd74;
        case 0x2ddd78u: goto label_2ddd78;
        case 0x2ddd7cu: goto label_2ddd7c;
        case 0x2ddd80u: goto label_2ddd80;
        case 0x2ddd84u: goto label_2ddd84;
        case 0x2ddd88u: goto label_2ddd88;
        case 0x2ddd8cu: goto label_2ddd8c;
        case 0x2ddd90u: goto label_2ddd90;
        case 0x2ddd94u: goto label_2ddd94;
        case 0x2ddd98u: goto label_2ddd98;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2ddda0u: goto label_2ddda0;
        case 0x2ddda4u: goto label_2ddda4;
        case 0x2ddda8u: goto label_2ddda8;
        case 0x2dddacu: goto label_2dddac;
        case 0x2dddb0u: goto label_2dddb0;
        case 0x2dddb4u: goto label_2dddb4;
        case 0x2dddb8u: goto label_2dddb8;
        case 0x2dddbcu: goto label_2dddbc;
        case 0x2dddc0u: goto label_2dddc0;
        case 0x2dddc4u: goto label_2dddc4;
        case 0x2dddc8u: goto label_2dddc8;
        case 0x2dddccu: goto label_2dddcc;
        case 0x2dddd0u: goto label_2dddd0;
        case 0x2dddd4u: goto label_2dddd4;
        case 0x2dddd8u: goto label_2dddd8;
        case 0x2ddddcu: goto label_2ddddc;
        case 0x2ddde0u: goto label_2ddde0;
        case 0x2ddde4u: goto label_2ddde4;
        case 0x2ddde8u: goto label_2ddde8;
        case 0x2dddecu: goto label_2dddec;
        case 0x2dddf0u: goto label_2dddf0;
        case 0x2dddf4u: goto label_2dddf4;
        case 0x2dddf8u: goto label_2dddf8;
        case 0x2dddfcu: goto label_2dddfc;
        case 0x2dde00u: goto label_2dde00;
        case 0x2dde04u: goto label_2dde04;
        case 0x2dde08u: goto label_2dde08;
        case 0x2dde0cu: goto label_2dde0c;
        case 0x2dde10u: goto label_2dde10;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde18u: goto label_2dde18;
        case 0x2dde1cu: goto label_2dde1c;
        case 0x2dde20u: goto label_2dde20;
        case 0x2dde24u: goto label_2dde24;
        case 0x2dde28u: goto label_2dde28;
        case 0x2dde2cu: goto label_2dde2c;
        case 0x2dde30u: goto label_2dde30;
        case 0x2dde34u: goto label_2dde34;
        case 0x2dde38u: goto label_2dde38;
        case 0x2dde3cu: goto label_2dde3c;
        default: break;
    }

    ctx->pc = 0x2ddd60u;

label_2ddd60:
    // 0x2ddd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ddd64:
    // 0x2ddd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ddd68:
    // 0x2ddd68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ddd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ddd6c:
    // 0x2ddd6c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2ddd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ddd70:
    // 0x2ddd70: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x2ddd70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_2ddd74:
    // 0x2ddd74: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_2ddd78:
    if (ctx->pc == 0x2DDD78u) {
        ctx->pc = 0x2DDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD74u;
        // 0x2ddd78: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD7Cu;
        goto label_2ddd7c;
    }
    ctx->pc = 0x2DDD74u;
    {
        const bool branch_taken_0x2ddd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD74u;
        // 0x2ddd78: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd74) {
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDD7Cu;
label_2ddd7c:
    // 0x2ddd7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ddd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ddd80:
    // 0x2ddd80: 0x2442b270  addiu       $v0, $v0, -0x4D90
    ctx->pc = 0x2ddd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947440));
label_2ddd84:
    // 0x2ddd84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ddd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ddd88:
    // 0x2ddd88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ddd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ddd8c:
    // 0x2ddd8c: 0x800008  jr          $a0
label_2ddd90:
    if (ctx->pc == 0x2DDD90u) {
        ctx->pc = 0x2DDD94u;
        goto label_2ddd94;
    }
    ctx->pc = 0x2DDD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDD94u: goto label_2ddd94;
            case 0x2DDDA0u: goto label_2ddda0;
            case 0x2DDDACu: goto label_2dddac;
            case 0x2DDDCCu: goto label_2dddcc;
            case 0x2DDDF0u: goto label_2dddf0;
            case 0x2DDE14u: goto label_2dde14;
            case 0x2DDE30u: goto label_2dde30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDD94u;
label_2ddd94:
    // 0x2ddd94: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ddd98:
    // 0x2ddd98: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ddd9c:
    if (ctx->pc == 0x2DDD9Cu) {
        ctx->pc = 0x2DDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD98u;
        // 0x2ddd9c: 0x8c422f58  lw          $v0, 0x2F58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDA0u;
        goto label_2ddda0;
    }
    ctx->pc = 0x2DDD98u;
    {
        const bool branch_taken_0x2ddd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD98u;
        // 0x2ddd9c: 0x8c422f58  lw          $v0, 0x2F58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd98) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDDA0u;
label_2ddda0:
    // 0x2ddda0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ddda4:
    // 0x2ddda4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ddda8:
    if (ctx->pc == 0x2DDDA8u) {
        ctx->pc = 0x2DDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDA4u;
        // 0x2ddda8: 0x8c422f5c  lw          $v0, 0x2F5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDACu;
        goto label_2dddac;
    }
    ctx->pc = 0x2DDDA4u;
    {
        const bool branch_taken_0x2ddda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDA4u;
        // 0x2ddda8: 0x8c422f5c  lw          $v0, 0x2F5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddda4) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDDACu;
label_2dddac:
    // 0x2dddac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2dddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2dddb0:
    // 0x2dddb0: 0x8c422f60  lw          $v0, 0x2F60($v0)
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12128)));
label_2dddb4:
    // 0x2dddb4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2dddb8:
    if (ctx->pc == 0x2DDDB8u) {
        ctx->pc = 0x2DDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDB4u;
        // 0x2dddb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDBCu;
        goto label_2dddbc;
    }
    ctx->pc = 0x2DDDB4u;
    {
        const bool branch_taken_0x2dddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDB4u;
        // 0x2dddb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddb4) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDDBCu;
label_2dddbc:
    // 0x2dddbc: 0x40f809  jalr        $v0
label_2dddc0:
    if (ctx->pc == 0x2DDDC0u) {
        ctx->pc = 0x2DDDC4u;
        goto label_2dddc4;
    }
    ctx->pc = 0x2DDDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDDC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDBCu, 0x2DDDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDDC4u;
label_2dddc4:
    // 0x2dddc4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2dddc8:
    if (ctx->pc == 0x2DDDC8u) {
        ctx->pc = 0x2DDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDC4u;
        // 0x2dddc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDCCu;
        goto label_2dddcc;
    }
    ctx->pc = 0x2DDDC4u;
    {
        const bool branch_taken_0x2dddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDC4u;
        // 0x2dddc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddc4) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDDCCu;
label_2dddcc:
    // 0x2dddcc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2dddccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2dddd0:
    // 0x2dddd0: 0x8c432f64  lw          $v1, 0x2F64($v0)
    ctx->pc = 0x2dddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12132)));
label_2dddd4:
    // 0x2dddd4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2dddd8:
    if (ctx->pc == 0x2DDDD8u) {
        ctx->pc = 0x2DDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDD4u;
        // 0x2dddd8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDDCu;
        goto label_2ddddc;
    }
    ctx->pc = 0x2DDDD4u;
    {
        const bool branch_taken_0x2dddd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDD4u;
        // 0x2dddd8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddd4) {
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDDDCu;
label_2ddddc:
    // 0x2ddddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ddddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddde0:
    // 0x2ddde0: 0x60f809  jalr        $v1
label_2ddde4:
    if (ctx->pc == 0x2DDDE4u) {
        ctx->pc = 0x2DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE0u;
        // 0x2ddde4: 0x8c452f70  lw          $a1, 0x2F70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDE8u;
        goto label_2ddde8;
    }
    ctx->pc = 0x2DDDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DDDE8u);
        ctx->pc = 0x2DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE0u;
        // 0x2ddde4: 0x8c452f70  lw          $a1, 0x2F70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDE0u, 0x2DDDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDDE8u;
label_2ddde8:
    // 0x2ddde8: 0x10000012  b           . + 4 + (0x12 << 2)
label_2dddec:
    if (ctx->pc == 0x2DDDECu) {
        ctx->pc = 0x2DDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE8u;
        // 0x2dddec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDDF0u;
        goto label_2dddf0;
    }
    ctx->pc = 0x2DDDE8u;
    {
        const bool branch_taken_0x2ddde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE8u;
        // 0x2dddec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddde8) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDDF0u;
label_2dddf0:
    // 0x2dddf0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2dddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2dddf4:
    // 0x2dddf4: 0x8c432f68  lw          $v1, 0x2F68($v0)
    ctx->pc = 0x2dddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12136)));
label_2dddf8:
    // 0x2dddf8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2dddfc:
    if (ctx->pc == 0x2DDDFCu) {
        ctx->pc = 0x2DDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF8u;
        // 0x2dddfc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE00u;
        goto label_2dde00;
    }
    ctx->pc = 0x2DDDF8u;
    {
        const bool branch_taken_0x2dddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF8u;
        // 0x2dddfc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddf8) {
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDE00u;
label_2dde00:
    // 0x2dde00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dde00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dde04:
    // 0x2dde04: 0x60f809  jalr        $v1
label_2dde08:
    if (ctx->pc == 0x2DDE08u) {
        ctx->pc = 0x2DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE04u;
        // 0x2dde08: 0x8c452f74  lw          $a1, 0x2F74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE0Cu;
        goto label_2dde0c;
    }
    ctx->pc = 0x2DDE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DDE0Cu);
        ctx->pc = 0x2DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE04u;
        // 0x2dde08: 0x8c452f74  lw          $a1, 0x2F74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12148)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE04u, 0x2DDE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDE0Cu;
label_2dde0c:
    // 0x2dde0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2dde10:
    if (ctx->pc == 0x2DDE10u) {
        ctx->pc = 0x2DDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE0Cu;
        // 0x2dde10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE14u;
        goto label_2dde14;
    }
    ctx->pc = 0x2DDE0Cu;
    {
        const bool branch_taken_0x2dde0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE0Cu;
        // 0x2dde10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde0c) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDE14u;
label_2dde14:
    // 0x2dde14: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2dde18:
    // 0x2dde18: 0x8c432f6c  lw          $v1, 0x2F6C($v0)
    ctx->pc = 0x2dde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12140)));
label_2dde1c:
    // 0x2dde1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2dde20:
    if (ctx->pc == 0x2DDE20u) {
        ctx->pc = 0x2DDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE1Cu;
        // 0x2dde20: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE24u;
        goto label_2dde24;
    }
    ctx->pc = 0x2DDE1Cu;
    {
        const bool branch_taken_0x2dde1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE1Cu;
        // 0x2dde20: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde1c) {
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDE24u;
label_2dde24:
    // 0x2dde24: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2dde24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2dde28:
    // 0x2dde28: 0x60f809  jalr        $v1
label_2dde2c:
    if (ctx->pc == 0x2DDE2Cu) {
        ctx->pc = 0x2DDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE28u;
        // 0x2dde2c: 0x8c452f78  lw          $a1, 0x2F78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE30u;
        goto label_2dde30;
    }
    ctx->pc = 0x2DDE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DDE30u);
        ctx->pc = 0x2DDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE28u;
        // 0x2dde2c: 0x8c452f78  lw          $a1, 0x2F78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE28u, 0x2DDE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDE30u;
label_2dde30:
    // 0x2dde30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dde30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dde34:
    // 0x2dde34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dde34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dde38:
    // 0x2dde38: 0x3e00008  jr          $ra
label_2dde3c:
    if (ctx->pc == 0x2DDE3Cu) {
        ctx->pc = 0x2DDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE38u;
        // 0x2dde3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDE40u;
        goto label_fallthrough_0x2dde38;
    }
    ctx->pc = 0x2DDE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE38u;
        // 0x2dde3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dde38:
    ctx->pc = 0x2DDE40u;
}
