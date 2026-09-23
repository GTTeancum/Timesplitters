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

// Function: fxSelectCharRight
// Address: 0x238388 - 0x238490
void fxSelectCharRight_0x238388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharRight_0x238388");
#endif

    switch (ctx->pc) {
        case 0x2383b0u: goto label_2383b0;
        case 0x238418u: goto label_238418;
        case 0x238440u: goto label_238440;
        case 0x238454u: goto label_238454;
        default: break;
    }

    ctx->pc = 0x238388u;

    // 0x238388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23838c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x238390: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238398: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23839c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23839cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2383a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2383a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2383a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2383a8: 0xc08828c  jal         func_220A30
    ctx->pc = 0x2383A8u;
    SET_GPR_U32(ctx, 31, 0x2383B0u);
    ctx->pc = 0x2383ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A8u;
    // 0x2383ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x2383A8u, 0x2383B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383B0u;
label_2383b0:
    // 0x2383b0: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x2383b4: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x2383b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2383b8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2383b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2383bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2383bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2383c0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383C0u;
        // 0x2383c4: 0x24710020  addiu       $s1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x2383F8u;
            goto label_2383f8;
        }
    }
    ctx->pc = 0x2383C8u;
    // 0x2383c8: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2383cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2383ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2383d0: 0x8c821218  lw          $v0, 0x1218($a0)
    ctx->pc = 0x2383d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC1218u));
    // 0x2383d4: 0x2463c338  addiu       $v1, $v1, -0x3CC8
    ctx->pc = 0x2383d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951736));
    // 0x2383d8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2383dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2383dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2383e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2383e4: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2383e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2383e8: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2383E8u;
    {
        const bool branch_taken_0x2383e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2383e8) {
            ctx->pc = 0x2383ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2383E8u;
            // 0x2383ec: 0x94430006  lhu         $v1, 0x6($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2383F0u;
            goto label_2383f0;
        }
    }
    ctx->pc = 0x2383F0u;
label_2383f0:
    // 0x2383f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2383F0u;
    {
        const bool branch_taken_0x2383f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383F0u;
        // 0x2383f4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383f0) {
            ctx->pc = 0x238474u;
            goto label_238474;
        }
    }
    ctx->pc = 0x2383F8u;
label_2383f8:
    // 0x2383f8: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x2383f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x2383fc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x238400: 0x926236b0  lbu         $v0, 0x36B0($s3)
    ctx->pc = 0x238400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3536B0u));
    // 0x238404: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x238404u;
    {
        const bool branch_taken_0x238404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x238408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238404u;
        // 0x238408: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238404) {
            ctx->pc = 0x238430u;
            goto label_238430;
        }
    }
    ctx->pc = 0x23840Cu;
    // 0x23840c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238410: 0x266536b0  addiu       $a1, $s3, 0x36B0
    ctx->pc = 0x238410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14000));
    // 0x238414: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_238418:
    // 0x238418: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x238418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x23841c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23841Cu;
    {
        const bool branch_taken_0x23841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23841Cu;
        // 0x238420: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23841c) {
            ctx->pc = 0x238430u;
            goto label_238430;
        }
    }
    ctx->pc = 0x238424u;
    // 0x238424: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x238424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238428: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x238428u;
    {
        const bool branch_taken_0x238428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x238428) {
            ctx->pc = 0x23842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238428u;
            // 0x23842c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238418;
        }
    }
    ctx->pc = 0x238430u;
label_238430:
    // 0x238430: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x238430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x238434: 0x245236b0  addiu       $s2, $v0, 0x36B0
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x238438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23843c: 0x0  nop
    ctx->pc = 0x23843cu;
    // NOP
label_238440:
    // 0x238440: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x238440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x238444: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x238444u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x238448: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x238448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x23844c: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x23844Cu;
    SET_GPR_U32(ctx, 31, 0x238454u);
    ctx->pc = 0x238450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23844Cu;
    // 0x238450: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x23844Cu, 0x238454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238454u;
label_238454:
    // 0x238454: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x238454u;
    {
        const bool branch_taken_0x238454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238454) {
            ctx->pc = 0x238458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238454u;
            // 0x238458: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238440;
        }
    }
    ctx->pc = 0x23845Cu;
    // 0x23845c: 0x266236b0  addiu       $v0, $s3, 0x36B0
    ctx->pc = 0x23845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 14000));
    // 0x238460: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x238460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x238464: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x238464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238468: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x238468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23846c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23846Cu;
    {
        const bool branch_taken_0x23846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23846c) {
            ctx->pc = 0x238470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23846Cu;
            // 0x238470: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238474u;
            goto label_238474;
        }
    }
    ctx->pc = 0x238474u;
label_238474:
    // 0x238474: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238478: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x238478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23847c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23847cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238480: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238488: 0x3e00008  jr          $ra
    ctx->pc = 0x238488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238490u;
}
