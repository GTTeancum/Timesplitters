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

// Function: gunChrUpdate
// Address: 0x294528 - 0x2946c0
void gunChrUpdate_0x294528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunChrUpdate_0x294528");
#endif

    switch (ctx->pc) {
        case 0x294590u: goto label_294590;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945d0u: goto label_2945d0;
        case 0x29460cu: goto label_29460c;
        case 0x294648u: goto label_294648;
        default: break;
    }

    ctx->pc = 0x294528u;

    // 0x294528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29452c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29452cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x294530: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x294530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x294534: 0x244290f8  addiu       $v0, $v0, -0x6F08
    ctx->pc = 0x294534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x294538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29453c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29453cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x294544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x294548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29454c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294550: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x294550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x294554: 0x8e530160  lw          $s3, 0x160($s2)
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x294558: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x294558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x29455c: 0x26700178  addiu       $s0, $s3, 0x178
    ctx->pc = 0x29455cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 376));
    // 0x294560: 0x2664010c  addiu       $a0, $s3, 0x10C
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 268));
    // 0x294564: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x294564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x294568: 0x94800b  movn        $s0, $a0, $s4
    ctx->pc = 0x294568u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x29456c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29456Cu;
    {
        const bool branch_taken_0x29456c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x294570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29456Cu;
        // 0x294570: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29456c) {
            ctx->pc = 0x29457Cu;
            goto label_29457c;
        }
    }
    ctx->pc = 0x294574u;
    // 0x294574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294574u;
    {
        const bool branch_taken_0x294574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294574u;
        // 0x294578: 0x84510002  lh          $s1, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294574) {
            ctx->pc = 0x294580u;
            goto label_294580;
        }
    }
    ctx->pc = 0x29457Cu;
label_29457c:
    // 0x29457c: 0x84510004  lh          $s1, 0x4($v0)
    ctx->pc = 0x29457cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_294580:
    // 0x294580: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x294580u;
    {
        const bool branch_taken_0x294580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x294580) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294588u;
    // 0x294588: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x294588u;
    SET_GPR_U32(ctx, 31, 0x294590u);
    ctx->pc = 0x29458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294588u;
    // 0x29458c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x294588u, 0x294590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294590u;
label_294590:
    // 0x294590: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x294590u;
    {
        const bool branch_taken_0x294590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294590) {
            ctx->pc = 0x294594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294590u;
            // 0x294594: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945B4u;
            goto label_2945b4;
        }
    }
    ctx->pc = 0x294598u;
    // 0x294598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294598u;
    {
        const bool branch_taken_0x294598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294598u;
        // 0x29459c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294598) {
            ctx->pc = 0x2945B8u;
            goto label_2945b8;
        }
    }
    ctx->pc = 0x2945A0u;
label_2945a0:
    // 0x2945a0: 0xc0a5432  jal         func_2950C8
    ctx->pc = 0x2945A0u;
    SET_GPR_U32(ctx, 31, 0x2945A8u);
    ctx->pc = 0x2945A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945A0u;
    // 0x2945a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950C8u, 0x2945A0u, 0x2945A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945A8u;
label_2945a8:
    // 0x2945a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2945A8u;
    {
        const bool branch_taken_0x2945a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2945a8) {
            ctx->pc = 0x2945ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2945A8u;
            // 0x2945ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945B8u;
            goto label_2945b8;
        }
    }
    ctx->pc = 0x2945B0u;
    // 0x2945b0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2945b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2945b4:
    // 0x2945b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2945b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2945b8:
    // 0x2945b8: 0x1051002d  beq         $v0, $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2945B8u;
    {
        const bool branch_taken_0x2945b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945B8u;
        // 0x2945bc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945b8) {
            ctx->pc = 0x294670u;
            goto label_294670;
        }
    }
    ctx->pc = 0x2945C0u;
    // 0x2945c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2945C0u;
    {
        const bool branch_taken_0x2945c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2945C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C0u;
        // 0x2945c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945c0) {
            ctx->pc = 0x2945D8u;
            goto label_2945d8;
        }
    }
    ctx->pc = 0x2945C8u;
    // 0x2945c8: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2945C8u;
    SET_GPR_U32(ctx, 31, 0x2945D0u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2945C8u, 0x2945D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945D0u;
label_2945d0:
    // 0x2945d0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2945d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2945d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2945d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2945d8:
    // 0x2945d8: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2945D8u;
    {
        const bool branch_taken_0x2945d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2945DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945D8u;
        // 0x2945dc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945d8) {
            ctx->pc = 0x29466Cu;
            goto label_29466c;
        }
    }
    ctx->pc = 0x2945E0u;
    // 0x2945e0: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2945e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2945e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2945e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2945e8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2945e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2945ec: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2945ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2945f0: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x2945f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2945f4: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x2945f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2945f8: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x2945f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2945fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2945fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294600: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x294600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x294604: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x294604u;
    SET_GPR_U32(ctx, 31, 0x29460Cu);
    ctx->pc = 0x294608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294604u;
    // 0x294608: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x294604u, 0x29460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29460Cu;
label_29460c:
    // 0x29460c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x29460Cu;
    {
        const bool branch_taken_0x29460c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x294610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29460Cu;
        // 0x294610: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29460c) {
            ctx->pc = 0x294624u;
            goto label_294624;
        }
    }
    ctx->pc = 0x294614u;
    // 0x294614: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x294618: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x294618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29461c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29461Cu;
    {
        const bool branch_taken_0x29461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29461Cu;
        // 0x294620: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29461c) {
            ctx->pc = 0x294630u;
            goto label_294630;
        }
    }
    ctx->pc = 0x294624u;
label_294624:
    // 0x294624: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x294628: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29462c: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x29462cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_294630:
    // 0x294630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294634: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x294634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x294638: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29463c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x29463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x294640: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x294640u;
    SET_GPR_U32(ctx, 31, 0x294648u);
    ctx->pc = 0x294644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294640u;
    // 0x294644: 0x54380a  movz        $a3, $v0, $s4 (Delay Slot)
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x294640u, 0x294648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294648u;
label_294648:
    // 0x294648: 0x8e620bcc  lw          $v0, 0xBCC($s3)
    ctx->pc = 0x294648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3020)));
    // 0x29464c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x29464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x294650: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x294650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294654: 0xe4800234  swc1        $f0, 0x234($a0)
    ctx->pc = 0x294654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    // 0x294658: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x294658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29465c: 0xe4810238  swc1        $f1, 0x238($a0)
    ctx->pc = 0x29465cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x294660: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x294660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294664u;
    {
        const bool branch_taken_0x294664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294664u;
        // 0x294668: 0xe480023c  swc1        $f0, 0x23C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294664) {
            ctx->pc = 0x294670u;
            goto label_294670;
        }
    }
    ctx->pc = 0x29466Cu;
label_29466c:
    // 0x29466c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_294670:
    // 0x294670: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x294670u;
    {
        const bool branch_taken_0x294670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294670u;
        // 0x294674: 0x8f829cb0  lw          $v0, -0x6350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294670) {
            ctx->pc = 0x2946A0u;
            goto label_2946a0;
        }
    }
    ctx->pc = 0x294678u;
    // 0x294678: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x294678u;
    {
        const bool branch_taken_0x294678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294678) {
            ctx->pc = 0x29467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294678u;
            // 0x29467c: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294690u;
            goto label_294690;
        }
    }
    ctx->pc = 0x294680u;
    // 0x294680: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x294684: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x294684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x294688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x294688u;
    {
        const bool branch_taken_0x294688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294688u;
        // 0x29468c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294688) {
            ctx->pc = 0x2946A0u;
            goto label_2946a0;
        }
    }
    ctx->pc = 0x294690u;
label_294690:
    // 0x294690: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x294694: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x294694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x294698: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x294698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29469c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x29469cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_2946a0:
    // 0x2946a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2946a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2946a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2946a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2946a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2946a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2946ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2946acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2946b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2946b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2946b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2946b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2946B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946B8u;
        // 0x2946bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946C0u;
}
