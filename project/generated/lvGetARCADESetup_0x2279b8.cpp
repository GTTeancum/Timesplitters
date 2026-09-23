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

// Function: lvGetARCADESetup
// Address: 0x2279b8 - 0x227af0
void lvGetARCADESetup_0x2279b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetARCADESetup_0x2279b8");
#endif

    ctx->pc = 0x2279b8u;

    // 0x2279b8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2279bc: 0x2c620069  sltiu       $v0, $v1, 0x69
    ctx->pc = 0x2279bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)105) ? 1 : 0);
    // 0x2279c0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2279C0u;
    {
        const bool branch_taken_0x2279c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279C0u;
        // 0x2279c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279c0) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x2279C8u;
    // 0x2279c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2279cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2279ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2279d0: 0x24421120  addiu       $v0, $v0, 0x1120
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x2279d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2279d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2279d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2279d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2279dc: 0x800008  jr          $a0
    ctx->pc = 0x2279DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2279E4u: goto label_2279e4;
            case 0x2279F0u: goto label_2279f0;
            case 0x2279FCu: goto label_2279fc;
            case 0x227A08u: goto label_227a08;
            case 0x227A14u: goto label_227a14;
            case 0x227A20u: goto label_227a20;
            case 0x227A2Cu: goto label_227a2c;
            case 0x227A38u: goto label_227a38;
            case 0x227A44u: goto label_227a44;
            case 0x227A50u: goto label_227a50;
            case 0x227A5Cu: goto label_227a5c;
            case 0x227A68u: goto label_227a68;
            case 0x227A74u: goto label_227a74;
            case 0x227A80u: goto label_227a80;
            case 0x227A8Cu: goto label_227a8c;
            case 0x227A98u: goto label_227a98;
            case 0x227AA4u: goto label_227aa4;
            case 0x227AB0u: goto label_227ab0;
            case 0x227ABCu: goto label_227abc;
            case 0x227AC8u: goto label_227ac8;
            case 0x227AD4u: goto label_227ad4;
            case 0x227AE0u: goto label_227ae0;
            case 0x227AE8u: goto label_227ae8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2279DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2279E4u;
label_2279e4:
    // 0x2279e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2279e8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2279E8u;
    {
        const bool branch_taken_0x2279e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279E8u;
        // 0x2279ec: 0x24453d28  addiu       $a1, $v0, 0x3D28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279e8) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x2279F0u;
label_2279f0:
    // 0x2279f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x2279f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x2279f4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2279F4u;
    {
        const bool branch_taken_0x2279f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279F4u;
        // 0x2279f8: 0x2445b400  addiu       $a1, $v0, -0x4C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279f4) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x2279FCu;
label_2279fc:
    // 0x2279fc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2279fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a00: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x227A00u;
    {
        const bool branch_taken_0x227a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A00u;
        // 0x227a04: 0x2445cb70  addiu       $a1, $v0, -0x3490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a00) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A08u;
label_227a08:
    // 0x227a08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a0c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x227A0Cu;
    {
        const bool branch_taken_0x227a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A0Cu;
        // 0x227a10: 0x244597a0  addiu       $a1, $v0, -0x6860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a0c) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A14u;
label_227a14:
    // 0x227a14: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a18: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x227A18u;
    {
        const bool branch_taken_0x227a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A18u;
        // 0x227a1c: 0x2445faf0  addiu       $a1, $v0, -0x510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a18) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A20u;
label_227a20:
    // 0x227a20: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a24: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x227A24u;
    {
        const bool branch_taken_0x227a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A24u;
        // 0x227a28: 0x244531d8  addiu       $a1, $v0, 0x31D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a24) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A2Cu;
label_227a2c:
    // 0x227a2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a30: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x227A30u;
    {
        const bool branch_taken_0x227a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A30u;
        // 0x227a34: 0x244544f0  addiu       $a1, $v0, 0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a30) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A38u;
label_227a38:
    // 0x227a38: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x227A3Cu;
    {
        const bool branch_taken_0x227a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x24455388  addiu       $a1, $v0, 0x5388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a3c) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A44u;
label_227a44:
    // 0x227a44: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a48: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x227A48u;
    {
        const bool branch_taken_0x227a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A48u;
        // 0x227a4c: 0x24455f28  addiu       $a1, $v0, 0x5F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a48) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A50u;
label_227a50:
    // 0x227a50: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a54: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x227A54u;
    {
        const bool branch_taken_0x227a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A54u;
        // 0x227a58: 0x2445e1c0  addiu       $a1, $v0, -0x1E40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a54) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A5Cu;
label_227a5c:
    // 0x227a5c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a60: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x227A60u;
    {
        const bool branch_taken_0x227a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A60u;
        // 0x227a64: 0x24459430  addiu       $a1, $v0, -0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a60) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A68u;
label_227a68:
    // 0x227a68: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x227A6Cu;
    {
        const bool branch_taken_0x227a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A6Cu;
        // 0x227a70: 0x244524d8  addiu       $a1, $v0, 0x24D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a6c) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A74u;
label_227a74:
    // 0x227a74: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x227A78u;
    {
        const bool branch_taken_0x227a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A78u;
        // 0x227a7c: 0x24450b98  addiu       $a1, $v0, 0xB98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a78) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A80u;
label_227a80:
    // 0x227a80: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x227A84u;
    {
        const bool branch_taken_0x227a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A84u;
        // 0x227a88: 0x2445fbd8  addiu       $a1, $v0, -0x428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a84) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A8Cu;
label_227a8c:
    // 0x227a8c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227a90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x227A90u;
    {
        const bool branch_taken_0x227a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A90u;
        // 0x227a94: 0x2445acc8  addiu       $a1, $v0, -0x5338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a90) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227A98u;
label_227a98:
    // 0x227a98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227a9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x227A9Cu;
    {
        const bool branch_taken_0x227a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A9Cu;
        // 0x227aa0: 0x24457070  addiu       $a1, $v0, 0x7070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a9c) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227AA4u;
label_227aa4:
    // 0x227aa4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227aa8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x227AA8u;
    {
        const bool branch_taken_0x227aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AA8u;
        // 0x227aac: 0x2445d610  addiu       $a1, $v0, -0x29F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aa8) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227AB0u;
label_227ab0:
    // 0x227ab0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227ab4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x227AB4u;
    {
        const bool branch_taken_0x227ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AB4u;
        // 0x227ab8: 0x244574a0  addiu       $a1, $v0, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ab4) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227ABCu;
label_227abc:
    // 0x227abc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227AC0u;
    {
        const bool branch_taken_0x227ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC0u;
        // 0x227ac4: 0x24456d70  addiu       $a1, $v0, 0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ac0) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227AC8u;
label_227ac8:
    // 0x227ac8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227acc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x227ACCu;
    {
        const bool branch_taken_0x227acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ACCu;
        // 0x227ad0: 0x244525d0  addiu       $a1, $v0, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227acc) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227AD4u;
label_227ad4:
    // 0x227ad4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227AD8u;
    {
        const bool branch_taken_0x227ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AD8u;
        // 0x227adc: 0x24452548  addiu       $a1, $v0, 0x2548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ad8) {
            ctx->pc = 0x227AE8u;
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227AE0u;
label_227ae0:
    // 0x227ae0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227ae4: 0x24454278  addiu       $a1, $v0, 0x4278
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17016));
label_227ae8:
    // 0x227ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x227AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AE8u;
        // 0x227aec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227AF0u;
}
