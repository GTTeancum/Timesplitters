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

// Function: soundStartLoopRange
// Address: 0x2058f0 - 0x2059cc
void soundStartLoopRange_0x2058f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundStartLoopRange_0x2058f0");
#endif

    switch (ctx->pc) {
        case 0x20598cu: goto label_20598c;
        case 0x205998u: goto label_205998;
        case 0x2059a4u: goto label_2059a4;
        default: break;
    }

    ctx->pc = 0x2058f0u;

    // 0x2058f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2058f4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2058f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2058f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2058f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2058fc: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x2058fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x205900: 0x8f90b638  lw          $s0, -0x49C8($gp)
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948408)));
    // 0x205904: 0x244217e0  addiu       $v0, $v0, 0x17E0
    ctx->pc = 0x205904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6112));
    // 0x205908: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x205908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20590c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x20590cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x205910: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x205910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x205918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20591c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20591cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205920: 0x2a040006  slti        $a0, $s0, 0x6
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x205924: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205924u;
    {
        const bool branch_taken_0x205924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205924) {
            ctx->pc = 0x205934u;
            goto label_205934;
        }
    }
    ctx->pc = 0x20592Cu;
    // 0x20592c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20592Cu;
    {
        const bool branch_taken_0x20592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20592Cu;
        // 0x205930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20592c) {
            ctx->pc = 0x2059B4u;
            goto label_2059b4;
        }
    }
    ctx->pc = 0x205934u;
label_205934:
    // 0x205934: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x205934u;
    {
        const bool branch_taken_0x205934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205934u;
        // 0x205938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205934) {
            ctx->pc = 0x20595Cu;
            goto label_20595c;
        }
    }
    ctx->pc = 0x20593Cu;
    // 0x20593c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x20593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205940: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x205940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x205944: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x205944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x205948: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x205948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20594c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x20594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x205950: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x205950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205954u;
    {
        const bool branch_taken_0x205954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205954u;
        // 0x205958: 0xe4c10010  swc1        $f1, 0x10($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205954) {
            ctx->pc = 0x205960u;
            goto label_205960;
        }
    }
    ctx->pc = 0x20595Cu;
label_20595c:
    // 0x20595c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x20595cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_205960:
    // 0x205960: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x205960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x205964: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x205964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x205968: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x205968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20596c: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x20596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x205970: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x205974: 0xe4cc0014  swc1        $f12, 0x14($a2)
    ctx->pc = 0x205974u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x205978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20597c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205984: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x205984u;
    SET_GPR_U32(ctx, 31, 0x20598Cu);
    ctx->pc = 0x205988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205984u;
    // 0x205988: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048F8u, 0x205984u, 0x20598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20598Cu;
label_20598c:
    // 0x20598c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205990: 0xc081546  jal         func_205518
    ctx->pc = 0x205990u;
    SET_GPR_U32(ctx, 31, 0x205998u);
    ctx->pc = 0x205994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205990u;
    // 0x205994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x205990u, 0x205998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205998u;
label_205998:
    // 0x205998: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20599c: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x20599Cu;
    SET_GPR_U32(ctx, 31, 0x2059A4u);
    ctx->pc = 0x2059A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20599Cu;
    // 0x2059a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048F8u, 0x20599Cu, 0x2059A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059A4u;
label_2059a4:
    // 0x2059a4: 0x8f83b638  lw          $v1, -0x49C8($gp)
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948408)));
    // 0x2059a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2059a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2059acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2059b0: 0xaf83b638  sw          $v1, -0x49C8($gp)
    ctx->pc = 0x2059b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948408), GPR_U32(ctx, 3));
label_2059b4:
    // 0x2059b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2059b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2059b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2059b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2059bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2059bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2059c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2059c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2059c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2059C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2059C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059C4u;
        // 0x2059c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2059CCu;
}
