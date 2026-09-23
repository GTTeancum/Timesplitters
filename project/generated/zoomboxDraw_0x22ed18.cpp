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

// Function: zoomboxDraw
// Address: 0x22ed18 - 0x22ef10
void zoomboxDraw_0x22ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomboxDraw_0x22ed18");
#endif

    switch (ctx->pc) {
        case 0x22ed80u: goto label_22ed80;
        case 0x22eda0u: goto label_22eda0;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edf0u: goto label_22edf0;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee90u: goto label_22ee90;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eee0u: goto label_22eee0;
        default: break;
    }

    ctx->pc = 0x22ed18u;

    // 0x22ed18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22ed1c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22ed20: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x22ed24: 0x24de0008  addiu       $fp, $a2, 0x8
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x22ed28: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22ed2c: 0x2497fff8  addiu       $s7, $a0, -0x8
    ctx->pc = 0x22ed2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x22ed30: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22ed34: 0x24f60004  addiu       $s6, $a3, 0x4
    ctx->pc = 0x22ed34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x22ed38: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22ed3c: 0x24b5fffc  addiu       $s5, $a1, -0x4
    ctx->pc = 0x22ed3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x22ed40: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22ed44: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x22ed44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22ed4c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22ed50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22ed54: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x22ED54u;
    {
        const bool branch_taken_0x22ed54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED54u;
        // 0x22ed58: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed54) {
            ctx->pc = 0x22ED88u;
            goto label_22ed88;
        }
    }
    ctx->pc = 0x22ED5Cu;
    // 0x22ed5c: 0x26f00008  addiu       $s0, $s7, 0x8
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x22ed60: 0x26b40004  addiu       $s4, $s5, 0x4
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x22ed64: 0x27d2fff8  addiu       $s2, $fp, -0x8
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967288));
    // 0x22ed68: 0x26d3fffc  addiu       $s3, $s6, -0x4
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x22ed6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ed74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed78: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22ED78u;
    SET_GPR_U32(ctx, 31, 0x22ED80u);
    ctx->pc = 0x22ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED78u;
    // 0x22ed7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22ED78u, 0x22ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED80u;
label_22ed80:
    // 0x22ed80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22ED80u;
    {
        const bool branch_taken_0x22ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed80) {
            ctx->pc = 0x22ED98u;
            goto label_22ed98;
        }
    }
    ctx->pc = 0x22ED88u;
label_22ed88:
    // 0x22ed88: 0x26f00008  addiu       $s0, $s7, 0x8
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x22ed8c: 0x26b40004  addiu       $s4, $s5, 0x4
    ctx->pc = 0x22ed8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x22ed90: 0x27d2fff8  addiu       $s2, $fp, -0x8
    ctx->pc = 0x22ed90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967288));
    // 0x22ed94: 0x26d3fffc  addiu       $s3, $s6, -0x4
    ctx->pc = 0x22ed94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
label_22ed98:
    // 0x22ed98: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22ED98u;
    SET_GPR_U32(ctx, 31, 0x22EDA0u);
    ctx->pc = 0x22ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED98u;
    // 0x22ed9c: 0x8f84b728  lw          $a0, -0x48D8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22ED98u, 0x22EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDA0u;
label_22eda0:
    // 0x22eda0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22eda4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eda8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22edacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edb0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22edb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22edb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22edb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edbc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x22edbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22edc0: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EDC0u;
    SET_GPR_U32(ctx, 31, 0x22EDC8u);
    ctx->pc = 0x22EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDC0u;
    // 0x22edc4: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EDC0u, 0x22EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDC8u;
label_22edc8:
    // 0x22edc8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22edcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edd4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x22edd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22edd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eddc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ede0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ede0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ede4: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x22ede4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x22ede8: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EDE8u;
    SET_GPR_U32(ctx, 31, 0x22EDF0u);
    ctx->pc = 0x22EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDE8u;
    // 0x22edec: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EDE8u, 0x22EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22edf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22edf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22edf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22edfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee00: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x22ee00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ee04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee08: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee0c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22ee10: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE10u;
    // 0x22ee14: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EE10u, 0x22EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22ee1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee24: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x22ee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee28: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x22ee28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee30: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x22ee30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee34: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x22ee34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x22ee38: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EE38u;
    SET_GPR_U32(ctx, 31, 0x22EE40u);
    ctx->pc = 0x22EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE38u;
    // 0x22ee3c: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EE38u, 0x22EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE40u;
label_22ee40:
    // 0x22ee40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee44: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22ee48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ee4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee54: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22ee58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ee58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee5c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee60: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EE60u;
    SET_GPR_U32(ctx, 31, 0x22EE68u);
    ctx->pc = 0x22EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE60u;
    // 0x22ee64: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EE60u, 0x22EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE68u;
label_22ee68:
    // 0x22ee68: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x22ee68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee6c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ee78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee7c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22ee80: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x22ee80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee84: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x22ee84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee88: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EE88u;
    SET_GPR_U32(ctx, 31, 0x22EE90u);
    ctx->pc = 0x22EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE88u;
    // 0x22ee8c: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EE88u, 0x22EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE90u;
label_22ee90:
    // 0x22ee90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22ee90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee98: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22ee9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22ee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eea0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22eea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eea8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x22eea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22eeac: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x22eeacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22eeb0: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EEB0u;
    SET_GPR_U32(ctx, 31, 0x22EEB8u);
    ctx->pc = 0x22EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEB0u;
    // 0x22eeb4: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EEB0u, 0x22EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEB8u;
label_22eeb8:
    // 0x22eeb8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x22eebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eec0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22eec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eec4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x22eec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eec8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22eec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22eed0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22eed4: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x22eed8: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22EED8u;
    SET_GPR_U32(ctx, 31, 0x22EEE0u);
    ctx->pc = 0x22EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EED8u;
    // 0x22eedc: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22EED8u, 0x22EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEE0u;
label_22eee0:
    // 0x22eee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22eee4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22eee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22eee8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22eee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22eeec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22eeecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22eef0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22eef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22eef4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22eef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22eef8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22eef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eefc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22eefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ef00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22ef00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ef04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ef04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x22EF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF08u;
        // 0x22ef0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF10u;
}
