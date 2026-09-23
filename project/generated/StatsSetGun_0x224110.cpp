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

// Function: StatsSetGun
// Address: 0x224110 - 0x2241a8
void StatsSetGun_0x224110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsSetGun_0x224110");
#endif

    switch (ctx->pc) {
        case 0x224164u: goto label_224164;
        default: break;
    }

    ctx->pc = 0x224110u;

    // 0x224110: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x224110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224114: 0x28e2000e  slti        $v0, $a3, 0xE
    ctx->pc = 0x224114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x224118: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x224118u;
    {
        const bool branch_taken_0x224118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224118u;
        // 0x22411c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224118) {
            ctx->pc = 0x224164u;
            goto label_224164;
        }
    }
    ctx->pc = 0x224120u;
    // 0x224120: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x224124: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x224124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x224128: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x224128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x22412c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x22412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x224130: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224134: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x224134u;
    {
        const bool branch_taken_0x224134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224134u;
        // 0x224138: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224134) {
            ctx->pc = 0x22416Cu;
            goto label_22416c;
        }
    }
    ctx->pc = 0x22413Cu;
    // 0x22413c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x22413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x224140: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x224140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x224144: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224144u;
    {
        const bool branch_taken_0x224144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224144u;
        // 0x224148: 0x28e20004  slti        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224144) {
            ctx->pc = 0x22416Cu;
            goto label_22416c;
        }
    }
    ctx->pc = 0x22414Cu;
    // 0x22414c: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x22414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x224150: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x224150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x224154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224158: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x224158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22415c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22415Cu;
    {
        const bool branch_taken_0x22415c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22415Cu;
        // 0x224160: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22415c) {
            ctx->pc = 0x224174u;
            goto label_224174;
        }
    }
    ctx->pc = 0x224164u;
label_224164:
    // 0x224164: 0x3e00008  jr          $ra
    ctx->pc = 0x224164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22416Cu;
label_22416c:
    // 0x22416c: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x22416Cu;
    {
        const bool branch_taken_0x22416c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22416Cu;
        // 0x224170: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22416c) {
            ctx->pc = 0x224164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224164;
        }
    }
    ctx->pc = 0x224174u;
label_224174:
    // 0x224174: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x224174u;
    {
        const bool branch_taken_0x224174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224174u;
        // 0x224178: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224174) {
            ctx->pc = 0x224164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224164;
        }
    }
    ctx->pc = 0x22417Cu;
    // 0x22417c: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x22417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x224180: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x224180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x224184: 0x70e52818  mult1       $a1, $a3, $a1
    ctx->pc = 0x224184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x224188: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x224188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x22418c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x224190: 0x2463e6a8  addiu       $v1, $v1, -0x1958
    ctx->pc = 0x224190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960808));
    // 0x224194: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224198: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22419c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2241a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2241A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2241A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A0u;
        // 0x2241a4: 0xe46c0114  swc1        $f12, 0x114($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2241A8u;
}
