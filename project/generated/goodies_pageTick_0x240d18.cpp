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

// Function: goodies_pageTick
// Address: 0x240d18 - 0x240e4c
void goodies_pageTick_0x240d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodies_pageTick_0x240d18");
#endif

    switch (ctx->pc) {
        case 0x240d28u: goto label_240d28;
        case 0x240d38u: goto label_240d38;
        case 0x240d40u: goto label_240d40;
        case 0x240d48u: goto label_240d48;
        case 0x240d68u: goto label_240d68;
        case 0x240d94u: goto label_240d94;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e04u: goto label_240e04;
        case 0x240e30u: goto label_240e30;
        default: break;
    }

    ctx->pc = 0x240d18u;

    // 0x240d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240d20: 0xc08c050  jal         func_230140
    ctx->pc = 0x240D20u;
    SET_GPR_U32(ctx, 31, 0x240D28u);
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x240D20u, 0x240D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D28u;
label_240d28:
    // 0x240d28: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x240d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x240d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d30: 0xc08c086  jal         func_230218
    ctx->pc = 0x240D30u;
    SET_GPR_U32(ctx, 31, 0x240D38u);
    ctx->pc = 0x240D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D30u;
    // 0x240d34: 0x24a564e0  addiu       $a1, $a1, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x240D30u, 0x240D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D38u;
label_240d38:
    // 0x240d38: 0xc08a984  jal         func_22A610
    ctx->pc = 0x240D38u;
    SET_GPR_U32(ctx, 31, 0x240D40u);
    ctx->pc = 0x240D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D38u;
    // 0x240d3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x240D38u, 0x240D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D40u;
label_240d40:
    // 0x240d40: 0xc08a96c  jal         func_22A5B0
    ctx->pc = 0x240D40u;
    SET_GPR_U32(ctx, 31, 0x240D48u);
    ctx->pc = 0x240D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D40u;
    // 0x240d44: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x240D40u, 0x240D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D48u;
label_240d48:
    // 0x240d48: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x240D48u;
    {
        const bool branch_taken_0x240d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D48u;
        // 0x240d4c: 0x8f83b7c0  lw          $v1, -0x4840($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d48) {
            ctx->pc = 0x240E40u;
            goto label_240e40;
        }
    }
    ctx->pc = 0x240D50u;
    // 0x240d50: 0x2462ffbc  addiu       $v0, $v1, -0x44
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967228));
    // 0x240d54: 0x2c420078  sltiu       $v0, $v0, 0x78
    ctx->pc = 0x240d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x240d58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240D58u;
    {
        const bool branch_taken_0x240d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D58u;
        // 0x240d5c: 0x286200f0  slti        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d58) {
            ctx->pc = 0x240D7Cu;
            goto label_240d7c;
        }
    }
    ctx->pc = 0x240D60u;
    // 0x240d60: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x240D60u;
    SET_GPR_U32(ctx, 31, 0x240D68u);
    ctx->pc = 0x240D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D60u;
    // 0x240d64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x240D60u, 0x240D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D68u;
label_240d68:
    // 0x240d68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x240d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x240d6c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x240D6Cu;
    {
        const bool branch_taken_0x240d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D6Cu;
        // 0x240d70: 0x240300bc  addiu       $v1, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d6c) {
            ctx->pc = 0x240DE4u;
            goto label_240de4;
        }
    }
    ctx->pc = 0x240D74u;
    // 0x240d74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x240D74u;
    {
        const bool branch_taken_0x240d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D74u;
        // 0x240d78: 0xaf83b7c0  sw          $v1, -0x4840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d74) {
            ctx->pc = 0x240DE8u;
            goto label_240de8;
        }
    }
    ctx->pc = 0x240D7Cu;
label_240d7c:
    // 0x240d7c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x240D7Cu;
    {
        const bool branch_taken_0x240d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D7Cu;
        // 0x240d80: 0x2862003c  slti        $v0, $v1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d7c) {
            ctx->pc = 0x240DF4u;
            goto label_240df4;
        }
    }
    ctx->pc = 0x240D84u;
    // 0x240d84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240D84u;
    {
        const bool branch_taken_0x240d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D84u;
        // 0x240d88: 0x286200b5  slti        $v0, $v1, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d84) {
            ctx->pc = 0x240DB0u;
            goto label_240db0;
        }
    }
    ctx->pc = 0x240D8Cu;
    // 0x240d8c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x240D8Cu;
    SET_GPR_U32(ctx, 31, 0x240D94u);
    ctx->pc = 0x240D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D8Cu;
    // 0x240d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x240D8Cu, 0x240D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D94u;
label_240d94:
    // 0x240d94: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x240d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x240d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240D98u;
    {
        const bool branch_taken_0x240d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D98u;
        // 0x240d9c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d98) {
            ctx->pc = 0x240DA8u;
            goto label_240da8;
        }
    }
    ctx->pc = 0x240DA0u;
    // 0x240da0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x240DA0u;
    {
        const bool branch_taken_0x240da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA0u;
        // 0x240da4: 0xaf83b7c0  sw          $v1, -0x4840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240da0) {
            ctx->pc = 0x240DE8u;
            goto label_240de8;
        }
    }
    ctx->pc = 0x240DA8u;
label_240da8:
    // 0x240da8: 0x8f83b7c0  lw          $v1, -0x4840($gp)
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
    // 0x240dac: 0x286200b5  slti        $v0, $v1, 0xB5
    ctx->pc = 0x240dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
label_240db0:
    // 0x240db0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240DB0u;
    {
        const bool branch_taken_0x240db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DB0u;
        // 0x240db4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240db0) {
            ctx->pc = 0x240DDCu;
            goto label_240ddc;
        }
    }
    ctx->pc = 0x240DB8u;
    // 0x240db8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x240DB8u;
    SET_GPR_U32(ctx, 31, 0x240DC0u);
    ctx->pc = 0x240DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DB8u;
    // 0x240dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x240DB8u, 0x240DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DC0u;
label_240dc0:
    // 0x240dc0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x240dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x240dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240DC4u;
    {
        const bool branch_taken_0x240dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC4u;
        // 0x240dc8: 0x240300f1  addiu       $v1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc4) {
            ctx->pc = 0x240DD4u;
            goto label_240dd4;
        }
    }
    ctx->pc = 0x240DCCu;
    // 0x240dcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x240DCCu;
    {
        const bool branch_taken_0x240dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DCCu;
        // 0x240dd0: 0xaf83b7c0  sw          $v1, -0x4840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dcc) {
            ctx->pc = 0x240DE8u;
            goto label_240de8;
        }
    }
    ctx->pc = 0x240DD4u;
label_240dd4:
    // 0x240dd4: 0x8f83b7c0  lw          $v1, -0x4840($gp)
    ctx->pc = 0x240dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
    // 0x240dd8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x240dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_240ddc:
    // 0x240ddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240DDCu;
    {
        const bool branch_taken_0x240ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DDCu;
        // 0x240de0: 0xaf83b7c0  sw          $v1, -0x4840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ddc) {
            ctx->pc = 0x240DE8u;
            goto label_240de8;
        }
    }
    ctx->pc = 0x240DE4u;
label_240de4:
    // 0x240de4: 0x8f83b7c0  lw          $v1, -0x4840($gp)
    ctx->pc = 0x240de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
label_240de8:
    // 0x240de8: 0x286200f0  slti        $v0, $v1, 0xF0
    ctx->pc = 0x240de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x240dec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x240DECu;
    {
        const bool branch_taken_0x240dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DECu;
        // 0x240df0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dec) {
            ctx->pc = 0x240E44u;
            goto label_240e44;
        }
    }
    ctx->pc = 0x240DF4u;
label_240df4:
    // 0x240df4: 0xc09018c  jal         func_240630
    ctx->pc = 0x240DF4u;
    SET_GPR_U32(ctx, 31, 0x240DFCu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x240DF4u, 0x240DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DFCu;
label_240dfc:
    // 0x240dfc: 0xc09021a  jal         func_240868
    ctx->pc = 0x240DFCu;
    SET_GPR_U32(ctx, 31, 0x240E04u);
    ctx->pc = 0x240E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DFCu;
    // 0x240e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240868u, 0x240DFCu, 0x240E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E04u;
label_240e04:
    // 0x240e04: 0x8f82b7c0  lw          $v0, -0x4840($gp)
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948800)));
    // 0x240e08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240E08u;
    {
        const bool branch_taken_0x240e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E08u;
        // 0x240e0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e08) {
            ctx->pc = 0x240E44u;
            goto label_240e44;
        }
    }
    ctx->pc = 0x240E10u;
    // 0x240e10: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x240e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x240e14: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x240e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x240e18: 0x8c4311fc  lw          $v1, 0x11FC($v0)
    ctx->pc = 0x240e18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x240e1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x240e20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x240E20u;
    {
        const bool branch_taken_0x240e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e20) {
            ctx->pc = 0x240E38u;
            goto label_240e38;
        }
    }
    ctx->pc = 0x240E28u;
    // 0x240e28: 0xc090000  jal         func_240000
    ctx->pc = 0x240E28u;
    SET_GPR_U32(ctx, 31, 0x240E30u);
    ctx->pc = 0x240000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240000u, 0x240E28u, 0x240E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E30u;
label_240e30:
    // 0x240e30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240E30u;
    {
        const bool branch_taken_0x240e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E30u;
        // 0x240e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e30) {
            ctx->pc = 0x240E44u;
            goto label_240e44;
        }
    }
    ctx->pc = 0x240E38u;
label_240e38:
    // 0x240e38: 0x808ffd4  j           func_23FF50
    ctx->pc = 0x240E38u;
    ctx->pc = 0x240E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E38u;
    // 0x240e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FF50u;
    setlastgamemodepage_0x23ff50(rdram, ctx, runtime); return;
    ctx->pc = 0x240E40u;
label_240e40:
    // 0x240e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240e44:
    // 0x240e44: 0x3e00008  jr          $ra
    ctx->pc = 0x240E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E44u;
        // 0x240e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E4Cu;
}
