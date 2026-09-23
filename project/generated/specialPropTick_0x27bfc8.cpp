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

// Function: specialPropTick
// Address: 0x27bfc8 - 0x27c138
void specialPropTick_0x27bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialPropTick_0x27bfc8");
#endif

    ctx->pc = 0x27bfc8u;

    // 0x27bfc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfcc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27bfd0: 0x2444ff0a  addiu       $a0, $v0, -0xF6
    ctx->pc = 0x27bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967050));
    // 0x27bfd4: 0x2c83004a  sltiu       $v1, $a0, 0x4A
    ctx->pc = 0x27bfd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)74) ? 1 : 0);
    // 0x27bfd8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x27BFD8u;
    {
        const bool branch_taken_0x27bfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFD8u;
        // 0x27bfdc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfd8) {
            ctx->pc = 0x27C130u;
            goto label_27c130;
        }
    }
    ctx->pc = 0x27BFE0u;
    // 0x27bfe0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27bfe4: 0x24428620  addiu       $v0, $v0, -0x79E0
    ctx->pc = 0x27bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936096));
    // 0x27bfe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bfec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bff0: 0x800008  jr          $a0
    ctx->pc = 0x27BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BFF8u: goto label_27bff8;
            case 0x27C000u: goto label_27c000;
            case 0x27C008u: goto label_27c008;
            case 0x27C010u: goto label_27c010;
            case 0x27C018u: goto label_27c018;
            case 0x27C020u: goto label_27c020;
            case 0x27C028u: goto label_27c028;
            case 0x27C030u: goto label_27c030;
            case 0x27C038u: goto label_27c038;
            case 0x27C040u: goto label_27c040;
            case 0x27C048u: goto label_27c048;
            case 0x27C050u: goto label_27c050;
            case 0x27C058u: goto label_27c058;
            case 0x27C060u: goto label_27c060;
            case 0x27C068u: goto label_27c068;
            case 0x27C070u: goto label_27c070;
            case 0x27C078u: goto label_27c078;
            case 0x27C080u: goto label_27c080;
            case 0x27C088u: goto label_27c088;
            case 0x27C090u: goto label_27c090;
            case 0x27C098u: goto label_27c098;
            case 0x27C0A0u: goto label_27c0a0;
            case 0x27C0A8u: goto label_27c0a8;
            case 0x27C0B0u: goto label_27c0b0;
            case 0x27C0B8u: goto label_27c0b8;
            case 0x27C0C0u: goto label_27c0c0;
            case 0x27C0C8u: goto label_27c0c8;
            case 0x27C0D4u: goto label_27c0d4;
            case 0x27C0E0u: goto label_27c0e0;
            case 0x27C0E8u: goto label_27c0e8;
            case 0x27C0F0u: goto label_27c0f0;
            case 0x27C0F8u: goto label_27c0f8;
            case 0x27C100u: goto label_27c100;
            case 0x27C108u: goto label_27c108;
            case 0x27C110u: goto label_27c110;
            case 0x27C118u: goto label_27c118;
            case 0x27C120u: goto label_27c120;
            case 0x27C128u: goto label_27c128;
            case 0x27C130u: goto label_27c130;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BFF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27BFF8u;
label_27bff8:
    // 0x27bff8: 0x809e416  j           func_279058
    ctx->pc = 0x27BFF8u;
    ctx->pc = 0x27BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFF8u;
    // 0x27bffc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279058u;
    scannerPropTick_0x279058(rdram, ctx, runtime); return;
    ctx->pc = 0x27C000u;
label_27c000:
    // 0x27c000: 0x809e4ca  j           func_279328
    ctx->pc = 0x27C000u;
    ctx->pc = 0x27C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C000u;
    // 0x27c004: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279328u;
    clockPropTick_0x279328(rdram, ctx, runtime); return;
    ctx->pc = 0x27C008u;
label_27c008:
    // 0x27c008: 0x809e4fa  j           func_2793E8
    ctx->pc = 0x27C008u;
    ctx->pc = 0x27C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C008u;
    // 0x27c00c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2793E8u;
    mallclockPropTick_0x2793e8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C010u;
label_27c010:
    // 0x27c010: 0x809e6fc  j           func_279BF0
    ctx->pc = 0x27C010u;
    ctx->pc = 0x27C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C010u;
    // 0x27c014: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BF0u;
    pubsignPropTick_0x279bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C018u;
label_27c018:
    // 0x27c018: 0x809e768  j           func_279DA0
    ctx->pc = 0x27C018u;
    ctx->pc = 0x27C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C018u;
    // 0x27c01c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279DA0u;
    gongPropTick_0x279da0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C020u;
label_27c020:
    // 0x27c020: 0x809e73e  j           func_279CF8
    ctx->pc = 0x27C020u;
    ctx->pc = 0x27C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C020u;
    // 0x27c024: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279CF8u;
    boatsignPropTick_0x279cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C028u;
label_27c028:
    // 0x27c028: 0x809e428  j           func_2790A0
    ctx->pc = 0x27C028u;
    ctx->pc = 0x27C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C028u;
    // 0x27c02c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A0u;
    fanPropTick_0x2790a0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C030u;
label_27c030:
    // 0x27c030: 0x809e438  j           func_2790E0
    ctx->pc = 0x27C030u;
    ctx->pc = 0x27C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C030u;
    // 0x27c034: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790E0u;
    fanshadowPropTick_0x2790e0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C038u;
label_27c038:
    // 0x27c038: 0x809e448  j           func_279120
    ctx->pc = 0x27C038u;
    ctx->pc = 0x27C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C038u;
    // 0x27c03c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279120u;
    fanscifiPropTick_0x279120(rdram, ctx, runtime); return;
    ctx->pc = 0x27C040u;
label_27c040:
    // 0x27c040: 0x809e46c  j           func_2791B0
    ctx->pc = 0x27C040u;
    ctx->pc = 0x27C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C040u;
    // 0x27c044: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    mallfan1PropTick_0x2791b0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C048u;
label_27c048:
    // 0x27c048: 0x809e47e  j           func_2791F8
    ctx->pc = 0x27C048u;
    ctx->pc = 0x27C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C048u;
    // 0x27c04c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791F8u;
    mallfan2PropTick_0x2791f8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C050u;
label_27c050:
    // 0x27c050: 0x809e45a  j           func_279168
    ctx->pc = 0x27C050u;
    ctx->pc = 0x27C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C050u;
    // 0x27c054: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    fanChinesePropTick_0x279168(rdram, ctx, runtime); return;
    ctx->pc = 0x27C058u;
label_27c058:
    // 0x27c058: 0x809e792  j           func_279E48
    ctx->pc = 0x27C058u;
    ctx->pc = 0x27C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C058u;
    // 0x27c05c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279E48u;
    bannerPropTick_0x279e48(rdram, ctx, runtime); return;
    ctx->pc = 0x27C060u;
label_27c060:
    // 0x27c060: 0x809e7dc  j           func_279F70
    ctx->pc = 0x27C060u;
    ctx->pc = 0x27C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C060u;
    // 0x27c064: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279F70u;
    lanternPropTick_0x279f70(rdram, ctx, runtime); return;
    ctx->pc = 0x27C068u;
label_27c068:
    // 0x27c068: 0x809e834  j           func_27A0D0
    ctx->pc = 0x27C068u;
    ctx->pc = 0x27C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C068u;
    // 0x27c06c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    chandelierPropTick_0x27a0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C070u;
label_27c070:
    // 0x27c070: 0x809e352  j           func_278D48
    ctx->pc = 0x27C070u;
    ctx->pc = 0x27C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C070u;
    // 0x27c074: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278D48u;
    streamersPropTick_0x278d48(rdram, ctx, runtime); return;
    ctx->pc = 0x27C078u;
label_27c078:
    // 0x27c078: 0x809e3be  j           func_278EF8
    ctx->pc = 0x27C078u;
    ctx->pc = 0x27C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C078u;
    // 0x27c07c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278EF8u;
    reflectionsPropTick_0x278ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C080u;
label_27c080:
    // 0x27c080: 0x809ea86  j           func_27AA18
    ctx->pc = 0x27C080u;
    ctx->pc = 0x27C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C080u;
    // 0x27c084: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AA18u;
    outerwheelsPropTick_0x27aa18(rdram, ctx, runtime); return;
    ctx->pc = 0x27C088u;
label_27c088:
    // 0x27c088: 0x809eaa0  j           func_27AA80
    ctx->pc = 0x27C088u;
    ctx->pc = 0x27C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C088u;
    // 0x27c08c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AA80u;
    innerwheelsPropTick_0x27aa80(rdram, ctx, runtime); return;
    ctx->pc = 0x27C090u;
label_27c090:
    // 0x27c090: 0x809e936  j           func_27A4D8
    ctx->pc = 0x27C090u;
    ctx->pc = 0x27C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C090u;
    // 0x27c094: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4D8u;
    polePropTick_0x27a4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C098u;
label_27c098:
    // 0x27c098: 0x809e946  j           func_27A518
    ctx->pc = 0x27C098u;
    ctx->pc = 0x27C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C098u;
    // 0x27c09c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A518u;
    electricityPropTick_0x27a518(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0A0u;
label_27c0a0:
    // 0x27c0a0: 0x809eac8  j           func_27AB20
    ctx->pc = 0x27C0A0u;
    ctx->pc = 0x27C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0A0u;
    // 0x27c0a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB20u;
    spaceship1PropTick_0x27ab20(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0A8u;
label_27c0a8:
    // 0x27c0a8: 0x809eb76  j           func_27ADD8
    ctx->pc = 0x27C0A8u;
    ctx->pc = 0x27C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0A8u;
    // 0x27c0ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ADD8u;
    spaceship2PropTick_0x27add8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0B0u;
label_27c0b0:
    // 0x27c0b0: 0x809ebac  j           func_27AEB0
    ctx->pc = 0x27C0B0u;
    ctx->pc = 0x27C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0B0u;
    // 0x27c0b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AEB0u;
    spaceship3PropTick_0x27aeb0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0B8u;
label_27c0b8:
    // 0x27c0b8: 0x809ebda  j           func_27AF68
    ctx->pc = 0x27C0B8u;
    ctx->pc = 0x27C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0B8u;
    // 0x27c0bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AF68u;
    greenthingPropTick_0x27af68(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0C0u;
label_27c0c0:
    // 0x27c0c0: 0x809ebc2  j           func_27AF08
    ctx->pc = 0x27C0C0u;
    ctx->pc = 0x27C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0C0u;
    // 0x27c0c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AF08u;
    bigshipPropTick_0x27af08(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0C8u;
label_27c0c8:
    // 0x27c0c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0cc: 0x809ec34  j           func_27B0D0
    ctx->pc = 0x27C0CCu;
    ctx->pc = 0x27C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0CCu;
    // 0x27c0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0D0u;
    waterfallPropTick_0x27b0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0D4u;
label_27c0d4:
    // 0x27c0d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0d8: 0x809ec34  j           func_27B0D0
    ctx->pc = 0x27C0D8u;
    ctx->pc = 0x27C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0D8u;
    // 0x27c0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0D0u;
    waterfallPropTick_0x27b0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0E0u;
label_27c0e0:
    // 0x27c0e0: 0x809ec76  j           func_27B1D8
    ctx->pc = 0x27C0E0u;
    ctx->pc = 0x27C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0E0u;
    // 0x27c0e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B1D8u;
    hologramPropTick_0x27b1d8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0E8u;
label_27c0e8:
    // 0x27c0e8: 0x809ed10  j           func_27B440
    ctx->pc = 0x27C0E8u;
    ctx->pc = 0x27C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0E8u;
    // 0x27c0ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B440u;
    laserPropTick_0x27b440(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0F0u;
label_27c0f0:
    // 0x27c0f0: 0x809eda6  j           func_27B698
    ctx->pc = 0x27C0F0u;
    ctx->pc = 0x27C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0F0u;
    // 0x27c0f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B698u;
    liftPropTick_0x27b698(rdram, ctx, runtime); return;
    ctx->pc = 0x27C0F8u;
label_27c0f8:
    // 0x27c0f8: 0x809ee78  j           func_27B9E0
    ctx->pc = 0x27C0F8u;
    ctx->pc = 0x27C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0F8u;
    // 0x27c0fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B9E0u;
    planetspawnPropTick_0x27b9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C100u;
label_27c100:
    // 0x27c100: 0x809ef00  j           func_27BC00
    ctx->pc = 0x27C100u;
    ctx->pc = 0x27C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C100u;
    // 0x27c104: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC00u;
    planetspawn2PropTick_0x27bc00(rdram, ctx, runtime); return;
    ctx->pc = 0x27C108u;
label_27c108:
    // 0x27c108: 0x809ef02  j           func_27BC08
    ctx->pc = 0x27C108u;
    ctx->pc = 0x27C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C108u;
    // 0x27c10c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC08u;
    rotatespawnPropTick_0x27bc08(rdram, ctx, runtime); return;
    ctx->pc = 0x27C110u;
label_27c110:
    // 0x27c110: 0x809ef2e  j           func_27BCB8
    ctx->pc = 0x27C110u;
    ctx->pc = 0x27C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C110u;
    // 0x27c114: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BCB8u;
    blastspawnPropTick_0x27bcb8(rdram, ctx, runtime); return;
    ctx->pc = 0x27C118u;
label_27c118:
    // 0x27c118: 0x809ef56  j           func_27BD58
    ctx->pc = 0x27C118u;
    ctx->pc = 0x27C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C118u;
    // 0x27c11c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BD58u;
    ringspawnPropTick_0x27bd58(rdram, ctx, runtime); return;
    ctx->pc = 0x27C120u;
label_27c120:
    // 0x27c120: 0x809ef82  j           func_27BE08
    ctx->pc = 0x27C120u;
    ctx->pc = 0x27C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C120u;
    // 0x27c124: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BE08u;
    splitterdomePropTick_0x27be08(rdram, ctx, runtime); return;
    ctx->pc = 0x27C128u;
label_27c128:
    // 0x27c128: 0x809efac  j           func_27BEB0
    ctx->pc = 0x27C128u;
    ctx->pc = 0x27C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C128u;
    // 0x27c12c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BEB0u;
    tombtorchPropTick_0x27beb0(rdram, ctx, runtime); return;
    ctx->pc = 0x27C130u;
label_27c130:
    // 0x27c130: 0x3e00008  jr          $ra
    ctx->pc = 0x27C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C138u;
}
