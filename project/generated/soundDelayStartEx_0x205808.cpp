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

// Function: soundDelayStartEx
// Address: 0x205808 - 0x2058c4
void soundDelayStartEx_0x205808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundDelayStartEx_0x205808");
#endif

    switch (ctx->pc) {
        case 0x205834u: goto label_205834;
        default: break;
    }

    ctx->pc = 0x205808u;

    // 0x205808: 0x3c0a01fb  lui         $t2, 0x1FB
    ctx->pc = 0x205808u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)507 << 16));
    // 0x20580c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x20580cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205810: 0x8d421870  lw          $v0, 0x1870($t2)
    ctx->pc = 0x205810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB1870u));
    // 0x205814: 0x25431870  addiu       $v1, $t2, 0x1870
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 6256));
    // 0x205818: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205818u;
    {
        const bool branch_taken_0x205818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205818u;
        // 0x20581c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205818) {
            ctx->pc = 0x205830u;
            goto label_205830;
        }
    }
    ctx->pc = 0x205820u;
    // 0x205820: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x205820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x205824: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205824u;
    {
        const bool branch_taken_0x205824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205824u;
        // 0x205828: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205824) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x20582Cu;
    // 0x20582c: 0x0  nop
    ctx->pc = 0x20582cu;
    // NOP
label_205830:
    // 0x205830: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_205834:
    // 0x205834: 0x2928000a  slti        $t0, $t1, 0xA
    ctx->pc = 0x205834u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x205838: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x205838u;
    {
        const bool branch_taken_0x205838 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205838u;
        // 0x20583c: 0x25421870  addiu       $v0, $t2, 0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 6256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205838) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205840u;
    // 0x205840: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x205840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x205844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205848: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20584c: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20584Cu;
    {
        const bool branch_taken_0x20584c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20584c) {
            ctx->pc = 0x205850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20584Cu;
            // 0x205850: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205834;
        }
    }
    ctx->pc = 0x205854u;
    // 0x205854: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x205854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x205858: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x205858u;
    {
        const bool branch_taken_0x205858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205858) {
            ctx->pc = 0x20585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205858u;
            // 0x20585c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205834;
        }
    }
    ctx->pc = 0x205860u;
label_205860:
    // 0x205860: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x205860u;
    {
        const bool branch_taken_0x205860 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x205864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205860u;
        // 0x205864: 0x25421870  addiu       $v0, $t2, 0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 6256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205860) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205868u;
    // 0x205868: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x20586c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205878: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x205878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x20587c: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x20587cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x205880: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x205880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x205884: 0xa467000a  sh          $a3, 0xA($v1)
    ctx->pc = 0x205884u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x205888: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x205888u;
    {
        const bool branch_taken_0x205888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205888u;
        // 0x20588c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205888) {
            ctx->pc = 0x2058B0u;
            goto label_2058b0;
        }
    }
    ctx->pc = 0x205890u;
    // 0x205890: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x205890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205894: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x205894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x205898: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x205898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20589c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2058a0: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x2058a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2058a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2058a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2058a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2058A8u;
    {
        const bool branch_taken_0x2058a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A8u;
        // 0x2058ac: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058a8) {
            ctx->pc = 0x2058B4u;
            goto label_2058b4;
        }
    }
    ctx->pc = 0x2058B0u;
label_2058b0:
    // 0x2058b0: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x2058b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_2058b4:
    // 0x2058b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2058B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B4u;
        // 0x2058b8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058BCu;
label_2058bc:
    // 0x2058bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2058BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058BCu;
        // 0x2058c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058C4u;
}
