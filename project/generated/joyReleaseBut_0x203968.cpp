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

// Function: joyReleaseBut
// Address: 0x203968 - 0x2039e4
void joyReleaseBut_0x203968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyReleaseBut_0x203968");
#endif

    switch (ctx->pc) {
        case 0x20398cu: goto label_20398c;
        case 0x2039a0u: goto label_2039a0;
        default: break;
    }

    ctx->pc = 0x203968u;

    // 0x203968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20396c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x203970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203974: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x203978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20397c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20397Cu;
    {
        const bool branch_taken_0x20397c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20397Cu;
        // 0x203980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20397c) {
            ctx->pc = 0x2039A8u;
            goto label_2039a8;
        }
    }
    ctx->pc = 0x203984u;
    // 0x203984: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203984u;
    SET_GPR_U32(ctx, 31, 0x20398Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203984u, 0x20398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20398Cu;
label_20398c:
    // 0x20398c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20398cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x203990: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203990u;
    {
        const bool branch_taken_0x203990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203990u;
        // 0x203994: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203990) {
            ctx->pc = 0x2039ACu;
            goto label_2039ac;
        }
    }
    ctx->pc = 0x203998u;
    // 0x203998: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x203998u;
    SET_GPR_U32(ctx, 31, 0x2039A0u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x203998u, 0x2039A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039A0u;
label_2039a0:
    // 0x2039a0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2039a4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2039a8:
    // 0x2039a8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_2039ac:
    // 0x2039ac: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2039b0: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x2039b4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2039b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2039bc: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2039c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2039c4: 0x2484c740  addiu       $a0, $a0, -0x38C0
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    // 0x2039c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2039c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2039cc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2039ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2039d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2039d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2039d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2039d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2039d8: 0x8c620128  lw          $v0, 0x128($v1)
    ctx->pc = 0x2039d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x2039dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2039DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039DCu;
        // 0x2039e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2039E4u;
}
