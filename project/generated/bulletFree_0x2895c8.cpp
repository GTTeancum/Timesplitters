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

// Function: bulletFree
// Address: 0x2895c8 - 0x289634
void bulletFree_0x2895c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletFree_0x2895c8");
#endif

    switch (ctx->pc) {
        case 0x289600u: goto label_289600;
        case 0x289614u: goto label_289614;
        default: break;
    }

    ctx->pc = 0x2895c8u;

    // 0x2895c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2895c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2895cc: 0x3c02a33f  lui         $v0, 0xA33F
    ctx->pc = 0x2895ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41791 << 16));
    // 0x2895d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2895d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2895d4: 0x3442128d  ori         $v0, $v0, 0x128D
    ctx->pc = 0x2895d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4749);
    // 0x2895d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2895d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2895dc: 0x8f90b948  lw          $s0, -0x46B8($gp)
    ctx->pc = 0x2895dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x2895e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2895e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2895e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2895e8: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2895ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2895ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2895f0: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x2895f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2895f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2895f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2895f8: 0xc0a2524  jal         func_289490
    ctx->pc = 0x2895F8u;
    SET_GPR_U32(ctx, 31, 0x289600u);
    ctx->pc = 0x2895FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895F8u;
    // 0x2895fc: 0x108083  sra         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289490u, 0x2895F8u, 0x289600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289600u;
label_289600:
    // 0x289600: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x289600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289604: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x289604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x289608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28960c: 0xc0a24b4  jal         func_2892D0
    ctx->pc = 0x28960Cu;
    SET_GPR_U32(ctx, 31, 0x289614u);
    ctx->pc = 0x289610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28960Cu;
    // 0x289610: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892D0u, 0x28960Cu, 0x289614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289614u;
label_289614:
    // 0x289614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289618: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x289618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28961c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289620: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x289620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289624: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x289624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28962c: 0x80a2546  j           func_289518
    ctx->pc = 0x28962Cu;
    ctx->pc = 0x289630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28962Cu;
    // 0x289630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289518u;
    addtail_0x289518(rdram, ctx, runtime); return;
    ctx->pc = 0x289634u;
}
