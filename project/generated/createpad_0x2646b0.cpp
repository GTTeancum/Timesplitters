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

// Function: createpad
// Address: 0x2646b0 - 0x264738
void createpad_0x2646b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("createpad_0x2646b0");
#endif

    switch (ctx->pc) {
        case 0x2646e8u: goto label_2646e8;
        default: break;
    }

    ctx->pc = 0x2646b0u;

    // 0x2646b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2646b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2646b4: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2646b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2646b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2646bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2646bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646c0: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x2646c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2646c4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2646c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2646c8: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2646c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2646cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2646ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2646d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2646d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2646d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2646d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2646d8: 0xaf83a348  sw          $v1, -0x5CB8($gp)
    ctx->pc = 0x2646d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 3));
    // 0x2646dc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2646e0: 0xc09917e  jal         func_2645F8
    ctx->pc = 0x2646E0u;
    SET_GPR_U32(ctx, 31, 0x2646E8u);
    ctx->pc = 0x2646E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646E0u;
    // 0x2646e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2645F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2645F8u, 0x2646E0u, 0x2646E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646E8u;
label_2646e8:
    // 0x2646e8: 0x8f83a348  lw          $v1, -0x5CB8($gp)
    ctx->pc = 0x2646e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2646ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2646f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2646F0u;
    {
        const bool branch_taken_0x2646f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2646F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646F0u;
        // 0x2646f4: 0x711818  mult        $v1, $v1, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646f0) {
            ctx->pc = 0x264700u;
            goto label_264700;
        }
    }
    ctx->pc = 0x2646F8u;
    // 0x2646f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2646F8u;
    {
        const bool branch_taken_0x2646f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646F8u;
        // 0x2646fc: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646f8) {
            ctx->pc = 0x264710u;
            goto label_264710;
        }
    }
    ctx->pc = 0x264700u;
label_264700:
    // 0x264700: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x264700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264708: 0x8c62ffc8  lw          $v0, -0x38($v1)
    ctx->pc = 0x264708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967240)));
    // 0x26470c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_264710:
    // 0x264710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x264710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x264714: 0x8f82b8b0  lw          $v0, -0x4750($gp)
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x264718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26471c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264724: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26472c: 0xaf82b8b0  sw          $v0, -0x4750($gp)
    ctx->pc = 0x26472cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 2));
    // 0x264730: 0x809917c  j           func_2645F0
    ctx->pc = 0x264730u;
    ctx->pc = 0x264734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264730u;
    // 0x264734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2645F0u;
    printpadinfo_0x2645f0(rdram, ctx, runtime); return;
    ctx->pc = 0x264738u;
}
