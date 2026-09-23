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

// Function: fptoui
// Address: 0x2e4508 - 0x2e45a0
void fptoui_0x2e4508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x2e4508");
#endif

    switch (ctx->pc) {
        case 0x2e4520u: goto label_2e4520;
        case 0x2e4538u: goto label_2e4538;
        default: break;
    }

    ctx->pc = 0x2e4508u;

    // 0x2e4508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e450c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4510: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e4510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4514: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2e4514u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4518: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4518u;
    SET_GPR_U32(ctx, 31, 0x2E4520u);
    ctx->pc = 0x2E451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4518u;
    // 0x2e451c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4518u, 0x2E4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4520u;
label_2e4520:
    // 0x2e4520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e4520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4524: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e4524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e4528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4528u;
    {
        const bool branch_taken_0x2e4528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4528u;
        // 0x2e452c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4528) {
            ctx->pc = 0x2E4538u;
            goto label_2e4538;
        }
    }
    ctx->pc = 0x2E4530u;
    // 0x2e4530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4530u;
    {
        const bool branch_taken_0x2e4530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4530u;
        // 0x2e4534: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4530) {
            ctx->pc = 0x2E4540u;
            goto label_2e4540;
        }
    }
    ctx->pc = 0x2E4538u;
label_2e4538:
    // 0x2e4538: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E4538u;
    {
        const bool branch_taken_0x2e4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4538u;
        // 0x2e453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4538) {
            ctx->pc = 0x2E4594u;
            goto label_2e4594;
        }
    }
    ctx->pc = 0x2E4540u;
label_2e4540:
    // 0x2e4540: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E4540u;
    {
        const bool branch_taken_0x2e4540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4540u;
        // 0x2e4544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4540) {
            ctx->pc = 0x2E4594u;
            goto label_2e4594;
        }
    }
    ctx->pc = 0x2E4548u;
    // 0x2e4548: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2e4548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2e454c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E454Cu;
    {
        const bool branch_taken_0x2e454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E454Cu;
        // 0x2e4550: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e454c) {
            ctx->pc = 0x2E4564u;
            goto label_2e4564;
        }
    }
    ctx->pc = 0x2E4554u;
    // 0x2e4554: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E4554u;
    {
        const bool branch_taken_0x2e4554 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4554u;
        // 0x2e4558: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4554) {
            ctx->pc = 0x2E4538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4538;
        }
    }
    ctx->pc = 0x2E455Cu;
    // 0x2e455c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E455Cu;
    {
        const bool branch_taken_0x2e455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e455c) {
            ctx->pc = 0x2E4560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E455Cu;
            // 0x2e4560: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4570u;
            goto label_2e4570;
        }
    }
    ctx->pc = 0x2E4564u;
label_2e4564:
    // 0x2e4564: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e4564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e4568: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E4568u;
    {
        const bool branch_taken_0x2e4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4568u;
        // 0x2e456c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4568) {
            ctx->pc = 0x2E4594u;
            goto label_2e4594;
        }
    }
    ctx->pc = 0x2E4570u;
label_2e4570:
    // 0x2e4570: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4570u;
    {
        const bool branch_taken_0x2e4570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4570) {
            ctx->pc = 0x2E4574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4570u;
            // 0x2e4574: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4588u;
            goto label_2e4588;
        }
    }
    ctx->pc = 0x2E4578u;
    // 0x2e4578: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e457c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2e4580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4580u;
    {
        const bool branch_taken_0x2e4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4580u;
        // 0x2e4584: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4580) {
            ctx->pc = 0x2E4594u;
            goto label_2e4594;
        }
    }
    ctx->pc = 0x2E4588u;
label_2e4588:
    // 0x2e4588: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2e4588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e458c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2e458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e4590: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x2e4590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2e4594:
    // 0x2e4594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4598: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4598u;
        // 0x2e459c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E45A0u;
}
