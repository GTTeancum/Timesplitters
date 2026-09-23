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

// Function: bgPreloadTextures
// Address: 0x2564a8 - 0x256548
void bgPreloadTextures_0x2564a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPreloadTextures_0x2564a8");
#endif

    switch (ctx->pc) {
        case 0x2564d8u: goto label_2564d8;
        case 0x2564e4u: goto label_2564e4;
        case 0x256508u: goto label_256508;
        case 0x256518u: goto label_256518;
        default: break;
    }

    ctx->pc = 0x2564a8u;

    // 0x2564a8: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2564a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2564ac: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2564acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2564b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2564b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2564b4: 0x24c2ff9c  addiu       $v0, $a2, -0x64
    ctx->pc = 0x2564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967196));
    // 0x2564b8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2564b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2564bc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2564BCu;
    {
        const bool branch_taken_0x2564bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2564C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564BCu;
        // 0x2564c0: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564bc) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564C4u;
    // 0x2564c4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2564c8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2564c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564cc: 0x24a52640  addiu       $a1, $a1, 0x2640
    ctx->pc = 0x2564ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    // 0x2564d0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2564D0u;
    SET_GPR_U32(ctx, 31, 0x2564D8u);
    ctx->pc = 0x2564D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564D0u;
    // 0x2564d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2564D0u, 0x2564D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564D8u;
label_2564d8:
    // 0x2564d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2564d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564dc: 0xc087140  jal         func_21C500
    ctx->pc = 0x2564DCu;
    SET_GPR_U32(ctx, 31, 0x2564E4u);
    ctx->pc = 0x2564E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564DCu;
    // 0x2564e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x2564DCu, 0x2564E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564E4u;
label_2564e4:
    // 0x2564e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2564e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2564e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2564e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2564ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2564f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2564f4: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2564F4u;
    {
        const bool branch_taken_0x2564f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2564F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F4u;
        // 0x2564f8: 0xaf85a23c  sw          $a1, -0x5DC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564f4) {
            ctx->pc = 0x256538u;
            goto label_256538;
        }
    }
    ctx->pc = 0x2564FCu;
    // 0x2564fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2564fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256500: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x256504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_256508:
    // 0x256508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25650c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256510: 0xc087234  jal         func_21C8D0
    ctx->pc = 0x256510u;
    SET_GPR_U32(ctx, 31, 0x256518u);
    ctx->pc = 0x256514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256510u;
    // 0x256514: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C8D0u, 0x256510u, 0x256518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256518u;
label_256518:
    // 0x256518: 0x8f83a23c  lw          $v1, -0x5DC4($gp)
    ctx->pc = 0x256518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x25651c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x25651cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x256520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256524: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x256524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256528: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25652c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256530: 0x461fff5  bgez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x256530u;
    {
        const bool branch_taken_0x256530 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x256534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256530u;
        // 0x256534: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256530) {
            ctx->pc = 0x256508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256508;
        }
    }
    ctx->pc = 0x256538u;
label_256538:
    // 0x256538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25653c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25653cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256540: 0x3e00008  jr          $ra
    ctx->pc = 0x256540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256540u;
        // 0x256544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256548u;
}
