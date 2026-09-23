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

// Function: PutControllerInBuff
// Address: 0x2041d0 - 0x2042b0
void PutControllerInBuff_0x2041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutControllerInBuff_0x2041d0");
#endif

    switch (ctx->pc) {
        case 0x2041ecu: goto label_2041ec;
        case 0x204200u: goto label_204200;
        case 0x20423cu: goto label_20423c;
        case 0x204248u: goto label_204248;
        case 0x204254u: goto label_204254;
        case 0x204260u: goto label_204260;
        case 0x20426cu: goto label_20426c;
        case 0x204278u: goto label_204278;
        case 0x204284u: goto label_204284;
        case 0x204290u: goto label_204290;
        case 0x20429cu: goto label_20429c;
        default: break;
    }

    ctx->pc = 0x2041d0u;

    // 0x2041d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2041d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2041d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2041d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2041d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2041dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2041dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2041e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2041e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2041e4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2041E4u;
    SET_GPR_U32(ctx, 31, 0x2041ECu);
    ctx->pc = 0x2041E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041E4u;
    // 0x2041e8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2041E4u, 0x2041ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041ECu;
label_2041ec:
    // 0x2041ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2041ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2041f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2041F0u;
    {
        const bool branch_taken_0x2041f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2041F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041F0u;
        // 0x2041f4: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041f0) {
            ctx->pc = 0x20420Cu;
            goto label_20420c;
        }
    }
    ctx->pc = 0x2041F8u;
    // 0x2041f8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2041F8u;
    SET_GPR_U32(ctx, 31, 0x204200u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2041F8u, 0x204200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204200u;
label_204200:
    // 0x204200: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x204200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x204204: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x204208: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x204208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_20420c:
    // 0x20420c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x204210: 0x2442df68  addiu       $v0, $v0, -0x2098
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
    // 0x204214: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x204218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x204218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20421c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x204220: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204224: 0x24a5c740  addiu       $a1, $a1, -0x38C0
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952768));
    // 0x204228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20422c: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x20422cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x204230: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x204230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x204234: 0xc081022  jal         func_204088
    ctx->pc = 0x204234u;
    SET_GPR_U32(ctx, 31, 0x20423Cu);
    ctx->pc = 0x204238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204234u;
    // 0x204238: 0x96050120  lhu         $a1, 0x120($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x204234u, 0x20423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20423Cu;
label_20423c:
    // 0x20423c: 0x96050154  lhu         $a1, 0x154($s0)
    ctx->pc = 0x20423cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x204240: 0xc081022  jal         func_204088
    ctx->pc = 0x204240u;
    SET_GPR_U32(ctx, 31, 0x204248u);
    ctx->pc = 0x204244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204240u;
    // 0x204244: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x204240u, 0x204248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x96050124  lhu         $a1, 0x124($s0)
    ctx->pc = 0x204248u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x20424c: 0xc081022  jal         func_204088
    ctx->pc = 0x20424Cu;
    SET_GPR_U32(ctx, 31, 0x204254u);
    ctx->pc = 0x204250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20424Cu;
    // 0x204250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x20424Cu, 0x204254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204254u;
label_204254:
    // 0x204254: 0x96050128  lhu         $a1, 0x128($s0)
    ctx->pc = 0x204254u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x204258: 0xc081022  jal         func_204088
    ctx->pc = 0x204258u;
    SET_GPR_U32(ctx, 31, 0x204260u);
    ctx->pc = 0x20425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204258u;
    // 0x20425c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x204258u, 0x204260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204260u;
label_204260:
    // 0x204260: 0x9205012c  lbu         $a1, 0x12C($s0)
    ctx->pc = 0x204260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x204264: 0xc081018  jal         func_204060
    ctx->pc = 0x204264u;
    SET_GPR_U32(ctx, 31, 0x20426Cu);
    ctx->pc = 0x204268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204264u;
    // 0x204268: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204060u, 0x204264u, 0x20426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20426Cu;
label_20426c:
    // 0x20426c: 0x92050130  lbu         $a1, 0x130($s0)
    ctx->pc = 0x20426cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x204270: 0xc081018  jal         func_204060
    ctx->pc = 0x204270u;
    SET_GPR_U32(ctx, 31, 0x204278u);
    ctx->pc = 0x204274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204270u;
    // 0x204274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204060u, 0x204270u, 0x204278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204278u;
label_204278:
    // 0x204278: 0x92050134  lbu         $a1, 0x134($s0)
    ctx->pc = 0x204278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x20427c: 0xc081018  jal         func_204060
    ctx->pc = 0x20427Cu;
    SET_GPR_U32(ctx, 31, 0x204284u);
    ctx->pc = 0x204280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20427Cu;
    // 0x204280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204060u, 0x20427Cu, 0x204284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204284u;
label_204284:
    // 0x204284: 0x92050138  lbu         $a1, 0x138($s0)
    ctx->pc = 0x204284u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x204288: 0xc081018  jal         func_204060
    ctx->pc = 0x204288u;
    SET_GPR_U32(ctx, 31, 0x204290u);
    ctx->pc = 0x20428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204288u;
    // 0x20428c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204060u, 0x204288u, 0x204290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204290u;
label_204290:
    // 0x204290: 0xc60c013c  lwc1        $f12, 0x13C($s0)
    ctx->pc = 0x204290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x204294: 0xc08103a  jal         func_2040E8
    ctx->pc = 0x204294u;
    SET_GPR_U32(ctx, 31, 0x20429Cu);
    ctx->pc = 0x204298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204294u;
    // 0x204298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040E8u, 0x204294u, 0x20429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20429Cu;
label_20429c:
    // 0x20429c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20429cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2042a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2042a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2042a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2042a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2042A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A8u;
        // 0x2042ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2042B0u;
}
