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

// Function: splitpageInit
// Address: 0x2311a8 - 0x231240
void splitpageInit_0x2311a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitpageInit_0x2311a8");
#endif

    switch (ctx->pc) {
        case 0x2311d8u: goto label_2311d8;
        case 0x2311e0u: goto label_2311e0;
        case 0x2311f8u: goto label_2311f8;
        case 0x231204u: goto label_231204;
        default: break;
    }

    ctx->pc = 0x2311a8u;

    // 0x2311a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2311ac: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x2311b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2311b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2311b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2311b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2311b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2311bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2311bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2311c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2311c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2311c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2311c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2311C8u;
    {
        const bool branch_taken_0x2311c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C8u;
        // 0x2311cc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c8) {
            ctx->pc = 0x231224u;
            goto label_231224;
        }
    }
    ctx->pc = 0x2311D0u;
    // 0x2311d0: 0x2791b740  addiu       $s1, $gp, -0x48C0
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x2311d4: 0x0  nop
    ctx->pc = 0x2311d4u;
    // NOP
label_2311d8:
    // 0x2311d8: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x2311D8u;
    SET_GPR_U32(ctx, 31, 0x2311E0u);
    ctx->pc = 0x2311DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311D8u;
    // 0x2311dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x2311D8u, 0x2311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311E0u;
label_2311e0:
    // 0x2311e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2311e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2311e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2311ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2311f0: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x2311F0u;
    SET_GPR_U32(ctx, 31, 0x2311F8u);
    ctx->pc = 0x2311F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311F0u;
    // 0x2311f4: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x2311F0u, 0x2311F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311F8u;
label_2311f8:
    // 0x2311f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2311f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311fc: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x2311FCu;
    SET_GPR_U32(ctx, 31, 0x231204u);
    ctx->pc = 0x231200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311FCu;
    // 0x231200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x2311FCu, 0x231204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231204u;
label_231204:
    // 0x231204: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x231204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x231208: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23120c: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x231210: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x231214: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x231214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231218: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x231218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23121c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23121Cu;
    {
        const bool branch_taken_0x23121c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23121Cu;
        // 0x231220: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23121c) {
            ctx->pc = 0x2311D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2311d8;
        }
    }
    ctx->pc = 0x231224u;
label_231224:
    // 0x231224: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x231224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23122c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23122cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231230: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231238: 0x808b2c8  j           func_22CB20
    ctx->pc = 0x231238u;
    ctx->pc = 0x23123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231238u;
    // 0x23123c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    frontSet_0x22cb20(rdram, ctx, runtime); return;
    ctx->pc = 0x231240u;
}
