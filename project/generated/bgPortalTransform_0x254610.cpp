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

// Function: bgPortalTransform
// Address: 0x254610 - 0x2546a0
void bgPortalTransform_0x254610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalTransform_0x254610");
#endif

    switch (ctx->pc) {
        case 0x254648u: goto label_254648;
        case 0x254660u: goto label_254660;
        default: break;
    }

    ctx->pc = 0x254610u;

    // 0x254610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254614: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x254614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x254618: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25461c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25461cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254628: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x254628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25462c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x254630: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x254634: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254634u;
    {
        const bool branch_taken_0x254634 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254634u;
        // 0x254638: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254634) {
            ctx->pc = 0x254678u;
            goto label_254678;
        }
    }
    ctx->pc = 0x25463Cu;
    // 0x25463c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x25463cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x254640: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x254640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x254644: 0x0  nop
    ctx->pc = 0x254644u;
    // NOP
label_254648:
    // 0x254648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x254648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25464c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x25464cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x254650: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254654: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x254654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x254658: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254658u;
    SET_GPR_U32(ctx, 31, 0x254660u);
    ctx->pc = 0x25465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254658u;
    // 0x25465c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254658u, 0x254660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254660u;
label_254660:
    // 0x254660: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x254664: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x254664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x254668u;
    {
        const bool branch_taken_0x254668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254668u;
        // 0x25466c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254668) {
            ctx->pc = 0x254648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254648;
        }
    }
    ctx->pc = 0x254670u;
    // 0x254670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254670u;
    {
        const bool branch_taken_0x254670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254670u;
        // 0x254674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254670) {
            ctx->pc = 0x254680u;
            goto label_254680;
        }
    }
    ctx->pc = 0x254678u;
label_254678:
    // 0x254678: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x254678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x25467c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_254680:
    // 0x254680: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x254680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254684: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x254684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254688: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x254688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25468c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25468cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x254690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254698: 0x80ad568  j           func_2B55A0
    ctx->pc = 0x254698u;
    ctx->pc = 0x25469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254698u;
    // 0x25469c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    matrixVecRot_0x2b55a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2546A0u;
}
