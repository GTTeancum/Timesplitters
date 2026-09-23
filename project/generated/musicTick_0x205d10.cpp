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

// Function: musicTick
// Address: 0x205d10 - 0x205d88
void musicTick_0x205d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicTick_0x205d10");
#endif

    ctx->pc = 0x205d10u;

    // 0x205d10: 0x8f829b28  lw          $v0, -0x64D8($gp)
    ctx->pc = 0x205d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941480)));
    // 0x205d14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x205D14u;
    {
        const bool branch_taken_0x205d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D14u;
        // 0x205d18: 0x8f839b38  lw          $v1, -0x64C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d14) {
            ctx->pc = 0x205D80u;
            goto label_205d80;
        }
    }
    ctx->pc = 0x205D1Cu;
    // 0x205d1c: 0x8f849b34  lw          $a0, -0x64CC($gp)
    ctx->pc = 0x205d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941492)));
    // 0x205d20: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x205d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x205d24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x205D24u;
    {
        const bool branch_taken_0x205d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D24u;
        // 0x205d28: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d24) {
            ctx->pc = 0x205D54u;
            goto label_205d54;
        }
    }
    ctx->pc = 0x205D2Cu;
    // 0x205d2c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x205d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x205d30: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x205d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205D34u;
    {
        const bool branch_taken_0x205d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D34u;
        // 0x205d38: 0xaf839b38  sw          $v1, -0x64C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d34) {
            ctx->pc = 0x205D44u;
            goto label_205d44;
        }
    }
    ctx->pc = 0x205D3Cu;
    // 0x205d3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x205d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d40: 0xaf839b38  sw          $v1, -0x64C8($gp)
    ctx->pc = 0x205d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941496), GPR_U32(ctx, 3));
label_205d44:
    // 0x205d44: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x205d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x205d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205d4c: 0x80816f6  j           func_205BD8
    ctx->pc = 0x205D4Cu;
    ctx->pc = 0x205D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D4Cu;
    // 0x205d50: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205BD8u;
    musicSetVol_0x205bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x205D54u;
label_205d54:
    // 0x205d54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x205D54u;
    {
        const bool branch_taken_0x205d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D54u;
        // 0x205d58: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d54) {
            ctx->pc = 0x205D80u;
            goto label_205d80;
        }
    }
    ctx->pc = 0x205D5Cu;
    // 0x205d5c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x205d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x205d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205D60u;
    {
        const bool branch_taken_0x205d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D60u;
        // 0x205d64: 0xaf839b38  sw          $v1, -0x64C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d60) {
            ctx->pc = 0x205D70u;
            goto label_205d70;
        }
    }
    ctx->pc = 0x205D68u;
    // 0x205d68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x205d68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d6c: 0xaf839b38  sw          $v1, -0x64C8($gp)
    ctx->pc = 0x205d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941496), GPR_U32(ctx, 3));
label_205d70:
    // 0x205d70: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x205d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x205d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205d78: 0x80816f6  j           func_205BD8
    ctx->pc = 0x205D78u;
    ctx->pc = 0x205D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D78u;
    // 0x205d7c: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205BD8u;
    musicSetVol_0x205bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x205D80u;
label_205d80:
    // 0x205d80: 0x3e00008  jr          $ra
    ctx->pc = 0x205D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D88u;
}
