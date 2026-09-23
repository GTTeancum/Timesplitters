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

// Function: enemyDefend
// Address: 0x2c0908 - 0x2c0adc
void enemyDefend_0x2c0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyDefend_0x2c0908");
#endif

    switch (ctx->pc) {
        case 0x2c0940u: goto label_2c0940;
        case 0x2c097cu: goto label_2c097c;
        case 0x2c09b8u: goto label_2c09b8;
        case 0x2c09f0u: goto label_2c09f0;
        case 0x2c0a08u: goto label_2c0a08;
        default: break;
    }

    ctx->pc = 0x2c0908u;

    // 0x2c0908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c090c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0910: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0914: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2c0914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c091c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c091cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0920: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0928: 0x8e500160  lw          $s0, 0x160($s2)
    ctx->pc = 0x2c0928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c092c: 0x8e1102ac  lw          $s1, 0x2AC($s0)
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c0930: 0x16330008  bne         $s1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0930u;
    {
        const bool branch_taken_0x2c0930 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0930u;
        // 0x2c0934: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0930) {
            ctx->pc = 0x2C0954u;
            goto label_2c0954;
        }
    }
    ctx->pc = 0x2C0938u;
    // 0x2c0938: 0xc0b02e4  jal         func_2C0B90
    ctx->pc = 0x2C0938u;
    SET_GPR_U32(ctx, 31, 0x2C0940u);
    ctx->pc = 0x2C0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0B90u, 0x2C0938u, 0x2C0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0940u;
label_2c0940:
    // 0x2c0940: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0940u;
    {
        const bool branch_taken_0x2c0940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0940u;
        // 0x2c0944: 0xae0202ac  sw          $v0, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0940) {
            ctx->pc = 0x2C0954u;
            goto label_2c0954;
        }
    }
    ctx->pc = 0x2C0948u;
    // 0x2c0948: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c0948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c094c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2C094Cu;
    {
        const bool branch_taken_0x2c094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C094Cu;
        // 0x2c0950: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c094c) {
            ctx->pc = 0x2C0AB4u;
            goto label_2c0ab4;
        }
    }
    ctx->pc = 0x2C0954u;
label_2c0954:
    // 0x2c0954: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0954u;
    {
        const bool branch_taken_0x2c0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0954u;
        // 0x2c0958: 0x8f83b4dc  lw          $v1, -0x4B24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0954) {
            ctx->pc = 0x2C0970u;
            goto label_2c0970;
        }
    }
    ctx->pc = 0x2C095Cu;
    // 0x2c095c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c0960: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0960u;
    {
        const bool branch_taken_0x2c0960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0960) {
            ctx->pc = 0x2C0964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0960u;
            // 0x2c0964: 0xae1102ac  sw          $s1, 0x2AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0974u;
            goto label_2c0974;
        }
    }
    ctx->pc = 0x2C0968u;
    // 0x2c0968: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c0968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c096c: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
label_2c0970:
    // 0x2c0970: 0xae1102ac  sw          $s1, 0x2AC($s0)
    ctx->pc = 0x2c0970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 17));
label_2c0974:
    // 0x2c0974: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C0974u;
    SET_GPR_U32(ctx, 31, 0x2C097Cu);
    ctx->pc = 0x2C0978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0974u;
    // 0x2c0978: 0x260402a8  addiu       $a0, $s0, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C0974u, 0x2C097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C097Cu;
label_2c097c:
    // 0x2c097c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c097cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0980: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c0984: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0984u;
    {
        const bool branch_taken_0x2c0984 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0984u;
        // 0x2c0988: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0984) {
            ctx->pc = 0x2C0998u;
            goto label_2c0998;
        }
    }
    ctx->pc = 0x2C098Cu;
    // 0x2c098c: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c0990: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2C0990u;
    {
        const bool branch_taken_0x2c0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0990u;
        // 0x2c0994: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0990) {
            ctx->pc = 0x2C0AB4u;
            goto label_2c0ab4;
        }
    }
    ctx->pc = 0x2C0998u;
label_2c0998:
    // 0x2c0998: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C0998u;
    {
        const bool branch_taken_0x2c0998 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0998u;
        // 0x2c099c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0998) {
            ctx->pc = 0x2C0A00u;
            goto label_2c0a00;
        }
    }
    ctx->pc = 0x2C09A0u;
    // 0x2c09a0: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x2c09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2c09a4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x2c09a8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C09A8u;
    {
        const bool branch_taken_0x2c09a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c09a8) {
            ctx->pc = 0x2C0A00u;
            goto label_2c0a00;
        }
    }
    ctx->pc = 0x2C09B0u;
    // 0x2c09b0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C09B0u;
    SET_GPR_U32(ctx, 31, 0x2C09B8u);
    ctx->pc = 0x2C09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C09B0u;
    // 0x2c09b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C09B0u, 0x2C09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C09B8u;
label_2c09b8:
    // 0x2c09b8: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c09bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C09BCu;
    {
        const bool branch_taken_0x2c09bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09bc) {
            ctx->pc = 0x2C09E8u;
            goto label_2c09e8;
        }
    }
    ctx->pc = 0x2C09C4u;
    // 0x2c09c4: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2c09c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C09C8u;
    {
        const bool branch_taken_0x2c09c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09C8u;
        // 0x2c09cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09c8) {
            ctx->pc = 0x2C09D8u;
            goto label_2c09d8;
        }
    }
    ctx->pc = 0x2C09D0u;
    // 0x2c09d0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2C09D0u;
    {
        const bool branch_taken_0x2c09d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09D0u;
        // 0x2c09d4: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09d0) {
            ctx->pc = 0x2C0AB4u;
            goto label_2c0ab4;
        }
    }
    ctx->pc = 0x2C09D8u;
label_2c09d8:
    // 0x2c09d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c09dc: 0x8f82b4dc  lw          $v0, -0x4B24($gp)
    ctx->pc = 0x2c09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948060)));
    // 0x2c09e0: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C09E0u;
    {
        const bool branch_taken_0x2c09e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09E0u;
        // 0x2c09e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09e0) {
            ctx->pc = 0x2C0AC4u;
            goto label_2c0ac4;
        }
    }
    ctx->pc = 0x2C09E8u;
label_2c09e8:
    // 0x2c09e8: 0xc0b02b8  jal         func_2C0AE0
    ctx->pc = 0x2C09E8u;
    SET_GPR_U32(ctx, 31, 0x2C09F0u);
    ctx->pc = 0x2C09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C09E8u;
    // 0x2c09ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0AE0u, 0x2C09E8u, 0x2C09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C09F0u;
label_2c09f0:
    // 0x2c09f0: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C09F0u;
    {
        const bool branch_taken_0x2c09f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c09f0) {
            ctx->pc = 0x2C09F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C09F0u;
            // 0x2c09f4: 0xae020ae4  sw          $v0, 0xAE4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0AC0u;
            goto label_2c0ac0;
        }
    }
    ctx->pc = 0x2C09F8u;
    // 0x2c09f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C09F8u;
    {
        const bool branch_taken_0x2c09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09F8u;
        // 0x2c09fc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09f8) {
            ctx->pc = 0x2C0AC4u;
            goto label_2c0ac4;
        }
    }
    ctx->pc = 0x2C0A00u;
label_2c0a00:
    // 0x2c0a00: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C0A00u;
    SET_GPR_U32(ctx, 31, 0x2C0A08u);
    ctx->pc = 0x2C0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A00u;
    // 0x2c0a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C0A00u, 0x2C0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A08u;
label_2c0a08:
    // 0x2c0a08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c0a0c: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0a10: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2c0a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0a14: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c0a18: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c0a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c0a1c: 0xc78690bc  lwc1        $f6, -0x6F44($gp)
    ctx->pc = 0x2c0a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c0a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0a24: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c0a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0a28: 0xe6040aec  swc1        $f4, 0xAEC($s0)
    ctx->pc = 0x2c0a28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c0a2c: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c0a30: 0xe6050af0  swc1        $f5, 0xAF0($s0)
    ctx->pc = 0x2c0a30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c0a34: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c0a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0a38: 0xe6030af4  swc1        $f3, 0xAF4($s0)
    ctx->pc = 0x2c0a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
    // 0x2c0a3c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c0a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0a40: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2c0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0a44: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c0a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c0a48: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c0a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0a4c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c0a4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c0a50: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c0a50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c0a54: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c0a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c0a58: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c0a58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c0a5c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c0a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c0a60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c0a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c0a64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0a68: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c0a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0a6c: 0x0  nop
    ctx->pc = 0x2c0a6cu;
    // NOP
    // 0x2c0a70: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0A70u;
    {
        const bool branch_taken_0x2c0a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0a70) {
            ctx->pc = 0x2C0A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A70u;
            // 0x2c0a74: 0xc6010b4c  lwc1        $f1, 0xB4C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A8Cu;
            goto label_2c0a8c;
        }
    }
    ctx->pc = 0x2C0A78u;
    // 0x2c0a78: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2c0a7c: 0xae1302a8  sw          $s3, 0x2A8($s0)
    ctx->pc = 0x2c0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 19));
    // 0x2c0a80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c0a84: 0xae020698  sw          $v0, 0x698($s0)
    ctx->pc = 0x2c0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
    // 0x2c0a88: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c0a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c0a8c:
    // 0x2c0a8c: 0xc78090c0  lwc1        $f0, -0x6F40($gp)
    ctx->pc = 0x2c0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0a90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0a94: 0x0  nop
    ctx->pc = 0x2c0a94u;
    // NOP
    // 0x2c0a98: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C0A98u;
    {
        const bool branch_taken_0x2c0a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A98u;
        // 0x2c0a9c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a98) {
            ctx->pc = 0x2C0AC4u;
            goto label_2c0ac4;
        }
    }
    ctx->pc = 0x2C0AA0u;
    // 0x2c0aa0: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c0aa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0aa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0AA8u;
    {
        const bool branch_taken_0x2c0aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AA8u;
        // 0x2c0aac: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0aa8) {
            ctx->pc = 0x2C0AC4u;
            goto label_2c0ac4;
        }
    }
    ctx->pc = 0x2C0AB0u;
    // 0x2c0ab0: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c0ab4:
    // 0x2c0ab4: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c0ab8: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c0abc: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c0ac0:
    // 0x2c0ac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c0ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c0ac4:
    // 0x2c0ac4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c0ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0ac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0acc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c0accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD4u;
        // 0x2c0ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0ADCu;
}
