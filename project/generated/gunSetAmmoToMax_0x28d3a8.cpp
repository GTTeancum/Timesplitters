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

// Function: gunSetAmmoToMax
// Address: 0x28d3a8 - 0x28d460
void gunSetAmmoToMax_0x28d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunSetAmmoToMax_0x28d3a8");
#endif

    ctx->pc = 0x28d3a8u;

    // 0x28d3a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x28d3ac: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x28d3acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28d3b0: 0x244890f8  addiu       $t0, $v0, -0x6F08
    ctx->pc = 0x28d3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x28d3b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x28d3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3b8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28d3bc: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x28d3bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x28d3c0: 0x2c83001e  sltiu       $v1, $a0, 0x1E
    ctx->pc = 0x28d3c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x28d3c4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D3C4u;
    {
        const bool branch_taken_0x28d3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C4u;
        // 0x28d3c8: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3c4) {
            ctx->pc = 0x28D40Cu;
            goto label_28d40c;
        }
    }
    ctx->pc = 0x28D3CCu;
    // 0x28d3cc: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28d3d0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x28d3d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x28d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x28d3d8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x28d3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28d3dc: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x28d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x28d3e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x28d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x28d3e4: 0x24a561a0  addiu       $a1, $a1, 0x61A0
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
    // 0x28d3e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28d3ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d3f0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d3f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28d3f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d3fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d400: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x28d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28d404: 0xac43026c  sw          $v1, 0x26C($v0)
    ctx->pc = 0x28d404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 3));
    // 0x28d408: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_28d40c:
    // 0x28d40c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x28d40cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d410: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x28d410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x28d414: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D414u;
    {
        const bool branch_taken_0x28d414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D414u;
        // 0x28d418: 0x22400  sll         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d414) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D41Cu;
    // 0x28d41c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x28d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x28d420: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28d420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28d424: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x28d424u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x28d428: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x28d428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28d42c: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x28d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x28d430: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x28d430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x28d434: 0x24a561a0  addiu       $a1, $a1, 0x61A0
    ctx->pc = 0x28d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
    // 0x28d438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28d43c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28d440: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28d440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d444: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28d448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d44c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d450: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28d454: 0xac43026c  sw          $v1, 0x26C($v0)
    ctx->pc = 0x28d454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 3));
label_28d458:
    // 0x28d458: 0x3e00008  jr          $ra
    ctx->pc = 0x28D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D460u;
}
