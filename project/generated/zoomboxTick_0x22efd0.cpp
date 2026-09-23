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

// Function: zoomboxTick
// Address: 0x22efd0 - 0x22f0a0
void zoomboxTick_0x22efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomboxTick_0x22efd0");
#endif

    ctx->pc = 0x22efd0u;

    // 0x22efd0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22efd4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22efd8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x22efd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22efdc: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x22efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x22efe0: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x22efe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22efe4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x22efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22efe8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x22efec: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22eff0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x22eff4: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x22eff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22eff8: 0x8d0b0024  lw          $t3, 0x24($t0)
    ctx->pc = 0x22eff8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x22effc: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x22effcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22f000: 0x657c3  sra         $t2, $a2, 31
    ctx->pc = 0x22f000u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 31));
    // 0x22f004: 0x74fc3  sra         $t1, $a3, 31
    ctx->pc = 0x22f004u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 31));
    // 0x22f008: 0xca1023  subu        $v0, $a2, $t2
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x22f00c: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x22f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x22f010: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22f014: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22f014u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22f018: 0x826821  addu        $t5, $a0, $v0
    ctx->pc = 0x22f018u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f01c: 0x11600011  beqz        $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x22F01Cu;
    {
        const bool branch_taken_0x22f01c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F01Cu;
        // 0x22f020: 0xa36021  addu        $t4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f01c) {
            ctx->pc = 0x22F064u;
            goto label_22f064;
        }
    }
    ctx->pc = 0x22F024u;
    // 0x22f024: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f028: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f02c: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x22f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x22f030: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22F030u;
    {
        const bool branch_taken_0x22f030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f030) {
            ctx->pc = 0x22F034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F030u;
            // 0x22f034: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F038u;
            goto label_22f038;
        }
    }
    ctx->pc = 0x22F038u;
label_22f038:
    // 0x22f038: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x22f038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22f03c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f040: 0x70c21018  mult1       $v0, $a2, $v0
    ctx->pc = 0x22f040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22f044: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x22f044u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22f048: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x22f048u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x22f04c: 0x2012  mflo        $a0
    ctx->pc = 0x22f04cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x22f050: 0x70001012  mflo1       $v0
    ctx->pc = 0x22f050u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x22f054: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f058: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22f058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f05c: 0x74fc3  sra         $t1, $a3, 31
    ctx->pc = 0x22f05cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 31));
    // 0x22f060: 0x657c3  sra         $t2, $a2, 31
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 31));
label_22f064:
    // 0x22f064: 0xca1023  subu        $v0, $a2, $t2
    ctx->pc = 0x22f064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x22f068: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x22f06c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22f070: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22f070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22f074: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x22f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x22f078: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x22f07c: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x22f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x22f080: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x22f080u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x22f084: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x22f084u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x22f088: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F088u;
    {
        const bool branch_taken_0x22f088 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F088u;
        // 0x22f08c: 0xad070020  sw          $a3, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f088) {
            ctx->pc = 0x22F098u;
            goto label_22f098;
        }
    }
    ctx->pc = 0x22F090u;
    // 0x22f090: 0x2562ffff  addiu       $v0, $t3, -0x1
    ctx->pc = 0x22f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x22f094: 0xad020024  sw          $v0, 0x24($t0)
    ctx->pc = 0x22f094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 2));
label_22f098:
    // 0x22f098: 0x3e00008  jr          $ra
    ctx->pc = 0x22F098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F0A0u;
}
