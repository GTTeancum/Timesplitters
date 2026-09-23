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

// Function: emLoadTextureNum
// Address: 0x2b7900 - 0x2b79b4
void emLoadTextureNum_0x2b7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emLoadTextureNum_0x2b7900");
#endif

    switch (ctx->pc) {
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7990u: goto label_2b7990;
        default: break;
    }

    ctx->pc = 0x2b7900u;

    // 0x2b7900: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2b7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x2b7904: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2b7904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2b7908: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2b7908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2b790c: 0x2442b3e0  addiu       $v0, $v0, -0x4C20
    ctx->pc = 0x2b790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x2b7910: 0xffb10400  sd          $s1, 0x400($sp)
    ctx->pc = 0x2b7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 17));
    // 0x2b7914: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b7914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b7918: 0xffb003f0  sd          $s0, 0x3F0($sp)
    ctx->pc = 0x2b7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 16));
    // 0x2b791c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2b791cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7920: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x2b7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x2b7924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b7924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7928: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x2b7928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b792c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B792Cu;
    {
        const bool branch_taken_0x2b792c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B792Cu;
        // 0x2b7930: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b792c) {
            ctx->pc = 0x2B7944u;
            goto label_2b7944;
        }
    }
    ctx->pc = 0x2B7934u;
    // 0x2b7934: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B7934u;
    {
        const bool branch_taken_0x2b7934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7934u;
        // 0x2b7938: 0xdfbf0420  ld          $ra, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7934) {
            ctx->pc = 0x2B79A0u;
            goto label_2b79a0;
        }
    }
    ctx->pc = 0x2B793Cu;
    // 0x2b793c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B793Cu;
    {
        const bool branch_taken_0x2b793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B793Cu;
        // 0x2b7940: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b793c) {
            ctx->pc = 0x2B79A0u;
            goto label_2b79a0;
        }
    }
    ctx->pc = 0x2B7944u;
label_2b7944:
    // 0x2b7944: 0x8f82b498  lw          $v0, -0x4B68($gp)
    ctx->pc = 0x2b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b7948: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b794c: 0x9247000c  lbu         $a3, 0xC($s2)
    ctx->pc = 0x2b794cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b7950: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b7950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b7954: 0x8c431a08  lw          $v1, 0x1A08($v0)
    ctx->pc = 0x2b7954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
    // 0x2b7958: 0x24a59b20  addiu       $a1, $a1, -0x64E0
    ctx->pc = 0x2b7958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    // 0x2b795c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7964: 0xa0471808  sb          $a3, 0x1808($v0)
    ctx->pc = 0x2b7964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6152), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7968: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b796c: 0x8c621a08  lw          $v0, 0x1A08($v1)
    ctx->pc = 0x2b796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6664)));
    // 0x2b7970: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2b7970u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7978: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2B7978u;
    SET_GPR_U32(ctx, 31, 0x2B7980u);
    ctx->pc = 0x2B797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7978u;
    // 0x2b797c: 0xac621a08  sw          $v0, 0x1A08($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2B7978u, 0x2B7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7980u;
label_2b7980:
    // 0x2b7980: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x2b7980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7984: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b7984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7988: 0xc0adc64  jal         func_2B7190
    ctx->pc = 0x2B7988u;
    SET_GPR_U32(ctx, 31, 0x2B7990u);
    ctx->pc = 0x2B798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7988u;
    // 0x2b798c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7190u, 0x2B7988u, 0x2B7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7990u;
label_2b7990:
    // 0x2b7990: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7990u;
    {
        const bool branch_taken_0x2b7990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7990u;
        // 0x2b7994: 0xdfbf0420  ld          $ra, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7990) {
            ctx->pc = 0x2B79A0u;
            goto label_2b79a0;
        }
    }
    ctx->pc = 0x2B7998u;
    // 0x2b7998: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x2b7998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b799c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b79a0:
    // 0x2b79a0: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2b79a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2b79a4: 0xdfb10400  ld          $s1, 0x400($sp)
    ctx->pc = 0x2b79a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2b79a8: 0xdfb003f0  ld          $s0, 0x3F0($sp)
    ctx->pc = 0x2b79a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2b79ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79ACu;
        // 0x2b79b0: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79B4u;
}
