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

// Function: lvEnd
// Address: 0x226110 - 0x2262c4
void lvEnd_0x226110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvEnd_0x226110");
#endif

    switch (ctx->pc) {
        case 0x22614cu: goto label_22614c;
        case 0x226154u: goto label_226154;
        case 0x22615cu: goto label_22615c;
        case 0x22616cu: goto label_22616c;
        case 0x226174u: goto label_226174;
        case 0x22617cu: goto label_22617c;
        case 0x22618cu: goto label_22618c;
        case 0x226194u: goto label_226194;
        case 0x22619cu: goto label_22619c;
        case 0x2261acu: goto label_2261ac;
        case 0x2261b4u: goto label_2261b4;
        case 0x2261c4u: goto label_2261c4;
        case 0x2261ccu: goto label_2261cc;
        case 0x2261d4u: goto label_2261d4;
        case 0x2261e4u: goto label_2261e4;
        case 0x2261ecu: goto label_2261ec;
        case 0x2261f4u: goto label_2261f4;
        case 0x2261fcu: goto label_2261fc;
        case 0x226204u: goto label_226204;
        case 0x22620cu: goto label_22620c;
        case 0x226214u: goto label_226214;
        case 0x22621cu: goto label_22621c;
        case 0x226224u: goto label_226224;
        case 0x22622cu: goto label_22622c;
        case 0x226234u: goto label_226234;
        case 0x22623cu: goto label_22623c;
        case 0x226244u: goto label_226244;
        case 0x22624cu: goto label_22624c;
        case 0x226254u: goto label_226254;
        case 0x22625cu: goto label_22625c;
        case 0x226264u: goto label_226264;
        case 0x22626cu: goto label_22626c;
        case 0x226274u: goto label_226274;
        case 0x22627cu: goto label_22627c;
        case 0x226284u: goto label_226284;
        case 0x2262a0u: goto label_2262a0;
        case 0x2262a8u: goto label_2262a8;
        case 0x2262b0u: goto label_2262b0;
        case 0x2262b8u: goto label_2262b8;
        default: break;
    }

    ctx->pc = 0x226110u;

    // 0x226110: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x226114: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226118: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x226118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x22611c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x22611cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x226120: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x226120u;
    {
        const bool branch_taken_0x226120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226120u;
        // 0x226124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226120) {
            ctx->pc = 0x2261DCu;
            goto label_2261dc;
        }
    }
    ctx->pc = 0x226128u;
    // 0x226128: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22612c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x226130: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x226134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226138: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22613c: 0x800008  jr          $a0
    ctx->pc = 0x22613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226144u: goto label_226144;
            case 0x226164u: goto label_226164;
            case 0x226184u: goto label_226184;
            case 0x2261A4u: goto label_2261a4;
            case 0x2261BCu: goto label_2261bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22613Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x226144u;
label_226144:
    // 0x226144: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x226144u;
    SET_GPR_U32(ctx, 31, 0x22614Cu);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x226144u, 0x22614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22614Cu;
label_22614c:
    // 0x22614c: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x22614Cu;
    SET_GPR_U32(ctx, 31, 0x226154u);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x22614Cu, 0x226154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226154u;
label_226154:
    // 0x226154: 0xc08bfd0  jal         func_22FF40
    ctx->pc = 0x226154u;
    SET_GPR_U32(ctx, 31, 0x22615Cu);
    ctx->pc = 0x22FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF40u, 0x226154u, 0x22615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22615Cu;
label_22615c:
    // 0x22615c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22615c) {
            ctx->pc = 0x22623Cu;
            goto label_22623c;
        }
    }
    ctx->pc = 0x226164u;
label_226164:
    // 0x226164: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x226164u;
    SET_GPR_U32(ctx, 31, 0x22616Cu);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x226164u, 0x22616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22616Cu;
label_22616c:
    // 0x22616c: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x22616Cu;
    SET_GPR_U32(ctx, 31, 0x226174u);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x22616Cu, 0x226174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226174u;
label_226174:
    // 0x226174: 0xc09054e  jal         func_241538
    ctx->pc = 0x226174u;
    SET_GPR_U32(ctx, 31, 0x22617Cu);
    ctx->pc = 0x241538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241538u, 0x226174u, 0x22617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22617Cu;
label_22617c:
    // 0x22617c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x22617Cu;
    {
        const bool branch_taken_0x22617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22617c) {
            ctx->pc = 0x22623Cu;
            goto label_22623c;
        }
    }
    ctx->pc = 0x226184u;
label_226184:
    // 0x226184: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x226184u;
    SET_GPR_U32(ctx, 31, 0x22618Cu);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x226184u, 0x22618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22618Cu;
label_22618c:
    // 0x22618c: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x22618Cu;
    SET_GPR_U32(ctx, 31, 0x226194u);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x22618Cu, 0x226194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226194u;
label_226194:
    // 0x226194: 0xc09215c  jal         func_248570
    ctx->pc = 0x226194u;
    SET_GPR_U32(ctx, 31, 0x22619Cu);
    ctx->pc = 0x248570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248570u, 0x226194u, 0x22619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22619Cu;
label_22619c:
    // 0x22619c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22619Cu;
    {
        const bool branch_taken_0x22619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22619c) {
            ctx->pc = 0x22623Cu;
            goto label_22623c;
        }
    }
    ctx->pc = 0x2261A4u;
label_2261a4:
    // 0x2261a4: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x2261A4u;
    SET_GPR_U32(ctx, 31, 0x2261ACu);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x2261A4u, 0x2261ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261ACu;
label_2261ac:
    // 0x2261ac: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x2261ACu;
    SET_GPR_U32(ctx, 31, 0x2261B4u);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x2261ACu, 0x2261B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261B4u;
label_2261b4:
    // 0x2261b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2261B4u;
    {
        const bool branch_taken_0x2261b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2261b4) {
            ctx->pc = 0x22623Cu;
            goto label_22623c;
        }
    }
    ctx->pc = 0x2261BCu;
label_2261bc:
    // 0x2261bc: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x2261BCu;
    SET_GPR_U32(ctx, 31, 0x2261C4u);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x2261BCu, 0x2261C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261C4u;
label_2261c4:
    // 0x2261c4: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x2261C4u;
    SET_GPR_U32(ctx, 31, 0x2261CCu);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x2261C4u, 0x2261CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261CCu;
label_2261cc:
    // 0x2261cc: 0xc0ab9a4  jal         func_2AE690
    ctx->pc = 0x2261CCu;
    SET_GPR_U32(ctx, 31, 0x2261D4u);
    ctx->pc = 0x2AE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE690u, 0x2261CCu, 0x2261D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261D4u;
label_2261d4:
    // 0x2261d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2261D4u;
    {
        const bool branch_taken_0x2261d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2261d4) {
            ctx->pc = 0x22623Cu;
            goto label_22623c;
        }
    }
    ctx->pc = 0x2261DCu;
label_2261dc:
    // 0x2261dc: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x2261DCu;
    SET_GPR_U32(ctx, 31, 0x2261E4u);
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x2261DCu, 0x2261E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261E4u;
label_2261e4:
    // 0x2261e4: 0xc0a54a2  jal         func_295288
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x295288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295288u, 0x2261E4u, 0x2261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0xc09def8  jal         func_277BE0
    ctx->pc = 0x2261ECu;
    SET_GPR_U32(ctx, 31, 0x2261F4u);
    ctx->pc = 0x277BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BE0u, 0x2261ECu, 0x2261F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F4u;
label_2261f4:
    // 0x2261f4: 0xc0a138c  jal         func_284E30
    ctx->pc = 0x2261F4u;
    SET_GPR_U32(ctx, 31, 0x2261FCu);
    ctx->pc = 0x284E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E30u, 0x2261F4u, 0x2261FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261FCu;
label_2261fc:
    // 0x2261fc: 0xc0a340c  jal         func_28D030
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x28D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D030u, 0x2261FCu, 0x226204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0xc0a52b0  jal         func_294AC0
    ctx->pc = 0x226204u;
    SET_GPR_U32(ctx, 31, 0x22620Cu);
    ctx->pc = 0x294AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AC0u, 0x226204u, 0x22620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22620Cu;
label_22620c:
    // 0x22620c: 0xc0acd66  jal         func_2B3598
    ctx->pc = 0x22620Cu;
    SET_GPR_U32(ctx, 31, 0x226214u);
    ctx->pc = 0x2B3598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3598u, 0x22620Cu, 0x226214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226214u;
label_226214:
    // 0x226214: 0xc099168  jal         func_2645A0
    ctx->pc = 0x226214u;
    SET_GPR_U32(ctx, 31, 0x22621Cu);
    ctx->pc = 0x2645A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2645A0u, 0x226214u, 0x22621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22621Cu;
label_22621c:
    // 0x22621c: 0xc0a9e8e  jal         func_2A7A38
    ctx->pc = 0x22621Cu;
    SET_GPR_U32(ctx, 31, 0x226224u);
    ctx->pc = 0x2A7A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A38u, 0x22621Cu, 0x226224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226224u;
label_226224:
    // 0x226224: 0xc0959fe  jal         func_2567F8
    ctx->pc = 0x226224u;
    SET_GPR_U32(ctx, 31, 0x22622Cu);
    ctx->pc = 0x2567F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567F8u, 0x226224u, 0x22622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22622Cu;
label_22622c:
    // 0x22622c: 0xc084b3c  jal         func_212CF0
    ctx->pc = 0x22622Cu;
    SET_GPR_U32(ctx, 31, 0x226234u);
    ctx->pc = 0x212CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212CF0u, 0x22622Cu, 0x226234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226234u;
label_226234:
    // 0x226234: 0xc0a89be  jal         func_2A26F8
    ctx->pc = 0x226234u;
    SET_GPR_U32(ctx, 31, 0x22623Cu);
    ctx->pc = 0x2A26F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A26F8u, 0x226234u, 0x22623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22623Cu;
label_22623c:
    // 0x22623c: 0xc0aef26  jal         func_2BBC98
    ctx->pc = 0x22623Cu;
    SET_GPR_U32(ctx, 31, 0x226244u);
    ctx->pc = 0x2BBC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC98u, 0x22623Cu, 0x226244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226244u;
label_226244:
    // 0x226244: 0xc083106  jal         func_20C418
    ctx->pc = 0x226244u;
    SET_GPR_U32(ctx, 31, 0x22624Cu);
    ctx->pc = 0x20C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C418u, 0x226244u, 0x22624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22624Cu;
label_22624c:
    // 0x22624c: 0xc0aa614  jal         func_2A9850
    ctx->pc = 0x22624Cu;
    SET_GPR_U32(ctx, 31, 0x226254u);
    ctx->pc = 0x2A9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9850u, 0x22624Cu, 0x226254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226254u;
label_226254:
    // 0x226254: 0xc0a140e  jal         func_285038
    ctx->pc = 0x226254u;
    SET_GPR_U32(ctx, 31, 0x22625Cu);
    ctx->pc = 0x285038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285038u, 0x226254u, 0x22625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22625Cu;
label_22625c:
    // 0x22625c: 0xc099c5a  jal         func_267168
    ctx->pc = 0x22625Cu;
    SET_GPR_U32(ctx, 31, 0x226264u);
    ctx->pc = 0x267168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267168u, 0x22625Cu, 0x226264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226264u;
label_226264:
    // 0x226264: 0xc0a5aa4  jal         func_296A90
    ctx->pc = 0x226264u;
    SET_GPR_U32(ctx, 31, 0x22626Cu);
    ctx->pc = 0x296A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A90u, 0x226264u, 0x22626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22626Cu;
label_22626c:
    // 0x22626c: 0xc0b3754  jal         func_2CDD50
    ctx->pc = 0x22626Cu;
    SET_GPR_U32(ctx, 31, 0x226274u);
    ctx->pc = 0x2CDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD50u, 0x22626Cu, 0x226274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226274u;
label_226274:
    // 0x226274: 0xc0a99e4  jal         func_2A6790
    ctx->pc = 0x226274u;
    SET_GPR_U32(ctx, 31, 0x22627Cu);
    ctx->pc = 0x2A6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6790u, 0x226274u, 0x22627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22627Cu;
label_22627c:
    // 0x22627c: 0xc08122e  jal         func_2048B8
    ctx->pc = 0x22627Cu;
    SET_GPR_U32(ctx, 31, 0x226284u);
    ctx->pc = 0x2048B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2048B8u, 0x22627Cu, 0x226284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226284u;
label_226284:
    // 0x226284: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x226288: 0x2442ff9a  addiu       $v0, $v0, -0x66
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967194));
    // 0x22628c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22628cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x226290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226290u;
    {
        const bool branch_taken_0x226290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226290) {
            ctx->pc = 0x2262A0u;
            goto label_2262a0;
        }
    }
    ctx->pc = 0x226298u;
    // 0x226298: 0xc081eb2  jal         func_207AC8
    ctx->pc = 0x226298u;
    SET_GPR_U32(ctx, 31, 0x2262A0u);
    ctx->pc = 0x207AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207AC8u, 0x226298u, 0x2262A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262A0u;
label_2262a0:
    // 0x2262a0: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x2262A0u;
    SET_GPR_U32(ctx, 31, 0x2262A8u);
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x2262A0u, 0x2262A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262A8u;
label_2262a8:
    // 0x2262a8: 0xc08089a  jal         func_202268
    ctx->pc = 0x2262A8u;
    SET_GPR_U32(ctx, 31, 0x2262B0u);
    ctx->pc = 0x202268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202268u, 0x2262A8u, 0x2262B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262B0u;
label_2262b0:
    // 0x2262b0: 0xc0869ca  jal         func_21A728
    ctx->pc = 0x2262B0u;
    SET_GPR_U32(ctx, 31, 0x2262B8u);
    ctx->pc = 0x21A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A728u, 0x2262B0u, 0x2262B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262B8u;
label_2262b8:
    // 0x2262b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2262b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262bc: 0x8080704  j           func_201C10
    ctx->pc = 0x2262BCu;
    ctx->pc = 0x2262C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262BCu;
    // 0x2262c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C10u;
    memEnd_0x201c10(rdram, ctx, runtime); return;
    ctx->pc = 0x2262C4u;
}
