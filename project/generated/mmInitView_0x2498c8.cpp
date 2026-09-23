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

// Function: mmInitView
// Address: 0x2498c8 - 0x249b58
void mmInitView_0x2498c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmInitView_0x2498c8");
#endif

    switch (ctx->pc) {
        case 0x2498fcu: goto label_2498fc;
        case 0x249964u: goto label_249964;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a90u: goto label_249a90;
        case 0x249ae8u: goto label_249ae8;
        case 0x249b40u: goto label_249b40;
        default: break;
    }

    ctx->pc = 0x2498c8u;

    // 0x2498c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2498cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2498d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2498d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2498d4: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x2498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2498d8: 0x8c6499f0  lw          $a0, -0x6610($v1)
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2498dc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3299FCu));
    // 0x2498e0: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A10u));
    // 0x2498e4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A04u));
    // 0x2498e8: 0xaf86a160  sw          $a2, -0x5EA0($gp)
    ctx->pc = 0x2498e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943072), GPR_U32(ctx, 6));
    // 0x2498ec: 0xaf84a158  sw          $a0, -0x5EA8($gp)
    ctx->pc = 0x2498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943064), GPR_U32(ctx, 4));
    // 0x2498f0: 0xaf83a15c  sw          $v1, -0x5EA4($gp)
    ctx->pc = 0x2498f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943068), GPR_U32(ctx, 3));
    // 0x2498f4: 0xc09254c  jal         func_249530
    ctx->pc = 0x2498F4u;
    SET_GPR_U32(ctx, 31, 0x2498FCu);
    ctx->pc = 0x2498F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498F4u;
    // 0x2498f8: 0xaf85a164  sw          $a1, -0x5E9C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943076), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249530u, 0x2498F4u, 0x2498FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498FCu;
label_2498fc:
    // 0x2498fc: 0x8f82a164  lw          $v0, -0x5E9C($gp)
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x249900: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x249900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x249904: 0x8f86a160  lw          $a2, -0x5EA0($gp)
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x249908: 0x22440  sll         $a0, $v0, 17
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x24990c: 0xaf83a178  sw          $v1, -0x5E88($gp)
    ctx->pc = 0x24990cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943096), GPR_U32(ctx, 3));
    // 0x249910: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x249914: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249914u;
    {
        const bool branch_taken_0x249914 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249914u;
        // 0x249918: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249914) {
            ctx->pc = 0x249920u;
            goto label_249920;
        }
    }
    ctx->pc = 0x24991Cu;
    // 0x24991c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_249920:
    // 0x249920: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x249924: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249924u;
    {
        const bool branch_taken_0x249924 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249924) {
            ctx->pc = 0x249930u;
            goto label_249930;
        }
    }
    ctx->pc = 0x24992Cu;
    // 0x24992c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x24992cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249930:
    // 0x249930: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249934: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x249934u;
    {
        const bool branch_taken_0x249934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249934) {
            ctx->pc = 0x249938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249934u;
            // 0x249938: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24995Cu;
            goto label_24995c;
        }
    }
    ctx->pc = 0x24993Cu;
    // 0x24993c: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x24993cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x249940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249944: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x249944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249948: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x249948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x24994c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249950: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x249954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249954u;
    {
        const bool branch_taken_0x249954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249954u;
        // 0x249958: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249954) {
            ctx->pc = 0x249970u;
            goto label_249970;
        }
    }
    ctx->pc = 0x24995Cu;
label_24995c:
    // 0x24995c: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x24995Cu;
    SET_GPR_U32(ctx, 31, 0x249964u);
    ctx->pc = 0x249960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24995Cu;
    // 0x249960: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x24995Cu, 0x249964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249964u;
label_249964:
    // 0x249964: 0x8f86a160  lw          $a2, -0x5EA0($gp)
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x249968: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x249968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24996c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x24996cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_249970:
    // 0x249970: 0x8f87a178  lw          $a3, -0x5E88($gp)
    ctx->pc = 0x249970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x249974: 0x64400  sll         $t0, $a2, 16
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x249978: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249978u;
    {
        const bool branch_taken_0x249978 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x24997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249978u;
        // 0x24997c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249978) {
            ctx->pc = 0x249984u;
            goto label_249984;
        }
    }
    ctx->pc = 0x249980u;
    // 0x249980: 0x63023  negu        $a2, $a2
    ctx->pc = 0x249980u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_249984:
    // 0x249984: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x249984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x249988: 0x63383  sra         $a2, $a2, 14
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 14));
    // 0x24998c: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x24998cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x249990: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x249990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x249994: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x249998: 0x1012  mflo        $v0
    ctx->pc = 0x249998u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24999c: 0x2010  mfhi        $a0
    ctx->pc = 0x24999cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2499a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2499a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2499a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2499a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2499a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2499a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2499ac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2499b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2499b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2499b4: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2499b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2499b8: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2499B8u;
    {
        const bool branch_taken_0x2499b8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2499BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B8u;
        // 0x2499bc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499b8) {
            ctx->pc = 0x2499C4u;
            goto label_2499c4;
        }
    }
    ctx->pc = 0x2499C0u;
    // 0x2499c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2499c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2499c4:
    // 0x2499c4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2499c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2499c8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2499c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2499cc: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x2499ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2499d0: 0xaf84a17c  sw          $a0, -0x5E84($gp)
    ctx->pc = 0x2499d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943100), GPR_U32(ctx, 4));
    // 0x2499d4: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2499d8: 0xaf85a170  sw          $a1, -0x5E90($gp)
    ctx->pc = 0x2499d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 5));
    // 0x2499dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2499e0: 0xaf83a168  sw          $v1, -0x5E98($gp)
    ctx->pc = 0x2499e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 3));
    // 0x2499e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2499e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2499e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2499ec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2499f0: 0xaf82a16c  sw          $v0, -0x5E94($gp)
    ctx->pc = 0x2499f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 2));
    // 0x2499f4: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2499F4u;
    {
        const bool branch_taken_0x2499f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2499F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F4u;
        // 0x2499f8: 0xaf84a174  sw          $a0, -0x5E8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499f4) {
            ctx->pc = 0x249A1Cu;
            goto label_249a1c;
        }
    }
    ctx->pc = 0x2499FCu;
    // 0x2499fc: 0x1072026  xor         $a0, $t0, $a3
    ctx->pc = 0x2499fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x249a00: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x249a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x249a04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249a08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249a0c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x249a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249a10: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x249a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x249a14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249A14u;
    {
        const bool branch_taken_0x249a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A14u;
        // 0x249a18: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a14) {
            ctx->pc = 0x249A34u;
            goto label_249a34;
        }
    }
    ctx->pc = 0x249A1Cu;
label_249a1c:
    // 0x249a1c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x249a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a20: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x249a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a24: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249A24u;
    SET_GPR_U32(ctx, 31, 0x249A2Cu);
    ctx->pc = 0x249A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A24u;
    // 0x249a28: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249A24u, 0x249A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A2Cu;
label_249a2c:
    // 0x249a2c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x249a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249a30: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x249a30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_249a34:
    // 0x249a34: 0x8f82a164  lw          $v0, -0x5E9C($gp)
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x249a38: 0x8f85a17c  lw          $a1, -0x5E84($gp)
    ctx->pc = 0x249a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x249a3c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x249a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x249a40: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x249A40u;
    {
        const bool branch_taken_0x249a40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A40u;
        // 0x249a44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a40) {
            ctx->pc = 0x249A4Cu;
            goto label_249a4c;
        }
    }
    ctx->pc = 0x249A48u;
    // 0x249a48: 0x21023  negu        $v0, $v0
    ctx->pc = 0x249a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_249a4c:
    // 0x249a4c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249A4Cu;
    {
        const bool branch_taken_0x249a4c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A4Cu;
        // 0x249a50: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a4c) {
            ctx->pc = 0x249A58u;
            goto label_249a58;
        }
    }
    ctx->pc = 0x249A54u;
    // 0x249a54: 0x31823  negu        $v1, $v1
    ctx->pc = 0x249a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249a58:
    // 0x249a58: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x249a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x249a5c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249a60: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249A60u;
    {
        const bool branch_taken_0x249a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A60u;
        // 0x249a64: 0xaf86a180  sw          $a2, -0x5E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a60) {
            ctx->pc = 0x249A88u;
            goto label_249a88;
        }
    }
    ctx->pc = 0x249A68u;
    // 0x249a68: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x249a6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x249a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x249a70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249a74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249a78: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x249a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249a7c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x249a80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x249A80u;
    {
        const bool branch_taken_0x249a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A80u;
        // 0x249a84: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a80) {
            ctx->pc = 0x249A98u;
            goto label_249a98;
        }
    }
    ctx->pc = 0x249A88u;
label_249a88:
    // 0x249a88: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249A88u;
    SET_GPR_U32(ctx, 31, 0x249A90u);
    ctx->pc = 0x249A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A88u;
    // 0x249a8c: 0x42438  dsll        $a0, $a0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249A88u, 0x249A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A90u;
label_249a90:
    // 0x249a90: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x249a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249a94: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x249a94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_249a98:
    // 0x249a98: 0x8f85a180  lw          $a1, -0x5E80($gp)
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x249a9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249aa0: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249AA0u;
    {
        const bool branch_taken_0x249aa0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AA0u;
        // 0x249aa4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249aa0) {
            ctx->pc = 0x249AACu;
            goto label_249aac;
        }
    }
    ctx->pc = 0x249AA8u;
    // 0x249aa8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x249aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249aac:
    // 0x249aac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249ab0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249AB0u;
    {
        const bool branch_taken_0x249ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB0u;
        // 0x249ab4: 0xaf86a184  sw          $a2, -0x5E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ab0) {
            ctx->pc = 0x249ADCu;
            goto label_249adc;
        }
    }
    ctx->pc = 0x249AB8u;
    // 0x249ab8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x249ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x249abc: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x249abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x249ac0: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x249ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x249ac4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249ac8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x249ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x249acc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x249accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249ad0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x249ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x249ad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249AD4u;
    {
        const bool branch_taken_0x249ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD4u;
        // 0x249ad8: 0x83300b  movn        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ad4) {
            ctx->pc = 0x249AF0u;
            goto label_249af0;
        }
    }
    ctx->pc = 0x249ADCu;
label_249adc:
    // 0x249adc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x249adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x249ae0: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249AE0u;
    SET_GPR_U32(ctx, 31, 0x249AE8u);
    ctx->pc = 0x249AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AE0u;
    // 0x249ae4: 0x42478  dsll        $a0, $a0, 17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249AE0u, 0x249AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AE8u;
label_249ae8:
    // 0x249ae8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x249ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249aec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x249aecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_249af0:
    // 0x249af0: 0x8f85a184  lw          $a1, -0x5E7C($gp)
    ctx->pc = 0x249af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x249af4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249af8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249AF8u;
    {
        const bool branch_taken_0x249af8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AF8u;
        // 0x249afc: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249af8) {
            ctx->pc = 0x249B04u;
            goto label_249b04;
        }
    }
    ctx->pc = 0x249B00u;
    // 0x249b00: 0x31823  negu        $v1, $v1
    ctx->pc = 0x249b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_249b04:
    // 0x249b04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x249b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249b08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249B08u;
    {
        const bool branch_taken_0x249b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B08u;
        // 0x249b0c: 0xaf86a188  sw          $a2, -0x5E78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b08) {
            ctx->pc = 0x249B34u;
            goto label_249b34;
        }
    }
    ctx->pc = 0x249B10u;
    // 0x249b10: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x249b14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249b18: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x249b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x249b1c: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x249b20: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x249b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249b24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x249b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x249b28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x249b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x249b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249B2Cu;
    {
        const bool branch_taken_0x249b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B2Cu;
        // 0x249b30: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b2c) {
            ctx->pc = 0x249B48u;
            goto label_249b48;
        }
    }
    ctx->pc = 0x249B34u;
label_249b34:
    // 0x249b34: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x249b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x249b38: 0xc0b84d4  jal         func_2E1350
    ctx->pc = 0x249B38u;
    SET_GPR_U32(ctx, 31, 0x249B40u);
    ctx->pc = 0x249B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B38u;
    // 0x249b3c: 0x42478  dsll        $a0, $a0, 17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1350u, 0x249B38u, 0x249B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B40u;
label_249b40:
    // 0x249b40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249b44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249b44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_249b48:
    // 0x249b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249b4c: 0xaf82a18c  sw          $v0, -0x5E74($gp)
    ctx->pc = 0x249b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 2));
    // 0x249b50: 0x3e00008  jr          $ra
    ctx->pc = 0x249B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B50u;
        // 0x249b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249B58u;
}
