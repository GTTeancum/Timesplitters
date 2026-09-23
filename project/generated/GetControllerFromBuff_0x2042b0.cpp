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

// Function: GetControllerFromBuff
// Address: 0x2042b0 - 0x204390
void GetControllerFromBuff_0x2042b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetControllerFromBuff_0x2042b0");
#endif

    switch (ctx->pc) {
        case 0x2042ccu: goto label_2042cc;
        case 0x2042e0u: goto label_2042e0;
        case 0x204304u: goto label_204304;
        case 0x204324u: goto label_204324;
        case 0x204330u: goto label_204330;
        case 0x20433cu: goto label_20433c;
        case 0x204348u: goto label_204348;
        case 0x204354u: goto label_204354;
        case 0x204360u: goto label_204360;
        case 0x20436cu: goto label_20436c;
        case 0x204378u: goto label_204378;
        default: break;
    }

    ctx->pc = 0x2042b0u;

    // 0x2042b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2042b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2042b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2042b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2042b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2042bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2042c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2042c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2042c4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2042C4u;
    SET_GPR_U32(ctx, 31, 0x2042CCu);
    ctx->pc = 0x2042C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042C4u;
    // 0x2042c8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2042C4u, 0x2042CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042CCu;
label_2042cc:
    // 0x2042cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2042ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2042d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2042D0u;
    {
        const bool branch_taken_0x2042d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042D0u;
        // 0x2042d4: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042d0) {
            ctx->pc = 0x2042ECu;
            goto label_2042ec;
        }
    }
    ctx->pc = 0x2042D8u;
    // 0x2042d8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2042D8u;
    SET_GPR_U32(ctx, 31, 0x2042E0u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2042D8u, 0x2042E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042E0u;
label_2042e0:
    // 0x2042e0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2042e4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2042e8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2042e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_2042ec:
    // 0x2042ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2042f0: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x2042f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2042f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2042fc: 0xc081050  jal         func_204140
    ctx->pc = 0x2042FCu;
    SET_GPR_U32(ctx, 31, 0x204304u);
    ctx->pc = 0x204300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042FCu;
    // 0x204300: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x2042FCu, 0x204304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204304u;
label_204304:
    // 0x204304: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x204308: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x20430c: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x20430cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x204310: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x204314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204318: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x204318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20431c: 0xc081050  jal         func_204140
    ctx->pc = 0x20431Cu;
    SET_GPR_U32(ctx, 31, 0x204324u);
    ctx->pc = 0x204320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20431Cu;
    // 0x204320: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x20431Cu, 0x204324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204324u;
label_204324:
    // 0x204324: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x204324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x204328: 0xc081050  jal         func_204140
    ctx->pc = 0x204328u;
    SET_GPR_U32(ctx, 31, 0x204330u);
    ctx->pc = 0x20432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204328u;
    // 0x20432c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x204328u, 0x204330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204330u;
label_204330:
    // 0x204330: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x204330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x204334: 0xc081050  jal         func_204140
    ctx->pc = 0x204334u;
    SET_GPR_U32(ctx, 31, 0x20433Cu);
    ctx->pc = 0x204338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204334u;
    // 0x204338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x204334u, 0x20433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20433Cu;
label_20433c:
    // 0x20433c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x20433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x204340: 0xc081046  jal         func_204118
    ctx->pc = 0x204340u;
    SET_GPR_U32(ctx, 31, 0x204348u);
    ctx->pc = 0x204344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204340u;
    // 0x204344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x204340u, 0x204348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204348u;
label_204348:
    // 0x204348: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x204348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x20434c: 0xc081046  jal         func_204118
    ctx->pc = 0x20434Cu;
    SET_GPR_U32(ctx, 31, 0x204354u);
    ctx->pc = 0x204350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20434Cu;
    // 0x204350: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x20434Cu, 0x204354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204354u;
label_204354:
    // 0x204354: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x204354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x204358: 0xc081046  jal         func_204118
    ctx->pc = 0x204358u;
    SET_GPR_U32(ctx, 31, 0x204360u);
    ctx->pc = 0x20435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204358u;
    // 0x20435c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x204358u, 0x204360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204360u;
label_204360:
    // 0x204360: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x204360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x204364: 0xc081046  jal         func_204118
    ctx->pc = 0x204364u;
    SET_GPR_U32(ctx, 31, 0x20436Cu);
    ctx->pc = 0x204368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204364u;
    // 0x204368: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x204364u, 0x20436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20436Cu;
label_20436c:
    // 0x20436c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x20436cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x204370: 0xc081068  jal         func_2041A0
    ctx->pc = 0x204370u;
    SET_GPR_U32(ctx, 31, 0x204378u);
    ctx->pc = 0x204374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204370u;
    // 0x204374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041A0u, 0x204370u, 0x204378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204378u;
label_204378:
    // 0x204378: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x204378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x20437c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204380: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x204380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x204384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204388: 0x3e00008  jr          $ra
    ctx->pc = 0x204388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204388u;
        // 0x20438c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204390u;
}
