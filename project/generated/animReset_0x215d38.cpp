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

// Function: animReset
// Address: 0x215d38 - 0x216840
void animReset_0x215d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animReset_0x215d38");
#endif

    switch (ctx->pc) {
        case 0x215d5cu: goto label_215d5c;
        case 0x215d6cu: goto label_215d6c;
        case 0x215d7cu: goto label_215d7c;
        case 0x215d8cu: goto label_215d8c;
        case 0x215d9cu: goto label_215d9c;
        case 0x215dacu: goto label_215dac;
        case 0x215dbcu: goto label_215dbc;
        case 0x215dccu: goto label_215dcc;
        case 0x215ddcu: goto label_215ddc;
        case 0x215decu: goto label_215dec;
        case 0x215dfcu: goto label_215dfc;
        case 0x215e0cu: goto label_215e0c;
        case 0x215e1cu: goto label_215e1c;
        case 0x215e2cu: goto label_215e2c;
        case 0x215e3cu: goto label_215e3c;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e5cu: goto label_215e5c;
        case 0x215e6cu: goto label_215e6c;
        case 0x215e7cu: goto label_215e7c;
        case 0x215e8cu: goto label_215e8c;
        case 0x215e9cu: goto label_215e9c;
        case 0x215eacu: goto label_215eac;
        case 0x215ebcu: goto label_215ebc;
        case 0x215eccu: goto label_215ecc;
        case 0x215edcu: goto label_215edc;
        case 0x215eecu: goto label_215eec;
        case 0x215efcu: goto label_215efc;
        case 0x215f0cu: goto label_215f0c;
        case 0x215f1cu: goto label_215f1c;
        case 0x215f2cu: goto label_215f2c;
        case 0x215f3cu: goto label_215f3c;
        case 0x215f4cu: goto label_215f4c;
        case 0x215f5cu: goto label_215f5c;
        case 0x215f6cu: goto label_215f6c;
        case 0x215f7cu: goto label_215f7c;
        case 0x215f8cu: goto label_215f8c;
        case 0x215f9cu: goto label_215f9c;
        case 0x215facu: goto label_215fac;
        case 0x215fbcu: goto label_215fbc;
        case 0x215fccu: goto label_215fcc;
        case 0x215fdcu: goto label_215fdc;
        case 0x215fecu: goto label_215fec;
        case 0x215ffcu: goto label_215ffc;
        case 0x21600cu: goto label_21600c;
        case 0x21601cu: goto label_21601c;
        case 0x21602cu: goto label_21602c;
        case 0x21603cu: goto label_21603c;
        case 0x21604cu: goto label_21604c;
        case 0x21605cu: goto label_21605c;
        case 0x21606cu: goto label_21606c;
        case 0x21607cu: goto label_21607c;
        case 0x21608cu: goto label_21608c;
        case 0x21609cu: goto label_21609c;
        case 0x2160acu: goto label_2160ac;
        case 0x2160bcu: goto label_2160bc;
        case 0x2160ccu: goto label_2160cc;
        case 0x2160dcu: goto label_2160dc;
        case 0x2160ecu: goto label_2160ec;
        case 0x2160fcu: goto label_2160fc;
        case 0x21610cu: goto label_21610c;
        case 0x21611cu: goto label_21611c;
        case 0x21612cu: goto label_21612c;
        case 0x21613cu: goto label_21613c;
        case 0x21614cu: goto label_21614c;
        case 0x21615cu: goto label_21615c;
        case 0x21616cu: goto label_21616c;
        case 0x21617cu: goto label_21617c;
        case 0x21618cu: goto label_21618c;
        case 0x21619cu: goto label_21619c;
        case 0x2161acu: goto label_2161ac;
        case 0x2161bcu: goto label_2161bc;
        case 0x2161ccu: goto label_2161cc;
        case 0x2161dcu: goto label_2161dc;
        case 0x2161ecu: goto label_2161ec;
        case 0x2161fcu: goto label_2161fc;
        case 0x21620cu: goto label_21620c;
        case 0x21621cu: goto label_21621c;
        case 0x21622cu: goto label_21622c;
        case 0x21623cu: goto label_21623c;
        case 0x21624cu: goto label_21624c;
        case 0x21625cu: goto label_21625c;
        case 0x21626cu: goto label_21626c;
        case 0x21627cu: goto label_21627c;
        case 0x21628cu: goto label_21628c;
        case 0x21629cu: goto label_21629c;
        case 0x2162acu: goto label_2162ac;
        case 0x2162bcu: goto label_2162bc;
        case 0x2162ccu: goto label_2162cc;
        case 0x2162dcu: goto label_2162dc;
        case 0x2162ecu: goto label_2162ec;
        case 0x2162fcu: goto label_2162fc;
        case 0x21630cu: goto label_21630c;
        case 0x21631cu: goto label_21631c;
        case 0x21632cu: goto label_21632c;
        case 0x21633cu: goto label_21633c;
        case 0x21634cu: goto label_21634c;
        case 0x216358u: goto label_216358;
        case 0x216364u: goto label_216364;
        case 0x216370u: goto label_216370;
        case 0x21637cu: goto label_21637c;
        case 0x216388u: goto label_216388;
        case 0x216394u: goto label_216394;
        case 0x2163a0u: goto label_2163a0;
        case 0x2163acu: goto label_2163ac;
        case 0x2163b8u: goto label_2163b8;
        case 0x2163c4u: goto label_2163c4;
        case 0x2163d0u: goto label_2163d0;
        case 0x2163dcu: goto label_2163dc;
        case 0x2163e8u: goto label_2163e8;
        case 0x2163f4u: goto label_2163f4;
        case 0x216400u: goto label_216400;
        case 0x21640cu: goto label_21640c;
        case 0x216418u: goto label_216418;
        case 0x216424u: goto label_216424;
        case 0x216430u: goto label_216430;
        case 0x21643cu: goto label_21643c;
        case 0x216448u: goto label_216448;
        case 0x216454u: goto label_216454;
        case 0x216460u: goto label_216460;
        case 0x21646cu: goto label_21646c;
        case 0x216478u: goto label_216478;
        case 0x216484u: goto label_216484;
        case 0x216490u: goto label_216490;
        case 0x21649cu: goto label_21649c;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d8u: goto label_2164d8;
        case 0x2164e4u: goto label_2164e4;
        case 0x2164f0u: goto label_2164f0;
        case 0x2164fcu: goto label_2164fc;
        case 0x216508u: goto label_216508;
        case 0x216514u: goto label_216514;
        case 0x216520u: goto label_216520;
        case 0x21652cu: goto label_21652c;
        case 0x216538u: goto label_216538;
        case 0x216544u: goto label_216544;
        case 0x216550u: goto label_216550;
        case 0x21655cu: goto label_21655c;
        case 0x216568u: goto label_216568;
        case 0x216574u: goto label_216574;
        case 0x216580u: goto label_216580;
        case 0x21658cu: goto label_21658c;
        case 0x216598u: goto label_216598;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165b0u: goto label_2165b0;
        case 0x2165bcu: goto label_2165bc;
        case 0x2165c8u: goto label_2165c8;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165e0u: goto label_2165e0;
        case 0x2165ecu: goto label_2165ec;
        case 0x2165f8u: goto label_2165f8;
        case 0x216604u: goto label_216604;
        case 0x216610u: goto label_216610;
        case 0x21661cu: goto label_21661c;
        case 0x216628u: goto label_216628;
        case 0x216634u: goto label_216634;
        case 0x216640u: goto label_216640;
        case 0x21664cu: goto label_21664c;
        case 0x216658u: goto label_216658;
        case 0x216664u: goto label_216664;
        case 0x216670u: goto label_216670;
        case 0x21667cu: goto label_21667c;
        case 0x216688u: goto label_216688;
        case 0x216694u: goto label_216694;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166d0u: goto label_2166d0;
        case 0x2166dcu: goto label_2166dc;
        case 0x2166e8u: goto label_2166e8;
        case 0x2166f4u: goto label_2166f4;
        case 0x216700u: goto label_216700;
        case 0x21670cu: goto label_21670c;
        case 0x216718u: goto label_216718;
        case 0x216724u: goto label_216724;
        case 0x216730u: goto label_216730;
        case 0x21673cu: goto label_21673c;
        case 0x216748u: goto label_216748;
        case 0x216754u: goto label_216754;
        case 0x216760u: goto label_216760;
        case 0x21676cu: goto label_21676c;
        case 0x216778u: goto label_216778;
        case 0x216784u: goto label_216784;
        case 0x216790u: goto label_216790;
        case 0x21679cu: goto label_21679c;
        case 0x2167a8u: goto label_2167a8;
        case 0x2167b4u: goto label_2167b4;
        case 0x2167c0u: goto label_2167c0;
        case 0x2167ccu: goto label_2167cc;
        case 0x2167d8u: goto label_2167d8;
        case 0x2167e4u: goto label_2167e4;
        case 0x2167f0u: goto label_2167f0;
        case 0x2167fcu: goto label_2167fc;
        case 0x216808u: goto label_216808;
        case 0x216814u: goto label_216814;
        case 0x216820u: goto label_216820;
        default: break;
    }

    ctx->pc = 0x215d38u;

    // 0x215d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215d3c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x215d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x215d40: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x215d44: 0x146202bb  bne         $v1, $v0, . + 4 + (0x2BB << 2)
    ctx->pc = 0x215D44u;
    {
        const bool branch_taken_0x215d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D44u;
        // 0x215d48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d44) {
            ctx->pc = 0x216834u;
            goto label_216834;
        }
    }
    ctx->pc = 0x215D4Cu;
    // 0x215d4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215d50: 0x24050269  addiu       $a1, $zero, 0x269
    ctx->pc = 0x215d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
    // 0x215d54: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215D54u;
    SET_GPR_U32(ctx, 31, 0x215D5Cu);
    ctx->pc = 0x215D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D54u;
    // 0x215d58: 0x2484a4c0  addiu       $a0, $a0, -0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215D54u, 0x215D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D5Cu;
label_215d5c:
    // 0x215d5c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215d60: 0x2405026a  addiu       $a1, $zero, 0x26A
    ctx->pc = 0x215d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x215d64: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215D64u;
    SET_GPR_U32(ctx, 31, 0x215D6Cu);
    ctx->pc = 0x215D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D64u;
    // 0x215d68: 0x2484a4e0  addiu       $a0, $a0, -0x5B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215D64u, 0x215D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D6Cu;
label_215d6c:
    // 0x215d6c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215d70: 0x2405026c  addiu       $a1, $zero, 0x26C
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x215d74: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215D74u;
    SET_GPR_U32(ctx, 31, 0x215D7Cu);
    ctx->pc = 0x215D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D74u;
    // 0x215d78: 0x2484a500  addiu       $a0, $a0, -0x5B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215D74u, 0x215D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D7Cu;
label_215d7c:
    // 0x215d7c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215d80: 0x2405026e  addiu       $a1, $zero, 0x26E
    ctx->pc = 0x215d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
    // 0x215d84: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215D84u;
    SET_GPR_U32(ctx, 31, 0x215D8Cu);
    ctx->pc = 0x215D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D84u;
    // 0x215d88: 0x2484a530  addiu       $a0, $a0, -0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215D84u, 0x215D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D8Cu;
label_215d8c:
    // 0x215d8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215d90: 0x2405026f  addiu       $a1, $zero, 0x26F
    ctx->pc = 0x215d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    // 0x215d94: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215D94u;
    SET_GPR_U32(ctx, 31, 0x215D9Cu);
    ctx->pc = 0x215D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D94u;
    // 0x215d98: 0x2484a558  addiu       $a0, $a0, -0x5AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215D94u, 0x215D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D9Cu;
label_215d9c:
    // 0x215d9c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215da0: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x215da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x215da4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DA4u;
    SET_GPR_U32(ctx, 31, 0x215DACu);
    ctx->pc = 0x215DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DA4u;
    // 0x215da8: 0x2484a580  addiu       $a0, $a0, -0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DA4u, 0x215DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DACu;
label_215dac:
    // 0x215dac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215db0: 0x24050271  addiu       $a1, $zero, 0x271
    ctx->pc = 0x215db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x215db4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DB4u;
    SET_GPR_U32(ctx, 31, 0x215DBCu);
    ctx->pc = 0x215DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DB4u;
    // 0x215db8: 0x2484a5b0  addiu       $a0, $a0, -0x5A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DB4u, 0x215DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DBCu;
label_215dbc:
    // 0x215dbc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215dc0: 0x24050272  addiu       $a1, $zero, 0x272
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
    // 0x215dc4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DC4u;
    SET_GPR_U32(ctx, 31, 0x215DCCu);
    ctx->pc = 0x215DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DC4u;
    // 0x215dc8: 0x2484a5d8  addiu       $a0, $a0, -0x5A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DC4u, 0x215DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DCCu;
label_215dcc:
    // 0x215dcc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215dd0: 0x24050273  addiu       $a1, $zero, 0x273
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
    // 0x215dd4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DD4u;
    SET_GPR_U32(ctx, 31, 0x215DDCu);
    ctx->pc = 0x215DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DD4u;
    // 0x215dd8: 0x2484a608  addiu       $a0, $a0, -0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DD4u, 0x215DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DDCu;
label_215ddc:
    // 0x215ddc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215de0: 0x24050275  addiu       $a1, $zero, 0x275
    ctx->pc = 0x215de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x215de4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DE4u;
    SET_GPR_U32(ctx, 31, 0x215DECu);
    ctx->pc = 0x215DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DE4u;
    // 0x215de8: 0x2484a630  addiu       $a0, $a0, -0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DE4u, 0x215DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DECu;
label_215dec:
    // 0x215dec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215df0: 0x24050277  addiu       $a1, $zero, 0x277
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
    // 0x215df4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215DF4u;
    SET_GPR_U32(ctx, 31, 0x215DFCu);
    ctx->pc = 0x215DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DF4u;
    // 0x215df8: 0x2484a658  addiu       $a0, $a0, -0x59A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215DF4u, 0x215DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DFCu;
label_215dfc:
    // 0x215dfc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e00: 0x24050279  addiu       $a1, $zero, 0x279
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x215e04: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E04u;
    SET_GPR_U32(ctx, 31, 0x215E0Cu);
    ctx->pc = 0x215E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E04u;
    // 0x215e08: 0x2484a680  addiu       $a0, $a0, -0x5980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E04u, 0x215E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E0Cu;
label_215e0c:
    // 0x215e0c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e10: 0x2405027a  addiu       $a1, $zero, 0x27A
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    // 0x215e14: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E14u;
    SET_GPR_U32(ctx, 31, 0x215E1Cu);
    ctx->pc = 0x215E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E14u;
    // 0x215e18: 0x2484a6b0  addiu       $a0, $a0, -0x5950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E14u, 0x215E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E1Cu;
label_215e1c:
    // 0x215e1c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e20: 0x2405028e  addiu       $a1, $zero, 0x28E
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
    // 0x215e24: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E24u;
    SET_GPR_U32(ctx, 31, 0x215E2Cu);
    ctx->pc = 0x215E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E24u;
    // 0x215e28: 0x2484a6d8  addiu       $a0, $a0, -0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E24u, 0x215E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E2Cu;
label_215e2c:
    // 0x215e2c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e30: 0x2405027b  addiu       $a1, $zero, 0x27B
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    // 0x215e34: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E34u;
    SET_GPR_U32(ctx, 31, 0x215E3Cu);
    ctx->pc = 0x215E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E34u;
    // 0x215e38: 0x2484a700  addiu       $a0, $a0, -0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E34u, 0x215E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E3Cu;
label_215e3c:
    // 0x215e3c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e40: 0x2405027c  addiu       $a1, $zero, 0x27C
    ctx->pc = 0x215e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x215e44: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E44u;
    SET_GPR_U32(ctx, 31, 0x215E4Cu);
    ctx->pc = 0x215E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E44u;
    // 0x215e48: 0x2484a728  addiu       $a0, $a0, -0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E44u, 0x215E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E4Cu;
label_215e4c:
    // 0x215e4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e50: 0x2405027d  addiu       $a1, $zero, 0x27D
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    // 0x215e54: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E54u;
    SET_GPR_U32(ctx, 31, 0x215E5Cu);
    ctx->pc = 0x215E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E54u;
    // 0x215e58: 0x2484a758  addiu       $a0, $a0, -0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E54u, 0x215E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E5Cu;
label_215e5c:
    // 0x215e5c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e60: 0x2405027e  addiu       $a1, $zero, 0x27E
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x215e64: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E64u;
    SET_GPR_U32(ctx, 31, 0x215E6Cu);
    ctx->pc = 0x215E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E64u;
    // 0x215e68: 0x2484a780  addiu       $a0, $a0, -0x5880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E64u, 0x215E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E6Cu;
label_215e6c:
    // 0x215e6c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e70: 0x2405027f  addiu       $a1, $zero, 0x27F
    ctx->pc = 0x215e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x215e74: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E74u;
    SET_GPR_U32(ctx, 31, 0x215E7Cu);
    ctx->pc = 0x215E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E74u;
    // 0x215e78: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E74u, 0x215E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E7Cu;
label_215e7c:
    // 0x215e7c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e80: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x215e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215e84: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E84u;
    SET_GPR_U32(ctx, 31, 0x215E8Cu);
    ctx->pc = 0x215E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E84u;
    // 0x215e88: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E84u, 0x215E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E8Cu;
label_215e8c:
    // 0x215e8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215e90: 0x24050282  addiu       $a1, $zero, 0x282
    ctx->pc = 0x215e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 642));
    // 0x215e94: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215E94u;
    SET_GPR_U32(ctx, 31, 0x215E9Cu);
    ctx->pc = 0x215E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E94u;
    // 0x215e98: 0x2484a800  addiu       $a0, $a0, -0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215E94u, 0x215E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E9Cu;
label_215e9c:
    // 0x215e9c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ea0: 0x24050284  addiu       $a1, $zero, 0x284
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
    // 0x215ea4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215EA4u;
    SET_GPR_U32(ctx, 31, 0x215EACu);
    ctx->pc = 0x215EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EA4u;
    // 0x215ea8: 0x2484a828  addiu       $a0, $a0, -0x57D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215EA4u, 0x215EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EACu;
label_215eac:
    // 0x215eac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215eb0: 0x2405026d  addiu       $a1, $zero, 0x26D
    ctx->pc = 0x215eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x215eb4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215EB4u;
    SET_GPR_U32(ctx, 31, 0x215EBCu);
    ctx->pc = 0x215EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EB4u;
    // 0x215eb8: 0x2484a850  addiu       $a0, $a0, -0x57B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215EB4u, 0x215EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EBCu;
label_215ebc:
    // 0x215ebc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ec0: 0x24050285  addiu       $a1, $zero, 0x285
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
    // 0x215ec4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215EC4u;
    SET_GPR_U32(ctx, 31, 0x215ECCu);
    ctx->pc = 0x215EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EC4u;
    // 0x215ec8: 0x2484a880  addiu       $a0, $a0, -0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215EC4u, 0x215ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ECCu;
label_215ecc:
    // 0x215ecc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ed0: 0x24050286  addiu       $a1, $zero, 0x286
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 646));
    // 0x215ed4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215ED4u;
    SET_GPR_U32(ctx, 31, 0x215EDCu);
    ctx->pc = 0x215ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215ED4u;
    // 0x215ed8: 0x2484a8a8  addiu       $a0, $a0, -0x5758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215ED4u, 0x215EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EDCu;
label_215edc:
    // 0x215edc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ee0: 0x24050287  addiu       $a1, $zero, 0x287
    ctx->pc = 0x215ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
    // 0x215ee4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215EE4u;
    SET_GPR_U32(ctx, 31, 0x215EECu);
    ctx->pc = 0x215EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EE4u;
    // 0x215ee8: 0x2484a8d8  addiu       $a0, $a0, -0x5728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215EE4u, 0x215EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EECu;
label_215eec:
    // 0x215eec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ef0: 0x24050288  addiu       $a1, $zero, 0x288
    ctx->pc = 0x215ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x215ef4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215EF4u;
    SET_GPR_U32(ctx, 31, 0x215EFCu);
    ctx->pc = 0x215EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EF4u;
    // 0x215ef8: 0x2484a908  addiu       $a0, $a0, -0x56F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215EF4u, 0x215EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EFCu;
label_215efc:
    // 0x215efc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f00: 0x24050289  addiu       $a1, $zero, 0x289
    ctx->pc = 0x215f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
    // 0x215f04: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F04u;
    SET_GPR_U32(ctx, 31, 0x215F0Cu);
    ctx->pc = 0x215F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F04u;
    // 0x215f08: 0x2484a938  addiu       $a0, $a0, -0x56C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F04u, 0x215F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F0Cu;
label_215f0c:
    // 0x215f0c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f10: 0x2405028a  addiu       $a1, $zero, 0x28A
    ctx->pc = 0x215f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x215f14: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F14u;
    SET_GPR_U32(ctx, 31, 0x215F1Cu);
    ctx->pc = 0x215F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F14u;
    // 0x215f18: 0x2484a960  addiu       $a0, $a0, -0x56A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F14u, 0x215F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F1Cu;
label_215f1c:
    // 0x215f1c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f20: 0x2405028b  addiu       $a1, $zero, 0x28B
    ctx->pc = 0x215f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
    // 0x215f24: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F24u;
    SET_GPR_U32(ctx, 31, 0x215F2Cu);
    ctx->pc = 0x215F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F24u;
    // 0x215f28: 0x2484a988  addiu       $a0, $a0, -0x5678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F24u, 0x215F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F2Cu;
label_215f2c:
    // 0x215f2c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f30: 0x2405028c  addiu       $a1, $zero, 0x28C
    ctx->pc = 0x215f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
    // 0x215f34: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F34u;
    SET_GPR_U32(ctx, 31, 0x215F3Cu);
    ctx->pc = 0x215F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F34u;
    // 0x215f38: 0x2484a9b8  addiu       $a0, $a0, -0x5648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F34u, 0x215F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F3Cu;
label_215f3c:
    // 0x215f3c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f40: 0x2405028d  addiu       $a1, $zero, 0x28D
    ctx->pc = 0x215f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    // 0x215f44: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F44u;
    SET_GPR_U32(ctx, 31, 0x215F4Cu);
    ctx->pc = 0x215F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F44u;
    // 0x215f48: 0x2484a9e8  addiu       $a0, $a0, -0x5618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F44u, 0x215F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F4Cu;
label_215f4c:
    // 0x215f4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f50: 0x2405028f  addiu       $a1, $zero, 0x28F
    ctx->pc = 0x215f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x215f54: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F54u;
    SET_GPR_U32(ctx, 31, 0x215F5Cu);
    ctx->pc = 0x215F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F54u;
    // 0x215f58: 0x2484aa18  addiu       $a0, $a0, -0x55E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F54u, 0x215F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F5Cu;
label_215f5c:
    // 0x215f5c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f60: 0x24050290  addiu       $a1, $zero, 0x290
    ctx->pc = 0x215f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x215f64: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F64u;
    SET_GPR_U32(ctx, 31, 0x215F6Cu);
    ctx->pc = 0x215F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F64u;
    // 0x215f68: 0x2484aa40  addiu       $a0, $a0, -0x55C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F64u, 0x215F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F6Cu;
label_215f6c:
    // 0x215f6c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f70: 0x24050291  addiu       $a1, $zero, 0x291
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x215f74: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F74u;
    SET_GPR_U32(ctx, 31, 0x215F7Cu);
    ctx->pc = 0x215F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F74u;
    // 0x215f78: 0x2484aa68  addiu       $a0, $a0, -0x5598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F74u, 0x215F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F7Cu;
label_215f7c:
    // 0x215f7c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f80: 0x24050292  addiu       $a1, $zero, 0x292
    ctx->pc = 0x215f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 658));
    // 0x215f84: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F84u;
    SET_GPR_U32(ctx, 31, 0x215F8Cu);
    ctx->pc = 0x215F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F84u;
    // 0x215f88: 0x2484aa90  addiu       $a0, $a0, -0x5570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F84u, 0x215F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F8Cu;
label_215f8c:
    // 0x215f8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215f90: 0x24050293  addiu       $a1, $zero, 0x293
    ctx->pc = 0x215f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    // 0x215f94: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215F94u;
    SET_GPR_U32(ctx, 31, 0x215F9Cu);
    ctx->pc = 0x215F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F94u;
    // 0x215f98: 0x2484aab8  addiu       $a0, $a0, -0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215F94u, 0x215F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F9Cu;
label_215f9c:
    // 0x215f9c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215fa0: 0x24050295  addiu       $a1, $zero, 0x295
    ctx->pc = 0x215fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
    // 0x215fa4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FA4u;
    SET_GPR_U32(ctx, 31, 0x215FACu);
    ctx->pc = 0x215FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FA4u;
    // 0x215fa8: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FA4u, 0x215FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FACu;
label_215fac:
    // 0x215fac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215fb0: 0x24050296  addiu       $a1, $zero, 0x296
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 662));
    // 0x215fb4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FB4u;
    SET_GPR_U32(ctx, 31, 0x215FBCu);
    ctx->pc = 0x215FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FB4u;
    // 0x215fb8: 0x2484ab10  addiu       $a0, $a0, -0x54F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FB4u, 0x215FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FBCu;
label_215fbc:
    // 0x215fbc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215fc0: 0x24050297  addiu       $a1, $zero, 0x297
    ctx->pc = 0x215fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 663));
    // 0x215fc4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FC4u;
    SET_GPR_U32(ctx, 31, 0x215FCCu);
    ctx->pc = 0x215FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FC4u;
    // 0x215fc8: 0x2484ab38  addiu       $a0, $a0, -0x54C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FC4u, 0x215FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FCCu;
label_215fcc:
    // 0x215fcc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215fd0: 0x24050299  addiu       $a1, $zero, 0x299
    ctx->pc = 0x215fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
    // 0x215fd4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FD4u;
    SET_GPR_U32(ctx, 31, 0x215FDCu);
    ctx->pc = 0x215FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FD4u;
    // 0x215fd8: 0x2484ab60  addiu       $a0, $a0, -0x54A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FD4u, 0x215FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FDCu;
label_215fdc:
    // 0x215fdc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215fe0: 0x2405029a  addiu       $a1, $zero, 0x29A
    ctx->pc = 0x215fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x215fe4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FE4u;
    SET_GPR_U32(ctx, 31, 0x215FECu);
    ctx->pc = 0x215FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FE4u;
    // 0x215fe8: 0x2484ab88  addiu       $a0, $a0, -0x5478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FE4u, 0x215FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FECu;
label_215fec:
    // 0x215fec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x215ff0: 0x2405029b  addiu       $a1, $zero, 0x29B
    ctx->pc = 0x215ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
    // 0x215ff4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x215FF4u;
    SET_GPR_U32(ctx, 31, 0x215FFCu);
    ctx->pc = 0x215FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FF4u;
    // 0x215ff8: 0x2484abb0  addiu       $a0, $a0, -0x5450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x215FF4u, 0x215FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FFCu;
label_215ffc:
    // 0x215ffc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x215ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216000: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x216004: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216004u;
    SET_GPR_U32(ctx, 31, 0x21600Cu);
    ctx->pc = 0x216008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216004u;
    // 0x216008: 0x2484abd8  addiu       $a0, $a0, -0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216004u, 0x21600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21600Cu;
label_21600c:
    // 0x21600c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216010: 0x2405029d  addiu       $a1, $zero, 0x29D
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    // 0x216014: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216014u;
    SET_GPR_U32(ctx, 31, 0x21601Cu);
    ctx->pc = 0x216018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216014u;
    // 0x216018: 0x2484ac00  addiu       $a0, $a0, -0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216014u, 0x21601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21601Cu;
label_21601c:
    // 0x21601c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21601cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216020: 0x2405029e  addiu       $a1, $zero, 0x29E
    ctx->pc = 0x216020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x216024: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216024u;
    SET_GPR_U32(ctx, 31, 0x21602Cu);
    ctx->pc = 0x216028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216024u;
    // 0x216028: 0x2484ac30  addiu       $a0, $a0, -0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216024u, 0x21602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21602Cu;
label_21602c:
    // 0x21602c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21602cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216030: 0x240502a0  addiu       $a1, $zero, 0x2A0
    ctx->pc = 0x216030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x216034: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216034u;
    SET_GPR_U32(ctx, 31, 0x21603Cu);
    ctx->pc = 0x216038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216034u;
    // 0x216038: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216034u, 0x21603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21603Cu;
label_21603c:
    // 0x21603c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21603cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216040: 0x240502a2  addiu       $a1, $zero, 0x2A2
    ctx->pc = 0x216040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
    // 0x216044: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216044u;
    SET_GPR_U32(ctx, 31, 0x21604Cu);
    ctx->pc = 0x216048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216044u;
    // 0x216048: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216044u, 0x21604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21604Cu;
label_21604c:
    // 0x21604c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21604cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216050: 0x240502a3  addiu       $a1, $zero, 0x2A3
    ctx->pc = 0x216050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x216054: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216054u;
    SET_GPR_U32(ctx, 31, 0x21605Cu);
    ctx->pc = 0x216058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216054u;
    // 0x216058: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216054u, 0x21605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21605Cu;
label_21605c:
    // 0x21605c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216060: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x216060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x216064: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216064u;
    SET_GPR_U32(ctx, 31, 0x21606Cu);
    ctx->pc = 0x216068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216064u;
    // 0x216068: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216064u, 0x21606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21606Cu;
label_21606c:
    // 0x21606c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21606cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216070: 0x240502a5  addiu       $a1, $zero, 0x2A5
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
    // 0x216074: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216074u;
    SET_GPR_U32(ctx, 31, 0x21607Cu);
    ctx->pc = 0x216078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216074u;
    // 0x216078: 0x2484ad08  addiu       $a0, $a0, -0x52F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216074u, 0x21607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21607Cu;
label_21607c:
    // 0x21607c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21607cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216080: 0x240502a7  addiu       $a1, $zero, 0x2A7
    ctx->pc = 0x216080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x216084: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216084u;
    SET_GPR_U32(ctx, 31, 0x21608Cu);
    ctx->pc = 0x216088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216084u;
    // 0x216088: 0x2484ad38  addiu       $a0, $a0, -0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216084u, 0x21608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21608Cu;
label_21608c:
    // 0x21608c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21608cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216090: 0x240502a9  addiu       $a1, $zero, 0x2A9
    ctx->pc = 0x216090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
    // 0x216094: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216094u;
    SET_GPR_U32(ctx, 31, 0x21609Cu);
    ctx->pc = 0x216098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216094u;
    // 0x216098: 0x2484ad68  addiu       $a0, $a0, -0x5298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216094u, 0x21609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21609Cu;
label_21609c:
    // 0x21609c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21609cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160a0: 0x240502aa  addiu       $a1, $zero, 0x2AA
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    // 0x2160a4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160A4u;
    SET_GPR_U32(ctx, 31, 0x2160ACu);
    ctx->pc = 0x2160A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160A4u;
    // 0x2160a8: 0x2484ad98  addiu       $a0, $a0, -0x5268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160A4u, 0x2160ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160ACu;
label_2160ac:
    // 0x2160ac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160b0: 0x240502ab  addiu       $a1, $zero, 0x2AB
    ctx->pc = 0x2160b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
    // 0x2160b4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160B4u;
    SET_GPR_U32(ctx, 31, 0x2160BCu);
    ctx->pc = 0x2160B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160B4u;
    // 0x2160b8: 0x2484adc0  addiu       $a0, $a0, -0x5240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160B4u, 0x2160BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160BCu;
label_2160bc:
    // 0x2160bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160c0: 0x240502ac  addiu       $a1, $zero, 0x2AC
    ctx->pc = 0x2160c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 684));
    // 0x2160c4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160C4u;
    SET_GPR_U32(ctx, 31, 0x2160CCu);
    ctx->pc = 0x2160C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160C4u;
    // 0x2160c8: 0x2484adf0  addiu       $a0, $a0, -0x5210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160C4u, 0x2160CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160CCu;
label_2160cc:
    // 0x2160cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160d0: 0x240502ad  addiu       $a1, $zero, 0x2AD
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 685));
    // 0x2160d4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160D4u;
    SET_GPR_U32(ctx, 31, 0x2160DCu);
    ctx->pc = 0x2160D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160D4u;
    // 0x2160d8: 0x2484ae20  addiu       $a0, $a0, -0x51E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160D4u, 0x2160DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160DCu;
label_2160dc:
    // 0x2160dc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160e0: 0x240502af  addiu       $a1, $zero, 0x2AF
    ctx->pc = 0x2160e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 687));
    // 0x2160e4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160E4u;
    SET_GPR_U32(ctx, 31, 0x2160ECu);
    ctx->pc = 0x2160E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160E4u;
    // 0x2160e8: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160E4u, 0x2160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160ECu;
label_2160ec:
    // 0x2160ec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2160f0: 0x240502b0  addiu       $a1, $zero, 0x2B0
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
    // 0x2160f4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2160F4u;
    SET_GPR_U32(ctx, 31, 0x2160FCu);
    ctx->pc = 0x2160F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160F4u;
    // 0x2160f8: 0x2484ae78  addiu       $a0, $a0, -0x5188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2160F4u, 0x2160FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2160fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216100: 0x240502b1  addiu       $a1, $zero, 0x2B1
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 689));
    // 0x216104: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216104u;
    SET_GPR_U32(ctx, 31, 0x21610Cu);
    ctx->pc = 0x216108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216104u;
    // 0x216108: 0x2484aea8  addiu       $a0, $a0, -0x5158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216104u, 0x21610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21610Cu;
label_21610c:
    // 0x21610c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21610cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216110: 0x240502b2  addiu       $a1, $zero, 0x2B2
    ctx->pc = 0x216110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
    // 0x216114: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216114u;
    SET_GPR_U32(ctx, 31, 0x21611Cu);
    ctx->pc = 0x216118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216114u;
    // 0x216118: 0x2484aed8  addiu       $a0, $a0, -0x5128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216114u, 0x21611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21611Cu;
label_21611c:
    // 0x21611c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21611cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216120: 0x240502b3  addiu       $a1, $zero, 0x2B3
    ctx->pc = 0x216120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    // 0x216124: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216124u;
    SET_GPR_U32(ctx, 31, 0x21612Cu);
    ctx->pc = 0x216128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216124u;
    // 0x216128: 0x2484af08  addiu       $a0, $a0, -0x50F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216124u, 0x21612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21612Cu;
label_21612c:
    // 0x21612c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21612cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216130: 0x240502b4  addiu       $a1, $zero, 0x2B4
    ctx->pc = 0x216130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
    // 0x216134: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216134u;
    SET_GPR_U32(ctx, 31, 0x21613Cu);
    ctx->pc = 0x216138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216134u;
    // 0x216138: 0x2484af30  addiu       $a0, $a0, -0x50D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216134u, 0x21613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21613Cu;
label_21613c:
    // 0x21613c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21613cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216140: 0x240502b5  addiu       $a1, $zero, 0x2B5
    ctx->pc = 0x216140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
    // 0x216144: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216144u;
    SET_GPR_U32(ctx, 31, 0x21614Cu);
    ctx->pc = 0x216148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216144u;
    // 0x216148: 0x2484af58  addiu       $a0, $a0, -0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216144u, 0x21614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21614Cu;
label_21614c:
    // 0x21614c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216150: 0x240502b7  addiu       $a1, $zero, 0x2B7
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
    // 0x216154: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216154u;
    SET_GPR_U32(ctx, 31, 0x21615Cu);
    ctx->pc = 0x216158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216154u;
    // 0x216158: 0x2484af88  addiu       $a0, $a0, -0x5078 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216154u, 0x21615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21615Cu;
label_21615c:
    // 0x21615c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216160: 0x240502b8  addiu       $a1, $zero, 0x2B8
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 696));
    // 0x216164: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216164u;
    SET_GPR_U32(ctx, 31, 0x21616Cu);
    ctx->pc = 0x216168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216164u;
    // 0x216168: 0x2484afb8  addiu       $a0, $a0, -0x5048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216164u, 0x21616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21616Cu;
label_21616c:
    // 0x21616c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21616cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216170: 0x240502b9  addiu       $a1, $zero, 0x2B9
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 697));
    // 0x216174: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216174u;
    SET_GPR_U32(ctx, 31, 0x21617Cu);
    ctx->pc = 0x216178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216174u;
    // 0x216178: 0x2484afe8  addiu       $a0, $a0, -0x5018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216174u, 0x21617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21617Cu;
label_21617c:
    // 0x21617c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21617cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216180: 0x240502ba  addiu       $a1, $zero, 0x2BA
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 698));
    // 0x216184: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216184u;
    SET_GPR_U32(ctx, 31, 0x21618Cu);
    ctx->pc = 0x216188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216184u;
    // 0x216188: 0x2484b018  addiu       $a0, $a0, -0x4FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216184u, 0x21618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21618Cu;
label_21618c:
    // 0x21618c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216190: 0x240502bb  addiu       $a1, $zero, 0x2BB
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 699));
    // 0x216194: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216194u;
    SET_GPR_U32(ctx, 31, 0x21619Cu);
    ctx->pc = 0x216198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216194u;
    // 0x216198: 0x2484b048  addiu       $a0, $a0, -0x4FB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216194u, 0x21619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21619Cu;
label_21619c:
    // 0x21619c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21619cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161a0: 0x240502bc  addiu       $a1, $zero, 0x2BC
    ctx->pc = 0x2161a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x2161a4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161A4u;
    SET_GPR_U32(ctx, 31, 0x2161ACu);
    ctx->pc = 0x2161A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161A4u;
    // 0x2161a8: 0x2484b078  addiu       $a0, $a0, -0x4F88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161A4u, 0x2161ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161ACu;
label_2161ac:
    // 0x2161ac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161b0: 0x240502bd  addiu       $a1, $zero, 0x2BD
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 701));
    // 0x2161b4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161B4u;
    SET_GPR_U32(ctx, 31, 0x2161BCu);
    ctx->pc = 0x2161B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161B4u;
    // 0x2161b8: 0x2484b0a8  addiu       $a0, $a0, -0x4F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161B4u, 0x2161BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161BCu;
label_2161bc:
    // 0x2161bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161c0: 0x240502be  addiu       $a1, $zero, 0x2BE
    ctx->pc = 0x2161c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 702));
    // 0x2161c4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161C4u;
    SET_GPR_U32(ctx, 31, 0x2161CCu);
    ctx->pc = 0x2161C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161C4u;
    // 0x2161c8: 0x2484b0d0  addiu       $a0, $a0, -0x4F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161C4u, 0x2161CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161CCu;
label_2161cc:
    // 0x2161cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161d0: 0x240502bf  addiu       $a1, $zero, 0x2BF
    ctx->pc = 0x2161d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 703));
    // 0x2161d4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161D4u;
    SET_GPR_U32(ctx, 31, 0x2161DCu);
    ctx->pc = 0x2161D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161D4u;
    // 0x2161d8: 0x2484b0f8  addiu       $a0, $a0, -0x4F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161D4u, 0x2161DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161DCu;
label_2161dc:
    // 0x2161dc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161e0: 0x240502c0  addiu       $a1, $zero, 0x2C0
    ctx->pc = 0x2161e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x2161e4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161E4u;
    SET_GPR_U32(ctx, 31, 0x2161ECu);
    ctx->pc = 0x2161E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161E4u;
    // 0x2161e8: 0x2484b128  addiu       $a0, $a0, -0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161E4u, 0x2161ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161ECu;
label_2161ec:
    // 0x2161ec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2161f0: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
    // 0x2161f4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2161F4u;
    SET_GPR_U32(ctx, 31, 0x2161FCu);
    ctx->pc = 0x2161F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161F4u;
    // 0x2161f8: 0x2484b158  addiu       $a0, $a0, -0x4EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2161F4u, 0x2161FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161FCu;
label_2161fc:
    // 0x2161fc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2161fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216200: 0x240502c2  addiu       $a1, $zero, 0x2C2
    ctx->pc = 0x216200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 706));
    // 0x216204: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216204u;
    SET_GPR_U32(ctx, 31, 0x21620Cu);
    ctx->pc = 0x216208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216204u;
    // 0x216208: 0x2484b188  addiu       $a0, $a0, -0x4E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216204u, 0x21620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21620Cu;
label_21620c:
    // 0x21620c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216210: 0x240502c3  addiu       $a1, $zero, 0x2C3
    ctx->pc = 0x216210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 707));
    // 0x216214: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216214u;
    SET_GPR_U32(ctx, 31, 0x21621Cu);
    ctx->pc = 0x216218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216214u;
    // 0x216218: 0x2484b1b8  addiu       $a0, $a0, -0x4E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216214u, 0x21621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21621Cu;
label_21621c:
    // 0x21621c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21621cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216220: 0x240502c4  addiu       $a1, $zero, 0x2C4
    ctx->pc = 0x216220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 708));
    // 0x216224: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216224u;
    SET_GPR_U32(ctx, 31, 0x21622Cu);
    ctx->pc = 0x216228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216224u;
    // 0x216228: 0x2484b1e8  addiu       $a0, $a0, -0x4E18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216224u, 0x21622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21622Cu;
label_21622c:
    // 0x21622c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21622cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216230: 0x240502c5  addiu       $a1, $zero, 0x2C5
    ctx->pc = 0x216230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 709));
    // 0x216234: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216234u;
    SET_GPR_U32(ctx, 31, 0x21623Cu);
    ctx->pc = 0x216238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216234u;
    // 0x216238: 0x2484b218  addiu       $a0, $a0, -0x4DE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216234u, 0x21623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21623Cu;
label_21623c:
    // 0x21623c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216240: 0x240502c6  addiu       $a1, $zero, 0x2C6
    ctx->pc = 0x216240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
    // 0x216244: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216244u;
    SET_GPR_U32(ctx, 31, 0x21624Cu);
    ctx->pc = 0x216248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216244u;
    // 0x216248: 0x2484b240  addiu       $a0, $a0, -0x4DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216244u, 0x21624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21624Cu;
label_21624c:
    // 0x21624c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216250: 0x240502b6  addiu       $a1, $zero, 0x2B6
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
    // 0x216254: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216254u;
    SET_GPR_U32(ctx, 31, 0x21625Cu);
    ctx->pc = 0x216258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216254u;
    // 0x216258: 0x2484b278  addiu       $a0, $a0, -0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216254u, 0x21625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21625Cu;
label_21625c:
    // 0x21625c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216260: 0x240502c7  addiu       $a1, $zero, 0x2C7
    ctx->pc = 0x216260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 711));
    // 0x216264: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216264u;
    SET_GPR_U32(ctx, 31, 0x21626Cu);
    ctx->pc = 0x216268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216264u;
    // 0x216268: 0x2484b2a8  addiu       $a0, $a0, -0x4D58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216264u, 0x21626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21626Cu;
label_21626c:
    // 0x21626c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21626cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216270: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x216270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x216274: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216274u;
    SET_GPR_U32(ctx, 31, 0x21627Cu);
    ctx->pc = 0x216278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216274u;
    // 0x216278: 0x2484b2d8  addiu       $a0, $a0, -0x4D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216274u, 0x21627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21627Cu;
label_21627c:
    // 0x21627c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21627cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216280: 0x240502a6  addiu       $a1, $zero, 0x2A6
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x216284: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216284u;
    SET_GPR_U32(ctx, 31, 0x21628Cu);
    ctx->pc = 0x216288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216284u;
    // 0x216288: 0x2484b308  addiu       $a0, $a0, -0x4CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216284u, 0x21628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21628Cu;
label_21628c:
    // 0x21628c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21628cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216290: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x216290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x216294: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216294u;
    SET_GPR_U32(ctx, 31, 0x21629Cu);
    ctx->pc = 0x216298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216294u;
    // 0x216298: 0x2484b338  addiu       $a0, $a0, -0x4CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216294u, 0x21629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21629Cu;
label_21629c:
    // 0x21629c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21629cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162a0: 0x240502ae  addiu       $a1, $zero, 0x2AE
    ctx->pc = 0x2162a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 686));
    // 0x2162a4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162A4u;
    SET_GPR_U32(ctx, 31, 0x2162ACu);
    ctx->pc = 0x2162A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162A4u;
    // 0x2162a8: 0x2484b368  addiu       $a0, $a0, -0x4C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162A4u, 0x2162ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162ACu;
label_2162ac:
    // 0x2162ac: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162b0: 0x240502a8  addiu       $a1, $zero, 0x2A8
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x2162b4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162B4u;
    SET_GPR_U32(ctx, 31, 0x2162BCu);
    ctx->pc = 0x2162B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162B4u;
    // 0x2162b8: 0x2484b398  addiu       $a0, $a0, -0x4C68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162B4u, 0x2162BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162BCu;
label_2162bc:
    // 0x2162bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162c0: 0x240502c8  addiu       $a1, $zero, 0x2C8
    ctx->pc = 0x2162c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x2162c4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162C4u;
    SET_GPR_U32(ctx, 31, 0x2162CCu);
    ctx->pc = 0x2162C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162C4u;
    // 0x2162c8: 0x2484b3c8  addiu       $a0, $a0, -0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162C4u, 0x2162CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162CCu;
label_2162cc:
    // 0x2162cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162d0: 0x24050274  addiu       $a1, $zero, 0x274
    ctx->pc = 0x2162d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
    // 0x2162d4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162D4u;
    SET_GPR_U32(ctx, 31, 0x2162DCu);
    ctx->pc = 0x2162D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162D4u;
    // 0x2162d8: 0x2484b400  addiu       $a0, $a0, -0x4C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162D4u, 0x2162DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162DCu;
label_2162dc:
    // 0x2162dc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162e0: 0x24050276  addiu       $a1, $zero, 0x276
    ctx->pc = 0x2162e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x2162e4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162E4u;
    SET_GPR_U32(ctx, 31, 0x2162ECu);
    ctx->pc = 0x2162E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162E4u;
    // 0x2162e8: 0x2484b428  addiu       $a0, $a0, -0x4BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162E4u, 0x2162ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162ECu;
label_2162ec:
    // 0x2162ec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2162f0: 0x24050298  addiu       $a1, $zero, 0x298
    ctx->pc = 0x2162f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x2162f4: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x2162F4u;
    SET_GPR_U32(ctx, 31, 0x2162FCu);
    ctx->pc = 0x2162F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162F4u;
    // 0x2162f8: 0x2484b458  addiu       $a0, $a0, -0x4BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x2162F4u, 0x2162FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162FCu;
label_2162fc:
    // 0x2162fc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2162fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216300: 0x24050278  addiu       $a1, $zero, 0x278
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x216304: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216304u;
    SET_GPR_U32(ctx, 31, 0x21630Cu);
    ctx->pc = 0x216308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216304u;
    // 0x216308: 0x2484b488  addiu       $a0, $a0, -0x4B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216304u, 0x21630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21630Cu;
label_21630c:
    // 0x21630c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21630cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216310: 0x24050281  addiu       $a1, $zero, 0x281
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
    // 0x216314: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216314u;
    SET_GPR_U32(ctx, 31, 0x21631Cu);
    ctx->pc = 0x216318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216314u;
    // 0x216318: 0x2484b4b8  addiu       $a0, $a0, -0x4B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216314u, 0x21631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21631Cu;
label_21631c:
    // 0x21631c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216320: 0x24050294  addiu       $a1, $zero, 0x294
    ctx->pc = 0x216320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x216324: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216324u;
    SET_GPR_U32(ctx, 31, 0x21632Cu);
    ctx->pc = 0x216328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216324u;
    // 0x216328: 0x2484b4e8  addiu       $a0, $a0, -0x4B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216324u, 0x21632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21632Cu;
label_21632c:
    // 0x21632c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216330: 0x240502c9  addiu       $a1, $zero, 0x2C9
    ctx->pc = 0x216330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 713));
    // 0x216334: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216334u;
    SET_GPR_U32(ctx, 31, 0x21633Cu);
    ctx->pc = 0x216338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216334u;
    // 0x216338: 0x2484b518  addiu       $a0, $a0, -0x4AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216334u, 0x21633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21633Cu;
label_21633c:
    // 0x21633c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21633cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x216340: 0x240502ca  addiu       $a1, $zero, 0x2CA
    ctx->pc = 0x216340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 714));
    // 0x216344: 0xc0851f8  jal         func_2147E0
    ctx->pc = 0x216344u;
    SET_GPR_U32(ctx, 31, 0x21634Cu);
    ctx->pc = 0x216348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216344u;
    // 0x216348: 0x2484b548  addiu       $a0, $a0, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147E0u, 0x216344u, 0x21634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21634Cu;
label_21634c:
    // 0x21634c: 0x24040269  addiu       $a0, $zero, 0x269
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
    // 0x216350: 0xc08525e  jal         func_214978
    ctx->pc = 0x216350u;
    SET_GPR_U32(ctx, 31, 0x216358u);
    ctx->pc = 0x216354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216350u;
    // 0x216354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216350u, 0x216358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216358u;
label_216358:
    // 0x216358: 0x2404026a  addiu       $a0, $zero, 0x26A
    ctx->pc = 0x216358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x21635c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21635Cu;
    SET_GPR_U32(ctx, 31, 0x216364u);
    ctx->pc = 0x216360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21635Cu;
    // 0x216360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21635Cu, 0x216364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216364u;
label_216364:
    // 0x216364: 0x2404026c  addiu       $a0, $zero, 0x26C
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x216368: 0xc08525e  jal         func_214978
    ctx->pc = 0x216368u;
    SET_GPR_U32(ctx, 31, 0x216370u);
    ctx->pc = 0x21636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216368u;
    // 0x21636c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216368u, 0x216370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216370u;
label_216370:
    // 0x216370: 0x2404026e  addiu       $a0, $zero, 0x26E
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
    // 0x216374: 0xc08525e  jal         func_214978
    ctx->pc = 0x216374u;
    SET_GPR_U32(ctx, 31, 0x21637Cu);
    ctx->pc = 0x216378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216374u;
    // 0x216378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216374u, 0x21637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21637Cu;
label_21637c:
    // 0x21637c: 0x2404026f  addiu       $a0, $zero, 0x26F
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    // 0x216380: 0xc08525e  jal         func_214978
    ctx->pc = 0x216380u;
    SET_GPR_U32(ctx, 31, 0x216388u);
    ctx->pc = 0x216384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216380u;
    // 0x216384: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216380u, 0x216388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216388u;
label_216388:
    // 0x216388: 0x24040270  addiu       $a0, $zero, 0x270
    ctx->pc = 0x216388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x21638c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21638Cu;
    SET_GPR_U32(ctx, 31, 0x216394u);
    ctx->pc = 0x216390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21638Cu;
    // 0x216390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21638Cu, 0x216394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216394u;
label_216394:
    // 0x216394: 0x24040271  addiu       $a0, $zero, 0x271
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x216398: 0xc08525e  jal         func_214978
    ctx->pc = 0x216398u;
    SET_GPR_U32(ctx, 31, 0x2163A0u);
    ctx->pc = 0x21639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216398u;
    // 0x21639c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216398u, 0x2163A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163A0u;
label_2163a0:
    // 0x2163a0: 0x24040272  addiu       $a0, $zero, 0x272
    ctx->pc = 0x2163a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
    // 0x2163a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163A4u;
    SET_GPR_U32(ctx, 31, 0x2163ACu);
    ctx->pc = 0x2163A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163A4u;
    // 0x2163a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163A4u, 0x2163ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163ACu;
label_2163ac:
    // 0x2163ac: 0x24040273  addiu       $a0, $zero, 0x273
    ctx->pc = 0x2163acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
    // 0x2163b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163B0u;
    SET_GPR_U32(ctx, 31, 0x2163B8u);
    ctx->pc = 0x2163B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163B0u;
    // 0x2163b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163B0u, 0x2163B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163B8u;
label_2163b8:
    // 0x2163b8: 0x24040274  addiu       $a0, $zero, 0x274
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
    // 0x2163bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163BCu;
    SET_GPR_U32(ctx, 31, 0x2163C4u);
    ctx->pc = 0x2163C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163BCu;
    // 0x2163c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163BCu, 0x2163C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163C4u;
label_2163c4:
    // 0x2163c4: 0x24040275  addiu       $a0, $zero, 0x275
    ctx->pc = 0x2163c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x2163c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163C8u;
    SET_GPR_U32(ctx, 31, 0x2163D0u);
    ctx->pc = 0x2163CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163C8u;
    // 0x2163cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163C8u, 0x2163D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163D0u;
label_2163d0:
    // 0x2163d0: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x2163d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163D4u;
    SET_GPR_U32(ctx, 31, 0x2163DCu);
    ctx->pc = 0x2163D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163D4u;
    // 0x2163d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163D4u, 0x2163DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163DCu;
label_2163dc:
    // 0x2163dc: 0x24040277  addiu       $a0, $zero, 0x277
    ctx->pc = 0x2163dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
    // 0x2163e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163E0u;
    SET_GPR_U32(ctx, 31, 0x2163E8u);
    ctx->pc = 0x2163E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163E0u;
    // 0x2163e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163E0u, 0x2163E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163E8u;
label_2163e8:
    // 0x2163e8: 0x24040278  addiu       $a0, $zero, 0x278
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x2163ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163ECu;
    SET_GPR_U32(ctx, 31, 0x2163F4u);
    ctx->pc = 0x2163F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163ECu;
    // 0x2163f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163ECu, 0x2163F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163F4u;
label_2163f4:
    // 0x2163f4: 0x24040279  addiu       $a0, $zero, 0x279
    ctx->pc = 0x2163f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x2163f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2163F8u;
    SET_GPR_U32(ctx, 31, 0x216400u);
    ctx->pc = 0x2163FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163F8u;
    // 0x2163fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2163F8u, 0x216400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216400u;
label_216400:
    // 0x216400: 0x2404027a  addiu       $a0, $zero, 0x27A
    ctx->pc = 0x216400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    // 0x216404: 0xc08525e  jal         func_214978
    ctx->pc = 0x216404u;
    SET_GPR_U32(ctx, 31, 0x21640Cu);
    ctx->pc = 0x216408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216404u;
    // 0x216408: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216404u, 0x21640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21640Cu;
label_21640c:
    // 0x21640c: 0x2404027b  addiu       $a0, $zero, 0x27B
    ctx->pc = 0x21640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    // 0x216410: 0xc08525e  jal         func_214978
    ctx->pc = 0x216410u;
    SET_GPR_U32(ctx, 31, 0x216418u);
    ctx->pc = 0x216414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216410u;
    // 0x216414: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216410u, 0x216418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216418u;
label_216418:
    // 0x216418: 0x2404027c  addiu       $a0, $zero, 0x27C
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x21641c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21641Cu;
    SET_GPR_U32(ctx, 31, 0x216424u);
    ctx->pc = 0x216420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21641Cu;
    // 0x216420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21641Cu, 0x216424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216424u;
label_216424:
    // 0x216424: 0x2404027d  addiu       $a0, $zero, 0x27D
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    // 0x216428: 0xc08525e  jal         func_214978
    ctx->pc = 0x216428u;
    SET_GPR_U32(ctx, 31, 0x216430u);
    ctx->pc = 0x21642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216428u;
    // 0x21642c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216428u, 0x216430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216430u;
label_216430:
    // 0x216430: 0x2404027e  addiu       $a0, $zero, 0x27E
    ctx->pc = 0x216430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x216434: 0xc08525e  jal         func_214978
    ctx->pc = 0x216434u;
    SET_GPR_U32(ctx, 31, 0x21643Cu);
    ctx->pc = 0x216438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216434u;
    // 0x216438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216434u, 0x21643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21643Cu;
label_21643c:
    // 0x21643c: 0x2404027f  addiu       $a0, $zero, 0x27F
    ctx->pc = 0x21643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x216440: 0xc08525e  jal         func_214978
    ctx->pc = 0x216440u;
    SET_GPR_U32(ctx, 31, 0x216448u);
    ctx->pc = 0x216444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216440u;
    // 0x216444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216440u, 0x216448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216448u;
label_216448:
    // 0x216448: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x216448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x21644c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21644Cu;
    SET_GPR_U32(ctx, 31, 0x216454u);
    ctx->pc = 0x216450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21644Cu;
    // 0x216450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21644Cu, 0x216454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216454u;
label_216454:
    // 0x216454: 0x24040282  addiu       $a0, $zero, 0x282
    ctx->pc = 0x216454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 642));
    // 0x216458: 0xc08525e  jal         func_214978
    ctx->pc = 0x216458u;
    SET_GPR_U32(ctx, 31, 0x216460u);
    ctx->pc = 0x21645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216458u;
    // 0x21645c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216458u, 0x216460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216460u;
label_216460:
    // 0x216460: 0x24040284  addiu       $a0, $zero, 0x284
    ctx->pc = 0x216460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
    // 0x216464: 0xc08525e  jal         func_214978
    ctx->pc = 0x216464u;
    SET_GPR_U32(ctx, 31, 0x21646Cu);
    ctx->pc = 0x216468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216464u;
    // 0x216468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216464u, 0x21646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21646Cu;
label_21646c:
    // 0x21646c: 0x2404026d  addiu       $a0, $zero, 0x26D
    ctx->pc = 0x21646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x216470: 0xc08525e  jal         func_214978
    ctx->pc = 0x216470u;
    SET_GPR_U32(ctx, 31, 0x216478u);
    ctx->pc = 0x216474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216470u;
    // 0x216474: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216470u, 0x216478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216478u;
label_216478:
    // 0x216478: 0x24040285  addiu       $a0, $zero, 0x285
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
    // 0x21647c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21647Cu;
    SET_GPR_U32(ctx, 31, 0x216484u);
    ctx->pc = 0x216480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21647Cu;
    // 0x216480: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21647Cu, 0x216484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216484u;
label_216484:
    // 0x216484: 0x24040286  addiu       $a0, $zero, 0x286
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 646));
    // 0x216488: 0xc08525e  jal         func_214978
    ctx->pc = 0x216488u;
    SET_GPR_U32(ctx, 31, 0x216490u);
    ctx->pc = 0x21648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216488u;
    // 0x21648c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216488u, 0x216490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216490u;
label_216490:
    // 0x216490: 0x24040287  addiu       $a0, $zero, 0x287
    ctx->pc = 0x216490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
    // 0x216494: 0xc08525e  jal         func_214978
    ctx->pc = 0x216494u;
    SET_GPR_U32(ctx, 31, 0x21649Cu);
    ctx->pc = 0x216498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216494u;
    // 0x216498: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216494u, 0x21649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21649Cu;
label_21649c:
    // 0x21649c: 0x24040288  addiu       $a0, $zero, 0x288
    ctx->pc = 0x21649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x2164a0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164A0u;
    SET_GPR_U32(ctx, 31, 0x2164A8u);
    ctx->pc = 0x2164A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164A0u;
    // 0x2164a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164A0u, 0x2164A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164A8u;
label_2164a8:
    // 0x2164a8: 0x24040289  addiu       $a0, $zero, 0x289
    ctx->pc = 0x2164a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
    // 0x2164ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164ACu;
    SET_GPR_U32(ctx, 31, 0x2164B4u);
    ctx->pc = 0x2164B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164ACu;
    // 0x2164b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164ACu, 0x2164B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164B4u;
label_2164b4:
    // 0x2164b4: 0x2404028a  addiu       $a0, $zero, 0x28A
    ctx->pc = 0x2164b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x2164b8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164B8u;
    SET_GPR_U32(ctx, 31, 0x2164C0u);
    ctx->pc = 0x2164BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164B8u;
    // 0x2164bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164B8u, 0x2164C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164C0u;
label_2164c0:
    // 0x2164c0: 0x2404028b  addiu       $a0, $zero, 0x28B
    ctx->pc = 0x2164c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
    // 0x2164c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164C4u;
    SET_GPR_U32(ctx, 31, 0x2164CCu);
    ctx->pc = 0x2164C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164C4u;
    // 0x2164c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164C4u, 0x2164CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164CCu;
label_2164cc:
    // 0x2164cc: 0x2404028c  addiu       $a0, $zero, 0x28C
    ctx->pc = 0x2164ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
    // 0x2164d0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164D0u;
    SET_GPR_U32(ctx, 31, 0x2164D8u);
    ctx->pc = 0x2164D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164D0u;
    // 0x2164d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164D0u, 0x2164D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164D8u;
label_2164d8:
    // 0x2164d8: 0x2404028d  addiu       $a0, $zero, 0x28D
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    // 0x2164dc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164DCu;
    SET_GPR_U32(ctx, 31, 0x2164E4u);
    ctx->pc = 0x2164E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164DCu;
    // 0x2164e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164DCu, 0x2164E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164E4u;
label_2164e4:
    // 0x2164e4: 0x2404028e  addiu       $a0, $zero, 0x28E
    ctx->pc = 0x2164e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
    // 0x2164e8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164E8u;
    SET_GPR_U32(ctx, 31, 0x2164F0u);
    ctx->pc = 0x2164ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164E8u;
    // 0x2164ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164E8u, 0x2164F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164F0u;
label_2164f0:
    // 0x2164f0: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x2164f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x2164f4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2164F4u;
    SET_GPR_U32(ctx, 31, 0x2164FCu);
    ctx->pc = 0x2164F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164F4u;
    // 0x2164f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2164F4u, 0x2164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164FCu;
label_2164fc:
    // 0x2164fc: 0x24040291  addiu       $a0, $zero, 0x291
    ctx->pc = 0x2164fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x216500: 0xc08525e  jal         func_214978
    ctx->pc = 0x216500u;
    SET_GPR_U32(ctx, 31, 0x216508u);
    ctx->pc = 0x216504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216500u;
    // 0x216504: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216500u, 0x216508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216508u;
label_216508:
    // 0x216508: 0x24040292  addiu       $a0, $zero, 0x292
    ctx->pc = 0x216508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 658));
    // 0x21650c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21650Cu;
    SET_GPR_U32(ctx, 31, 0x216514u);
    ctx->pc = 0x216510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21650Cu;
    // 0x216510: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21650Cu, 0x216514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216514u;
label_216514:
    // 0x216514: 0x24040293  addiu       $a0, $zero, 0x293
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    // 0x216518: 0xc08525e  jal         func_214978
    ctx->pc = 0x216518u;
    SET_GPR_U32(ctx, 31, 0x216520u);
    ctx->pc = 0x21651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216518u;
    // 0x21651c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216518u, 0x216520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216520u;
label_216520:
    // 0x216520: 0x24040295  addiu       $a0, $zero, 0x295
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
    // 0x216524: 0xc08525e  jal         func_214978
    ctx->pc = 0x216524u;
    SET_GPR_U32(ctx, 31, 0x21652Cu);
    ctx->pc = 0x216528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216524u;
    // 0x216528: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216524u, 0x21652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21652Cu;
label_21652c:
    // 0x21652c: 0x24040296  addiu       $a0, $zero, 0x296
    ctx->pc = 0x21652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 662));
    // 0x216530: 0xc08525e  jal         func_214978
    ctx->pc = 0x216530u;
    SET_GPR_U32(ctx, 31, 0x216538u);
    ctx->pc = 0x216534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216530u;
    // 0x216534: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216530u, 0x216538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216538u;
label_216538:
    // 0x216538: 0x24040297  addiu       $a0, $zero, 0x297
    ctx->pc = 0x216538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 663));
    // 0x21653c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21653Cu;
    SET_GPR_U32(ctx, 31, 0x216544u);
    ctx->pc = 0x216540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21653Cu;
    // 0x216540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21653Cu, 0x216544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x216544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x216548: 0xc08525e  jal         func_214978
    ctx->pc = 0x216548u;
    SET_GPR_U32(ctx, 31, 0x216550u);
    ctx->pc = 0x21654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216548u;
    // 0x21654c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216548u, 0x216550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216550u;
label_216550:
    // 0x216550: 0x24040299  addiu       $a0, $zero, 0x299
    ctx->pc = 0x216550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
    // 0x216554: 0xc08525e  jal         func_214978
    ctx->pc = 0x216554u;
    SET_GPR_U32(ctx, 31, 0x21655Cu);
    ctx->pc = 0x216558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216554u;
    // 0x216558: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216554u, 0x21655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21655Cu;
label_21655c:
    // 0x21655c: 0x2404029a  addiu       $a0, $zero, 0x29A
    ctx->pc = 0x21655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x216560: 0xc08525e  jal         func_214978
    ctx->pc = 0x216560u;
    SET_GPR_U32(ctx, 31, 0x216568u);
    ctx->pc = 0x216564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216560u;
    // 0x216564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216560u, 0x216568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216568u;
label_216568:
    // 0x216568: 0x2404029b  addiu       $a0, $zero, 0x29B
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
    // 0x21656c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21656Cu;
    SET_GPR_U32(ctx, 31, 0x216574u);
    ctx->pc = 0x216570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21656Cu;
    // 0x216570: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21656Cu, 0x216574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216574u;
label_216574:
    // 0x216574: 0x2404029c  addiu       $a0, $zero, 0x29C
    ctx->pc = 0x216574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x216578: 0xc08525e  jal         func_214978
    ctx->pc = 0x216578u;
    SET_GPR_U32(ctx, 31, 0x216580u);
    ctx->pc = 0x21657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216578u;
    // 0x21657c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216578u, 0x216580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216580u;
label_216580:
    // 0x216580: 0x2404029d  addiu       $a0, $zero, 0x29D
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    // 0x216584: 0xc08525e  jal         func_214978
    ctx->pc = 0x216584u;
    SET_GPR_U32(ctx, 31, 0x21658Cu);
    ctx->pc = 0x216588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216584u;
    // 0x216588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216584u, 0x21658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21658Cu;
label_21658c:
    // 0x21658c: 0x2404029e  addiu       $a0, $zero, 0x29E
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x216590: 0xc08525e  jal         func_214978
    ctx->pc = 0x216590u;
    SET_GPR_U32(ctx, 31, 0x216598u);
    ctx->pc = 0x216594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216590u;
    // 0x216594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216590u, 0x216598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216598u;
label_216598:
    // 0x216598: 0x2404029f  addiu       $a0, $zero, 0x29F
    ctx->pc = 0x216598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x21659c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21659Cu;
    SET_GPR_U32(ctx, 31, 0x2165A4u);
    ctx->pc = 0x2165A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21659Cu;
    // 0x2165a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21659Cu, 0x2165A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165A4u;
label_2165a4:
    // 0x2165a4: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x2165a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x2165a8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165A8u;
    SET_GPR_U32(ctx, 31, 0x2165B0u);
    ctx->pc = 0x2165ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165A8u;
    // 0x2165ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165A8u, 0x2165B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165B0u;
label_2165b0:
    // 0x2165b0: 0x240402a1  addiu       $a0, $zero, 0x2A1
    ctx->pc = 0x2165b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2165b4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165B4u;
    SET_GPR_U32(ctx, 31, 0x2165BCu);
    ctx->pc = 0x2165B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165B4u;
    // 0x2165b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165B4u, 0x2165BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165BCu;
label_2165bc:
    // 0x2165bc: 0x240402a2  addiu       $a0, $zero, 0x2A2
    ctx->pc = 0x2165bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
    // 0x2165c0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165C0u;
    SET_GPR_U32(ctx, 31, 0x2165C8u);
    ctx->pc = 0x2165C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165C0u;
    // 0x2165c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165C0u, 0x2165C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165C8u;
label_2165c8:
    // 0x2165c8: 0x240402a3  addiu       $a0, $zero, 0x2A3
    ctx->pc = 0x2165c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x2165cc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165CCu;
    SET_GPR_U32(ctx, 31, 0x2165D4u);
    ctx->pc = 0x2165D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165CCu;
    // 0x2165d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165CCu, 0x2165D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165D4u;
label_2165d4:
    // 0x2165d4: 0x240402a4  addiu       $a0, $zero, 0x2A4
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x2165d8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165D8u;
    SET_GPR_U32(ctx, 31, 0x2165E0u);
    ctx->pc = 0x2165DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165D8u;
    // 0x2165dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165D8u, 0x2165E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165E0u;
label_2165e0:
    // 0x2165e0: 0x240402a5  addiu       $a0, $zero, 0x2A5
    ctx->pc = 0x2165e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
    // 0x2165e4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165E4u;
    SET_GPR_U32(ctx, 31, 0x2165ECu);
    ctx->pc = 0x2165E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165E4u;
    // 0x2165e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165E4u, 0x2165ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165ECu;
label_2165ec:
    // 0x2165ec: 0x240402a6  addiu       $a0, $zero, 0x2A6
    ctx->pc = 0x2165ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x2165f0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165F0u;
    SET_GPR_U32(ctx, 31, 0x2165F8u);
    ctx->pc = 0x2165F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165F0u;
    // 0x2165f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165F0u, 0x2165F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165F8u;
label_2165f8:
    // 0x2165f8: 0x240402a8  addiu       $a0, $zero, 0x2A8
    ctx->pc = 0x2165f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x2165fc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2165FCu;
    SET_GPR_U32(ctx, 31, 0x216604u);
    ctx->pc = 0x216600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165FCu;
    // 0x216600: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2165FCu, 0x216604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216604u;
label_216604:
    // 0x216604: 0x240402a9  addiu       $a0, $zero, 0x2A9
    ctx->pc = 0x216604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
    // 0x216608: 0xc08525e  jal         func_214978
    ctx->pc = 0x216608u;
    SET_GPR_U32(ctx, 31, 0x216610u);
    ctx->pc = 0x21660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216608u;
    // 0x21660c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216608u, 0x216610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216610u;
label_216610:
    // 0x216610: 0x240402aa  addiu       $a0, $zero, 0x2AA
    ctx->pc = 0x216610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    // 0x216614: 0xc08525e  jal         func_214978
    ctx->pc = 0x216614u;
    SET_GPR_U32(ctx, 31, 0x21661Cu);
    ctx->pc = 0x216618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216614u;
    // 0x216618: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216614u, 0x21661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21661Cu;
label_21661c:
    // 0x21661c: 0x240402ab  addiu       $a0, $zero, 0x2AB
    ctx->pc = 0x21661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
    // 0x216620: 0xc08525e  jal         func_214978
    ctx->pc = 0x216620u;
    SET_GPR_U32(ctx, 31, 0x216628u);
    ctx->pc = 0x216624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216620u;
    // 0x216624: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216620u, 0x216628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216628u;
label_216628:
    // 0x216628: 0x240402ac  addiu       $a0, $zero, 0x2AC
    ctx->pc = 0x216628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 684));
    // 0x21662c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21662Cu;
    SET_GPR_U32(ctx, 31, 0x216634u);
    ctx->pc = 0x216630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21662Cu;
    // 0x216630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21662Cu, 0x216634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216634u;
label_216634:
    // 0x216634: 0x240402af  addiu       $a0, $zero, 0x2AF
    ctx->pc = 0x216634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 687));
    // 0x216638: 0xc08525e  jal         func_214978
    ctx->pc = 0x216638u;
    SET_GPR_U32(ctx, 31, 0x216640u);
    ctx->pc = 0x21663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216638u;
    // 0x21663c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216638u, 0x216640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216640u;
label_216640:
    // 0x216640: 0x240402b0  addiu       $a0, $zero, 0x2B0
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
    // 0x216644: 0xc08525e  jal         func_214978
    ctx->pc = 0x216644u;
    SET_GPR_U32(ctx, 31, 0x21664Cu);
    ctx->pc = 0x216648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216644u;
    // 0x216648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216644u, 0x21664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21664Cu;
label_21664c:
    // 0x21664c: 0x240402b1  addiu       $a0, $zero, 0x2B1
    ctx->pc = 0x21664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 689));
    // 0x216650: 0xc08525e  jal         func_214978
    ctx->pc = 0x216650u;
    SET_GPR_U32(ctx, 31, 0x216658u);
    ctx->pc = 0x216654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216650u;
    // 0x216654: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216650u, 0x216658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216658u;
label_216658:
    // 0x216658: 0x240402b2  addiu       $a0, $zero, 0x2B2
    ctx->pc = 0x216658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
    // 0x21665c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21665Cu;
    SET_GPR_U32(ctx, 31, 0x216664u);
    ctx->pc = 0x216660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21665Cu;
    // 0x216660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21665Cu, 0x216664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216664u;
label_216664:
    // 0x216664: 0x240402b3  addiu       $a0, $zero, 0x2B3
    ctx->pc = 0x216664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    // 0x216668: 0xc08525e  jal         func_214978
    ctx->pc = 0x216668u;
    SET_GPR_U32(ctx, 31, 0x216670u);
    ctx->pc = 0x21666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216668u;
    // 0x21666c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216668u, 0x216670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216670u;
label_216670:
    // 0x216670: 0x240402b4  addiu       $a0, $zero, 0x2B4
    ctx->pc = 0x216670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
    // 0x216674: 0xc08525e  jal         func_214978
    ctx->pc = 0x216674u;
    SET_GPR_U32(ctx, 31, 0x21667Cu);
    ctx->pc = 0x216678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216674u;
    // 0x216678: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216674u, 0x21667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21667Cu;
label_21667c:
    // 0x21667c: 0x240402b5  addiu       $a0, $zero, 0x2B5
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
    // 0x216680: 0xc08525e  jal         func_214978
    ctx->pc = 0x216680u;
    SET_GPR_U32(ctx, 31, 0x216688u);
    ctx->pc = 0x216684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216680u;
    // 0x216684: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216680u, 0x216688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216688u;
label_216688:
    // 0x216688: 0x240402b7  addiu       $a0, $zero, 0x2B7
    ctx->pc = 0x216688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
    // 0x21668c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21668Cu;
    SET_GPR_U32(ctx, 31, 0x216694u);
    ctx->pc = 0x216690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21668Cu;
    // 0x216690: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21668Cu, 0x216694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216694u;
label_216694:
    // 0x216694: 0x240402b8  addiu       $a0, $zero, 0x2B8
    ctx->pc = 0x216694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 696));
    // 0x216698: 0xc08525e  jal         func_214978
    ctx->pc = 0x216698u;
    SET_GPR_U32(ctx, 31, 0x2166A0u);
    ctx->pc = 0x21669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216698u;
    // 0x21669c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216698u, 0x2166A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166A0u;
label_2166a0:
    // 0x2166a0: 0x240402b9  addiu       $a0, $zero, 0x2B9
    ctx->pc = 0x2166a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 697));
    // 0x2166a4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166A4u;
    SET_GPR_U32(ctx, 31, 0x2166ACu);
    ctx->pc = 0x2166A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166A4u;
    // 0x2166a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166A4u, 0x2166ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166ACu;
label_2166ac:
    // 0x2166ac: 0x240402ba  addiu       $a0, $zero, 0x2BA
    ctx->pc = 0x2166acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 698));
    // 0x2166b0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166B0u;
    SET_GPR_U32(ctx, 31, 0x2166B8u);
    ctx->pc = 0x2166B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166B0u;
    // 0x2166b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166B0u, 0x2166B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166B8u;
label_2166b8:
    // 0x2166b8: 0x240402bb  addiu       $a0, $zero, 0x2BB
    ctx->pc = 0x2166b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 699));
    // 0x2166bc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166BCu;
    SET_GPR_U32(ctx, 31, 0x2166C4u);
    ctx->pc = 0x2166C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166BCu;
    // 0x2166c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166BCu, 0x2166C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166C4u;
label_2166c4:
    // 0x2166c4: 0x240402bc  addiu       $a0, $zero, 0x2BC
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x2166c8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166C8u;
    SET_GPR_U32(ctx, 31, 0x2166D0u);
    ctx->pc = 0x2166CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166C8u;
    // 0x2166cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166C8u, 0x2166D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166D0u;
label_2166d0:
    // 0x2166d0: 0x240402bd  addiu       $a0, $zero, 0x2BD
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 701));
    // 0x2166d4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166D4u;
    SET_GPR_U32(ctx, 31, 0x2166DCu);
    ctx->pc = 0x2166D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166D4u;
    // 0x2166d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166D4u, 0x2166DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166DCu;
label_2166dc:
    // 0x2166dc: 0x240402be  addiu       $a0, $zero, 0x2BE
    ctx->pc = 0x2166dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 702));
    // 0x2166e0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166E0u;
    SET_GPR_U32(ctx, 31, 0x2166E8u);
    ctx->pc = 0x2166E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166E0u;
    // 0x2166e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166E0u, 0x2166E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166E8u;
label_2166e8:
    // 0x2166e8: 0x240402bf  addiu       $a0, $zero, 0x2BF
    ctx->pc = 0x2166e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 703));
    // 0x2166ec: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166ECu;
    SET_GPR_U32(ctx, 31, 0x2166F4u);
    ctx->pc = 0x2166F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166ECu;
    // 0x2166f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166ECu, 0x2166F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166F4u;
label_2166f4:
    // 0x2166f4: 0x240402c0  addiu       $a0, $zero, 0x2C0
    ctx->pc = 0x2166f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x2166f8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2166F8u;
    SET_GPR_U32(ctx, 31, 0x216700u);
    ctx->pc = 0x2166FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166F8u;
    // 0x2166fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2166F8u, 0x216700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216700u;
label_216700:
    // 0x216700: 0x240402c1  addiu       $a0, $zero, 0x2C1
    ctx->pc = 0x216700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
    // 0x216704: 0xc08525e  jal         func_214978
    ctx->pc = 0x216704u;
    SET_GPR_U32(ctx, 31, 0x21670Cu);
    ctx->pc = 0x216708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216704u;
    // 0x216708: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216704u, 0x21670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21670Cu;
label_21670c:
    // 0x21670c: 0x240402c2  addiu       $a0, $zero, 0x2C2
    ctx->pc = 0x21670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 706));
    // 0x216710: 0xc08525e  jal         func_214978
    ctx->pc = 0x216710u;
    SET_GPR_U32(ctx, 31, 0x216718u);
    ctx->pc = 0x216714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216710u;
    // 0x216714: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216710u, 0x216718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216718u;
label_216718:
    // 0x216718: 0x240402c3  addiu       $a0, $zero, 0x2C3
    ctx->pc = 0x216718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 707));
    // 0x21671c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21671Cu;
    SET_GPR_U32(ctx, 31, 0x216724u);
    ctx->pc = 0x216720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21671Cu;
    // 0x216720: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21671Cu, 0x216724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216724u;
label_216724:
    // 0x216724: 0x240402c5  addiu       $a0, $zero, 0x2C5
    ctx->pc = 0x216724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 709));
    // 0x216728: 0xc08525e  jal         func_214978
    ctx->pc = 0x216728u;
    SET_GPR_U32(ctx, 31, 0x216730u);
    ctx->pc = 0x21672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216728u;
    // 0x21672c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216728u, 0x216730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216730u;
label_216730:
    // 0x216730: 0x240402c6  addiu       $a0, $zero, 0x2C6
    ctx->pc = 0x216730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
    // 0x216734: 0xc08525e  jal         func_214978
    ctx->pc = 0x216734u;
    SET_GPR_U32(ctx, 31, 0x21673Cu);
    ctx->pc = 0x216738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216734u;
    // 0x216738: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216734u, 0x21673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21673Cu;
label_21673c:
    // 0x21673c: 0x240402a7  addiu       $a0, $zero, 0x2A7
    ctx->pc = 0x21673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x216740: 0xc08525e  jal         func_214978
    ctx->pc = 0x216740u;
    SET_GPR_U32(ctx, 31, 0x216748u);
    ctx->pc = 0x216744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216740u;
    // 0x216744: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216740u, 0x216748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216748u;
label_216748:
    // 0x216748: 0x240402ad  addiu       $a0, $zero, 0x2AD
    ctx->pc = 0x216748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 685));
    // 0x21674c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21674Cu;
    SET_GPR_U32(ctx, 31, 0x216754u);
    ctx->pc = 0x216750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21674Cu;
    // 0x216750: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21674Cu, 0x216754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216754u;
label_216754:
    // 0x216754: 0x240402b6  addiu       $a0, $zero, 0x2B6
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
    // 0x216758: 0xc08525e  jal         func_214978
    ctx->pc = 0x216758u;
    SET_GPR_U32(ctx, 31, 0x216760u);
    ctx->pc = 0x21675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216758u;
    // 0x21675c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216758u, 0x216760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216760u;
label_216760:
    // 0x216760: 0x240402c7  addiu       $a0, $zero, 0x2C7
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 711));
    // 0x216764: 0xc08525e  jal         func_214978
    ctx->pc = 0x216764u;
    SET_GPR_U32(ctx, 31, 0x21676Cu);
    ctx->pc = 0x216768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216764u;
    // 0x216768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216764u, 0x21676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21676Cu;
label_21676c:
    // 0x21676c: 0x2404029f  addiu       $a0, $zero, 0x29F
    ctx->pc = 0x21676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x216770: 0xc08525e  jal         func_214978
    ctx->pc = 0x216770u;
    SET_GPR_U32(ctx, 31, 0x216778u);
    ctx->pc = 0x216774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216770u;
    // 0x216774: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216770u, 0x216778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216778u;
label_216778:
    // 0x216778: 0x240402a6  addiu       $a0, $zero, 0x2A6
    ctx->pc = 0x216778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x21677c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21677Cu;
    SET_GPR_U32(ctx, 31, 0x216784u);
    ctx->pc = 0x216780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21677Cu;
    // 0x216780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21677Cu, 0x216784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216784u;
label_216784:
    // 0x216784: 0x240402a1  addiu       $a0, $zero, 0x2A1
    ctx->pc = 0x216784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x216788: 0xc08525e  jal         func_214978
    ctx->pc = 0x216788u;
    SET_GPR_U32(ctx, 31, 0x216790u);
    ctx->pc = 0x21678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216788u;
    // 0x21678c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216788u, 0x216790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216790u;
label_216790:
    // 0x216790: 0x240402ae  addiu       $a0, $zero, 0x2AE
    ctx->pc = 0x216790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 686));
    // 0x216794: 0xc08525e  jal         func_214978
    ctx->pc = 0x216794u;
    SET_GPR_U32(ctx, 31, 0x21679Cu);
    ctx->pc = 0x216798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216794u;
    // 0x216798: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216794u, 0x21679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21679Cu;
label_21679c:
    // 0x21679c: 0x240402a8  addiu       $a0, $zero, 0x2A8
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x2167a0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167A0u;
    SET_GPR_U32(ctx, 31, 0x2167A8u);
    ctx->pc = 0x2167A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167A0u;
    // 0x2167a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167A0u, 0x2167A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167A8u;
label_2167a8:
    // 0x2167a8: 0x240402c8  addiu       $a0, $zero, 0x2C8
    ctx->pc = 0x2167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x2167ac: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167ACu;
    SET_GPR_U32(ctx, 31, 0x2167B4u);
    ctx->pc = 0x2167B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167ACu;
    // 0x2167b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167ACu, 0x2167B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167B4u;
label_2167b4:
    // 0x2167b4: 0x24040274  addiu       $a0, $zero, 0x274
    ctx->pc = 0x2167b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
    // 0x2167b8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167B8u;
    SET_GPR_U32(ctx, 31, 0x2167C0u);
    ctx->pc = 0x2167BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167B8u;
    // 0x2167bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167B8u, 0x2167C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167C0u;
label_2167c0:
    // 0x2167c0: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x2167c4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167C4u;
    SET_GPR_U32(ctx, 31, 0x2167CCu);
    ctx->pc = 0x2167C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167C4u;
    // 0x2167c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167C4u, 0x2167CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167CCu;
label_2167cc:
    // 0x2167cc: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x2167ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x2167d0: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167D0u;
    SET_GPR_U32(ctx, 31, 0x2167D8u);
    ctx->pc = 0x2167D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167D0u;
    // 0x2167d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167D0u, 0x2167D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167D8u;
label_2167d8:
    // 0x2167d8: 0x24040278  addiu       $a0, $zero, 0x278
    ctx->pc = 0x2167d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x2167dc: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167DCu;
    SET_GPR_U32(ctx, 31, 0x2167E4u);
    ctx->pc = 0x2167E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167DCu;
    // 0x2167e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167DCu, 0x2167E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167E4u;
label_2167e4:
    // 0x2167e4: 0x24040281  addiu       $a0, $zero, 0x281
    ctx->pc = 0x2167e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
    // 0x2167e8: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167E8u;
    SET_GPR_U32(ctx, 31, 0x2167F0u);
    ctx->pc = 0x2167ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167E8u;
    // 0x2167ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167E8u, 0x2167F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167F0u;
label_2167f0:
    // 0x2167f0: 0x24040294  addiu       $a0, $zero, 0x294
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x2167f4: 0xc08525e  jal         func_214978
    ctx->pc = 0x2167F4u;
    SET_GPR_U32(ctx, 31, 0x2167FCu);
    ctx->pc = 0x2167F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167F4u;
    // 0x2167f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x2167F4u, 0x2167FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167FCu;
label_2167fc:
    // 0x2167fc: 0x240402c9  addiu       $a0, $zero, 0x2C9
    ctx->pc = 0x2167fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 713));
    // 0x216800: 0xc08525e  jal         func_214978
    ctx->pc = 0x216800u;
    SET_GPR_U32(ctx, 31, 0x216808u);
    ctx->pc = 0x216804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216800u;
    // 0x216804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216800u, 0x216808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216808u;
label_216808:
    // 0x216808: 0x24040290  addiu       $a0, $zero, 0x290
    ctx->pc = 0x216808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x21680c: 0xc08525e  jal         func_214978
    ctx->pc = 0x21680Cu;
    SET_GPR_U32(ctx, 31, 0x216814u);
    ctx->pc = 0x216810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21680Cu;
    // 0x216810: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x21680Cu, 0x216814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216814u;
label_216814:
    // 0x216814: 0x240402ca  addiu       $a0, $zero, 0x2CA
    ctx->pc = 0x216814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 714));
    // 0x216818: 0xc08525e  jal         func_214978
    ctx->pc = 0x216818u;
    SET_GPR_U32(ctx, 31, 0x216820u);
    ctx->pc = 0x21681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216818u;
    // 0x21681c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214978u, 0x216818u, 0x216820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216820u;
label_216820:
    // 0x216820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216824: 0x240402c4  addiu       $a0, $zero, 0x2C4
    ctx->pc = 0x216824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 708));
    // 0x216828: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x216828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21682c: 0x808525e  j           func_214978
    ctx->pc = 0x21682Cu;
    ctx->pc = 0x216830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21682Cu;
    // 0x216830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214978u;
    setAnimProp_0x214978(rdram, ctx, runtime); return;
    ctx->pc = 0x216834u;
label_216834:
    // 0x216834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216838: 0x3e00008  jr          $ra
    ctx->pc = 0x216838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216838u;
        // 0x21683c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216840u;
}
