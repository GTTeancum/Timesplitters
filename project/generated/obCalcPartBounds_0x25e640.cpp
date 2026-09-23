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

// Function: obCalcPartBounds
// Address: 0x25e640 - 0x25e8bc
void obCalcPartBounds_0x25e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obCalcPartBounds_0x25e640");
#endif

    switch (ctx->pc) {
        case 0x25e690u: goto label_25e690;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e738u: goto label_25e738;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e770u: goto label_25e770;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e818u: goto label_25e818;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e850u: goto label_25e850;
        case 0x25e868u: goto label_25e868;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e894u: goto label_25e894;
        default: break;
    }

    ctx->pc = 0x25e640u;

    // 0x25e640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25e644: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x25e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x25e648: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x25e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x25e64c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25e64cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e650: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25e650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25e654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25e654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e658: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x25e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x25e65c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x25e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x25e660: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x25e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x25e664: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x25e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25e668: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E668u;
    {
        const bool branch_taken_0x25e668 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E668u;
        // 0x25e66c: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e668) {
            ctx->pc = 0x25E67Cu;
            goto label_25e67c;
        }
    }
    ctx->pc = 0x25E670u;
    // 0x25e670: 0x8e76000c  lw          $s6, 0xC($s3)
    ctx->pc = 0x25e670u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x25e674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E674u;
    {
        const bool branch_taken_0x25e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E674u;
        // 0x25e678: 0x2674002c  addiu       $s4, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e674) {
            ctx->pc = 0x25E684u;
            goto label_25e684;
        }
    }
    ctx->pc = 0x25E67Cu;
label_25e67c:
    // 0x25e67c: 0x8e760008  lw          $s6, 0x8($s3)
    ctx->pc = 0x25e67cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x25e680: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x25e680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_25e684:
    // 0x25e684: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25e684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25E688u;
    {
        const bool branch_taken_0x25e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E688u;
        // 0x25e68c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e688) {
            ctx->pc = 0x25E694u;
            goto label_25e694;
        }
    }
    ctx->pc = 0x25E690u;
label_25e690:
    // 0x25e690: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_25e694:
    // 0x25e694: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E694u;
    {
        const bool branch_taken_0x25e694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e694) {
            ctx->pc = 0x25E6A8u;
            goto label_25e6a8;
        }
    }
    ctx->pc = 0x25E69Cu;
    // 0x25e69c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e6a0: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25E6A0u;
    {
        const bool branch_taken_0x25e6a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25e6a0) {
            ctx->pc = 0x25E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E6A0u;
            // 0x25e6a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e690;
        }
    }
    ctx->pc = 0x25E6A8u;
label_25e6a8:
    // 0x25e6a8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E6A8u;
    {
        const bool branch_taken_0x25e6a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6A8u;
        // 0x25e6ac: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6a8) {
            ctx->pc = 0x25E6B8u;
            goto label_25e6b8;
        }
    }
    ctx->pc = 0x25E6B0u;
    // 0x25e6b0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x25E6B0u;
    {
        const bool branch_taken_0x25e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6B0u;
        // 0x25e6b4: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6b0) {
            ctx->pc = 0x25E894u;
            goto label_25e894;
        }
    }
    ctx->pc = 0x25E6B8u;
label_25e6b8:
    // 0x25e6b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25e6bc: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x25e6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25e6c0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x25e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x25e6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e6c8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25e6cc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25E6CCu;
    SET_GPR_U32(ctx, 31, 0x25E6D4u);
    ctx->pc = 0x25E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6CCu;
    // 0x25e6d0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25E6CCu, 0x25E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6D4u;
label_25e6d4:
    // 0x25e6d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6d8: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E6D8u;
    {
        const bool branch_taken_0x25e6d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e6d8) {
            ctx->pc = 0x25E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E6D8u;
            // 0x25e6dc: 0xae71004c  sw          $s1, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E6E8u;
            goto label_25e6e8;
        }
    }
    ctx->pc = 0x25E6E0u;
    // 0x25e6e0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x25E6E0u;
    SET_GPR_U32(ctx, 31, 0x25E6E8u);
    ctx->pc = 0x25E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6E0u;
    // 0x25e6e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x25E6E0u, 0x25E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6E8u;
label_25e6e8:
    // 0x25e6e8: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x25E6E8u;
    {
        const bool branch_taken_0x25e6e8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E8u;
        // 0x25e6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6e8) {
            ctx->pc = 0x25E720u;
            goto label_25e720;
        }
    }
    ctx->pc = 0x25E6F0u;
    // 0x25e6f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6f4: 0x0  nop
    ctx->pc = 0x25e6f4u;
    // NOP
label_25e6f8:
    // 0x25e6f8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x25e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x25e6fc: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x25e6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25e700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25e704: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25e708: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x25e708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x25e70c: 0xac550018  sw          $s5, 0x18($v0)
    ctx->pc = 0x25e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 21));
    // 0x25e710: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25E710u;
    {
        const bool branch_taken_0x25e710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e710) {
            ctx->pc = 0x25E6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e6f8;
        }
    }
    ctx->pc = 0x25E718u;
    // 0x25e718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E718u;
    {
        const bool branch_taken_0x25e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E718u;
        // 0x25e71c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e718) {
            ctx->pc = 0x25E728u;
            goto label_25e728;
        }
    }
    ctx->pc = 0x25E720u;
label_25e720:
    // 0x25e720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e724: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x25e724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25e728:
    // 0x25e728: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e72c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25E72Cu;
    {
        const bool branch_taken_0x25e72c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E72Cu;
        // 0x25e730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e72c) {
            ctx->pc = 0x25E75Cu;
            goto label_25e75c;
        }
    }
    ctx->pc = 0x25E734u;
    // 0x25e734: 0x0  nop
    ctx->pc = 0x25e734u;
    // NOP
label_25e738:
    // 0x25e738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e73c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e744: 0xc097936  jal         func_25E4D8
    ctx->pc = 0x25E744u;
    SET_GPR_U32(ctx, 31, 0x25E74Cu);
    ctx->pc = 0x25E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E744u;
    // 0x25e748: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E4D8u, 0x25E744u, 0x25E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E74Cu;
label_25e74c:
    // 0x25e74c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e750: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25E750u;
    {
        const bool branch_taken_0x25e750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E750u;
        // 0x25e754: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e750) {
            ctx->pc = 0x25E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e738;
        }
    }
    ctx->pc = 0x25E758u;
    // 0x25e758: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_25e75c:
    // 0x25e75c: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x25E75Cu;
    {
        const bool branch_taken_0x25e75c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E75Cu;
        // 0x25e760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e75c) {
            ctx->pc = 0x25E78Cu;
            goto label_25e78c;
        }
    }
    ctx->pc = 0x25E764u;
    // 0x25e764: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e768: 0x24a2001c  addiu       $v0, $a1, 0x1C
    ctx->pc = 0x25e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x25e76c: 0x0  nop
    ctx->pc = 0x25e76cu;
    // NOP
label_25e770:
    // 0x25e770: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25e770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25e774: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25e778: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x25e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x25e77c: 0x0  nop
    ctx->pc = 0x25e77cu;
    // NOP
    // 0x25e780: 0x0  nop
    ctx->pc = 0x25e780u;
    // NOP
    // 0x25e784: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25E784u;
    {
        const bool branch_taken_0x25e784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e784) {
            ctx->pc = 0x25E770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e770;
        }
    }
    ctx->pc = 0x25E78Cu;
label_25e78c:
    // 0x25e78c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25e790: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x25e790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e794: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x25e794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x25e798: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x25e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x25e79c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e7a0: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E7A0u;
    {
        const bool branch_taken_0x25e7a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7A0u;
        // 0x25e7a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7a0) {
            ctx->pc = 0x25E7CCu;
            goto label_25e7cc;
        }
    }
    ctx->pc = 0x25E7A8u;
label_25e7a8:
    // 0x25e7a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25e7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7b4: 0xc0977b0  jal         func_25DEC0
    ctx->pc = 0x25E7B4u;
    SET_GPR_U32(ctx, 31, 0x25E7BCu);
    ctx->pc = 0x25E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7B4u;
    // 0x25e7b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DEC0u, 0x25E7B4u, 0x25E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7BCu;
label_25e7bc:
    // 0x25e7bc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e7c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e7c4: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25E7C4u;
    {
        const bool branch_taken_0x25e7c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7C4u;
        // 0x25e7c8: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7c4) {
            ctx->pc = 0x25E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e7a8;
        }
    }
    ctx->pc = 0x25E7CCu;
label_25e7cc:
    // 0x25e7cc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x25e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25e7d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25e7d4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x25e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x25e7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e7dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25e7e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x25e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x25e7e4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25e7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7ec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x25e7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25e7f0: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25E7F0u;
    SET_GPR_U32(ctx, 31, 0x25E7F8u);
    ctx->pc = 0x25E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7F0u;
    // 0x25e7f4: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25E7F0u, 0x25E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7F8u;
label_25e7f8:
    // 0x25e7f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x25e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25e7fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e800: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e804: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x25e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25e808: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x25e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x25e80c: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x25E80Cu;
    {
        const bool branch_taken_0x25e80c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E80Cu;
        // 0x25e810: 0x8e71004c  lw          $s1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e80c) {
            ctx->pc = 0x25E83Cu;
            goto label_25e83c;
        }
    }
    ctx->pc = 0x25E814u;
    // 0x25e814: 0x0  nop
    ctx->pc = 0x25e814u;
    // NOP
label_25e818:
    // 0x25e818: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e81c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25e81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e824: 0xc0977b0  jal         func_25DEC0
    ctx->pc = 0x25E824u;
    SET_GPR_U32(ctx, 31, 0x25E82Cu);
    ctx->pc = 0x25E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E824u;
    // 0x25e828: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DEC0u, 0x25E824u, 0x25E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E82Cu;
label_25e82c:
    // 0x25e82c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e830: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e834: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25E834u;
    {
        const bool branch_taken_0x25e834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E834u;
        // 0x25e838: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e834) {
            ctx->pc = 0x25E818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E83Cu;
label_25e83c:
    // 0x25e83c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e840: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x25e840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25e844: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25e848: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25E848u;
    SET_GPR_U32(ctx, 31, 0x25E850u);
    ctx->pc = 0x25E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E848u;
    // 0x25e84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25E848u, 0x25E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E850u;
label_25e850:
    // 0x25e850: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x25e850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e854: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x25e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x25e858: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x25e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x25e85c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e860: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E860u;
    {
        const bool branch_taken_0x25e860 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E860u;
        // 0x25e864: 0x8e71004c  lw          $s1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e860) {
            ctx->pc = 0x25E88Cu;
            goto label_25e88c;
        }
    }
    ctx->pc = 0x25E868u;
label_25e868:
    // 0x25e868: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e86c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25e86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e874: 0xc0977b0  jal         func_25DEC0
    ctx->pc = 0x25E874u;
    SET_GPR_U32(ctx, 31, 0x25E87Cu);
    ctx->pc = 0x25E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E874u;
    // 0x25e878: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DEC0u, 0x25E874u, 0x25E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E87Cu;
label_25e87c:
    // 0x25e87c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x25e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x25e880: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25e884: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25E884u;
    {
        const bool branch_taken_0x25e884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E884u;
        // 0x25e888: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e884) {
            ctx->pc = 0x25E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e868;
        }
    }
    ctx->pc = 0x25E88Cu;
label_25e88c:
    // 0x25e88c: 0xc080774  jal         func_201DD0
    ctx->pc = 0x25E88Cu;
    SET_GPR_U32(ctx, 31, 0x25E894u);
    ctx->pc = 0x25E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E88Cu;
    // 0x25e890: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DD0u, 0x25E88Cu, 0x25E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E894u;
label_25e894:
    // 0x25e894: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25e894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25e898: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x25e898u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25e89c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x25e89cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e8a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x25e8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e8a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x25e8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e8a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x25e8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e8ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x25e8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e8b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25e8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8B4u;
        // 0x25e8b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E8BCu;
}
