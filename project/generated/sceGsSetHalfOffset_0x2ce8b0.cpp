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

// Function: sceGsSetHalfOffset
// Address: 0x2ce8b0 - 0x2ce938
void sceGsSetHalfOffset_0x2ce8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetHalfOffset_0x2ce8b0");
#endif

    ctx->pc = 0x2ce8b0u;

    // 0x2ce8b0: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x2ce8b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ce8b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ce8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ce8b8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2ce8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ce8bc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2ce8bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ce8c0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x2ce8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x2ce8c4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2ce8c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2ce8c8: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x2ce8cc: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2ce8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2ce8d0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ce8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ce8d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ce8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ce8d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ce8d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ce8dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ce8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce8e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ce8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ce8e4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2ce8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2ce8e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce8ec: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ce8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ce8f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ce8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ce8f4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2ce8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2ce8f8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2ce8f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2ce8fc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2ce8fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2ce900: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2ce900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2ce904: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x2ce904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x2ce908: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x2ce908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x2ce90c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x2ce90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x2ce910: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2ce910u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ce914: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE914u;
    {
        const bool branch_taken_0x2ce914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE914u;
        // 0x2ce918: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce914) {
            ctx->pc = 0x2CE928u;
            goto label_2ce928;
        }
    }
    ctx->pc = 0x2CE91Cu;
    // 0x2ce91c: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x2ce91cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x2ce920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE920u;
    {
        const bool branch_taken_0x2ce920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE920u;
        // 0x2ce924: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce920) {
            ctx->pc = 0x2CE92Cu;
            goto label_2ce92c;
        }
    }
    ctx->pc = 0x2CE928u;
label_2ce928:
    // 0x2ce928: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x2ce928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_2ce92c:
    // 0x2ce92c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2ce92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ce930: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE930u;
        // 0x2ce934: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE938u;
}
