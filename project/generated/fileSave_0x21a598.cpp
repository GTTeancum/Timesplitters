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

// Function: fileSave
// Address: 0x21a598 - 0x21a5f8
void fileSave_0x21a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileSave_0x21a598");
#endif

    switch (ctx->pc) {
        case 0x21a5bcu: goto label_21a5bc;
        case 0x21a5d0u: goto label_21a5d0;
        case 0x21a5dcu: goto label_21a5dc;
        default: break;
    }

    ctx->pc = 0x21a598u;

    // 0x21a598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a59c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21a5a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21a5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21a5a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a5ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21a5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a5b4: 0xc0b4d44  jal         func_2D3510
    ctx->pc = 0x21A5B4u;
    SET_GPR_U32(ctx, 31, 0x21A5BCu);
    ctx->pc = 0x21A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5B4u;
    // 0x21a5b8: 0x24050602  addiu       $a1, $zero, 0x602 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3510u, 0x21A5B4u, 0x21A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5BCu;
label_21a5bc:
    // 0x21a5bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5c0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A5C0u;
    {
        const bool branch_taken_0x21a5c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5C0u;
        // 0x21a5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5c0) {
            ctx->pc = 0x21A5D0u;
            goto label_21a5d0;
        }
    }
    ctx->pc = 0x21A5C8u;
    // 0x21a5c8: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x21A5C8u;
    SET_GPR_U32(ctx, 31, 0x21A5D0u);
    ctx->pc = 0x21A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5C8u;
    // 0x21a5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x21A5C8u, 0x21A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5D0u;
label_21a5d0:
    // 0x21a5d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21a5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5d4: 0xc0b4e70  jal         func_2D39C0
    ctx->pc = 0x21A5D4u;
    SET_GPR_U32(ctx, 31, 0x21A5DCu);
    ctx->pc = 0x21A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5D4u;
    // 0x21a5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D39C0u, 0x21A5D4u, 0x21A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5DCu;
label_21a5dc:
    // 0x21a5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a5e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a5e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a5f0: 0x80b4d9a  j           func_2D3668
    ctx->pc = 0x21A5F0u;
    ctx->pc = 0x21A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A5F0u;
    // 0x21a5f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3668u;
    sceClose_0x2d3668(rdram, ctx, runtime); return;
    ctx->pc = 0x21A5F8u;
}
