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

// Function: chrGetChrHeadPropUse
// Address: 0x288460 - 0x28869c
void chrGetChrHeadPropUse_0x288460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrGetChrHeadPropUse_0x288460");
#endif

    ctx->pc = 0x288460u;

    // 0x288460: 0x2c820049  sltiu       $v0, $a0, 0x49
    ctx->pc = 0x288460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
    // 0x288464: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x288464u;
    {
        const bool branch_taken_0x288464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288464u;
        // 0x288468: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288464) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x28846Cu;
    // 0x28846c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x288470: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x288470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x288474: 0x24428880  addiu       $v0, $v0, -0x7780
    ctx->pc = 0x288474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
    // 0x288478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x288478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28847c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288480: 0x800008  jr          $a0
    ctx->pc = 0x288480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288488u: goto label_288488;
            case 0x288490u: goto label_288490;
            case 0x288498u: goto label_288498;
            case 0x2884A0u: goto label_2884a0;
            case 0x2884A8u: goto label_2884a8;
            case 0x2884B0u: goto label_2884b0;
            case 0x2884B8u: goto label_2884b8;
            case 0x2884C0u: goto label_2884c0;
            case 0x2884C8u: goto label_2884c8;
            case 0x2884D0u: goto label_2884d0;
            case 0x2884D8u: goto label_2884d8;
            case 0x2884E0u: goto label_2884e0;
            case 0x2884E8u: goto label_2884e8;
            case 0x2884F0u: goto label_2884f0;
            case 0x2884F8u: goto label_2884f8;
            case 0x288500u: goto label_288500;
            case 0x288508u: goto label_288508;
            case 0x288510u: goto label_288510;
            case 0x288518u: goto label_288518;
            case 0x288520u: goto label_288520;
            case 0x288528u: goto label_288528;
            case 0x288530u: goto label_288530;
            case 0x288538u: goto label_288538;
            case 0x288540u: goto label_288540;
            case 0x288548u: goto label_288548;
            case 0x288550u: goto label_288550;
            case 0x288558u: goto label_288558;
            case 0x288560u: goto label_288560;
            case 0x288568u: goto label_288568;
            case 0x288570u: goto label_288570;
            case 0x288578u: goto label_288578;
            case 0x288580u: goto label_288580;
            case 0x288588u: goto label_288588;
            case 0x288590u: goto label_288590;
            case 0x288598u: goto label_288598;
            case 0x2885A0u: goto label_2885a0;
            case 0x2885A8u: goto label_2885a8;
            case 0x2885B0u: goto label_2885b0;
            case 0x2885B8u: goto label_2885b8;
            case 0x2885C0u: goto label_2885c0;
            case 0x2885C8u: goto label_2885c8;
            case 0x2885D0u: goto label_2885d0;
            case 0x2885D8u: goto label_2885d8;
            case 0x2885E0u: goto label_2885e0;
            case 0x2885E8u: goto label_2885e8;
            case 0x2885F0u: goto label_2885f0;
            case 0x2885F8u: goto label_2885f8;
            case 0x288600u: goto label_288600;
            case 0x288608u: goto label_288608;
            case 0x288610u: goto label_288610;
            case 0x288618u: goto label_288618;
            case 0x288620u: goto label_288620;
            case 0x288628u: goto label_288628;
            case 0x288630u: goto label_288630;
            case 0x288638u: goto label_288638;
            case 0x288640u: goto label_288640;
            case 0x288648u: goto label_288648;
            case 0x288650u: goto label_288650;
            case 0x288658u: goto label_288658;
            case 0x288660u: goto label_288660;
            case 0x288668u: goto label_288668;
            case 0x288670u: goto label_288670;
            case 0x288678u: goto label_288678;
            case 0x288680u: goto label_288680;
            case 0x288688u: goto label_288688;
            case 0x288690u: goto label_288690;
            case 0x288694u: goto label_288694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x288488u;
label_288488:
    // 0x288488: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x288488u;
    {
        const bool branch_taken_0x288488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288488u;
        // 0x28848c: 0x240501af  addiu       $a1, $zero, 0x1AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 431));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288488) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288490u;
label_288490:
    // 0x288490: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x288490u;
    {
        const bool branch_taken_0x288490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288490u;
        // 0x288494: 0x240501b0  addiu       $a1, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288490) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288498u;
label_288498:
    // 0x288498: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x288498u;
    {
        const bool branch_taken_0x288498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288498u;
        // 0x28849c: 0x240501b1  addiu       $a1, $zero, 0x1B1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 433));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288498) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884A0u;
label_2884a0:
    // 0x2884a0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2884A0u;
    {
        const bool branch_taken_0x2884a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884A0u;
        // 0x2884a4: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884a0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884A8u;
label_2884a8:
    // 0x2884a8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2884A8u;
    {
        const bool branch_taken_0x2884a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884A8u;
        // 0x2884ac: 0x240501b3  addiu       $a1, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884a8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884B0u;
label_2884b0:
    // 0x2884b0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2884B0u;
    {
        const bool branch_taken_0x2884b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B0u;
        // 0x2884b4: 0x240501b4  addiu       $a1, $zero, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884b0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884B8u;
label_2884b8:
    // 0x2884b8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2884B8u;
    {
        const bool branch_taken_0x2884b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B8u;
        // 0x2884bc: 0x240501b5  addiu       $a1, $zero, 0x1B5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884b8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884C0u;
label_2884c0:
    // 0x2884c0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2884C0u;
    {
        const bool branch_taken_0x2884c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C0u;
        // 0x2884c4: 0x240501b6  addiu       $a1, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884c0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884C8u;
label_2884c8:
    // 0x2884c8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2884C8u;
    {
        const bool branch_taken_0x2884c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C8u;
        // 0x2884cc: 0x240501b7  addiu       $a1, $zero, 0x1B7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884c8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884D0u;
label_2884d0:
    // 0x2884d0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2884D0u;
    {
        const bool branch_taken_0x2884d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884D0u;
        // 0x2884d4: 0x240501b8  addiu       $a1, $zero, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884d0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884D8u;
label_2884d8:
    // 0x2884d8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2884D8u;
    {
        const bool branch_taken_0x2884d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884D8u;
        // 0x2884dc: 0x240501b9  addiu       $a1, $zero, 0x1B9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884d8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884E0u;
label_2884e0:
    // 0x2884e0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2884E0u;
    {
        const bool branch_taken_0x2884e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884E0u;
        // 0x2884e4: 0x240501ba  addiu       $a1, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884e0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884E8u;
label_2884e8:
    // 0x2884e8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2884E8u;
    {
        const bool branch_taken_0x2884e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884E8u;
        // 0x2884ec: 0x240501bb  addiu       $a1, $zero, 0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884e8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884F0u;
label_2884f0:
    // 0x2884f0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2884F0u;
    {
        const bool branch_taken_0x2884f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884F0u;
        // 0x2884f4: 0x240501bc  addiu       $a1, $zero, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884f0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2884F8u;
label_2884f8:
    // 0x2884f8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2884F8u;
    {
        const bool branch_taken_0x2884f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884F8u;
        // 0x2884fc: 0x240501bd  addiu       $a1, $zero, 0x1BD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884f8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288500u;
label_288500:
    // 0x288500: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x288500u;
    {
        const bool branch_taken_0x288500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288500u;
        // 0x288504: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288500) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288508u;
label_288508:
    // 0x288508: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x288508u;
    {
        const bool branch_taken_0x288508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288508u;
        // 0x28850c: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288508) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288510u;
label_288510:
    // 0x288510: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288510u;
        // 0x288514: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288510) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288518u;
label_288518:
    // 0x288518: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x288518u;
    {
        const bool branch_taken_0x288518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288518u;
        // 0x28851c: 0x240501c1  addiu       $a1, $zero, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288518) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288520u;
label_288520:
    // 0x288520: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x288520u;
    {
        const bool branch_taken_0x288520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288520u;
        // 0x288524: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288520) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288528u;
label_288528:
    // 0x288528: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x288528u;
    {
        const bool branch_taken_0x288528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288528u;
        // 0x28852c: 0x240501c3  addiu       $a1, $zero, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288528) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288530u;
label_288530:
    // 0x288530: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x288530u;
    {
        const bool branch_taken_0x288530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288530u;
        // 0x288534: 0x240501c4  addiu       $a1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288530) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288538u;
label_288538:
    // 0x288538: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x288538u;
    {
        const bool branch_taken_0x288538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288538u;
        // 0x28853c: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288538) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288540u;
label_288540:
    // 0x288540: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x288540u;
    {
        const bool branch_taken_0x288540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288540u;
        // 0x288544: 0x240501c6  addiu       $a1, $zero, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288540) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288548u;
label_288548:
    // 0x288548: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x288548u;
    {
        const bool branch_taken_0x288548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288548u;
        // 0x28854c: 0x240501c7  addiu       $a1, $zero, 0x1C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288548) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288550u;
label_288550:
    // 0x288550: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x288550u;
    {
        const bool branch_taken_0x288550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288550u;
        // 0x288554: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288550) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288558u;
label_288558:
    // 0x288558: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x288558u;
    {
        const bool branch_taken_0x288558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288558u;
        // 0x28855c: 0x240501c9  addiu       $a1, $zero, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288558) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288560u;
label_288560:
    // 0x288560: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x288560u;
    {
        const bool branch_taken_0x288560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288560u;
        // 0x288564: 0x240501ca  addiu       $a1, $zero, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288560) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288568u;
label_288568:
    // 0x288568: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x288568u;
    {
        const bool branch_taken_0x288568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288568u;
        // 0x28856c: 0x240501cb  addiu       $a1, $zero, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288568) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288570u;
label_288570:
    // 0x288570: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x288570u;
    {
        const bool branch_taken_0x288570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288570u;
        // 0x288574: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288570) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288578u;
label_288578:
    // 0x288578: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x288578u;
    {
        const bool branch_taken_0x288578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288578u;
        // 0x28857c: 0x240501cd  addiu       $a1, $zero, 0x1CD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288578) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288580u;
label_288580:
    // 0x288580: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x288580u;
    {
        const bool branch_taken_0x288580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288580u;
        // 0x288584: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288580) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288588u;
label_288588:
    // 0x288588: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x288588u;
    {
        const bool branch_taken_0x288588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288588u;
        // 0x28858c: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288588) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288590u;
label_288590:
    // 0x288590: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x288590u;
    {
        const bool branch_taken_0x288590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288590u;
        // 0x288594: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288590) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288598u;
label_288598:
    // 0x288598: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x288598u;
    {
        const bool branch_taken_0x288598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288598u;
        // 0x28859c: 0x240501d1  addiu       $a1, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288598) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885A0u;
label_2885a0:
    // 0x2885a0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2885A0u;
    {
        const bool branch_taken_0x2885a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885A0u;
        // 0x2885a4: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885a0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885A8u;
label_2885a8:
    // 0x2885a8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2885A8u;
    {
        const bool branch_taken_0x2885a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885A8u;
        // 0x2885ac: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885a8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885B0u;
label_2885b0:
    // 0x2885b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2885B0u;
    {
        const bool branch_taken_0x2885b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885B0u;
        // 0x2885b4: 0x240501d4  addiu       $a1, $zero, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885B8u;
label_2885b8:
    // 0x2885b8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2885B8u;
    {
        const bool branch_taken_0x2885b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885B8u;
        // 0x2885bc: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885C0u;
label_2885c0:
    // 0x2885c0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2885C0u;
    {
        const bool branch_taken_0x2885c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C0u;
        // 0x2885c4: 0x240501d6  addiu       $a1, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885C8u;
label_2885c8:
    // 0x2885c8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2885C8u;
    {
        const bool branch_taken_0x2885c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C8u;
        // 0x2885cc: 0x240501d7  addiu       $a1, $zero, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885D0u;
label_2885d0:
    // 0x2885d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2885D0u;
    {
        const bool branch_taken_0x2885d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D0u;
        // 0x2885d4: 0x240501d8  addiu       $a1, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885d0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885D8u;
label_2885d8:
    // 0x2885d8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2885D8u;
    {
        const bool branch_taken_0x2885d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D8u;
        // 0x2885dc: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885d8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885E0u;
label_2885e0:
    // 0x2885e0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2885E0u;
    {
        const bool branch_taken_0x2885e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E0u;
        // 0x2885e4: 0x240501da  addiu       $a1, $zero, 0x1DA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885e0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885E8u;
label_2885e8:
    // 0x2885e8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2885E8u;
    {
        const bool branch_taken_0x2885e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885E8u;
        // 0x2885ec: 0x240501db  addiu       $a1, $zero, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885e8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885F0u;
label_2885f0:
    // 0x2885f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2885F0u;
    {
        const bool branch_taken_0x2885f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F0u;
        // 0x2885f4: 0x240501dc  addiu       $a1, $zero, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885f0) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x2885F8u;
label_2885f8:
    // 0x2885f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2885F8u;
    {
        const bool branch_taken_0x2885f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F8u;
        // 0x2885fc: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885f8) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288600u;
label_288600:
    // 0x288600: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x288600u;
    {
        const bool branch_taken_0x288600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288600u;
        // 0x288604: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288600) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288608u;
label_288608:
    // 0x288608: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x288608u;
    {
        const bool branch_taken_0x288608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288608u;
        // 0x28860c: 0x240501df  addiu       $a1, $zero, 0x1DF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 479));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288608) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288610u;
label_288610:
    // 0x288610: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x288610u;
    {
        const bool branch_taken_0x288610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288610u;
        // 0x288614: 0x240501e0  addiu       $a1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288610) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288618u;
label_288618:
    // 0x288618: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x288618u;
    {
        const bool branch_taken_0x288618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288618u;
        // 0x28861c: 0x240501e1  addiu       $a1, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288618) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288620u;
label_288620:
    // 0x288620: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x288620u;
    {
        const bool branch_taken_0x288620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288620u;
        // 0x288624: 0x240501e2  addiu       $a1, $zero, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288620) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288628u;
label_288628:
    // 0x288628: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x288628u;
    {
        const bool branch_taken_0x288628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288628u;
        // 0x28862c: 0x240501e3  addiu       $a1, $zero, 0x1E3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288628) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288630u;
label_288630:
    // 0x288630: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x288630u;
    {
        const bool branch_taken_0x288630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288630u;
        // 0x288634: 0x240501e4  addiu       $a1, $zero, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288630) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288638u;
label_288638:
    // 0x288638: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x288638u;
    {
        const bool branch_taken_0x288638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288638u;
        // 0x28863c: 0x240501e5  addiu       $a1, $zero, 0x1E5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288638) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288640u;
label_288640:
    // 0x288640: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x288640u;
    {
        const bool branch_taken_0x288640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288640u;
        // 0x288644: 0x240501e6  addiu       $a1, $zero, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288640) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288648u;
label_288648:
    // 0x288648: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288648u;
    {
        const bool branch_taken_0x288648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288648u;
        // 0x28864c: 0x240501e7  addiu       $a1, $zero, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288648) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288650u;
label_288650:
    // 0x288650: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x288650u;
    {
        const bool branch_taken_0x288650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288650u;
        // 0x288654: 0x240501e8  addiu       $a1, $zero, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288650) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288658u;
label_288658:
    // 0x288658: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288658u;
    {
        const bool branch_taken_0x288658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288658u;
        // 0x28865c: 0x240501e9  addiu       $a1, $zero, 0x1E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288658) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288660u;
label_288660:
    // 0x288660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288660u;
    {
        const bool branch_taken_0x288660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288660u;
        // 0x288664: 0x240501ea  addiu       $a1, $zero, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288660) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288668u;
label_288668:
    // 0x288668: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288668u;
    {
        const bool branch_taken_0x288668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288668u;
        // 0x28866c: 0x240501eb  addiu       $a1, $zero, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288668) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288670u;
label_288670:
    // 0x288670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x288670u;
    {
        const bool branch_taken_0x288670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288670u;
        // 0x288674: 0x240501ec  addiu       $a1, $zero, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288670) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288678u;
label_288678:
    // 0x288678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288678u;
    {
        const bool branch_taken_0x288678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288678u;
        // 0x28867c: 0x240501ed  addiu       $a1, $zero, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288678) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288680u;
label_288680:
    // 0x288680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288680u;
    {
        const bool branch_taken_0x288680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288680u;
        // 0x288684: 0x240501ee  addiu       $a1, $zero, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288680) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288688u;
label_288688:
    // 0x288688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288688u;
    {
        const bool branch_taken_0x288688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288688u;
        // 0x28868c: 0x240501ef  addiu       $a1, $zero, 0x1EF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 495));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288688) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288690u;
label_288690:
    // 0x288690: 0x240501f0  addiu       $a1, $zero, 0x1F0
    ctx->pc = 0x288690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_288694:
    // 0x288694: 0x3e00008  jr          $ra
    ctx->pc = 0x288694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288694u;
        // 0x288698: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28869Cu;
}
