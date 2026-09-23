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

// Function: mmLoadTiles
// Address: 0x249278 - 0x249340
void mmLoadTiles_0x249278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmLoadTiles_0x249278");
#endif

    switch (ctx->pc) {
        case 0x2492a8u: goto label_2492a8;
        case 0x2492d8u: goto label_2492d8;
        case 0x249310u: goto label_249310;
        default: break;
    }

    ctx->pc = 0x249278u;

    // 0x249278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24927c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x249280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x249280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x249284: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x249284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x249288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x249288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24928c: 0x24716588  addiu       $s1, $v1, 0x6588
    ctx->pc = 0x24928cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25992));
    // 0x249290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249294: 0x24527940  addiu       $s2, $v0, 0x7940
    ctx->pc = 0x249294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
    // 0x249298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24929c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24929cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492a0: 0xaf80a13c  sw          $zero, -0x5EC4($gp)
    ctx->pc = 0x2492a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943036), GPR_U32(ctx, 0));
    // 0x2492a4: 0x24100074  addiu       $s0, $zero, 0x74
    ctx->pc = 0x2492a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2492a8:
    // 0x2492a8: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x2492a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2492ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2492b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2492b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2492b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2492b8: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x2492b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2492bc: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x2492bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2492c0: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x2492c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2492c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2492C4u;
    {
        const bool branch_taken_0x2492c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2492C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492C4u;
        // 0x2492c8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492c4) {
            ctx->pc = 0x249308u;
            goto label_249308;
        }
    }
    ctx->pc = 0x2492CCu;
    // 0x2492cc: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x2492ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2492d0: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x2492d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2492d4: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x2492d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2492d8:
    // 0x2492d8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2492d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2492dc: 0x1492818  mult        $a1, $t2, $t1
    ctx->pc = 0x2492dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2492e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2492e4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2492e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2492e8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2492ec: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2492f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2492f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2492f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2492f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2492f8: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x2492f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2492fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2492fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x249300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x249300u;
    {
        const bool branch_taken_0x249300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249300u;
        // 0x249304: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249300) {
            ctx->pc = 0x2492D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2492d8;
        }
    }
    ctx->pc = 0x249308u;
label_249308:
    // 0x249308: 0xc0923e8  jal         func_248FA0
    ctx->pc = 0x249308u;
    SET_GPR_U32(ctx, 31, 0x249310u);
    ctx->pc = 0x24930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249308u;
    // 0x24930c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248FA0u, 0x249308u, 0x249310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249310u;
label_249310:
    // 0x249310: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x249310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
    // 0x249314: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x249314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249318: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24931c: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x24931cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x249320: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x249320u;
    {
        const bool branch_taken_0x249320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249320u;
        // 0x249324: 0xaf83a13c  sw          $v1, -0x5EC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249320) {
            ctx->pc = 0x2492A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2492a8;
        }
    }
    ctx->pc = 0x249328u;
    // 0x249328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24932c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24932cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249330: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x249330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249338: 0x3e00008  jr          $ra
    ctx->pc = 0x249338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249338u;
        // 0x24933c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249340u;
}
