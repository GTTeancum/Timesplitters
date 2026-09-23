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

// Function: zoomtilePreload
// Address: 0x2500c8 - 0x2501c8
void zoomtilePreload_0x2500c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtilePreload_0x2500c8");
#endif

    switch (ctx->pc) {
        case 0x250110u: goto label_250110;
        case 0x250128u: goto label_250128;
        case 0x250148u: goto label_250148;
        case 0x250158u: goto label_250158;
        case 0x25016cu: goto label_25016c;
        case 0x250178u: goto label_250178;
        case 0x250188u: goto label_250188;
        case 0x250190u: goto label_250190;
        default: break;
    }

    ctx->pc = 0x2500c8u;

    // 0x2500c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2500c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2500cc: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2500d0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2500d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2500d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2500d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2500d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2500dc: 0x24844108  addiu       $a0, $a0, 0x4108
    ctx->pc = 0x2500dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16648));
    // 0x2500e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2500e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2500e4: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x2500e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2500e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2500e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2500ec: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x2500ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x2500f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2500f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2500f4: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2500f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2500f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2500f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2500fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2500fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250100: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x250100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250104: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x250104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250108: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x250108u;
    SET_GPR_U32(ctx, 31, 0x250110u);
    ctx->pc = 0x25010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250108u;
    // 0x25010c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x250108u, 0x250110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250110u;
label_250110:
    // 0x250110: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x250110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x250114: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x250114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x250118: 0x24578460  addiu       $s7, $v0, -0x7BA0
    ctx->pc = 0x250118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x25011c: 0x247689a0  addiu       $s6, $v1, -0x7660
    ctx->pc = 0x25011cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936992));
    // 0x250120: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x250124: 0x0  nop
    ctx->pc = 0x250124u;
    // NOP
label_250128:
    // 0x250128: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x250128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25012c: 0x2179021  addu        $s2, $s0, $s7
    ctx->pc = 0x25012cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x250130: 0x26a52318  addiu       $a1, $s5, 0x2318
    ctx->pc = 0x250130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8984));
    // 0x250134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250138: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x250138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25013c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25013cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250140: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x250140u;
    SET_GPR_U32(ctx, 31, 0x250148u);
    ctx->pc = 0x250144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250140u;
    // 0x250144: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x250140u, 0x250148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250148u;
label_250148:
    // 0x250148: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x250148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25014c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250150: 0xc0870d4  jal         func_21C350
    ctx->pc = 0x250150u;
    SET_GPR_U32(ctx, 31, 0x250158u);
    ctx->pc = 0x250154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250150u;
    // 0x250154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C350u, 0x250150u, 0x250158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250158u;
label_250158:
    // 0x250158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25015c: 0x26852338  addiu       $a1, $s4, 0x2338
    ctx->pc = 0x25015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 9016));
    // 0x250160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x250160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250164: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x250164u;
    SET_GPR_U32(ctx, 31, 0x25016Cu);
    ctx->pc = 0x250168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250164u;
    // 0x250168: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x250164u, 0x25016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25016Cu;
label_25016c:
    // 0x25016c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250170: 0xc0870b6  jal         func_21C2D8
    ctx->pc = 0x250170u;
    SET_GPR_U32(ctx, 31, 0x250178u);
    ctx->pc = 0x250174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250170u;
    // 0x250174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C2D8u, 0x250170u, 0x250178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250178u;
label_250178:
    // 0x250178: 0x2a620015  slti        $v0, $s3, 0x15
    ctx->pc = 0x250178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x25017c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25017Cu;
    {
        const bool branch_taken_0x25017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25017Cu;
        // 0x250180: 0x138180  sll         $s0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25017c) {
            ctx->pc = 0x250128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250128;
        }
    }
    ctx->pc = 0x250184u;
    // 0x250184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x250184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250188:
    // 0x250188: 0xc099c88  jal         func_267220
    ctx->pc = 0x250188u;
    SET_GPR_U32(ctx, 31, 0x250190u);
    ctx->pc = 0x25018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250188u;
    // 0x25018c: 0x266400ea  addiu       $a0, $s3, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x250188u, 0x250190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250190u;
label_250190:
    // 0x250190: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x250190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x250194: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x250194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x250198: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x250198u;
    {
        const bool branch_taken_0x250198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250198u;
        // 0x25019c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250198) {
            ctx->pc = 0x250188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250188;
        }
    }
    ctx->pc = 0x2501A0u;
    // 0x2501a0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2501a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2501a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2501a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2501a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2501a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2501ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2501acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2501b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2501b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2501b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2501b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2501b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2501b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2501bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2501bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2501c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2501C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2501C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C0u;
        // 0x2501c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2501C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2501C8u;
}
