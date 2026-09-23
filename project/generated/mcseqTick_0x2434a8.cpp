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

// Function: mcseqTick
// Address: 0x2434a8 - 0x243f24
void mcseqTick_0x2434a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqTick_0x2434a8");
#endif

    switch (ctx->pc) {
        case 0x24351cu: goto label_24351c;
        case 0x24359cu: goto label_24359c;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435e4u: goto label_2435e4;
        case 0x243600u: goto label_243600;
        case 0x24362cu: goto label_24362c;
        case 0x243678u: goto label_243678;
        case 0x2436c8u: goto label_2436c8;
        case 0x243720u: goto label_243720;
        case 0x243770u: goto label_243770;
        case 0x243794u: goto label_243794;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437e8u: goto label_2437e8;
        case 0x243828u: goto label_243828;
        case 0x243894u: goto label_243894;
        case 0x2438b0u: goto label_2438b0;
        case 0x243914u: goto label_243914;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f8u: goto label_2439f8;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a30u: goto label_243a30;
        case 0x243a40u: goto label_243a40;
        case 0x243a7cu: goto label_243a7c;
        case 0x243accu: goto label_243acc;
        case 0x243ae8u: goto label_243ae8;
        case 0x243af4u: goto label_243af4;
        case 0x243b00u: goto label_243b00;
        case 0x243b34u: goto label_243b34;
        case 0x243b9cu: goto label_243b9c;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bd4u: goto label_243bd4;
        case 0x243be8u: goto label_243be8;
        case 0x243c30u: goto label_243c30;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cf8u: goto label_243cf8;
        case 0x243d08u: goto label_243d08;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d68u: goto label_243d68;
        case 0x243d78u: goto label_243d78;
        case 0x243dc4u: goto label_243dc4;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e60u: goto label_243e60;
        default: break;
    }

    ctx->pc = 0x2434a8u;

    // 0x2434a8: 0x8f83a0a8  lw          $v1, -0x5F58($gp)
    ctx->pc = 0x2434a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942888)));
    // 0x2434ac: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2434acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2434b0: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x2434b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x2434b4: 0xffb301b0  sd          $s3, 0x1B0($sp)
    ctx->pc = 0x2434b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 19));
    // 0x2434b8: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x2434b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2434bc: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x2434bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x2434c0: 0xffb10190  sd          $s1, 0x190($sp)
    ctx->pc = 0x2434c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 17));
    // 0x2434c4: 0x1040028f  beqz        $v0, . + 4 + (0x28F << 2)
    ctx->pc = 0x2434C4u;
    {
        const bool branch_taken_0x2434c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434C4u;
        // 0x2434c8: 0xffb00180  sd          $s0, 0x180($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434c4) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x2434CCu;
    // 0x2434cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2434d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2434d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2434d4: 0x24421ee0  addiu       $v0, $v0, 0x1EE0
    ctx->pc = 0x2434d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
    // 0x2434d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2434d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2434dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2434e0: 0x800008  jr          $a0
    ctx->pc = 0x2434E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2434E8u: goto label_2434e8;
            case 0x2434F0u: goto label_2434f0;
            case 0x24350Cu: goto label_24350c;
            case 0x243514u: goto label_243514;
            case 0x243560u: goto label_243560;
            case 0x243660u: goto label_243660;
            case 0x2436F4u: goto label_2436f4;
            case 0x243758u: goto label_243758;
            case 0x2438A8u: goto label_2438a8;
            case 0x243904u: goto label_243904;
            case 0x243998u: goto label_243998;
            case 0x243A90u: goto label_243a90;
            case 0x243AD4u: goto label_243ad4;
            case 0x243B0Cu: goto label_243b0c;
            case 0x243B3Cu: goto label_243b3c;
            case 0x243C48u: goto label_243c48;
            case 0x243C7Cu: goto label_243c7c;
            case 0x243D24u: goto label_243d24;
            case 0x243D84u: goto label_243d84;
            case 0x243D94u: goto label_243d94;
            case 0x243DA8u: goto label_243da8;
            case 0x243DDCu: goto label_243ddc;
            case 0x243E00u: goto label_243e00;
            case 0x243E58u: goto label_243e58;
            case 0x243F04u: goto label_243f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2434E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2434E8u;
label_2434e8:
    // 0x2434e8: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x2434E8u;
    {
        const bool branch_taken_0x2434e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E8u;
        // 0x2434ec: 0x8f82b7f0  lw          $v0, -0x4810($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434e8) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x2434F0u;
label_2434f0:
    // 0x2434f0: 0x8f84a0c8  lw          $a0, -0x5F38($gp)
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x2434f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2434f8: 0x3463ffe7  ori         $v1, $v1, 0xFFE7
    ctx->pc = 0x2434f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65511);
    // 0x2434fc: 0x8f82b7f0  lw          $v0, -0x4810($gp)
    ctx->pc = 0x2434fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948848)));
    // 0x243500: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x243500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x243504: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x243504u;
    {
        const bool branch_taken_0x243504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243504u;
        // 0x243508: 0xaf84a0c8  sw          $a0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243504) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x24350Cu;
label_24350c:
    // 0x24350c: 0x1000027e  b           . + 4 + (0x27E << 2)
    ctx->pc = 0x24350Cu;
    {
        const bool branch_taken_0x24350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24350Cu;
        // 0x243510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24350c) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243514u;
label_243514:
    // 0x243514: 0xc0823ac  jal         func_208EB0
    ctx->pc = 0x243514u;
    SET_GPR_U32(ctx, 31, 0x24351Cu);
    ctx->pc = 0x208EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EB0u, 0x243514u, 0x24351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24351Cu;
label_24351c:
    // 0x24351c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24351cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243520: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x243520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x243524: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243524u;
    {
        const bool branch_taken_0x243524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243524u;
        // 0x243528: 0xaf83b808  sw          $v1, -0x47F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948872), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243524) {
            ctx->pc = 0x243554u;
            goto label_243554;
        }
    }
    ctx->pc = 0x24352Cu;
    // 0x24352c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x243530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243534: 0x24421f50  addiu       $v0, $v0, 0x1F50
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    // 0x243538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24353c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243540: 0x800008  jr          $a0
    ctx->pc = 0x243540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243548u: goto label_243548;
            case 0x243554u: goto label_243554;
            case 0x243F04u: goto label_243f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243540u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x243548u;
label_243548:
    // 0x243548: 0x8f82b80c  lw          $v0, -0x47F4($gp)
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948876)));
    // 0x24354c: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x24354Cu;
    {
        const bool branch_taken_0x24354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24354Cu;
        // 0x243550: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24354c) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243554u;
label_243554:
    // 0x243554: 0x8f82b810  lw          $v0, -0x47F0($gp)
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948880)));
    // 0x243558: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x243558u;
    {
        const bool branch_taken_0x243558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243558u;
        // 0x24355c: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243558) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243560u;
label_243560:
    // 0x243560: 0x8f83b818  lw          $v1, -0x47E8($gp)
    ctx->pc = 0x243560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x243564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243568: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x243568u;
    {
        const bool branch_taken_0x243568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243568u;
        // 0x24356c: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243568) {
            ctx->pc = 0x243594u;
            goto label_243594;
        }
    }
    ctx->pc = 0x243570u;
    // 0x243570: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x243570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243574: 0x26443710  addiu       $a0, $s2, 0x3710
    ctx->pc = 0x243574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x243578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24357c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x243580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243584: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x243584u;
    {
        const bool branch_taken_0x243584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x243588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243584u;
        // 0x243588: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243584) {
            ctx->pc = 0x243594u;
            goto label_243594;
        }
    }
    ctx->pc = 0x24358Cu;
    // 0x24358c: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x24358Cu;
    {
        const bool branch_taken_0x24358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24358Cu;
        // 0x243590: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24358c) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243594u;
label_243594:
    // 0x243594: 0xc080d84  jal         func_203610
    ctx->pc = 0x243594u;
    SET_GPR_U32(ctx, 31, 0x24359Cu);
    ctx->pc = 0x243598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243594u;
    // 0x243598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203610u, 0x243594u, 0x24359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24359Cu;
label_24359c:
    // 0x24359c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435a0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2435a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2435a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2435A4u;
    {
        const bool branch_taken_0x2435a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435A4u;
        // 0x2435a8: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435a4) {
            ctx->pc = 0x2435D8u;
            goto label_2435d8;
        }
    }
    ctx->pc = 0x2435ACu;
    // 0x2435ac: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
label_2435b0:
    // 0x2435b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2435b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2435b4: 0x26433710  addiu       $v1, $s2, 0x3710
    ctx->pc = 0x2435b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x2435b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2435bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2435bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2435c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2435c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2435c4: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2435c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2435c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2435C8u;
    {
        const bool branch_taken_0x2435c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435c8) {
            ctx->pc = 0x2435B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2435b0;
        }
    }
    ctx->pc = 0x2435D0u;
    // 0x2435d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2435D0u;
    {
        const bool branch_taken_0x2435d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2435d0) {
            ctx->pc = 0x2435DCu;
            goto label_2435dc;
        }
    }
    ctx->pc = 0x2435D8u;
label_2435d8:
    // 0x2435d8: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2435d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
label_2435dc:
    // 0x2435dc: 0xc080d84  jal         func_203610
    ctx->pc = 0x2435DCu;
    SET_GPR_U32(ctx, 31, 0x2435E4u);
    ctx->pc = 0x2435E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435DCu;
    // 0x2435e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203610u, 0x2435DCu, 0x2435E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435E4u;
label_2435e4:
    // 0x2435e4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2435e8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2435e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2435ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2435ECu;
    {
        const bool branch_taken_0x2435ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435ECu;
        // 0x2435f0: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435ec) {
            ctx->pc = 0x24361Cu;
            goto label_24361c;
        }
    }
    ctx->pc = 0x2435F4u;
    // 0x2435f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2435f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2435f8: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x2435f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x2435fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2435fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243600:
    // 0x243600: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x243600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x243604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x243608: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x243608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x24360c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x24360cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243610: 0x0  nop
    ctx->pc = 0x243610u;
    // NOP
    // 0x243614: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x243614u;
    {
        const bool branch_taken_0x243614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243614) {
            ctx->pc = 0x243600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243600;
        }
    }
    ctx->pc = 0x24361Cu;
label_24361c:
    // 0x24361c: 0x26443710  addiu       $a0, $s2, 0x3710
    ctx->pc = 0x24361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x243620: 0x26253730  addiu       $a1, $s1, 0x3730
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14128));
    // 0x243624: 0xc082306  jal         func_208C18
    ctx->pc = 0x243624u;
    SET_GPR_U32(ctx, 31, 0x24362Cu);
    ctx->pc = 0x243628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243624u;
    // 0x243628: 0x26063750  addiu       $a2, $s0, 0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 14160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C18u, 0x243624u, 0x24362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24362Cu;
label_24362c:
    // 0x24362c: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x24362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243630: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x243634: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243638: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x243638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24363c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24363cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x243640: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243644: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x243644u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x243648: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x243648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24364c: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x24364cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
    // 0x243650: 0xaf84b80c  sw          $a0, -0x47F4($gp)
    ctx->pc = 0x243650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948876), GPR_U32(ctx, 4));
    // 0x243654: 0xaf86b810  sw          $a2, -0x47F0($gp)
    ctx->pc = 0x243654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948880), GPR_U32(ctx, 6));
    // 0x243658: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x243658u;
    {
        const bool branch_taken_0x243658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243658u;
        // 0x24365c: 0xaf80a0a8  sw          $zero, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243658) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243660u;
label_243660:
    // 0x243660: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x243660u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x243664: 0x8f87b7e4  lw          $a3, -0x481C($gp)
    ctx->pc = 0x243664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
    // 0x243668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24366c: 0x26463710  addiu       $a2, $s2, 0x3710
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x243670: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x243670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x243674: 0x0  nop
    ctx->pc = 0x243674u;
    // NOP
label_243678:
    // 0x243678: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x243678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24367c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x243680: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x243680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x243684: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x243684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x243688: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x243688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24368c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x24368cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x243690: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x243690u;
    {
        const bool branch_taken_0x243690 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x243690) {
            ctx->pc = 0x243678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243678;
        }
    }
    ctx->pc = 0x243698u;
    // 0x243698: 0x14e000fb  bnez        $a3, . + 4 + (0xFB << 2)
    ctx->pc = 0x243698u;
    {
        const bool branch_taken_0x243698 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243698u;
        // 0x24369c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243698) {
            ctx->pc = 0x243A88u;
            goto label_243a88;
        }
    }
    ctx->pc = 0x2436A0u;
    // 0x2436a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2436a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2436a4: 0x148200f8  bne         $a0, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2436A4u;
    {
        const bool branch_taken_0x2436a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2436A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436A4u;
        // 0x2436a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436a4) {
            ctx->pc = 0x243A88u;
            goto label_243a88;
        }
    }
    ctx->pc = 0x2436ACu;
    // 0x2436ac: 0x8e423710  lw          $v0, 0x3710($s2)
    ctx->pc = 0x2436acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14096)));
    // 0x2436b0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2436b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2436b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2436B4u;
    {
        const bool branch_taken_0x2436b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B4u;
        // 0x2436b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436b4) {
            ctx->pc = 0x2436E4u;
            goto label_2436e4;
        }
    }
    ctx->pc = 0x2436BCu;
    // 0x2436bc: 0x26433710  addiu       $v1, $s2, 0x3710
    ctx->pc = 0x2436bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x2436c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2436c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2436c4: 0x0  nop
    ctx->pc = 0x2436c4u;
    // NOP
label_2436c8:
    // 0x2436c8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2436c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2436cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2436CCu;
    {
        const bool branch_taken_0x2436cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436CCu;
        // 0x2436d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436cc) {
            ctx->pc = 0x2436E4u;
            goto label_2436e4;
        }
    }
    ctx->pc = 0x2436D4u;
    // 0x2436d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2436d8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2436d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2436dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2436DCu;
    {
        const bool branch_taken_0x2436dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2436dc) {
            ctx->pc = 0x2436E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2436DCu;
            // 0x2436e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2436C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2436c8;
        }
    }
    ctx->pc = 0x2436E4u;
label_2436e4:
    // 0x2436e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2436e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2436e8: 0xaf85b818  sw          $a1, -0x47E8($gp)
    ctx->pc = 0x2436e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 5));
    // 0x2436ec: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x2436ECu;
    {
        const bool branch_taken_0x2436ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436ECu;
        // 0x2436f0: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436ec) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x2436F4u;
label_2436f4:
    // 0x2436f4: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x2436f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2436f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2436fc: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2436fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x243700: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x243700u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x243704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x243704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x243708: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x243708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x24370c: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x24370cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
    // 0x243710: 0x260636f0  addiu       $a2, $s0, 0x36F0
    ctx->pc = 0x243710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 14064));
    // 0x243714: 0x26433710  addiu       $v1, $s2, 0x3710
    ctx->pc = 0x243714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14096));
    // 0x243718: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x243718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24371c: 0x0  nop
    ctx->pc = 0x24371cu;
    // NOP
label_243720:
    // 0x243720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243724: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x243724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x243728: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x243728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x24372c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x24372cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x243730: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x243730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x243734: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x243734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x243738: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x243738u;
    {
        const bool branch_taken_0x243738 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x24373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243738u;
        // 0x24373c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243738) {
            ctx->pc = 0x243720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243720;
        }
    }
    ctx->pc = 0x243740u;
    // 0x243740: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x243740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243744: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x243748: 0xaf86b814  sw          $a2, -0x47EC($gp)
    ctx->pc = 0x243748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948884), GPR_U32(ctx, 6));
    // 0x24374c: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x24374cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x243750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243750u;
    {
        const bool branch_taken_0x243750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243750u;
        // 0x243754: 0xaf80b7e0  sw          $zero, -0x4820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243750) {
            ctx->pc = 0x24375Cu;
            goto label_24375c;
        }
    }
    ctx->pc = 0x243758u;
label_243758:
    // 0x243758: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
label_24375c:
    // 0x24375c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x243760: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243764: 0x244236f0  addiu       $v0, $v0, 0x36F0
    ctx->pc = 0x243764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14064));
    // 0x243768: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x243768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24376c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_243770:
    // 0x243770: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x243770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x243774: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x243774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x243778: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x243778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x24377c: 0x0  nop
    ctx->pc = 0x24377cu;
    // NOP
    // 0x243780: 0x0  nop
    ctx->pc = 0x243780u;
    // NOP
    // 0x243784: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x243784u;
    {
        const bool branch_taken_0x243784 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x243784) {
            ctx->pc = 0x243770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243770;
        }
    }
    ctx->pc = 0x24378Cu;
    // 0x24378c: 0xc080d84  jal         func_203610
    ctx->pc = 0x24378Cu;
    SET_GPR_U32(ctx, 31, 0x243794u);
    ctx->pc = 0x243790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24378Cu;
    // 0x243790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203610u, 0x24378Cu, 0x243794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243794u;
label_243794:
    // 0x243794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243798: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x243798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24379c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24379Cu;
    {
        const bool branch_taken_0x24379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24379Cu;
        // 0x2437a0: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24379c) {
            ctx->pc = 0x2437CCu;
            goto label_2437cc;
        }
    }
    ctx->pc = 0x2437A4u;
    // 0x2437a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2437a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2437a8: 0x244236f0  addiu       $v0, $v0, 0x36F0
    ctx->pc = 0x2437a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14064));
    // 0x2437ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2437acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2437b0:
    // 0x2437b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2437b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2437b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2437b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2437b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2437bc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2437bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2437c0: 0x0  nop
    ctx->pc = 0x2437c0u;
    // NOP
    // 0x2437c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2437C4u;
    {
        const bool branch_taken_0x2437c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2437c4) {
            ctx->pc = 0x2437B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2437b0;
        }
    }
    ctx->pc = 0x2437CCu;
label_2437cc:
    // 0x2437cc: 0xc080d84  jal         func_203610
    ctx->pc = 0x2437CCu;
    SET_GPR_U32(ctx, 31, 0x2437D4u);
    ctx->pc = 0x2437D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437CCu;
    // 0x2437d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203610u, 0x2437CCu, 0x2437D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437D4u;
label_2437d4:
    // 0x2437d4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2437d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2437d8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2437d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2437dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2437DCu;
    {
        const bool branch_taken_0x2437dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437DCu;
        // 0x2437e0: 0x8f86b814  lw          $a2, -0x47EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437dc) {
            ctx->pc = 0x243810u;
            goto label_243810;
        }
    }
    ctx->pc = 0x2437E4u;
    // 0x2437e4: 0x0  nop
    ctx->pc = 0x2437e4u;
    // NOP
label_2437e8:
    // 0x2437e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2437ec: 0x260336f0  addiu       $v1, $s0, 0x36F0
    ctx->pc = 0x2437ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14064));
    // 0x2437f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2437f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2437f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2437f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2437f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2437f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2437fc: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x2437fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243800: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x243800u;
    {
        const bool branch_taken_0x243800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243800) {
            ctx->pc = 0x2437E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2437e8;
        }
    }
    ctx->pc = 0x243808u;
    // 0x243808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243808u;
    {
        const bool branch_taken_0x243808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243808u;
        // 0x24380c: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243808) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x243810u;
label_243810:
    // 0x243810: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x243810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_243814:
    // 0x243814: 0x8f85b814  lw          $a1, -0x47EC($gp)
    ctx->pc = 0x243814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948884)));
    // 0x243818: 0x244736f0  addiu       $a3, $v0, 0x36F0
    ctx->pc = 0x243818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14064));
    // 0x24381c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24381Cu;
    {
        const bool branch_taken_0x24381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24381Cu;
        // 0x243820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24381c) {
            ctx->pc = 0x24382Cu;
            goto label_24382c;
        }
    }
    ctx->pc = 0x243824u;
    // 0x243824: 0x0  nop
    ctx->pc = 0x243824u;
    // NOP
label_243828:
    // 0x243828: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24382c:
    // 0x24382c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x24382cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243830: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x243830u;
    {
        const bool branch_taken_0x243830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243830u;
        // 0x243834: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243830) {
            ctx->pc = 0x243864u;
            goto label_243864;
        }
    }
    ctx->pc = 0x243838u;
    // 0x243838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24383c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x24383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243840) {
            ctx->pc = 0x243850u;
            goto label_243850;
        }
    }
    ctx->pc = 0x243848u;
    // 0x243848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24384c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243850:
    // 0x243850: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x243854: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x243854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x243858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24385c: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x24385Cu;
    {
        const bool branch_taken_0x24385c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24385Cu;
        // 0x243860: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24385c) {
            ctx->pc = 0x243828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243828;
        }
    }
    ctx->pc = 0x243864u;
label_243864:
    // 0x243864: 0x260436f0  addiu       $a0, $s0, 0x36F0
    ctx->pc = 0x243864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14064));
    // 0x243868: 0xaf85b814  sw          $a1, -0x47EC($gp)
    ctx->pc = 0x243868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948884), GPR_U32(ctx, 5));
    // 0x24386c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x24386cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x243870: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x243874: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x243874u;
    {
        const bool branch_taken_0x243874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243874u;
        // 0x243878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243874) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x24387Cu;
    // 0x24387c: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x243880: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x243884: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x243884u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x243888: 0x24a53730  addiu       $a1, $a1, 0x3730
    ctx->pc = 0x243888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14128));
    // 0x24388c: 0xc082306  jal         func_208C18
    ctx->pc = 0x24388Cu;
    SET_GPR_U32(ctx, 31, 0x243894u);
    ctx->pc = 0x243890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24388Cu;
    // 0x243890: 0x24c63750  addiu       $a2, $a2, 0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C18u, 0x24388Cu, 0x243894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243894u;
label_243894:
    // 0x243894: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x243894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x243898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x243898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24389c: 0xaf82b80c  sw          $v0, -0x47F4($gp)
    ctx->pc = 0x24389cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948876), GPR_U32(ctx, 2));
    // 0x2438a0: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A0u;
        // 0x2438a4: 0xaf83a0a8  sw          $v1, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x2438A8u;
label_2438a8:
    // 0x2438a8: 0xc0823ac  jal         func_208EB0
    ctx->pc = 0x2438A8u;
    SET_GPR_U32(ctx, 31, 0x2438B0u);
    ctx->pc = 0x208EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EB0u, 0x2438A8u, 0x2438B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2438b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438b4: 0x10600193  beqz        $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x2438B4u;
    {
        const bool branch_taken_0x2438b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438B4u;
        // 0x2438b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438b4) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x2438BCu;
    // 0x2438bc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2438BCu;
    {
        const bool branch_taken_0x2438bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438BCu;
        // 0x2438c0: 0x8f82b7e0  lw          $v0, -0x4820($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438bc) {
            ctx->pc = 0x2438F0u;
            goto label_2438f0;
        }
    }
    ctx->pc = 0x2438C4u;
    // 0x2438c4: 0x8f85b814  lw          $a1, -0x47EC($gp)
    ctx->pc = 0x2438c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948884)));
    // 0x2438c8: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2438c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2438cc: 0x248436f0  addiu       $a0, $a0, 0x36F0
    ctx->pc = 0x2438ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
    // 0x2438d0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2438d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2438d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2438d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2438d8: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x2438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x2438dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2438e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2438e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2438e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2438e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2438e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2438ec: 0x8f82b7e0  lw          $v0, -0x4820($gp)
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948832)));
label_2438f0:
    // 0x2438f0: 0x8f83b80c  lw          $v1, -0x47F4($gp)
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948876)));
    // 0x2438f4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2438f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2438f8: 0xaf84b7e0  sw          $a0, -0x4820($gp)
    ctx->pc = 0x2438f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948832), GPR_U32(ctx, 4));
    // 0x2438fc: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x2438FCu;
    {
        const bool branch_taken_0x2438fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438FCu;
        // 0x243900: 0xaf83a0a8  sw          $v1, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438fc) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243904u;
label_243904:
    // 0x243904: 0x8f84b818  lw          $a0, -0x47E8($gp)
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243908: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x243908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x24390c: 0xc08230e  jal         func_208C38
    ctx->pc = 0x24390Cu;
    SET_GPR_U32(ctx, 31, 0x243914u);
    ctx->pc = 0x243910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24390Cu;
    // 0x243910: 0x42083  sra         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C38u, 0x24390Cu, 0x243914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243914u;
label_243914:
    // 0x243914: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x243914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243918: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x24391c: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
    // 0x243920: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x243924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24392c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243930: 0x5485000d  bnel        $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x243930u;
    {
        const bool branch_taken_0x243930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x243930) {
            ctx->pc = 0x243934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243930u;
            // 0x243934: 0x8f83a0c8  lw          $v1, -0x5F38($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243968u;
            goto label_243968;
        }
    }
    ctx->pc = 0x243938u;
    // 0x243938: 0x8f82b7f4  lw          $v0, -0x480C($gp)
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948852)));
    // 0x24393c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24393Cu;
    {
        const bool branch_taken_0x24393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24393Cu;
        // 0x243940: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24393c) {
            ctx->pc = 0x243960u;
            goto label_243960;
        }
    }
    ctx->pc = 0x243944u;
    // 0x243944: 0x8f82a0c8  lw          $v0, -0x5F38($gp)
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243948: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x243948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x24394c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24394Cu;
    {
        const bool branch_taken_0x24394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24394Cu;
        // 0x243950: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24394c) {
            ctx->pc = 0x243960u;
            goto label_243960;
        }
    }
    ctx->pc = 0x243954u;
    // 0x243954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243958: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x243958u;
    {
        const bool branch_taken_0x243958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243958u;
        // 0x24395c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243958) {
            ctx->pc = 0x243C3Cu;
            goto label_243c3c;
        }
    }
    ctx->pc = 0x243960u;
label_243960:
    // 0x243960: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x243960u;
    {
        const bool branch_taken_0x243960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243960u;
        // 0x243964: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243960) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243968u;
label_243968:
    // 0x243968: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24396c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x24396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x243970: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x243974: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x243974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x243978: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x243978u;
    {
        const bool branch_taken_0x243978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243978u;
        // 0x24397c: 0xaf82a0c8  sw          $v0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243978) {
            ctx->pc = 0x24398Cu;
            goto label_24398c;
        }
    }
    ctx->pc = 0x243980u;
    // 0x243980: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243984: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x243984u;
    {
        const bool branch_taken_0x243984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243984u;
        // 0x243988: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243984) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x24398Cu;
label_24398c:
    // 0x24398c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x243990: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x243990u;
    {
        const bool branch_taken_0x243990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243990u;
        // 0x243994: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243990) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243998u;
label_243998:
    // 0x243998: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24399c: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x24399cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x2439a0: 0x26522c18  addiu       $s2, $s2, 0x2C18
    ctx->pc = 0x2439a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x2439a4: 0x3c1301fc  lui         $s3, 0x1FC
    ctx->pc = 0x2439a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
    // 0x2439a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2439a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2439ac: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2439acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2439b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2439b4: 0x267333f0  addiu       $s3, $s3, 0x33F0
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 13296));
    // 0x2439b8: 0x26101eb0  addiu       $s0, $s0, 0x1EB0
    ctx->pc = 0x2439b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7856));
    // 0x2439bc: 0xc090d0a  jal         func_243428
    ctx->pc = 0x2439BCu;
    SET_GPR_U32(ctx, 31, 0x2439C4u);
    ctx->pc = 0x2439C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439BCu;
    // 0x2439c0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243428u, 0x2439BCu, 0x2439C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439C4u;
label_2439c4:
    // 0x2439c4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2439c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2439c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439cc: 0x8e2505b8  lw          $a1, 0x5B8($s1)
    ctx->pc = 0x2439ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x2439d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2439d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2439d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2439dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2439dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2439e0: 0x8c4805c0  lw          $t0, 0x5C0($v0)
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1472)));
    // 0x2439e4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2439E4u;
    SET_GPR_U32(ctx, 31, 0x2439ECu);
    ctx->pc = 0x2439E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439E4u;
    // 0x2439e8: 0x8c4705bc  lw          $a3, 0x5BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2439E4u, 0x2439ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439ECu;
label_2439ec:
    // 0x2439ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2439ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439f0: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x2439F0u;
    SET_GPR_U32(ctx, 31, 0x2439F8u);
    ctx->pc = 0x2439F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439F0u;
    // 0x2439f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x2439F0u, 0x2439F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439F8u;
label_2439f8:
    // 0x2439f8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2439f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2439fc: 0x8f84b7ec  lw          $a0, -0x4814($gp)
    ctx->pc = 0x2439fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    // 0x243a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243a04: 0xaf93b7d4  sw          $s3, -0x482C($gp)
    ctx->pc = 0x243a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948820), GPR_U32(ctx, 19));
    // 0x243a08: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x243a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x243a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243a10: 0x8c4505c4  lw          $a1, 0x5C4($v0)
    ctx->pc = 0x243a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x243a14: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x243A14u;
    SET_GPR_U32(ctx, 31, 0x243A1Cu);
    ctx->pc = 0x243A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A14u;
    // 0x243a18: 0xaf85b7d8  sw          $a1, -0x4828($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948824), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x243A14u, 0x243A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A1Cu;
label_243a1c:
    // 0x243a1c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x243a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x243a20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x243A20u;
    {
        const bool branch_taken_0x243a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A20u;
        // 0x243a24: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a20) {
            ctx->pc = 0x243A74u;
            goto label_243a74;
        }
    }
    ctx->pc = 0x243A28u;
    // 0x243a28: 0xc081546  jal         func_205518
    ctx->pc = 0x243A28u;
    SET_GPR_U32(ctx, 31, 0x243A30u);
    ctx->pc = 0x243A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A28u;
    // 0x243a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x243A28u, 0x243A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A30u;
label_243a30:
    // 0x243a30: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x243a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243a34: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x243a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x243a38: 0xc082312  jal         func_208C48
    ctx->pc = 0x243A38u;
    SET_GPR_U32(ctx, 31, 0x243A40u);
    ctx->pc = 0x243A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A38u;
    // 0x243a3c: 0xaf83a0c8  sw          $v1, -0x5F38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C48u, 0x243A38u, 0x243A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A40u;
label_243a40:
    // 0x243a40: 0x8f83b818  lw          $v1, -0x47E8($gp)
    ctx->pc = 0x243a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243a44: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x243a48: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x243a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x243a4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x243a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243a54: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x243a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243a5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x243a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243a60: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x243a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x243a64: 0xaf85b80c  sw          $a1, -0x47F4($gp)
    ctx->pc = 0x243a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948876), GPR_U32(ctx, 5));
    // 0x243a68: 0xaf84b810  sw          $a0, -0x47F0($gp)
    ctx->pc = 0x243a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948880), GPR_U32(ctx, 4));
    // 0x243a6c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x243A6Cu;
    {
        const bool branch_taken_0x243a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A6Cu;
        // 0x243a70: 0xaf80a0a8  sw          $zero, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a6c) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243A74u;
label_243a74:
    // 0x243a74: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x243A74u;
    SET_GPR_U32(ctx, 31, 0x243A7Cu);
    ctx->pc = 0x243A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A74u;
    // 0x243a78: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x243A74u, 0x243A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A7Cu;
label_243a7c:
    // 0x243a7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x243a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x243a80: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x243A80u;
    {
        const bool branch_taken_0x243a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A80u;
        // 0x243a84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a80) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243A88u;
label_243a88:
    // 0x243a88: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x243A88u;
    {
        const bool branch_taken_0x243a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A88u;
        // 0x243a8c: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a88) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243A90u;
label_243a90:
    // 0x243a90: 0x8f87a0c8  lw          $a3, -0x5F38($gp)
    ctx->pc = 0x243a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243a94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x243a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x243a98: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x243a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x243a9c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x243aa0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x243aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x243aa4: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x243aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x243aa8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x243aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x243aac: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x243aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x243ab0: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x243ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x243ab4: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x243ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x243ab8: 0xaf87a0c8  sw          $a3, -0x5F38($gp)
    ctx->pc = 0x243ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 7));
    // 0x243abc: 0x24843710  addiu       $a0, $a0, 0x3710
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14096));
    // 0x243ac0: 0x24a53730  addiu       $a1, $a1, 0x3730
    ctx->pc = 0x243ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14128));
    // 0x243ac4: 0xc082306  jal         func_208C18
    ctx->pc = 0x243AC4u;
    SET_GPR_U32(ctx, 31, 0x243ACCu);
    ctx->pc = 0x243AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AC4u;
    // 0x243ac8: 0x24c63750  addiu       $a2, $a2, 0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C18u, 0x243AC4u, 0x243ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ACCu;
label_243acc:
    // 0x243acc: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x243ACCu;
    {
        const bool branch_taken_0x243acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ACCu;
        // 0x243ad0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243acc) {
            ctx->pc = 0x243DC8u;
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243AD4u;
label_243ad4:
    // 0x243ad4: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x243ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x243ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243adc: 0x26103670  addiu       $s0, $s0, 0x3670
    ctx->pc = 0x243adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13936));
    // 0x243ae0: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x243AE0u;
    SET_GPR_U32(ctx, 31, 0x243AE8u);
    ctx->pc = 0x243AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE0u;
    // 0x243ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x243AE0u, 0x243AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AE8u;
label_243ae8:
    // 0x243ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243aec: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x243AECu;
    SET_GPR_U32(ctx, 31, 0x243AF4u);
    ctx->pc = 0x243AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AECu;
    // 0x243af0: 0x27a40015  addiu       $a0, $sp, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x243AECu, 0x243AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF4u;
label_243af4:
    // 0x243af4: 0xa3a0002a  sb          $zero, 0x2A($sp)
    ctx->pc = 0x243af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x243af8: 0xc08235c  jal         func_208D70
    ctx->pc = 0x243AF8u;
    SET_GPR_U32(ctx, 31, 0x243B00u);
    ctx->pc = 0x243AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AF8u;
    // 0x243afc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208D70u, 0x243AF8u, 0x243B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B00u;
label_243b00:
    // 0x243b00: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x243b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243b04: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x243B04u;
    {
        const bool branch_taken_0x243b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B04u;
        // 0x243b08: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b04) {
            ctx->pc = 0x243DCCu;
            goto label_243dcc;
        }
    }
    ctx->pc = 0x243B0Cu;
label_243b0c:
    // 0x243b0c: 0x8f83b808  lw          $v1, -0x47F8($gp)
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948872)));
    // 0x243b10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x243b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x243b14: 0x1462008c  bne         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x243B14u;
    {
        const bool branch_taken_0x243b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B14u;
        // 0x243b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b14) {
            ctx->pc = 0x243D48u;
            goto label_243d48;
        }
    }
    ctx->pc = 0x243B1Cu;
    // 0x243b1c: 0x8f82b7f4  lw          $v0, -0x480C($gp)
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948852)));
    // 0x243b20: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x243B20u;
    {
        const bool branch_taken_0x243b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B20u;
        // 0x243b24: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b20) {
            ctx->pc = 0x243D44u;
            goto label_243d44;
        }
    }
    ctx->pc = 0x243B28u;
    // 0x243b28: 0x2785b81c  addiu       $a1, $gp, -0x47E4
    ctx->pc = 0x243b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948892));
    // 0x243b2c: 0xc082316  jal         func_208C58
    ctx->pc = 0x243B2Cu;
    SET_GPR_U32(ctx, 31, 0x243B34u);
    ctx->pc = 0x243B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B2Cu;
    // 0x243b30: 0x2484e8a8  addiu       $a0, $a0, -0x1758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C58u, 0x243B2Cu, 0x243B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B34u;
label_243b34:
    // 0x243b34: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x243B34u;
    {
        const bool branch_taken_0x243b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B34u;
        // 0x243b38: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b34) {
            ctx->pc = 0x243DC8u;
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243B3Cu;
label_243b3c:
    // 0x243b3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x243b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243b40: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x243b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x243b44: 0x24483670  addiu       $t0, $v0, 0x3670
    ctx->pc = 0x243b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
    // 0x243b48: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x243b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x243b4c: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x243b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x243b50: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x243b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x243b54: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x243b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x243b58: 0x89070013  lwl         $a3, 0x13($t0)
    ctx->pc = 0x243b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x243b5c: 0x99070010  lwr         $a3, 0x10($t0)
    ctx->pc = 0x243b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x243b60: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x243b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243b64: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x243b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243b68: 0xb3a4008f  sdl         $a0, 0x8F($sp)
    ctx->pc = 0x243b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243b6c: 0xb7a40088  sdr         $a0, 0x88($sp)
    ctx->pc = 0x243b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243b70: 0xaba70093  swl         $a3, 0x93($sp)
    ctx->pc = 0x243b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x243b74: 0xbba70090  swr         $a3, 0x90($sp)
    ctx->pc = 0x243b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x243b78: 0x81030014  lb          $v1, 0x14($t0)
    ctx->pc = 0x243b78u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1FC3684u));
    // 0x243b7c: 0xa3a30094  sb          $v1, 0x94($sp)
    ctx->pc = 0x243b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x243b80: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x243b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x243b84: 0xaf86b820  sw          $a2, -0x47E0($gp)
    ctx->pc = 0x243b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 6));
    // 0x243b88: 0x24a51ec0  addiu       $a1, $a1, 0x1EC0
    ctx->pc = 0x243b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7872));
    // 0x243b8c: 0xa3a00095  sb          $zero, 0x95($sp)
    ctx->pc = 0x243b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x243b90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x243b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x243b94: 0xc0b986a  jal         func_2E61A8
    ctx->pc = 0x243B94u;
    SET_GPR_U32(ctx, 31, 0x243B9Cu);
    ctx->pc = 0x243B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B94u;
    // 0x243b98: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E61A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E61A8u, 0x243B94u, 0x243B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B9Cu;
label_243b9c:
    // 0x243b9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243B9Cu;
    {
        const bool branch_taken_0x243b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B9Cu;
        // 0x243ba0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b9c) {
            ctx->pc = 0x243BCCu;
            goto label_243bcc;
        }
    }
    ctx->pc = 0x243BA4u;
    // 0x243ba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ba8: 0xc081e8c  jal         func_207A30
    ctx->pc = 0x243BA8u;
    SET_GPR_U32(ctx, 31, 0x243BB0u);
    ctx->pc = 0x243BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BA8u;
    // 0x243bac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A30u, 0x243BA8u, 0x243BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BB0u;
label_243bb0:
    // 0x243bb0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243bb4: 0x8f83b820  lw          $v1, -0x47E0($gp)
    ctx->pc = 0x243bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948896)));
    // 0x243bb8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x243bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243bbc: 0xc0881e4  jal         func_220790
    ctx->pc = 0x243BBCu;
    SET_GPR_U32(ctx, 31, 0x243BC4u);
    ctx->pc = 0x243BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BBCu;
    // 0x243bc0: 0xaf86b820  sw          $a2, -0x47E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x243BBCu, 0x243BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BC4u;
label_243bc4:
    // 0x243bc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x243BC4u;
    {
        const bool branch_taken_0x243bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BC4u;
        // 0x243bc8: 0x8f86b820  lw          $a2, -0x47E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bc4) {
            ctx->pc = 0x243BECu;
            goto label_243bec;
        }
    }
    ctx->pc = 0x243BCCu;
label_243bcc:
    // 0x243bcc: 0xc081e8c  jal         func_207A30
    ctx->pc = 0x243BCCu;
    SET_GPR_U32(ctx, 31, 0x243BD4u);
    ctx->pc = 0x243BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BCCu;
    // 0x243bd0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A30u, 0x243BCCu, 0x243BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BD4u;
label_243bd4:
    // 0x243bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bd8: 0x8f83b820  lw          $v1, -0x47E0($gp)
    ctx->pc = 0x243bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948896)));
    // 0x243bdc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x243bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243be0: 0xc094e3c  jal         func_2538F0
    ctx->pc = 0x243BE0u;
    SET_GPR_U32(ctx, 31, 0x243BE8u);
    ctx->pc = 0x243BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BE0u;
    // 0x243be4: 0xaf86b820  sw          $a2, -0x47E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538F0u, 0x243BE0u, 0x243BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BE8u;
label_243be8:
    // 0x243be8: 0x8f86b820  lw          $a2, -0x47E0($gp)
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948896)));
label_243bec:
    // 0x243bec: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x243becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x243bf0: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x243bf4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x243bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x243bf8: 0xaf86b820  sw          $a2, -0x47E0($gp)
    ctx->pc = 0x243bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 6));
    // 0x243bfc: 0x8f84b818  lw          $a0, -0x47E8($gp)
    ctx->pc = 0x243bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243c00: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x243c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x243c04: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x243c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x243c08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x243c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x243c0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x243c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x243c10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243c14: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x243c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x243c18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x243C18u;
    {
        const bool branch_taken_0x243c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C18u;
        // 0x243c1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c18) {
            ctx->pc = 0x243C38u;
            goto label_243c38;
        }
    }
    ctx->pc = 0x243C20u;
    // 0x243c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x243c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c28: 0xc08231c  jal         func_208C70
    ctx->pc = 0x243C28u;
    SET_GPR_U32(ctx, 31, 0x243C30u);
    ctx->pc = 0x243C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C28u;
    // 0x243c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C70u, 0x243C28u, 0x243C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C30u;
label_243c30:
    // 0x243c30: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x243C30u;
    {
        const bool branch_taken_0x243c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C30u;
        // 0x243c34: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c30) {
            ctx->pc = 0x243DC8u;
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243C38u;
label_243c38:
    // 0x243c38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_243c3c:
    // 0x243c3c: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x243c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x243c40: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x243C40u;
    {
        const bool branch_taken_0x243c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C40u;
        // 0x243c44: 0xaf83b808  sw          $v1, -0x47F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948872), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c40) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243C48u;
label_243c48:
    // 0x243c48: 0x8f83b818  lw          $v1, -0x47E8($gp)
    ctx->pc = 0x243c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243c4c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x243c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x243c50: 0x8f84a0c8  lw          $a0, -0x5F38($gp)
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243c54: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x243c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x243c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243c5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x243c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243c60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243c64: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x243c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x243c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243c6c: 0xaf84a0c8  sw          $a0, -0x5F38($gp)
    ctx->pc = 0x243c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 4));
    // 0x243c70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x243c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x243c74: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x243C74u;
    {
        const bool branch_taken_0x243c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C74u;
        // 0x243c78: 0xaf85a0a8  sw          $a1, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c74) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243C7Cu;
label_243c7c:
    // 0x243c7c: 0x8f82b7f4  lw          $v0, -0x480C($gp)
    ctx->pc = 0x243c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948852)));
    // 0x243c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243C80u;
    {
        const bool branch_taken_0x243c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C80u;
        // 0x243c84: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c80) {
            ctx->pc = 0x243C94u;
            goto label_243c94;
        }
    }
    ctx->pc = 0x243C88u;
    // 0x243c88: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x243c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x243c8c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x243C8Cu;
    {
        const bool branch_taken_0x243c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C8Cu;
        // 0x243c90: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c8c) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243C94u;
label_243c94:
    // 0x243c94: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x243c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x243c98: 0x24473670  addiu       $a3, $v0, 0x3670
    ctx->pc = 0x243c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
    // 0x243c9c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x243c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x243ca0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x243ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x243ca4: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x243ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x243ca8: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x243ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x243cac: 0x88e60013  lwl         $a2, 0x13($a3)
    ctx->pc = 0x243cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x243cb0: 0x98e60010  lwr         $a2, 0x10($a3)
    ctx->pc = 0x243cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x243cb4: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x243cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243cb8: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x243cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243cbc: 0xb3a4010f  sdl         $a0, 0x10F($sp)
    ctx->pc = 0x243cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243cc0: 0xb7a40108  sdr         $a0, 0x108($sp)
    ctx->pc = 0x243cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243cc4: 0xaba60113  swl         $a2, 0x113($sp)
    ctx->pc = 0x243cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x243cc8: 0xbba60110  swr         $a2, 0x110($sp)
    ctx->pc = 0x243cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x243ccc: 0x80e30014  lb          $v1, 0x14($a3)
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x243cd0: 0xa3a30114  sb          $v1, 0x114($sp)
    ctx->pc = 0x243cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 276), (uint8_t)GPR_U32(ctx, 3));
    // 0x243cd4: 0x24a51ec0  addiu       $a1, $a1, 0x1EC0
    ctx->pc = 0x243cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7872));
    // 0x243cd8: 0xa3a00115  sb          $zero, 0x115($sp)
    ctx->pc = 0x243cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x243cdc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x243ce0: 0xc0b986a  jal         func_2E61A8
    ctx->pc = 0x243CE0u;
    SET_GPR_U32(ctx, 31, 0x243CE8u);
    ctx->pc = 0x243CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CE0u;
    // 0x243ce4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E61A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E61A8u, 0x243CE0u, 0x243CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CE8u;
label_243ce8:
    // 0x243ce8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243CE8u;
    {
        const bool branch_taken_0x243ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ce8) {
            ctx->pc = 0x243D00u;
            goto label_243d00;
        }
    }
    ctx->pc = 0x243CF0u;
    // 0x243cf0: 0xc0881e4  jal         func_220790
    ctx->pc = 0x243CF0u;
    SET_GPR_U32(ctx, 31, 0x243CF8u);
    ctx->pc = 0x243CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CF0u;
    // 0x243cf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220790u, 0x243CF0u, 0x243CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CF8u;
label_243cf8:
    // 0x243cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x243CF8u;
    {
        const bool branch_taken_0x243cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CF8u;
        // 0x243cfc: 0x244203ff  addiu       $v0, $v0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cf8) {
            ctx->pc = 0x243D0Cu;
            goto label_243d0c;
        }
    }
    ctx->pc = 0x243D00u;
label_243d00:
    // 0x243d00: 0xc094e3c  jal         func_2538F0
    ctx->pc = 0x243D00u;
    SET_GPR_U32(ctx, 31, 0x243D08u);
    ctx->pc = 0x243D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D00u;
    // 0x243d04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538F0u, 0x243D00u, 0x243D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D08u;
label_243d08:
    // 0x243d08: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_243d0c:
    // 0x243d0c: 0x23282  srl         $a2, $v0, 10
    ctx->pc = 0x243d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x243d10: 0xaf86b820  sw          $a2, -0x47E0($gp)
    ctx->pc = 0x243d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948896), GPR_U32(ctx, 6));
    // 0x243d14: 0xc082340  jal         func_208D00
    ctx->pc = 0x243D14u;
    SET_GPR_U32(ctx, 31, 0x243D1Cu);
    ctx->pc = 0x243D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D14u;
    // 0x243d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208D00u, 0x243D14u, 0x243D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D1Cu;
label_243d1c:
    // 0x243d1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x243D1Cu;
    {
        const bool branch_taken_0x243d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D1Cu;
        // 0x243d20: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d1c) {
            ctx->pc = 0x243DC8u;
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243D24u;
label_243d24:
    // 0x243d24: 0x8f82a0c8  lw          $v0, -0x5F38($gp)
    ctx->pc = 0x243d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x243d28: 0x8f83b7f4  lw          $v1, -0x480C($gp)
    ctx->pc = 0x243d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948852)));
    // 0x243d2c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x243d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x243d30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x243D30u;
    {
        const bool branch_taken_0x243d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D30u;
        // 0x243d34: 0xaf82a0c8  sw          $v0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d30) {
            ctx->pc = 0x243D50u;
            goto label_243d50;
        }
    }
    ctx->pc = 0x243D38u;
    // 0x243d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243d3c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x243D3Cu;
    {
        const bool branch_taken_0x243d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D3Cu;
        // 0x243d40: 0x3c0401fc  lui         $a0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d3c) {
            ctx->pc = 0x243D70u;
            goto label_243d70;
        }
    }
    ctx->pc = 0x243D44u;
label_243d44:
    // 0x243d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243d48:
    // 0x243d48: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x243D48u;
    {
        const bool branch_taken_0x243d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D48u;
        // 0x243d4c: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d48) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243D50u;
label_243d50:
    // 0x243d50: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x243d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x243d54: 0x8f85b7f8  lw          $a1, -0x4808($gp)
    ctx->pc = 0x243d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948856)));
    // 0x243d58: 0x8f86b7fc  lw          $a2, -0x4804($gp)
    ctx->pc = 0x243d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948860)));
    // 0x243d5c: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x243d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x243d60: 0xc082368  jal         func_208DA0
    ctx->pc = 0x243D60u;
    SET_GPR_U32(ctx, 31, 0x243D68u);
    ctx->pc = 0x243D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D60u;
    // 0x243d64: 0x8f87b800  lw          $a3, -0x4800($gp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208DA0u, 0x243D60u, 0x243D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D68u;
label_243d68:
    // 0x243d68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x243D68u;
    {
        const bool branch_taken_0x243d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D68u;
        // 0x243d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d68) {
            ctx->pc = 0x243DC8u;
            goto label_243dc8;
        }
    }
    ctx->pc = 0x243D70u;
label_243d70:
    // 0x243d70: 0xc08235c  jal         func_208D70
    ctx->pc = 0x243D70u;
    SET_GPR_U32(ctx, 31, 0x243D78u);
    ctx->pc = 0x243D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D70u;
    // 0x243d74: 0x24843670  addiu       $a0, $a0, 0x3670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208D70u, 0x243D70u, 0x243D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D78u;
label_243d78:
    // 0x243d78: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x243d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x243d7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x243D7Cu;
    {
        const bool branch_taken_0x243d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D7Cu;
        // 0x243d80: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d7c) {
            ctx->pc = 0x243DCCu;
            goto label_243dcc;
        }
    }
    ctx->pc = 0x243D84u;
label_243d84:
    // 0x243d84: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x243d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x243d88: 0xaf80b804  sw          $zero, -0x47FC($gp)
    ctx->pc = 0x243d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948868), GPR_U32(ctx, 0));
    // 0x243d8c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x243D8Cu;
    {
        const bool branch_taken_0x243d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D8Cu;
        // 0x243d90: 0xaf82a0a8  sw          $v0, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d8c) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243D94u;
label_243d94:
    // 0x243d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243d98: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x243d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x243d9c: 0xaf82b804  sw          $v0, -0x47FC($gp)
    ctx->pc = 0x243d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948868), GPR_U32(ctx, 2));
    // 0x243da0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x243DA0u;
    {
        const bool branch_taken_0x243da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DA0u;
        // 0x243da4: 0xaf83a0a8  sw          $v1, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243da0) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243DA8u;
label_243da8:
    // 0x243da8: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x243da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x243dac: 0x8f85b7f8  lw          $a1, -0x4808($gp)
    ctx->pc = 0x243dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948856)));
    // 0x243db0: 0x8f86b7fc  lw          $a2, -0x4804($gp)
    ctx->pc = 0x243db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948860)));
    // 0x243db4: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x243db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x243db8: 0x8f87b804  lw          $a3, -0x47FC($gp)
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948868)));
    // 0x243dbc: 0xc082382  jal         func_208E08
    ctx->pc = 0x243DBCu;
    SET_GPR_U32(ctx, 31, 0x243DC4u);
    ctx->pc = 0x243DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DBCu;
    // 0x243dc0: 0x8f88b800  lw          $t0, -0x4800($gp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208E08u, 0x243DBCu, 0x243DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DC4u;
label_243dc4:
    // 0x243dc4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x243dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_243dc8:
    // 0x243dc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243dcc:
    // 0x243dcc: 0xaf82b80c  sw          $v0, -0x47F4($gp)
    ctx->pc = 0x243dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948876), GPR_U32(ctx, 2));
    // 0x243dd0: 0xaf83b810  sw          $v1, -0x47F0($gp)
    ctx->pc = 0x243dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948880), GPR_U32(ctx, 3));
    // 0x243dd4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x243DD4u;
    {
        const bool branch_taken_0x243dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD4u;
        // 0x243dd8: 0xaf80a0a8  sw          $zero, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dd4) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243DDCu;
label_243ddc:
    // 0x243ddc: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243de0: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x243de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x243de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243de8: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x243de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
    // 0x243dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243df0: 0xaf84a0a8  sw          $a0, -0x5F58($gp)
    ctx->pc = 0x243df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 4));
    // 0x243df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243df8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x243DF8u;
    {
        const bool branch_taken_0x243df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF8u;
        // 0x243dfc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243df8) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243E00u;
label_243e00:
    // 0x243e00: 0x8f84b7e0  lw          $a0, -0x4820($gp)
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948832)));
    // 0x243e04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x243e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x243e08: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x243E08u;
    {
        const bool branch_taken_0x243e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E08u;
        // 0x243e0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e08) {
            ctx->pc = 0x243E50u;
            goto label_243e50;
        }
    }
    ctx->pc = 0x243E10u;
    // 0x243e10: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x243e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243e14: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x243e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x243e18: 0x24843710  addiu       $a0, $a0, 0x3710
    ctx->pc = 0x243e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14096));
    // 0x243e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243e24: 0x3c0601fc  lui         $a2, 0x1FC
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)508 << 16));
    // 0x243e28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x243e2c: 0x24c63750  addiu       $a2, $a2, 0x3750
    ctx->pc = 0x243e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14160));
    // 0x243e30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x243e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x243e34: 0xc082306  jal         func_208C18
    ctx->pc = 0x243E34u;
    SET_GPR_U32(ctx, 31, 0x243E3Cu);
    ctx->pc = 0x243E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E34u;
    // 0x243e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C18u, 0x243E34u, 0x243E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E3Cu;
label_243e3c:
    // 0x243e3c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x243e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x243e40: 0xaf80b7e0  sw          $zero, -0x4820($gp)
    ctx->pc = 0x243e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948832), GPR_U32(ctx, 0));
    // 0x243e44: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x243e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x243e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_243e50:
    // 0x243e50: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x243E50u;
    {
        const bool branch_taken_0x243e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E50u;
        // 0x243e54: 0xaf84b7e0  sw          $a0, -0x4820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948832), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e50) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0xc0823ac  jal         func_208EB0
    ctx->pc = 0x243E58u;
    SET_GPR_U32(ctx, 31, 0x243E60u);
    ctx->pc = 0x208EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EB0u, 0x243E58u, 0x243E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E60u;
label_243e60:
    // 0x243e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e64: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x243E64u;
    {
        const bool branch_taken_0x243e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E64u;
        // 0x243e68: 0xaf85b808  sw          $a1, -0x47F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e64) {
            ctx->pc = 0x243F04u;
            goto label_243f04;
        }
    }
    ctx->pc = 0x243E6Cu;
    // 0x243e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e70: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x243E70u;
    {
        const bool branch_taken_0x243e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E70u;
        // 0x243e74: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e70) {
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243E78u;
    // 0x243e78: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x243e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243e7c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x243e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x243e80: 0x24633750  addiu       $v1, $v1, 0x3750
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14160));
    // 0x243e84: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x243e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x243e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x243e8c: 0xaf84a0a8  sw          $a0, -0x5F58($gp)
    ctx->pc = 0x243e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 4));
    // 0x243e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243e94: 0xaf85b7dc  sw          $a1, -0x4824($gp)
    ctx->pc = 0x243e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948828), GPR_U32(ctx, 5));
    // 0x243e98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243e9c: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x243E9Cu;
    {
        const bool branch_taken_0x243e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x243EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E9Cu;
        // 0x243ea0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e9c) {
            ctx->pc = 0x243EDCu;
            goto label_243edc;
        }
    }
    ctx->pc = 0x243EA4u;
    // 0x243ea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA4u;
        // 0x243ea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243EBCu;
            goto label_243ebc;
        }
    }
    ctx->pc = 0x243EACu;
    // 0x243eac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x243EACu;
    {
        const bool branch_taken_0x243eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EACu;
        // 0x243eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eac) {
            ctx->pc = 0x243ED4u;
            goto label_243ed4;
        }
    }
    ctx->pc = 0x243EB4u;
    // 0x243eb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x243EB4u;
    {
        const bool branch_taken_0x243eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EB4u;
        // 0x243eb8: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eb4) {
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243EBCu;
label_243ebc:
    // 0x243ebc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243EBCu;
    {
        const bool branch_taken_0x243ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EBCu;
        // 0x243ec0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ebc) {
            ctx->pc = 0x243EE4u;
            goto label_243ee4;
        }
    }
    ctx->pc = 0x243EC4u;
    // 0x243ec4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243EC4u;
    {
        const bool branch_taken_0x243ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC4u;
        // 0x243ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ec4) {
            ctx->pc = 0x243EECu;
            goto label_243eec;
        }
    }
    ctx->pc = 0x243ECCu;
    // 0x243ecc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x243ECCu;
    {
        const bool branch_taken_0x243ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ECCu;
        // 0x243ed0: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ecc) {
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243ED4u;
label_243ed4:
    // 0x243ed4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x243ED4u;
    {
        const bool branch_taken_0x243ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED4u;
        // 0x243ed8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ed4) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243EDCu;
label_243edc:
    // 0x243edc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243EDCu;
    {
        const bool branch_taken_0x243edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EDCu;
        // 0x243ee0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243edc) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243EE4u;
label_243ee4:
    // 0x243ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x243EE4u;
    {
        const bool branch_taken_0x243ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EE4u;
        // 0x243ee8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ee4) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243EECu;
label_243eec:
    // 0x243eec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x243EECu;
    {
        const bool branch_taken_0x243eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EECu;
        // 0x243ef0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eec) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243EF4u;
label_243ef4:
    // 0x243ef4: 0xaf82b7dc  sw          $v0, -0x4824($gp)
    ctx->pc = 0x243ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948828), GPR_U32(ctx, 2));
    // 0x243ef8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x243ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243EFCu;
    {
        const bool branch_taken_0x243efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EFCu;
        // 0x243f00: 0xaf83a0a8  sw          $v1, -0x5F58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243efc) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243F04u;
label_243f04:
    // 0x243f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_243f08:
    // 0x243f08: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x243f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x243f0c: 0xdfb301b0  ld          $s3, 0x1B0($sp)
    ctx->pc = 0x243f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x243f10: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x243f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x243f14: 0xdfb10190  ld          $s1, 0x190($sp)
    ctx->pc = 0x243f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x243f18: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x243f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x243f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x243F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F1Cu;
        // 0x243f20: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243F24u;
}
