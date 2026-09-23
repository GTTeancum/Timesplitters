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

// Function: endgame_pageTick
// Address: 0x20fb78 - 0x20fca0
void endgame_pageTick_0x20fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("endgame_pageTick_0x20fb78");
#endif

    switch (ctx->pc) {
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fc74u: goto label_20fc74;
        case 0x20fc80u: goto label_20fc80;
        default: break;
    }

    ctx->pc = 0x20fb78u;

    // 0x20fb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20fb7c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20fb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fb84: 0x2466aa20  addiu       $a2, $v1, -0x55E0
    ctx->pc = 0x20fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x20fb88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20fb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20fb8c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20fb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20fb90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fb94: 0x2605c4a8  addiu       $a1, $s0, -0x3B58
    ctx->pc = 0x20fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
    // 0x20fb98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x20fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x20fb9c: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x20fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x20fba0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20fba4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20FBA4u;
    {
        const bool branch_taken_0x20fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBA4u;
        // 0x20fba8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fba4) {
            ctx->pc = 0x20FBCCu;
            goto label_20fbcc;
        }
    }
    ctx->pc = 0x20FBACu;
    // 0x20fbac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fbb0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x20fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x20fbb4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x20fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x20fbb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fbc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20FBC4u;
    {
        const bool branch_taken_0x20fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBC4u;
        // 0x20fbc8: 0x8c8306fc  lw          $v1, 0x6FC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbc4) {
            ctx->pc = 0x20FBE8u;
            goto label_20fbe8;
        }
    }
    ctx->pc = 0x20FBCCu;
label_20fbcc:
    // 0x20fbcc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20fbd0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x20fbd4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x20fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x20fbd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fbe0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fbe4: 0x8c8306f8  lw          $v1, 0x6F8($a0)
    ctx->pc = 0x20fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1784)));
label_20fbe8:
    // 0x20fbe8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20fbec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20fbf0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20FBF0u;
    SET_GPR_U32(ctx, 31, 0x20FBF8u);
    ctx->pc = 0x20FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FBF0u;
    // 0x20fbf4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20FBF0u, 0x20FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FBF8u;
label_20fbf8:
    // 0x20fbf8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20fbfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20FBFCu;
    {
        const bool branch_taken_0x20fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x2602c4a8  addiu       $v0, $s0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbfc) {
            ctx->pc = 0x20FC60u;
            goto label_20fc60;
        }
    }
    ctx->pc = 0x20FC04u;
    // 0x20fc04: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x20fc08: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20fc0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20fc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x20fc10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20FC10u;
    {
        const bool branch_taken_0x20fc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC10u;
        // 0x20fc14: 0x3c0301fb  lui         $v1, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc10) {
            ctx->pc = 0x20FC3Cu;
            goto label_20fc3c;
        }
    }
    ctx->pc = 0x20FC18u;
    // 0x20fc18: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fc1c: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x20fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x20fc20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20fc24: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x20fc24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20fc28: 0xaf84b688  sw          $a0, -0x4978($gp)
    ctx->pc = 0x20fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948488), GPR_U32(ctx, 4));
    // 0x20fc2c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x20fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x20fc30: 0xaf859dac  sw          $a1, -0x6254($gp)
    ctx->pc = 0x20fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 5));
    // 0x20fc34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20FC34u;
    {
        const bool branch_taken_0x20fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC34u;
        // 0x20fc38: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc34) {
            ctx->pc = 0x20FC8Cu;
            goto label_20fc8c;
        }
    }
    ctx->pc = 0x20FC3Cu;
label_20fc3c:
    // 0x20fc3c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20fc40: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20fc44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fc48: 0x24a5aa00  addiu       $a1, $a1, -0x5600
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945280));
    // 0x20fc4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fc50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fc50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc58: 0x8083864  j           func_20E190
    ctx->pc = 0x20FC58u;
    ctx->pc = 0x20FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC58u;
    // 0x20fc5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E190u;
    inPage_0x20e190(rdram, ctx, runtime); return;
    ctx->pc = 0x20FC60u;
label_20fc60:
    // 0x20fc60: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20fc60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20fc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc68: 0x2610aa10  addiu       $s0, $s0, -0x55F0
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945296));
    // 0x20fc6c: 0xc083890  jal         func_20E240
    ctx->pc = 0x20FC6Cu;
    SET_GPR_U32(ctx, 31, 0x20FC74u);
    ctx->pc = 0x20FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC6Cu;
    // 0x20fc70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E240u, 0x20FC6Cu, 0x20FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC74u;
label_20fc74:
    // 0x20fc74: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20fc78: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x20FC78u;
    SET_GPR_U32(ctx, 31, 0x20FC80u);
    ctx->pc = 0x20FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC78u;
    // 0x20fc7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x20FC78u, 0x20FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC80u;
label_20fc80:
    // 0x20fc80: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20fc84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc88: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x20fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_20fc8c:
    // 0x20fc8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fc90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fc90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc98: 0x3e00008  jr          $ra
    ctx->pc = 0x20FC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC98u;
        // 0x20fc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCA0u;
}
