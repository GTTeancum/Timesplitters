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

// Function: sjeStoreImage
// Address: 0x2a62d8 - 0x2a65b4
void sjeStoreImage_0x2a62d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjeStoreImage_0x2a62d8");
#endif

    switch (ctx->pc) {
        case 0x2a63b4u: goto label_2a63b4;
        case 0x2a6478u: goto label_2a6478;
        case 0x2a64d8u: goto label_2a64d8;
        default: break;
    }

    ctx->pc = 0x2a62d8u;

    // 0x2a62d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a62d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a62dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a62dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a62e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a62e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a62e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a62e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a62e8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2a62e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a62f0: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x2a62f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2a62f4: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2a62f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2a62f8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2a62f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2a62fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a62fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6300: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2a6300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6304: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a6304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a6308: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x2a6308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2a630c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x2a630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x2a6310: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2a6310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2a6314: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x2a6314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2a6318: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a631c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a6320: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x2a6320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x2a6324: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a6328: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a6328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a632c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a6330: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x2a6330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2a6334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a6334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a6338: 0x3c041300  lui         $a0, 0x1300
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4864 << 16));
    // 0x2a633c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2a633cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6340: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a6340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a6344: 0x34e78005  ori         $a3, $a3, 0x8005
    ctx->pc = 0x2a6344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32773);
    // 0x2a6348: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a634c: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2a634cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a6350: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x2a6350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2a6354: 0x240f0052  addiu       $t7, $zero, 0x52
    ctx->pc = 0x2a6354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2a6358: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a635c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2a635cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6360: 0x240e0053  addiu       $t6, $zero, 0x53
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2a6364: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2a6364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2a6368: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a6368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a636c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a6370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6374: 0xfe000050  sd          $zero, 0x50($s0)
    ctx->pc = 0x2a6374u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 0));
    // 0x2a6378: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a6378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a637c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a637cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2a6380: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x2a6380u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x2a6384: 0xfe080018  sd          $t0, 0x18($s0)
    ctx->pc = 0x2a6384u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 8));
    // 0x2a6388: 0xfe060020  sd          $a2, 0x20($s0)
    ctx->pc = 0x2a6388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 6));
    // 0x2a638c: 0xfe0a0028  sd          $t2, 0x28($s0)
    ctx->pc = 0x2a638cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 10));
    // 0x2a6390: 0xfe090030  sd          $t1, 0x30($s0)
    ctx->pc = 0x2a6390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 9));
    // 0x2a6394: 0xfe0b0038  sd          $t3, 0x38($s0)
    ctx->pc = 0x2a6394u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 11));
    // 0x2a6398: 0xfe050040  sd          $a1, 0x40($s0)
    ctx->pc = 0x2a6398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 5));
    // 0x2a639c: 0xfe0f0048  sd          $t7, 0x48($s0)
    ctx->pc = 0x2a639cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 15));
    // 0x2a63a0: 0xfe0c0058  sd          $t4, 0x58($s0)
    ctx->pc = 0x2a63a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 12));
    // 0x2a63a4: 0xfe0d0060  sd          $t5, 0x60($s0)
    ctx->pc = 0x2a63a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 13));
    // 0x2a63a8: 0xfe0e0068  sd          $t6, 0x68($s0)
    ctx->pc = 0x2a63a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 14));
    // 0x2a63ac: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x2A63ACu;
    SET_GPR_U32(ctx, 31, 0x2A63B4u);
    ctx->pc = 0x2A63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63ACu;
    // 0x2a63b0: 0x8fb60080  lw          $s6, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x2A63ACu, 0x2A63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63B4u;
label_2a63b4:
    // 0x2a63b4: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x2a63b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a63b8: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x2a63b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x2a63bc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2a63bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a63c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a63c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a63c4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a63c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a63c8: 0x2c83003b  sltiu       $v1, $a0, 0x3B
    ctx->pc = 0x2a63c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x2a63cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A63CCu;
    {
        const bool branch_taken_0x2a63cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63CCu;
        // 0x2a63d0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63cc) {
            ctx->pc = 0x2A6424u;
            goto label_2a6424;
        }
    }
    ctx->pc = 0x2A63D4u;
    // 0x2a63d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a63d8: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x2a63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x2a63dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a63e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a63e4: 0x800008  jr          $a0
    ctx->pc = 0x2A63E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A63ECu: goto label_2a63ec;
            case 0x2A63F8u: goto label_2a63f8;
            case 0x2A6408u: goto label_2a6408;
            case 0x2A6414u: goto label_2a6414;
            case 0x2A641Cu: goto label_2a641c;
            case 0x2A6424u: goto label_2a6424;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A63E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A63ECu;
label_2a63ec:
    // 0x2a63ec: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x2a63ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a63f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A63F0u;
    {
        const bool branch_taken_0x2a63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F0u;
        // 0x2a63f4: 0x29080  sll         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63f0) {
            ctx->pc = 0x2A6424u;
            goto label_2a6424;
        }
    }
    ctx->pc = 0x2A63F8u;
label_2a63f8:
    // 0x2a63f8: 0x2331818  mult        $v1, $s1, $s3
    ctx->pc = 0x2a63f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a63fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a6400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6400u;
    {
        const bool branch_taken_0x2a6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6400u;
        // 0x2a6404: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6400) {
            ctx->pc = 0x2A6424u;
            goto label_2a6424;
        }
    }
    ctx->pc = 0x2A6408u;
label_2a6408:
    // 0x2a6408: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x2a6408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a640c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A640Cu;
    {
        const bool branch_taken_0x2a640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A640Cu;
        // 0x2a6410: 0x29040  sll         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a640c) {
            ctx->pc = 0x2A6424u;
            goto label_2a6424;
        }
    }
    ctx->pc = 0x2A6414u;
label_2a6414:
    // 0x2a6414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6414u;
    {
        const bool branch_taken_0x2a6414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6414u;
        // 0x2a6418: 0x2339018  mult        $s2, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6414) {
            ctx->pc = 0x2A6424u;
            goto label_2a6424;
        }
    }
    ctx->pc = 0x2A641Cu;
label_2a641c:
    // 0x2a641c: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x2a641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a6420: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x2a6420u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_2a6424:
    // 0x2a6424: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6428: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x2a6428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x2a642c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a6430: 0x36949020  ori         $s4, $s4, 0x9020
    ctx->pc = 0x2a6430u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)36896);
    // 0x2a6434: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2a6434u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2a6438: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x2a643c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2a643cu;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 2));
    // 0x2a6440: 0x2111824  and         $v1, $s0, $s1
    ctx->pc = 0x2a6440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x2a6444: 0x36739010  ori         $s3, $s3, 0x9010
    ctx->pc = 0x2a6444u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)36880);
    // 0x2a6448: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a644c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2a644cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2a6450: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x2a6450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6454: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x2a6454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x2a6458: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x2a6458u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
    // 0x2a645c: 0x36109000  ori         $s0, $s0, 0x9000
    ctx->pc = 0x2a645cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)36864);
    // 0x2a6460: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x2a6460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2a6464: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2a6464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2a6468: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a6468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a646c: 0xf  sync
    ctx->pc = 0x2a646cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a6470: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x2A6470u;
    SET_GPR_U32(ctx, 31, 0x2A6478u);
    ctx->pc = 0x2A6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6470u;
    // 0x2a6474: 0x8f849338  lw          $a0, -0x6CC8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x2A6470u, 0x2A6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6478u;
label_2a6478:
    // 0x2a6478: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2a6478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2a647c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2a647cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2a6480: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x2a6480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x2a6484: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a6484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a6488: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2a6488u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 4));
    // 0x2a648c: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x2a648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
    // 0x2a6490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a6490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6494: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2a6494u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 3));
    // 0x2a6498: 0xf  sync
    ctx->pc = 0x2a6498u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a649c: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x2a649cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x2a64a0: 0x2d18824  and         $s1, $s6, $s1
    ctx->pc = 0x2a64a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & GPR_U64(ctx, 17));
    // 0x2a64a4: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2a64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2a64a8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2a64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a64ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a64acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a64b0: 0xf  sync
    ctx->pc = 0x2a64b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a64b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a64b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2a64b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2a64bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A64BCu;
    {
        const bool branch_taken_0x2a64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64BCu;
        // 0x2a64c0: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64bc) {
            ctx->pc = 0x2A64F4u;
            goto label_2a64f4;
        }
    }
    ctx->pc = 0x2A64C4u;
    // 0x2a64c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2a64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2a64c8: 0x34844240  ori         $a0, $a0, 0x4240
    ctx->pc = 0x2a64c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    // 0x2a64cc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2a64ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x2a64d0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a64d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64d4: 0x0  nop
    ctx->pc = 0x2a64d4u;
    // NOP
label_2a64d8:
    // 0x2a64d8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2a64d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a64dc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A64DCu;
    {
        const bool branch_taken_0x2a64dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64DCu;
        // 0x2a64e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64dc) {
            ctx->pc = 0x2A6560u;
            goto label_2a6560;
        }
    }
    ctx->pc = 0x2A64E4u;
    // 0x2a64e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a64e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2a64e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2a64ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A64ECu;
    {
        const bool branch_taken_0x2a64ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64ECu;
        // 0x2a64f0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64ec) {
            ctx->pc = 0x2A64D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a64d8;
        }
    }
    ctx->pc = 0x2A64F4u;
label_2a64f4:
    // 0x2a64f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a64f8: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x2a64f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x2a64fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a64fcu;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x2a6500: 0xf  sync
    ctx->pc = 0x2a6500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a6504: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a6508: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x2a6508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
    // 0x2a650c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2a650cu;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x2a6510: 0xf  sync
    ctx->pc = 0x2a6510u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a6514: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a6518: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2a651c: 0x2463a5a0  addiu       $v1, $v1, -0x5A60
    ctx->pc = 0x2a651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944160));
    // 0x2a6520: 0x34845000  ori         $a0, $a0, 0x5000
    ctx->pc = 0x2a6520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x2a6524: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a6524u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x36A5A0u));
    // 0x2a6528: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a6528u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 2));
    // 0x2a652c: 0xf  sync
    ctx->pc = 0x2a652cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a6530: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a6530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6538: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a6538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a653c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a653cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6540: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a6540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6544: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a6544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6548: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a6548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a654c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a654cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a6550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6558: 0x80b38dc  j           func_2CE370
    ctx->pc = 0x2A6558u;
    ctx->pc = 0x2A655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6558u;
    // 0x2a655c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    sceGsSyncPath_0x2ce370(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6560u;
label_2a6560:
    // 0x2a6560: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a6564: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2a6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a6568: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a6568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a656c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6570: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x2a6570u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x2a6574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6578: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x2a6578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x2a657c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6580: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2a6580u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 5));
    // 0x2a6584: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x2a6584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x2a6588: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a6588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a658c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a658cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6590: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a6590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6594: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a6594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6598: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a6598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a659c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a659cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a65a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a65a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a65a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a65a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a65a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a65a8u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 5));
    // 0x2a65ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A65ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65ACu;
        // 0x2a65b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A65ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A65B4u;
}
