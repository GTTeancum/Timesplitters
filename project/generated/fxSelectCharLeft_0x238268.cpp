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

// Function: fxSelectCharLeft
// Address: 0x238268 - 0x238388
void fxSelectCharLeft_0x238268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharLeft_0x238268");
#endif

    switch (ctx->pc) {
        case 0x238298u: goto label_238298;
        case 0x238300u: goto label_238300;
        case 0x238330u: goto label_238330;
        case 0x238344u: goto label_238344;
        default: break;
    }

    ctx->pc = 0x238268u;

    // 0x238268: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23826c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x238270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x238278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23827c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23827cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238280: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x238280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x238284: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x238284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x238288: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x238288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23828c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238290: 0xc08828c  jal         func_220A30
    ctx->pc = 0x238290u;
    SET_GPR_U32(ctx, 31, 0x238298u);
    ctx->pc = 0x238294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238290u;
    // 0x238294: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x238290u, 0x238298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238298u;
label_238298:
    // 0x238298: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x238298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23829c: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2382a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2382a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2382a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2382a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2382a8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2382A8u;
    {
        const bool branch_taken_0x2382a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382A8u;
        // 0x2382ac: 0x24710020  addiu       $s1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382a8) {
            ctx->pc = 0x2382E0u;
            goto label_2382e0;
        }
    }
    ctx->pc = 0x2382B0u;
    // 0x2382b0: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2382b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2382b4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2382b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2382b8: 0x8c821218  lw          $v0, 0x1218($a0)
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC1218u));
    // 0x2382bc: 0x2463c338  addiu       $v1, $v1, -0x3CC8
    ctx->pc = 0x2382bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951736));
    // 0x2382c0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2382c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2382c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2382c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2382cc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2382ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2382d0: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2382D0u;
    {
        const bool branch_taken_0x2382d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2382d0) {
            ctx->pc = 0x2382D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2382D0u;
            // 0x2382d4: 0x94430006  lhu         $v1, 0x6($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2382D8u;
            goto label_2382d8;
        }
    }
    ctx->pc = 0x2382D8u;
label_2382d8:
    // 0x2382d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2382D8u;
    {
        const bool branch_taken_0x2382d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382D8u;
        // 0x2382dc: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382d8) {
            ctx->pc = 0x238364u;
            goto label_238364;
        }
    }
    ctx->pc = 0x2382E0u;
label_2382e0:
    // 0x2382e0: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x2382e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x2382e4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2382e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2382e8: 0x928236b0  lbu         $v0, 0x36B0($s4)
    ctx->pc = 0x2382e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3536B0u));
    // 0x2382ec: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2382ECu;
    {
        const bool branch_taken_0x2382ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2382F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382ECu;
        // 0x2382f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382ec) {
            ctx->pc = 0x238318u;
            goto label_238318;
        }
    }
    ctx->pc = 0x2382F4u;
    // 0x2382f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2382f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382f8: 0x268536b0  addiu       $a1, $s4, 0x36B0
    ctx->pc = 0x2382f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14000));
    // 0x2382fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2382fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_238300:
    // 0x238300: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x238300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x238304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238304u;
    {
        const bool branch_taken_0x238304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238304u;
        // 0x238308: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238304) {
            ctx->pc = 0x238318u;
            goto label_238318;
        }
    }
    ctx->pc = 0x23830Cu;
    // 0x23830c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23830cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238310: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x238310u;
    {
        const bool branch_taken_0x238310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x238310) {
            ctx->pc = 0x238314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238310u;
            // 0x238314: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238300;
        }
    }
    ctx->pc = 0x238318u;
label_238318:
    // 0x238318: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23831c: 0x2415003f  addiu       $s5, $zero, 0x3F
    ctx->pc = 0x23831cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x238320: 0x245336b0  addiu       $s3, $v0, 0x36B0
    ctx->pc = 0x238320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x238324: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x238324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238328: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23832c: 0x0  nop
    ctx->pc = 0x23832cu;
    // NOP
label_238330:
    // 0x238330: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x238330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x238334: 0x2a2800a  movz        $s0, $s5, $v0
    ctx->pc = 0x238334u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x238338: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x23833c: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x23833Cu;
    SET_GPR_U32(ctx, 31, 0x238344u);
    ctx->pc = 0x238340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23833Cu;
    // 0x238340: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x23833Cu, 0x238344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238344u;
label_238344:
    // 0x238344: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x238344u;
    {
        const bool branch_taken_0x238344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238344) {
            ctx->pc = 0x238348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238344u;
            // 0x238348: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238330;
        }
    }
    ctx->pc = 0x23834Cu;
    // 0x23834c: 0x268236b0  addiu       $v0, $s4, 0x36B0
    ctx->pc = 0x23834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14000));
    // 0x238350: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x238354: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x238354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238358: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x238358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23835c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23835Cu;
    {
        const bool branch_taken_0x23835c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23835c) {
            ctx->pc = 0x238360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23835Cu;
            // 0x238360: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238364u;
            goto label_238364;
        }
    }
    ctx->pc = 0x238364u;
label_238364:
    // 0x238364: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238368: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x238368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23836c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23836cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238370: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x238370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238374: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238378: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23837c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23837cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238380: 0x3e00008  jr          $ra
    ctx->pc = 0x238380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238380u;
        // 0x238384: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238388u;
}
