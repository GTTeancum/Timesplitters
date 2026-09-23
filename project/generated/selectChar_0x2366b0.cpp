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

// Function: selectChar
// Address: 0x2366b0 - 0x236984
void selectChar_0x2366b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("selectChar_0x2366b0");
#endif

    switch (ctx->pc) {
        case 0x236700u: goto label_236700;
        case 0x236734u: goto label_236734;
        case 0x236768u: goto label_236768;
        case 0x2367a8u: goto label_2367a8;
        case 0x236800u: goto label_236800;
        case 0x236810u: goto label_236810;
        case 0x236850u: goto label_236850;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368c8u: goto label_2368c8;
        case 0x2368f0u: goto label_2368f0;
        case 0x23694cu: goto label_23694c;
        default: break;
    }

    ctx->pc = 0x2366b0u;

    // 0x2366b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2366b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2366b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2366b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2366b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2366bc: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x2366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x2366c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2366c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2366c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2366c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2366c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2366cc: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2366d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2366d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2366d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2366d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2366d8: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x2366d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2366dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2366dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2366e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2366e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2366e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2366e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2366e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2366e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2366ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2366ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2366f0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2366F0u;
    {
        const bool branch_taken_0x2366f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366F0u;
        // 0x2366f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366f0) {
            ctx->pc = 0x236714u;
            goto label_236714;
        }
    }
    ctx->pc = 0x2366F8u;
    // 0x2366f8: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2366F8u;
    SET_GPR_U32(ctx, 31, 0x236700u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2366F8u, 0x236700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236700u;
label_236700:
    // 0x236700: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x236704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x236704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x236708: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x23670c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236710: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x236710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_236714:
    // 0x236714: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x236718: 0x244236f0  addiu       $v0, $v0, 0x36F0
    ctx->pc = 0x236718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14064));
    // 0x23671c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x23671cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x236724: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236724u;
    {
        const bool branch_taken_0x236724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236724u;
        // 0x236728: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236724) {
            ctx->pc = 0x23674Cu;
            goto label_23674c;
        }
    }
    ctx->pc = 0x23672Cu;
    // 0x23672c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x23672Cu;
    SET_GPR_U32(ctx, 31, 0x236734u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x23672Cu, 0x236734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236734u;
label_236734:
    // 0x236734: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x236738: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x236738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23673c: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x23673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x236740: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x236740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236744: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x236744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x236748: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23674c:
    // 0x23674c: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x23674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x236750: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x236750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236754: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x236754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x236758: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236758u;
    {
        const bool branch_taken_0x236758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236758u;
        // 0x23675c: 0x3c1501fc  lui         $s5, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236758) {
            ctx->pc = 0x23677Cu;
            goto label_23677c;
        }
    }
    ctx->pc = 0x236760u;
    // 0x236760: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x236760u;
    SET_GPR_U32(ctx, 31, 0x236768u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x236760u, 0x236768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236768u;
label_236768:
    // 0x236768: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23676c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23676cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x236770: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x236770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
    // 0x236774: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x236774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236778: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x236778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_23677c:
    // 0x23677c: 0x26a41238  addiu       $a0, $s5, 0x1238
    ctx->pc = 0x23677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4664));
    // 0x236780: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x236780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x236784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x236784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236788: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x236788u;
    {
        const bool branch_taken_0x236788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236788u;
        // 0x23678c: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236788) {
            ctx->pc = 0x236818u;
            goto label_236818;
        }
    }
    ctx->pc = 0x236790u;
    // 0x236790: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x236790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236798: 0x2634ffd7  addiu       $s4, $s1, -0x29
    ctx->pc = 0x236798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
    // 0x23679c: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
    // 0x2367a0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2367a4: 0x0  nop
    ctx->pc = 0x2367a4u;
    // NOP
label_2367a8:
    // 0x2367a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2367a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2367ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2367ACu;
    {
        const bool branch_taken_0x2367ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367ACu;
        // 0x2367b0: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367ac) {
            ctx->pc = 0x2367D0u;
            goto label_2367d0;
        }
    }
    ctx->pc = 0x2367B4u;
    // 0x2367b4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2367b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2367b8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2367bc: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2367bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2367c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2367c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2367c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2367c8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2367c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2367cc: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x2367ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_2367d0:
    // 0x2367d0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2367d4: 0x501fff4  bgez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2367D4u;
    {
        const bool branch_taken_0x2367d4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d4) {
            ctx->pc = 0x2367A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2367a8;
        }
    }
    ctx->pc = 0x2367DCu;
    // 0x2367dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2367e0: 0x14e20008  bne         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2367E0u;
    {
        const bool branch_taken_0x2367e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2367E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367E0u;
        // 0x2367e4: 0x26b01238  addiu       $s0, $s5, 0x1238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367e0) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x2367E8u;
    // 0x2367e8: 0x26a21238  addiu       $v0, $s5, 0x1238
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4664));
    // 0x2367ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2367ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2367f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2367f4: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2367f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2367f8: 0xc097b6e  jal         func_25EDB8
    ctx->pc = 0x2367F8u;
    SET_GPR_U32(ctx, 31, 0x236800u);
    ctx->pc = 0x2367FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367F8u;
    // 0x2367fc: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EDB8u, 0x2367F8u, 0x236800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236800u;
label_236800:
    // 0x236800: 0x26b01238  addiu       $s0, $s5, 0x1238
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4664));
label_236804:
    // 0x236804: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x236808: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x236808u;
    SET_GPR_U32(ctx, 31, 0x236810u);
    ctx->pc = 0x23680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236808u;
    // 0x23680c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x236808u, 0x236810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236810u;
label_236810:
    // 0x236810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236810u;
    {
        const bool branch_taken_0x236810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236810u;
        // 0x236814: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236810) {
            ctx->pc = 0x236820u;
            goto label_236820;
        }
    }
    ctx->pc = 0x236818u;
label_236818:
    // 0x236818: 0x2634ffd7  addiu       $s4, $s1, -0x29
    ctx->pc = 0x236818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
    // 0x23681c: 0x3c160035  lui         $s6, 0x35
    ctx->pc = 0x23681cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
label_236820:
    // 0x236820: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x236820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23682c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236830: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x236830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236834: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x236834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236838: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x236838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x23683c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x23683cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x236840: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x236840u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x236844: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x236844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236848: 0xc0a1f30  jal         func_287CC0
    ctx->pc = 0x236848u;
    SET_GPR_U32(ctx, 31, 0x236850u);
    ctx->pc = 0x23684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236848u;
    // 0x23684c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CC0u, 0x236848u, 0x236850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236850u;
label_236850:
    // 0x236850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236854: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x236854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x236858: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x236858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23685c: 0x3c02f1ff  lui         $v0, 0xF1FF
    ctx->pc = 0x23685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61951 << 16));
    // 0x236860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x236860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x236864: 0xae130240  sw          $s3, 0x240($s0)
    ctx->pc = 0x236864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 19));
    // 0x236868: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x236868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23686c: 0x2e840003  sltiu       $a0, $s4, 0x3
    ctx->pc = 0x23686cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x236870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x236870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x236874: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x236874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x236878: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x236878u;
    {
        const bool branch_taken_0x236878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236878u;
        // 0x23687c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236878) {
            ctx->pc = 0x2368A8u;
            goto label_2368a8;
        }
    }
    ctx->pc = 0x236880u;
    // 0x236880: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x236880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x236884: 0x26c32fe0  addiu       $v1, $s6, 0x2FE0
    ctx->pc = 0x236884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12256));
    // 0x236888: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x236888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23688c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x236890: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x236890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236898: 0xc09829e  jal         func_260A78
    ctx->pc = 0x236898u;
    SET_GPR_U32(ctx, 31, 0x2368A0u);
    ctx->pc = 0x23689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236898u;
    // 0x23689c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x236898u, 0x2368A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368A0u;
label_2368a0:
    // 0x2368a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2368A0u;
    {
        const bool branch_taken_0x2368a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2368A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368A0u;
        // 0x2368a4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368a0) {
            ctx->pc = 0x2368F4u;
            goto label_2368f4;
        }
    }
    ctx->pc = 0x2368A8u;
label_2368a8:
    // 0x2368a8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2368ac: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2368ACu;
    {
        const bool branch_taken_0x2368ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2368B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368ACu;
        // 0x2368b0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368ac) {
            ctx->pc = 0x2368D0u;
            goto label_2368d0;
        }
    }
    ctx->pc = 0x2368B4u;
    // 0x2368b4: 0x26c22fe0  addiu       $v0, $s6, 0x2FE0
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12256));
    // 0x2368b8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2368bc: 0xc78c81cc  lwc1        $f12, -0x7E34($gp)
    ctx->pc = 0x2368bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2368c0: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2368C0u;
    SET_GPR_U32(ctx, 31, 0x2368C8u);
    ctx->pc = 0x2368C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368C0u;
    // 0x2368c4: 0x8c450244  lw          $a1, 0x244($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2368C0u, 0x2368C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368C8u;
label_2368c8:
    // 0x2368c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2368C8u;
    {
        const bool branch_taken_0x2368c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368c8) {
            ctx->pc = 0x2368F4u;
            goto label_2368f4;
        }
    }
    ctx->pc = 0x2368D0u;
label_2368d0:
    // 0x2368d0: 0x26c32fe0  addiu       $v1, $s6, 0x2FE0
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12256));
    // 0x2368d4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2368d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2368d8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2368dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2368dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2368e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2368e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2368e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2368e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2368e8: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2368E8u;
    SET_GPR_U32(ctx, 31, 0x2368F0u);
    ctx->pc = 0x2368ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368E8u;
    // 0x2368ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2368E8u, 0x2368F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368F0u;
label_2368f0:
    // 0x2368f0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2368f4:
    // 0x2368f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2368f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368f8: 0xc78381d0  lwc1        $f3, -0x7E30($gp)
    ctx->pc = 0x2368f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2368fc: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2368fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236900: 0xc4420098  lwc1        $f2, 0x98($v0)
    ctx->pc = 0x236900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236904: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x236904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x236908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23690c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23690cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x236910: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x236910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x236914: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x236914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x236918: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x236918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x23691c: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x23691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236920: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x236920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236924: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x236924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x236928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23692c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x23692cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x236930: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x236930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x236934: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x236934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236938: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x236938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23693c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x23693cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x236940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x236944: 0xc08d96e  jal         func_2365B8
    ctx->pc = 0x236944u;
    SET_GPR_U32(ctx, 31, 0x23694Cu);
    ctx->pc = 0x236948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236944u;
    // 0x236948: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2365B8u, 0x236944u, 0x23694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23694Cu;
label_23694c:
    // 0x23694c: 0x26a21238  addiu       $v0, $s5, 0x1238
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4664));
    // 0x236950: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x236950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236954: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x236954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x236958: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x236958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23695c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23695cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x236960: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x236960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236964: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236968: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23696c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236970: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236978: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x236978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23697c: 0x3e00008  jr          $ra
    ctx->pc = 0x23697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23697Cu;
        // 0x236980: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236984u;
}
