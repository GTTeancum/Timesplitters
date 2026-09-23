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

// Function: bgTileSetCreateRoomProps
// Address: 0x2565d0 - 0x25666c
void bgTileSetCreateRoomProps_0x2565d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileSetCreateRoomProps_0x2565d0");
#endif

    switch (ctx->pc) {
        case 0x2565f8u: goto label_2565f8;
        case 0x256610u: goto label_256610;
        default: break;
    }

    ctx->pc = 0x2565d0u;

    // 0x2565d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2565d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2565d4: 0x8f83a270  lw          $v1, -0x5D90($gp)
    ctx->pc = 0x2565d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x2565d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2565d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2565dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2565dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2565e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2565e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2565e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2565e8: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2565ec: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2565ECu;
    {
        const bool branch_taken_0x2565ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2565F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565ECu;
        // 0x2565f0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565ec) {
            ctx->pc = 0x256658u;
            goto label_256658;
        }
    }
    ctx->pc = 0x2565F4u;
    // 0x2565f4: 0x3c1101fc  lui         $s1, 0x1FC
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
label_2565f8:
    // 0x2565f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2565f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2565fc: 0x26040201  addiu       $a0, $s0, 0x201
    ctx->pc = 0x2565fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 513));
    // 0x256600: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x256600u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x256604: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x256604u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x256608: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x256608u;
    SET_GPR_U32(ctx, 31, 0x256610u);
    ctx->pc = 0x25660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256608u;
    // 0x25660c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x256608u, 0x256610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256610u;
label_256610:
    // 0x256610: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x256610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x256614: 0x26234828  addiu       $v1, $s1, 0x4828
    ctx->pc = 0x256614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 18472));
    // 0x256618: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x256618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25661c: 0x8f86a270  lw          $a2, -0x5D90($gp)
    ctx->pc = 0x25661cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x256620: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x256620u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256624: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x256624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x256628: 0x8f84a264  lw          $a0, -0x5D9C($gp)
    ctx->pc = 0x256628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25662c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x25662cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x256630: 0x8c480020  lw          $t0, 0x20($v0)
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x256634: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x256634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x256638: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25663c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25663cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x256640: 0xa5050124  sh          $a1, 0x124($t0)
    ctx->pc = 0x256640u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 292), (uint16_t)GPR_U32(ctx, 5));
    // 0x256644: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x256644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x256648: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x256648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x25664c: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x25664cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x256650: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x256650u;
    {
        const bool branch_taken_0x256650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256650u;
        // 0x256654: 0xac400088  sw          $zero, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256650) {
            ctx->pc = 0x2565F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2565f8;
        }
    }
    ctx->pc = 0x256658u;
label_256658:
    // 0x256658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25665c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25665cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256664: 0x3e00008  jr          $ra
    ctx->pc = 0x256664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256664u;
        // 0x256668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25666Cu;
}
