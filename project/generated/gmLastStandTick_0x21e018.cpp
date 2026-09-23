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

// Function: gmLastStandTick
// Address: 0x21e018 - 0x21e320
void gmLastStandTick_0x21e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmLastStandTick_0x21e018");
#endif

    switch (ctx->pc) {
        case 0x21e04cu: goto label_21e04c;
        case 0x21e054u: goto label_21e054;
        case 0x21e088u: goto label_21e088;
        case 0x21e0fcu: goto label_21e0fc;
        case 0x21e168u: goto label_21e168;
        case 0x21e1c4u: goto label_21e1c4;
        case 0x21e244u: goto label_21e244;
        case 0x21e264u: goto label_21e264;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2c4u: goto label_21e2c4;
        case 0x21e2e0u: goto label_21e2e0;
        default: break;
    }

    ctx->pc = 0x21e018u;

    // 0x21e018: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21e01c: 0x8f849f70  lw          $a0, -0x6090($gp)
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21e020: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21e024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e028: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21e028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21e02c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21e02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e030: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x21e030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x21e034: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21e038: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21e03c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21e040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21e044: 0xc0877d6  jal         func_21DF58
    ctx->pc = 0x21E044u;
    SET_GPR_U32(ctx, 31, 0x21E04Cu);
    ctx->pc = 0x21E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E044u;
    // 0x21e048: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DF58u, 0x21E044u, 0x21E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E04Cu;
label_21e04c:
    // 0x21e04c: 0xc0b1fb4  jal         func_2C7ED0
    ctx->pc = 0x21E04Cu;
    SET_GPR_U32(ctx, 31, 0x21E054u);
    ctx->pc = 0x21E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E04Cu;
    // 0x21e050: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED0u, 0x21E04Cu, 0x21E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E054u;
label_21e054:
    // 0x21e054: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x21E054u;
    {
        const bool branch_taken_0x21e054 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E054u;
        // 0x21e058: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e054) {
            ctx->pc = 0x21E0F4u;
            goto label_21e0f4;
        }
    }
    ctx->pc = 0x21E05Cu;
    // 0x21e05c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e060: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E060u;
    {
        const bool branch_taken_0x21e060 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E060u;
        // 0x21e064: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e060) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E068u;
    // 0x21e068: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x21e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21e06c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e070: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x21e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x21e074: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21E074u;
    {
        const bool branch_taken_0x21e074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E074u;
        // 0x21e078: 0x24830128  addiu       $v1, $a0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e074) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E07Cu;
    // 0x21e07c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e080: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e084: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21e084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21e088:
    // 0x21e088: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21e088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e08c: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x21e08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21e090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E090u;
    {
        const bool branch_taken_0x21e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E090u;
        // 0x21e094: 0x2463071c  addiu       $v1, $v1, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e090) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E098u;
    // 0x21e098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e09c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E09Cu;
    {
        const bool branch_taken_0x21e09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x21e09c) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E0A4u;
    // 0x21e0a4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x21E0A4u;
    {
        const bool branch_taken_0x21e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A4u;
        // 0x21e0a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0a4) {
            ctx->pc = 0x21E088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e088;
        }
    }
    ctx->pc = 0x21E0ACu;
label_21e0ac:
    // 0x21e0ac: 0x16070026  bne         $s0, $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x21E0ACu;
    {
        const bool branch_taken_0x21e0ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x21E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0ACu;
        // 0x21e0b0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0ac) {
            ctx->pc = 0x21E148u;
            goto label_21e148;
        }
    }
    ctx->pc = 0x21E0B4u;
    // 0x21e0b4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x21e0b8: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21e0bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21e0c0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x21e0c4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21e0c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e0c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21e0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21e0cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21e0ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e0d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21e0d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e0d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21e0d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e0d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21e0d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e0dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21e0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e0e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21e0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e0e8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x21e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x21e0ec: 0x80874d2  j           func_21D348
    ctx->pc = 0x21E0ECu;
    ctx->pc = 0x21E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0ECu;
    // 0x21e0f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21E0F4u;
label_21e0f4:
    // 0x21e0f4: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x21E0F4u;
    SET_GPR_U32(ctx, 31, 0x21E0FCu);
    ctx->pc = 0x21DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DF90u, 0x21E0F4u, 0x21E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0FCu;
label_21e0fc:
    // 0x21e0fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E0FCu;
    {
        const bool branch_taken_0x21e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0FCu;
        // 0x21e100: 0x8f859f74  lw          $a1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0fc) {
            ctx->pc = 0x21E148u;
            goto label_21e148;
        }
    }
    ctx->pc = 0x21E104u;
    // 0x21e104: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21e108: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x21e108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x21e10c: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21e110: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21e114: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21e114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21e118: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21e118u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e11c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21e11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21e120: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21e120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e124: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21e124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e128: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21e128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e12c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21e12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e130: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21e130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e134: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21e134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e13c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x21e13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32C4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32C4F8u, _value); } while (0);
    // 0x21e140: 0x80874d2  j           func_21D348
    ctx->pc = 0x21E140u;
    ctx->pc = 0x21E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E140u;
    // 0x21e144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21E148u;
label_21e148:
    // 0x21e148: 0x18a0006a  blez        $a1, . + 4 + (0x6A << 2)
    ctx->pc = 0x21E148u;
    {
        const bool branch_taken_0x21e148 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E148u;
        // 0x21e14c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e148) {
            ctx->pc = 0x21E2F4u;
            goto label_21e2f4;
        }
    }
    ctx->pc = 0x21E150u;
    // 0x21e150: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21e154: 0x2415003c  addiu       $s5, $zero, 0x3C
    ctx->pc = 0x21e154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21e158: 0x24562c18  addiu       $s6, $v0, 0x2C18
    ctx->pc = 0x21e158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21e15c: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x21e15cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x21e160: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x21e164: 0x0  nop
    ctx->pc = 0x21e164u;
    // NOP
label_21e168:
    // 0x21e168: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x21e168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21e16c: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x21e16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x21e170: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x21e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e174: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x21e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e178: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x21e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x21e17c: 0x8c510180  lw          $s1, 0x180($v0)
    ctx->pc = 0x21e17cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x21e180: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x21e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e184: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x21e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e188: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21e188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21e18c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x21e18cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21e190: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21e190u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21e194: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x21e194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x21e198: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21e198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21e19c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x21e19cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21e1a0: 0x0  nop
    ctx->pc = 0x21e1a0u;
    // NOP
    // 0x21e1a4: 0x0  nop
    ctx->pc = 0x21e1a4u;
    // NOP
    // 0x21e1a8: 0x460c0084  c1          0xC0084
    ctx->pc = 0x21e1a8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x21e1ac: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x21e1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e1b0: 0x0  nop
    ctx->pc = 0x21e1b0u;
    // NOP
    // 0x21e1b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21E1B4u;
    {
        const bool branch_taken_0x21e1b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1B4u;
        // 0x21e1b8: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1b4) {
            ctx->pc = 0x21E1D0u;
            goto label_21e1d0;
        }
    }
    ctx->pc = 0x21E1BCu;
    // 0x21e1bc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x21E1BCu;
    SET_GPR_U32(ctx, 31, 0x21E1C4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x21E1BCu, 0x21E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1C4u;
label_21e1c4:
    // 0x21e1c4: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x21e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21e1c8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21e1c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21e1cc: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x21e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_21e1d0:
    // 0x21e1d0: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x21e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x21e1d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e1d8: 0x50640042  beql        $v1, $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x21E1D8u;
    {
        const bool branch_taken_0x21e1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21e1d8) {
            ctx->pc = 0x21E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E1D8u;
            // 0x21e1dc: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E2E4u;
            goto label_21e2e4;
        }
    }
    ctx->pc = 0x21E1E0u;
    // 0x21e1e0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x21e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21e1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e1e8: 0x0  nop
    ctx->pc = 0x21e1e8u;
    // NOP
    // 0x21e1ec: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
    ctx->pc = 0x21E1ECu;
    {
        const bool branch_taken_0x21e1ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e1ec) {
            ctx->pc = 0x21E1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E1ECu;
            // 0x21e1f0: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E2CCu;
            goto label_21e2cc;
        }
    }
    ctx->pc = 0x21E1F4u;
    // 0x21e1f4: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x21e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x21e1f8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21E1F8u;
    {
        const bool branch_taken_0x21e1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1F8u;
        // 0x21e1fc: 0x8f829da8  lw          $v0, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1f8) {
            ctx->pc = 0x21E230u;
            goto label_21e230;
        }
    }
    ctx->pc = 0x21E200u;
    // 0x21e200: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x21e200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x21e204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e208: 0xc7829da8  lwc1        $f2, -0x6258($gp)
    ctx->pc = 0x21e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e20c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21e20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21e210: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x21e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e218: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x21e218u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21e21c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21e21cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21e220: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21e220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21e224: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x21e224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x21e228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21e228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e22c: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x21e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
label_21e230:
    // 0x21e230: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e234: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21E234u;
    {
        const bool branch_taken_0x21e234 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21e234) {
            ctx->pc = 0x21E238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E234u;
            // 0x21e238: 0x55001a  div         $zero, $v0, $s5 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E26Cu;
            goto label_21e26c;
        }
    }
    ctx->pc = 0x21E23Cu;
    // 0x21e23c: 0xc09ca34  jal         func_2728D0
    ctx->pc = 0x21E23Cu;
    SET_GPR_U32(ctx, 31, 0x21E244u);
    ctx->pc = 0x21E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E23Cu;
    // 0x21e240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728D0u, 0x21E23Cu, 0x21E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E244u;
label_21e244:
    // 0x21e244: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21e248: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x21e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x21e24c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e250: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x21e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21e254: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x21e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x21e258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e25c: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x21E25Cu;
    SET_GPR_U32(ctx, 31, 0x21E264u);
    ctx->pc = 0x21E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E25Cu;
    // 0x21e260: 0x8c650b24  lw          $a1, 0xB24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x21E25Cu, 0x21E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E264u;
label_21e264:
    // 0x21e264: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21E264u;
    {
        const bool branch_taken_0x21e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E264u;
        // 0x21e268: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e264) {
            ctx->pc = 0x21E2E4u;
            goto label_21e2e4;
        }
    }
    ctx->pc = 0x21E26Cu;
label_21e26c:
    // 0x21e26c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E26Cu;
    {
        const bool branch_taken_0x21e26c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e26c) {
            ctx->pc = 0x21E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E26Cu;
            // 0x21e270: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E274u;
            goto label_21e274;
        }
    }
    ctx->pc = 0x21E274u;
label_21e274:
    // 0x21e274: 0x3012  mflo        $a2
    ctx->pc = 0x21e274u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x21e278: 0x1010  mfhi        $v0
    ctx->pc = 0x21e278u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21e27c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21E27Cu;
    {
        const bool branch_taken_0x21e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E27Cu;
        // 0x21e280: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e27c) {
            ctx->pc = 0x21E2E4u;
            goto label_21e2e4;
        }
    }
    ctx->pc = 0x21E284u;
    // 0x21e284: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E284u;
    {
        const bool branch_taken_0x21e284 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e284) {
            ctx->pc = 0x21E288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E284u;
            // 0x21e288: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E28Cu;
            goto label_21e28c;
        }
    }
    ctx->pc = 0x21E28Cu;
label_21e28c:
    // 0x21e28c: 0x26e40878  addiu       $a0, $s7, 0x878
    ctx->pc = 0x21e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2168));
    // 0x21e290: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21e294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e298: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x21e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21e29c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e2a0: 0x8c670b2c  lw          $a3, 0xB2C($v1)
    ctx->pc = 0x21e2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2860)));
    // 0x21e2a4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21E2A4u;
    SET_GPR_U32(ctx, 31, 0x21E2ACu);
    ctx->pc = 0x21E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2A4u;
    // 0x21e2a8: 0x8c650b28  lw          $a1, 0xB28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21E2A4u, 0x21E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2ACu;
label_21e2ac:
    // 0x21e2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2b0: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21E2B0u;
    SET_GPR_U32(ctx, 31, 0x21E2B8u);
    ctx->pc = 0x21E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2B0u;
    // 0x21e2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21E2B0u, 0x21E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2B8u;
label_21e2b8:
    // 0x21e2b8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21e2bc: 0xc081546  jal         func_205518
    ctx->pc = 0x21E2BCu;
    SET_GPR_U32(ctx, 31, 0x21E2C4u);
    ctx->pc = 0x21E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2BCu;
    // 0x21e2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x21E2BCu, 0x21E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2C4u;
label_21e2c4:
    // 0x21e2c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E2C4u;
    {
        const bool branch_taken_0x21e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2C4u;
        // 0x21e2c8: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2c4) {
            ctx->pc = 0x21E2E4u;
            goto label_21e2e4;
        }
    }
    ctx->pc = 0x21E2CCu;
label_21e2cc:
    // 0x21e2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E2CCu;
    {
        const bool branch_taken_0x21e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2CCu;
        // 0x21e2d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2cc) {
            ctx->pc = 0x21E2E0u;
            goto label_21e2e0;
        }
    }
    ctx->pc = 0x21E2D4u;
    // 0x21e2d4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x21e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x21e2d8: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x21E2D8u;
    SET_GPR_U32(ctx, 31, 0x21E2E0u);
    ctx->pc = 0x21E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2D8u;
    // 0x21e2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x21E2D8u, 0x21E2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2E0u;
label_21e2e0:
    // 0x21e2e0: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x21e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_21e2e4:
    // 0x21e2e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21e2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e2e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21e2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e2ec: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x21E2ECu;
    {
        const bool branch_taken_0x21e2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2ECu;
        // 0x21e2f0: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2ec) {
            ctx->pc = 0x21E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e168;
        }
    }
    ctx->pc = 0x21E2F4u;
label_21e2f4:
    // 0x21e2f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21e2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21e2f8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21e2f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e2fc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21e2fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e300: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21e300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21e304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21e308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e30c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21e30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21e310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e318: 0x3e00008  jr          $ra
    ctx->pc = 0x21E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E318u;
        // 0x21e31c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E320u;
}
