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

// Function: mapmakerTick
// Address: 0x246ae8 - 0x24783c
void mapmakerTick_0x246ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakerTick_0x246ae8");
#endif

    switch (ctx->pc) {
        case 0x246b24u: goto label_246b24;
        case 0x246b30u: goto label_246b30;
        case 0x246b6cu: goto label_246b6c;
        case 0x246bf0u: goto label_246bf0;
        case 0x246c08u: goto label_246c08;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c44u: goto label_246c44;
        case 0x246ce4u: goto label_246ce4;
        case 0x246d00u: goto label_246d00;
        case 0x246d08u: goto label_246d08;
        case 0x246d70u: goto label_246d70;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd4u: goto label_246dd4;
        case 0x246e50u: goto label_246e50;
        case 0x246ed0u: goto label_246ed0;
        case 0x246f74u: goto label_246f74;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f8cu: goto label_246f8c;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fe4u: goto label_246fe4;
        case 0x247000u: goto label_247000;
        case 0x247010u: goto label_247010;
        case 0x247024u: goto label_247024;
        case 0x247064u: goto label_247064;
        case 0x24709cu: goto label_24709c;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470f4u: goto label_2470f4;
        case 0x24711cu: goto label_24711c;
        case 0x247148u: goto label_247148;
        case 0x247160u: goto label_247160;
        case 0x247168u: goto label_247168;
        case 0x247188u: goto label_247188;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471f8u: goto label_2471f8;
        case 0x247208u: goto label_247208;
        case 0x247238u: goto label_247238;
        case 0x247260u: goto label_247260;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472ecu: goto label_2472ec;
        case 0x2473fcu: goto label_2473fc;
        case 0x247408u: goto label_247408;
        case 0x247418u: goto label_247418;
        case 0x24742cu: goto label_24742c;
        case 0x247448u: goto label_247448;
        case 0x247458u: goto label_247458;
        case 0x247490u: goto label_247490;
        case 0x2474f8u: goto label_2474f8;
        case 0x247524u: goto label_247524;
        case 0x247548u: goto label_247548;
        case 0x24759cu: goto label_24759c;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475e8u: goto label_2475e8;
        case 0x247624u: goto label_247624;
        case 0x247630u: goto label_247630;
        case 0x247640u: goto label_247640;
        case 0x247650u: goto label_247650;
        case 0x247664u: goto label_247664;
        case 0x247678u: goto label_247678;
        case 0x2476ccu: goto label_2476cc;
        case 0x2476f0u: goto label_2476f0;
        case 0x24770cu: goto label_24770c;
        case 0x24777cu: goto label_24777c;
        case 0x2477acu: goto label_2477ac;
        case 0x2477d8u: goto label_2477d8;
        case 0x247808u: goto label_247808;
        default: break;
    }

    ctx->pc = 0x246ae8u;

    // 0x246ae8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x246ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x246aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246af0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x246af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x246af4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x246af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x246af8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x246af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x246afc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x246afcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b00: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x246b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x246b04: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x246b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x246b08: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x246b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x246b0c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x246b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x246b10: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x246b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x246b14: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x246b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x246b18: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x246b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x246b1c: 0xc080e18  jal         func_203860
    ctx->pc = 0x246B1Cu;
    SET_GPR_U32(ctx, 31, 0x246B24u);
    ctx->pc = 0x246B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B1Cu;
    // 0x246b20: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x246B1Cu, 0x246B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B24u;
label_246b24:
    // 0x246b24: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x246b24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b28: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x246B28u;
    SET_GPR_U32(ctx, 31, 0x246B30u);
    ctx->pc = 0x246B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B28u;
    // 0x246b2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x246B28u, 0x246B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B30u;
label_246b30:
    // 0x246b30: 0x8f88a0d8  lw          $t0, -0x5F28($gp)
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x246b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246b3c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x246b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b40: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x246b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x246b44: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x246b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x246b48: 0x30634008  andi        $v1, $v1, 0x4008
    ctx->pc = 0x246b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16392);
    // 0x246b4c: 0x1460032e  bnez        $v1, . + 4 + (0x32E << 2)
    ctx->pc = 0x246B4Cu;
    {
        const bool branch_taken_0x246b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B4Cu;
        // 0x246b50: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b4c) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246B54u;
    // 0x246b54: 0x32020900  andi        $v0, $s0, 0x900
    ctx->pc = 0x246b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2304);
    // 0x246b58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246B58u;
    {
        const bool branch_taken_0x246b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B58u;
        // 0x246b5c: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b58) {
            ctx->pc = 0x246B74u;
            goto label_246b74;
        }
    }
    ctx->pc = 0x246B60u;
    // 0x246b60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x246b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x246b64: 0xc093b70  jal         func_24EDC0
    ctx->pc = 0x246B64u;
    SET_GPR_U32(ctx, 31, 0x246B6Cu);
    ctx->pc = 0x246B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B64u;
    // 0x246b68: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EDC0u, 0x246B64u, 0x246B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B6Cu;
label_246b6c:
    // 0x246b6c: 0x10000327  b           . + 4 + (0x327 << 2)
    ctx->pc = 0x246B6Cu;
    {
        const bool branch_taken_0x246b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b6c) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x8f89a004  lw          $t1, -0x5FFC($gp)
    ctx->pc = 0x246b74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x246b78: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x246b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x246b7c: 0x144001e4  bnez        $v0, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x246B7Cu;
    {
        const bool branch_taken_0x246b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B7Cu;
        // 0x246b80: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b7c) {
            ctx->pc = 0x247310u;
            goto label_247310;
        }
    }
    ctx->pc = 0x246B84u;
    // 0x246b84: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x246b88: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x246B88u;
    {
        const bool branch_taken_0x246b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b88) {
            ctx->pc = 0x246B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B88u;
            // 0x246b8c: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246BE0u;
            goto label_246be0;
        }
    }
    ctx->pc = 0x246B90u;
    // 0x246b90: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x246b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x246b94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246B94u;
    {
        const bool branch_taken_0x246b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B94u;
        // 0x246b98: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b94) {
            ctx->pc = 0x246BBCu;
            goto label_246bbc;
        }
    }
    ctx->pc = 0x246B9Cu;
    // 0x246b9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x246b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246ba0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x246BA0u;
    {
        const bool branch_taken_0x246ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ba0) {
            ctx->pc = 0x246BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BA0u;
            // 0x246ba4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246BA8u;
            goto label_246ba8;
        }
    }
    ctx->pc = 0x246BA8u;
label_246ba8:
    // 0x246ba8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246bac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x246bacu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x246bb0: 0x2010  mfhi        $a0
    ctx->pc = 0x246bb0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x246bb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x246BB4u;
    {
        const bool branch_taken_0x246bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB4u;
        // 0x246bb8: 0xaf84a0d4  sw          $a0, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bb4) {
            ctx->pc = 0x246BDCu;
            goto label_246bdc;
        }
    }
    ctx->pc = 0x246BBCu;
label_246bbc:
    // 0x246bbc: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x246bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x246bc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246BC0u;
    {
        const bool branch_taken_0x246bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BC0u;
        // 0x246bc4: 0x8f82a0d4  lw          $v0, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bc0) {
            ctx->pc = 0x246BDCu;
            goto label_246bdc;
        }
    }
    ctx->pc = 0x246BC8u;
    // 0x246bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x246bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x246bcc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246BCCu;
    {
        const bool branch_taken_0x246bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x246BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BCCu;
        // 0x246bd0: 0xaf82a0d4  sw          $v0, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bcc) {
            ctx->pc = 0x246BDCu;
            goto label_246bdc;
        }
    }
    ctx->pc = 0x246BD4u;
    // 0x246bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246bd8: 0xaf82a0d4  sw          $v0, -0x5F2C($gp)
    ctx->pc = 0x246bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 2));
label_246bdc:
    // 0x246bdc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_246be0:
    // 0x246be0: 0x144001cc  bnez        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x246BE0u;
    {
        const bool branch_taken_0x246be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE0u;
        // 0x246be4: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246be0) {
            ctx->pc = 0x247314u;
            goto label_247314;
        }
    }
    ctx->pc = 0x246BE8u;
    // 0x246be8: 0xc091a60  jal         func_246980
    ctx->pc = 0x246BE8u;
    SET_GPR_U32(ctx, 31, 0x246BF0u);
    ctx->pc = 0x246980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246980u, 0x246BE8u, 0x246BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BF0u;
label_246bf0:
    // 0x246bf0: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x246bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x246bf4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x246bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x246bf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246BF8u;
    {
        const bool branch_taken_0x246bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF8u;
        // 0x246bfc: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bf8) {
            ctx->pc = 0x246C1Cu;
            goto label_246c1c;
        }
    }
    ctx->pc = 0x246C00u;
    // 0x246c00: 0xc09162a  jal         func_2458A8
    ctx->pc = 0x246C00u;
    SET_GPR_U32(ctx, 31, 0x246C08u);
    ctx->pc = 0x2458A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2458A8u, 0x246C00u, 0x246C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C08u;
label_246c08:
    // 0x246c08: 0x8f88a0d8  lw          $t0, -0x5F28($gp)
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x246c0c: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x246c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x246c10: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x246C10u;
    {
        const bool branch_taken_0x246c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C10u;
        // 0x246c14: 0xaf80a0f4  sw          $zero, -0x5F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c10) {
            ctx->pc = 0x246C64u;
            goto label_246c64;
        }
    }
    ctx->pc = 0x246C18u;
    // 0x246c18: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x246c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
label_246c1c:
    // 0x246c1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246C1Cu;
    {
        const bool branch_taken_0x246c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246c1c) {
            ctx->pc = 0x246C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C1Cu;
            // 0x246c20: 0xaf80a0f4  sw          $zero, -0x5F0C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C34u;
            goto label_246c34;
        }
    }
    ctx->pc = 0x246C24u;
    // 0x246c24: 0xc091536  jal         func_2454D8
    ctx->pc = 0x246C24u;
    SET_GPR_U32(ctx, 31, 0x246C2Cu);
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x246C24u, 0x246C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C2Cu;
label_246c2c:
    // 0x246c2c: 0xaf82a0f4  sw          $v0, -0x5F0C($gp)
    ctx->pc = 0x246c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 2));
    // 0x246c30: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
label_246c34:
    // 0x246c34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x246C34u;
    {
        const bool branch_taken_0x246c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C34u;
        // 0x246c38: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c34) {
            ctx->pc = 0x246C54u;
            goto label_246c54;
        }
    }
    ctx->pc = 0x246C3Cu;
    // 0x246c3c: 0xc091594  jal         func_245650
    ctx->pc = 0x246C3Cu;
    SET_GPR_U32(ctx, 31, 0x246C44u);
    ctx->pc = 0x245650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245650u, 0x246C3Cu, 0x246C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C44u;
label_246c44:
    // 0x246c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246C44u;
    {
        const bool branch_taken_0x246c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C44u;
        // 0x246c48: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c44) {
            ctx->pc = 0x246C54u;
            goto label_246c54;
        }
    }
    ctx->pc = 0x246C4Cu;
    // 0x246c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246C4Cu;
    {
        const bool branch_taken_0x246c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C4Cu;
        // 0x246c50: 0x35080004  ori         $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c4c) {
            ctx->pc = 0x246C60u;
            goto label_246c60;
        }
    }
    ctx->pc = 0x246C54u;
label_246c54:
    // 0x246c54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246c58: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x246c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x246c5c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x246c5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_246c60:
    // 0x246c60: 0xaf88a0d8  sw          $t0, -0x5F28($gp)
    ctx->pc = 0x246c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
label_246c64:
    // 0x246c64: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x246c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x246c68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246C68u;
    {
        const bool branch_taken_0x246c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C68u;
        // 0x246c6c: 0x8f82a0dc  lw          $v0, -0x5F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c68) {
            ctx->pc = 0x246C94u;
            goto label_246c94;
        }
    }
    ctx->pc = 0x246C70u;
    // 0x246c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246c74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x246c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246c78: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x246c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x246c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246c80: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x246c80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x246c84: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x246c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x246c88: 0xaf84a0dc  sw          $a0, -0x5F24($gp)
    ctx->pc = 0x246c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 4));
    // 0x246c8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x246C8Cu;
    {
        const bool branch_taken_0x246c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C8Cu;
        // 0x246c90: 0xaf85a0e0  sw          $a1, -0x5F20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942944), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c8c) {
            ctx->pc = 0x246CC8u;
            goto label_246cc8;
        }
    }
    ctx->pc = 0x246C94u;
label_246c94:
    // 0x246c94: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x246c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x246c98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246C98u;
    {
        const bool branch_taken_0x246c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C98u;
        // 0x246c9c: 0x8f82a0dc  lw          $v0, -0x5F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c98) {
            ctx->pc = 0x246CC8u;
            goto label_246cc8;
        }
    }
    ctx->pc = 0x246CA0u;
    // 0x246ca0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x246ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x246ca4: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x246ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x246ca8: 0x2845fffe  slti        $a1, $v0, -0x2
    ctx->pc = 0x246ca8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x246cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x246cb0: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x246cb0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x246cb4: 0x2866fffe  slti        $a2, $v1, -0x2
    ctx->pc = 0x246cb4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x246cb8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x246cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x246cbc: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x246cbcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x246cc0: 0xaf83a0dc  sw          $v1, -0x5F24($gp)
    ctx->pc = 0x246cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 3));
    // 0x246cc4: 0xaf84a0e0  sw          $a0, -0x5F20($gp)
    ctx->pc = 0x246cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942944), GPR_U32(ctx, 4));
label_246cc8:
    // 0x246cc8: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x246cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x246ccc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x246CCCu;
    {
        const bool branch_taken_0x246ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CCCu;
        // 0x246cd0: 0x8f84a0f8  lw          $a0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ccc) {
            ctx->pc = 0x246DDCu;
            goto label_246ddc;
        }
    }
    ctx->pc = 0x246CD4u;
    // 0x246cd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246CD4u;
    {
        const bool branch_taken_0x246cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cd4) {
            ctx->pc = 0x246CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CD4u;
            // 0x246cd8: 0x8f84a0f4  lw          $a0, -0x5F0C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CECu;
            goto label_246cec;
        }
    }
    ctx->pc = 0x246CDCu;
    // 0x246cdc: 0xc0921e6  jal         func_248798
    ctx->pc = 0x246CDCu;
    SET_GPR_U32(ctx, 31, 0x246CE4u);
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x246CDCu, 0x246CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CE4u;
label_246ce4:
    // 0x246ce4: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x246CE4u;
    {
        const bool branch_taken_0x246ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CE4u;
        // 0x246ce8: 0xaf80a0f8  sw          $zero, -0x5F08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ce4) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246CECu;
label_246cec:
    // 0x246cec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246CECu;
    {
        const bool branch_taken_0x246cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CECu;
        // 0x246cf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cec) {
            ctx->pc = 0x246D10u;
            goto label_246d10;
        }
    }
    ctx->pc = 0x246CF4u;
    // 0x246cf4: 0x8f82a108  lw          $v0, -0x5EF8($gp)
    ctx->pc = 0x246cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
    // 0x246cf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246CF8u;
    {
        const bool branch_taken_0x246cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CF8u;
        // 0x246cfc: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cf8) {
            ctx->pc = 0x246D14u;
            goto label_246d14;
        }
    }
    ctx->pc = 0x246D00u;
label_246d00:
    // 0x246d00: 0xc0916da  jal         func_245B68
    ctx->pc = 0x246D00u;
    SET_GPR_U32(ctx, 31, 0x246D08u);
    ctx->pc = 0x245B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B68u, 0x246D00u, 0x246D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D08u;
label_246d08:
    // 0x246d08: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x246D08u;
    {
        const bool branch_taken_0x246d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D08u;
        // 0x246d0c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d08) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246D10u;
label_246d10:
    // 0x246d10: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x246d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
label_246d14:
    // 0x246d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246d18: 0x106202bb  beq         $v1, $v0, . + 4 + (0x2BB << 2)
    ctx->pc = 0x246D18u;
    {
        const bool branch_taken_0x246d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D18u;
        // 0x246d1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d18) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246D20u;
    // 0x246d20: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x246D20u;
    {
        const bool branch_taken_0x246d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246d20) {
            ctx->pc = 0x246D9Cu;
            goto label_246d9c;
        }
    }
    ctx->pc = 0x246D28u;
    // 0x246d28: 0x10a002b8  beqz        $a1, . + 4 + (0x2B8 << 2)
    ctx->pc = 0x246D28u;
    {
        const bool branch_taken_0x246d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D28u;
        // 0x246d2c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d28) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246D30u;
    // 0x246d30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246d34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246d38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246D38u;
    {
        const bool branch_taken_0x246d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D38u;
        // 0x246d3c: 0x8f83a12c  lw          $v1, -0x5ED4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d38) {
            ctx->pc = 0x246D5Cu;
            goto label_246d5c;
        }
    }
    ctx->pc = 0x246D40u;
    // 0x246d40: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x246d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d44: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x246d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x246d48: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x246d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x246d4c: 0x8f83a0f4  lw          $v1, -0x5F0C($gp)
    ctx->pc = 0x246d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x246d50: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x246d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x246d54: 0x100002ad  b           . + 4 + (0x2AD << 2)
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D54u;
        // 0x246d58: 0xa060001d  sb          $zero, 0x1D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d54) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0x106002aa  beqz        $v1, . + 4 + (0x2AA << 2)
    ctx->pc = 0x246D5Cu;
    {
        const bool branch_taken_0x246d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D5Cu;
        // 0x246d60: 0x3c047f7f  lui         $a0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d5c) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246D64u;
    // 0x246d64: 0x34847f80  ori         $a0, $a0, 0x7F80
    ctx->pc = 0x246d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32640);
    // 0x246d68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x246d6c: 0x0  nop
    ctx->pc = 0x246d6cu;
    // NOP
label_246d70:
    // 0x246d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246d74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246D74u;
    {
        const bool branch_taken_0x246d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d74) {
            ctx->pc = 0x246D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D74u;
            // 0x246d78: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D8Cu;
            goto label_246d8c;
        }
    }
    ctx->pc = 0x246D7Cu;
    // 0x246d7c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x246d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x246d80: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x246d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d84: 0xa060001d  sb          $zero, 0x1D($v1)
    ctx->pc = 0x246d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d88: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x246d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_246d8c:
    // 0x246d8c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x246D8Cu;
    {
        const bool branch_taken_0x246d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d8c) {
            ctx->pc = 0x246D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D8Cu;
            // 0x246d90: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d70;
        }
    }
    ctx->pc = 0x246D94u;
    // 0x246d94: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x246D94u;
    {
        const bool branch_taken_0x246d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D94u;
        // 0x246d98: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d94) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246D9Cu;
label_246d9c:
    // 0x246d9c: 0x10a0029b  beqz        $a1, . + 4 + (0x29B << 2)
    ctx->pc = 0x246D9Cu;
    {
        const bool branch_taken_0x246d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D9Cu;
        // 0x246da0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d9c) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246DA4u;
    // 0x246da4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246DACu;
    {
        const bool branch_taken_0x246dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dac) {
            ctx->pc = 0x246DC4u;
            goto label_246dc4;
        }
    }
    ctx->pc = 0x246DB4u;
    // 0x246db4: 0xc091720  jal         func_245C80
    ctx->pc = 0x246DB4u;
    SET_GPR_U32(ctx, 31, 0x246DBCu);
    ctx->pc = 0x245C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C80u, 0x246DB4u, 0x246DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DBCu;
label_246dbc:
    // 0x246dbc: 0x10000293  b           . + 4 + (0x293 << 2)
    ctx->pc = 0x246DBCu;
    {
        const bool branch_taken_0x246dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DBCu;
        // 0x246dc0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dbc) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246DC4u;
label_246dc4:
    // 0x246dc4: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x246DC4u;
    SET_GPR_U32(ctx, 31, 0x246DCCu);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x246DC4u, 0x246DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DCCu;
label_246dcc:
    // 0x246dcc: 0xc0921a8  jal         func_2486A0
    ctx->pc = 0x246DCCu;
    SET_GPR_U32(ctx, 31, 0x246DD4u);
    ctx->pc = 0x246DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DCCu;
    // 0x246dd0: 0x8f84a0f4  lw          $a0, -0x5F0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486A0u, 0x246DCCu, 0x246DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DD4u;
label_246dd4:
    // 0x246dd4: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x246DD4u;
    {
        const bool branch_taken_0x246dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DD4u;
        // 0x246dd8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dd4) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246DDCu;
label_246ddc:
    // 0x246ddc: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x246ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x246de0: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x246DE0u;
    {
        const bool branch_taken_0x246de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246de0) {
            ctx->pc = 0x246DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246DE0u;
            // 0x246de4: 0x32c20040  andi        $v0, $s6, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F1Cu;
            goto label_246f1c;
        }
    }
    ctx->pc = 0x246DE8u;
    // 0x246de8: 0x54800033  bnel        $a0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x246DE8u;
    {
        const bool branch_taken_0x246de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246de8) {
            ctx->pc = 0x246DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246DE8u;
            // 0x246dec: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246EB8u;
            goto label_246eb8;
        }
    }
    ctx->pc = 0x246DF0u;
    // 0x246df0: 0x8f84a0f4  lw          $a0, -0x5F0C($gp)
    ctx->pc = 0x246df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x246df4: 0x10800284  beqz        $a0, . + 4 + (0x284 << 2)
    ctx->pc = 0x246DF4u;
    {
        const bool branch_taken_0x246df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DF4u;
        // 0x246df8: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246df4) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246DFCu;
    // 0x246dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246e00: 0x10620281  beq         $v1, $v0, . + 4 + (0x281 << 2)
    ctx->pc = 0x246E00u;
    {
        const bool branch_taken_0x246e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x246E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E00u;
        // 0x246e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e00) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246E08u;
    // 0x246e08: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x246E08u;
    {
        const bool branch_taken_0x246e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E08u;
        // 0x246e0c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e08) {
            ctx->pc = 0x246E8Cu;
            goto label_246e8c;
        }
    }
    ctx->pc = 0x246E10u;
    // 0x246e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246e14: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x246E14u;
    {
        const bool branch_taken_0x246e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e14) {
            ctx->pc = 0x246E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E14u;
            // 0x246e18: 0x8f84a12c  lw          $a0, -0x5ED4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E40u;
            goto label_246e40;
        }
    }
    ctx->pc = 0x246E1Cu;
    // 0x246e1c: 0x9082001d  lbu         $v0, 0x1D($a0)
    ctx->pc = 0x246e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x246e20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246e24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246e28: 0x2c63000c  sltiu       $v1, $v1, 0xC
    ctx->pc = 0x246e28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x246e2c: 0x14600276  bnez        $v1, . + 4 + (0x276 << 2)
    ctx->pc = 0x246E2Cu;
    {
        const bool branch_taken_0x246e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E2Cu;
        // 0x246e30: 0xa082001d  sb          $v0, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e2c) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246E34u;
    // 0x246e34: 0x8f82a0f4  lw          $v0, -0x5F0C($gp)
    ctx->pc = 0x246e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x246e38: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x246E38u;
    {
        const bool branch_taken_0x246e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E38u;
        // 0x246e3c: 0xa040001d  sb          $zero, 0x1D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e38) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246E40u;
label_246e40:
    // 0x246e40: 0x10800272  beqz        $a0, . + 4 + (0x272 << 2)
    ctx->pc = 0x246E40u;
    {
        const bool branch_taken_0x246e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E40u;
        // 0x246e44: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e40) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246E48u;
    // 0x246e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246e4c: 0x0  nop
    ctx->pc = 0x246e4cu;
    // NOP
label_246e50:
    // 0x246e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246e54: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x246E54u;
    {
        const bool branch_taken_0x246e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e54) {
            ctx->pc = 0x246E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E54u;
            // 0x246e58: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E7Cu;
            goto label_246e7c;
        }
    }
    ctx->pc = 0x246E5Cu;
    // 0x246e5c: 0x9082001d  lbu         $v0, 0x1D($a0)
    ctx->pc = 0x246e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x246e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246e64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246e68: 0x2c63000c  sltiu       $v1, $v1, 0xC
    ctx->pc = 0x246e68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x246e6c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x246E6Cu;
    {
        const bool branch_taken_0x246e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E6Cu;
        // 0x246e70: 0xa082001d  sb          $v0, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e6c) {
            ctx->pc = 0x246E78u;
            goto label_246e78;
        }
    }
    ctx->pc = 0x246E74u;
    // 0x246e74: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x246e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
label_246e78:
    // 0x246e78: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_246e7c:
    // 0x246e7c: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x246E7Cu;
    {
        const bool branch_taken_0x246e7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e7c) {
            ctx->pc = 0x246E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E7Cu;
            // 0x246e80: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246e50;
        }
    }
    ctx->pc = 0x246E84u;
    // 0x246e84: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x246E84u;
    {
        const bool branch_taken_0x246e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E84u;
        // 0x246e88: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e84) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246E8Cu;
label_246e8c:
    // 0x246e8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x246e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x246e90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x246e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x246e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246e98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246E98u;
    {
        const bool branch_taken_0x246e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E98u;
        // 0x246e9c: 0x8f82a108  lw          $v0, -0x5EF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e98) {
            ctx->pc = 0x246EACu;
            goto label_246eac;
        }
    }
    ctx->pc = 0x246EA0u;
    // 0x246ea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246ea4: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x246EA4u;
    {
        const bool branch_taken_0x246ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA4u;
        // 0x246ea8: 0xaf82a108  sw          $v0, -0x5EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ea4) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246EACu;
label_246eac:
    // 0x246eac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x246eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x246eb0: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x246EB0u;
    {
        const bool branch_taken_0x246eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EB0u;
        // 0x246eb4: 0xaf82a108  sw          $v0, -0x5EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246eb0) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246EB8u;
label_246eb8:
    // 0x246eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ebc: 0x14620253  bne         $v1, $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x246EBCu;
    {
        const bool branch_taken_0x246ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EBCu;
        // 0x246ec0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ebc) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246EC4u;
    // 0x246ec4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x246ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ec8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x246ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x246ecc: 0x0  nop
    ctx->pc = 0x246eccu;
    // NOP
label_246ed0:
    // 0x246ed0: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x246ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246ed8: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x246ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x246edc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x246edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x246ee0: 0x52823  negu        $a1, $a1
    ctx->pc = 0x246ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x246ee4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x246ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x246ee8: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x246ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x246eec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x246ef0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x246ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x246ef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x246ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246ef8: 0xace60010  sw          $a2, 0x10($a3)
    ctx->pc = 0x246ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
    // 0x246efc: 0x42540  sll         $a0, $a0, 21
    ctx->pc = 0x246efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x246f00: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x246f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x246f04: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x246f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x246f08: 0x8ce70038  lw          $a3, 0x38($a3)
    ctx->pc = 0x246f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x246f0c: 0x54e0fff0  bnel        $a3, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x246F0Cu;
    {
        const bool branch_taken_0x246f0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f0c) {
            ctx->pc = 0x246F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F0Cu;
            // 0x246f10: 0x8ce30018  lw          $v1, 0x18($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246ed0;
        }
    }
    ctx->pc = 0x246F14u;
    // 0x246f14: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x246F14u;
    {
        const bool branch_taken_0x246f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F14u;
        // 0x246f18: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f14) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x246F1Cu;
label_246f1c:
    // 0x246f1c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x246F1Cu;
    {
        const bool branch_taken_0x246f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F1Cu;
        // 0x246f20: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f1c) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F24u;
    // 0x246f24: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x246f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x246f28: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x246F28u;
    {
        const bool branch_taken_0x246f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F28u;
        // 0x246f2c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f28) {
            ctx->pc = 0x24702Cu;
            goto label_24702c;
        }
    }
    ctx->pc = 0x246F30u;
    // 0x246f30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246f34: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x246f38: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x246f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x246f3c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x246f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x246f40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x246F40u;
    {
        const bool branch_taken_0x246f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F40u;
        // 0x246f44: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f40) {
            ctx->pc = 0x246F5Cu;
            goto label_246f5c;
        }
    }
    ctx->pc = 0x246F48u;
    // 0x246f48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246f4c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x246f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x246f50: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x246f50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x246f54: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x246F54u;
    {
        const bool branch_taken_0x246f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F54u;
        // 0x246f58: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f54) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x246F5Cu;
label_246f5c:
    // 0x246f5c: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x246f60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246f64: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x246F64u;
    {
        const bool branch_taken_0x246f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246f64) {
            ctx->pc = 0x247008u;
            goto label_247008;
        }
    }
    ctx->pc = 0x246F6Cu;
    // 0x246f6c: 0xc093eb8  jal         func_24FAE0
    ctx->pc = 0x246F6Cu;
    SET_GPR_U32(ctx, 31, 0x246F74u);
    ctx->pc = 0x24FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FAE0u, 0x246F6Cu, 0x246F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0xc091536  jal         func_2454D8
    ctx->pc = 0x246F74u;
    SET_GPR_U32(ctx, 31, 0x246F7Cu);
    ctx->pc = 0x246F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F74u;
    // 0x246f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x246F74u, 0x246F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F7Cu;
label_246f7c:
    // 0x246f7c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x246F7Cu;
    {
        const bool branch_taken_0x246f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F7Cu;
        // 0x246f80: 0xaf82a0f4  sw          $v0, -0x5F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f7c) {
            ctx->pc = 0x246FF8u;
            goto label_246ff8;
        }
    }
    ctx->pc = 0x246F84u;
    // 0x246f84: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x246F84u;
    SET_GPR_U32(ctx, 31, 0x246F8Cu);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x246F84u, 0x246F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F8Cu;
label_246f8c:
    // 0x246f8c: 0x8f84a0f4  lw          $a0, -0x5F0C($gp)
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x246f90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246f94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246f98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x246F98u;
    {
        const bool branch_taken_0x246f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F98u;
        // 0x246f9c: 0x8f90a12c  lw          $s0, -0x5ED4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f98) {
            ctx->pc = 0x246FB8u;
            goto label_246fb8;
        }
    }
    ctx->pc = 0x246FA0u;
    // 0x246fa0: 0x9385a1f8  lbu         $a1, -0x5E08($gp)
    ctx->pc = 0x246fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943224)));
    // 0x246fa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x246fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fa8: 0xc0918c2  jal         func_246308
    ctx->pc = 0x246FA8u;
    SET_GPR_U32(ctx, 31, 0x246FB0u);
    ctx->pc = 0x246FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FA8u;
    // 0x246fac: 0x9386a1f9  lbu         $a2, -0x5E07($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943225)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246308u, 0x246FA8u, 0x246FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FB0u;
label_246fb0:
    // 0x246fb0: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x246FB0u;
    {
        const bool branch_taken_0x246fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fb0) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x246FB8u;
label_246fb8:
    // 0x246fb8: 0x1200ff51  beqz        $s0, . + 4 + (-0xAF << 2)
    ctx->pc = 0x246FB8u;
    {
        const bool branch_taken_0x246fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fb8) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x246FC0u;
    // 0x246fc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x246fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x246fc4: 0x0  nop
    ctx->pc = 0x246fc4u;
    // NOP
label_246fc8:
    // 0x246fc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246FCCu;
    {
        const bool branch_taken_0x246fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FCCu;
        // 0x246fd0: 0x9385a1f8  lbu         $a1, -0x5E08($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fcc) {
            ctx->pc = 0x246FE4u;
            goto label_246fe4;
        }
    }
    ctx->pc = 0x246FD4u;
    // 0x246fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fd8: 0x9386a1f9  lbu         $a2, -0x5E07($gp)
    ctx->pc = 0x246fd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943225)));
    // 0x246fdc: 0xc0918c2  jal         func_246308
    ctx->pc = 0x246FDCu;
    SET_GPR_U32(ctx, 31, 0x246FE4u);
    ctx->pc = 0x246FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FDCu;
    // 0x246fe0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246308u, 0x246FDCu, 0x246FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FE4u;
label_246fe4:
    // 0x246fe4: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x246fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x246fe8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x246FE8u;
    {
        const bool branch_taken_0x246fe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x246fe8) {
            ctx->pc = 0x246FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FE8u;
            // 0x246fec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246fc8;
        }
    }
    ctx->pc = 0x246FF0u;
    // 0x246ff0: 0x1000ff43  b           . + 4 + (-0xBD << 2)
    ctx->pc = 0x246FF0u;
    {
        const bool branch_taken_0x246ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ff0) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x246FF8u;
label_246ff8:
    // 0x246ff8: 0xc094be8  jal         func_252FA0
    ctx->pc = 0x246FF8u;
    SET_GPR_U32(ctx, 31, 0x247000u);
    ctx->pc = 0x252FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252FA0u, 0x246FF8u, 0x247000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247000u;
label_247000:
    // 0x247000: 0x1000ff3f  b           . + 4 + (-0xC1 << 2)
    ctx->pc = 0x247000u;
    {
        const bool branch_taken_0x247000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247000) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x247008u;
label_247008:
    // 0x247008: 0xc091734  jal         func_245CD0
    ctx->pc = 0x247008u;
    SET_GPR_U32(ctx, 31, 0x247010u);
    ctx->pc = 0x24700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247008u;
    // 0x24700c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245CD0u, 0x247008u, 0x247010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247010u;
label_247010:
    // 0x247010: 0x8f82a0f8  lw          $v0, -0x5F08($gp)
    ctx->pc = 0x247010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x247014: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x247014u;
    {
        const bool branch_taken_0x247014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247014) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x24701Cu;
    // 0x24701c: 0xc094be8  jal         func_252FA0
    ctx->pc = 0x24701Cu;
    SET_GPR_U32(ctx, 31, 0x247024u);
    ctx->pc = 0x252FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252FA0u, 0x24701Cu, 0x247024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x1000ff36  b           . + 4 + (-0xCA << 2)
    ctx->pc = 0x247024u;
    {
        const bool branch_taken_0x247024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247024) {
            ctx->pc = 0x246D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d00;
        }
    }
    ctx->pc = 0x24702Cu;
label_24702c:
    // 0x24702c: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x24702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_247030:
    // 0x247030: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x247030u;
    {
        const bool branch_taken_0x247030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247030u;
        // 0x247034: 0x8f83a0d4  lw          $v1, -0x5F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247030) {
            ctx->pc = 0x247274u;
            goto label_247274;
        }
    }
    ctx->pc = 0x247038u;
    // 0x247038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24703c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24703Cu;
    {
        const bool branch_taken_0x24703c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24703Cu;
        // 0x247040: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24703c) {
            ctx->pc = 0x24706Cu;
            goto label_24706c;
        }
    }
    ctx->pc = 0x247044u;
    // 0x247044: 0x8f84a0f4  lw          $a0, -0x5F0C($gp)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x247048: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247048u;
    {
        const bool branch_taken_0x247048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247048) {
            ctx->pc = 0x24706Cu;
            goto label_24706c;
        }
    }
    ctx->pc = 0x247050u;
    // 0x247050: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x247054: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x247054u;
    {
        const bool branch_taken_0x247054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247054) {
            ctx->pc = 0x24706Cu;
            goto label_24706c;
        }
    }
    ctx->pc = 0x24705Cu;
    // 0x24705c: 0xc094cd8  jal         func_253360
    ctx->pc = 0x24705Cu;
    SET_GPR_U32(ctx, 31, 0x247064u);
    ctx->pc = 0x253360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253360u, 0x24705Cu, 0x247064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247064u;
label_247064:
    // 0x247064: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x247064u;
    {
        const bool branch_taken_0x247064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247064u;
        // 0x247068: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247064) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x24706Cu;
label_24706c:
    // 0x24706c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x24706Cu;
    {
        const bool branch_taken_0x24706c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24706Cu;
        // 0x247070: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24706c) {
            ctx->pc = 0x247210u;
            goto label_247210;
        }
    }
    ctx->pc = 0x247074u;
    // 0x247074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x247074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247078: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x247078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x24707c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x24707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x247080: 0x1443005f  bne         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x247080u;
    {
        const bool branch_taken_0x247080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x247084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247080u;
        // 0x247084: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247080) {
            ctx->pc = 0x247200u;
            goto label_247200;
        }
    }
    ctx->pc = 0x247088u;
    // 0x247088: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247094: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x247094u;
    SET_GPR_U32(ctx, 31, 0x24709Cu);
    ctx->pc = 0x247098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247094u;
    // 0x247098: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x247094u, 0x24709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24709Cu;
label_24709c:
    // 0x24709c: 0x8f90a12c  lw          $s0, -0x5ED4($gp)
    ctx->pc = 0x24709cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x2470a0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2470A0u;
    {
        const bool branch_taken_0x2470a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A0u;
        // 0x2470a4: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a0) {
            ctx->pc = 0x247150u;
            goto label_247150;
        }
    }
    ctx->pc = 0x2470A8u;
    // 0x2470a8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2470a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2470ac: 0x0  nop
    ctx->pc = 0x2470acu;
    // NOP
label_2470b0:
    // 0x2470b0: 0xc092354  jal         func_248D50
    ctx->pc = 0x2470B0u;
    SET_GPR_U32(ctx, 31, 0x2470B8u);
    ctx->pc = 0x2470B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470B0u;
    // 0x2470b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D50u, 0x2470B0u, 0x2470B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B8u;
label_2470b8:
    // 0x2470b8: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x2470b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2470bc: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2470BCu;
    {
        const bool branch_taken_0x2470bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2470bc) {
            ctx->pc = 0x2470C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470BCu;
            // 0x2470c0: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2470b0;
        }
    }
    ctx->pc = 0x2470C4u;
    // 0x2470c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2470C4u;
    {
        const bool branch_taken_0x2470c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470C4u;
        // 0x2470c8: 0x8f90a0f8  lw          $s0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470c4) {
            ctx->pc = 0x247154u;
            goto label_247154;
        }
    }
    ctx->pc = 0x2470CCu;
label_2470cc:
    // 0x2470cc: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2470d0: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x2470d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
    // 0x2470d4: 0x26312c18  addiu       $s1, $s1, 0x2C18
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11288));
    // 0x2470d8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2470d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2470dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2470e0: 0x261020a8  addiu       $s0, $s0, 0x20A8
    ctx->pc = 0x2470e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8360));
    // 0x2470e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2470e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2470e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470ec: 0xc092366  jal         func_248D98
    ctx->pc = 0x2470ECu;
    SET_GPR_U32(ctx, 31, 0x2470F4u);
    ctx->pc = 0x2470F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470ECu;
    // 0x2470f0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D98u, 0x2470ECu, 0x2470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470F4u;
label_2470f4:
    // 0x2470f4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2470f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2470f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470fc: 0x8e450da0  lw          $a1, 0xDA0($s2)
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
    // 0x247100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x247104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x247108: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x247108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24710c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x247110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247114: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x247114u;
    SET_GPR_U32(ctx, 31, 0x24711Cu);
    ctx->pc = 0x247118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247114u;
    // 0x247118: 0x8c480e4c  lw          $t0, 0xE4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x247114u, 0x24711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24711Cu;
label_24711c:
    // 0x24711c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x24711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x247120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247124: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x247124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x247128: 0x3c056464  lui         $a1, 0x6464
    ctx->pc = 0x247128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
    // 0x24712c: 0x8c670024  lw          $a3, 0x24($v1)
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x247130: 0x24c66a40  addiu       $a2, $a2, 0x6A40
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27200));
    // 0x247134: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x247138: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x247138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x24713c: 0xaf87a110  sw          $a3, -0x5EF0($gp)
    ctx->pc = 0x24713cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942992), GPR_U32(ctx, 7));
    // 0x247140: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x247140u;
    SET_GPR_U32(ctx, 31, 0x247148u);
    ctx->pc = 0x247144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247140u;
    // 0x247144: 0xaf82a10c  sw          $v0, -0x5EF4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942988), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x247140u, 0x247148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247148u;
label_247148:
    // 0x247148: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x247148u;
    {
        const bool branch_taken_0x247148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247148u;
        // 0x24714c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247148) {
            ctx->pc = 0x2471B4u;
            goto label_2471b4;
        }
    }
    ctx->pc = 0x247150u;
label_247150:
    // 0x247150: 0x8f90a0f8  lw          $s0, -0x5F08($gp)
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
label_247154:
    // 0x247154: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247154u;
    {
        const bool branch_taken_0x247154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247154u;
        // 0x247158: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247154) {
            ctx->pc = 0x247178u;
            goto label_247178;
        }
    }
    ctx->pc = 0x24715Cu;
    // 0x24715c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247160:
    // 0x247160: 0xc092354  jal         func_248D50
    ctx->pc = 0x247160u;
    SET_GPR_U32(ctx, 31, 0x247168u);
    ctx->pc = 0x247164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247160u;
    // 0x247164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D50u, 0x247160u, 0x247168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247168u;
label_247168:
    // 0x247168: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x247168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24716c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24716Cu;
    {
        const bool branch_taken_0x24716c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24716c) {
            ctx->pc = 0x247170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24716Cu;
            // 0x247170: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247160;
        }
    }
    ctx->pc = 0x247174u;
    // 0x247174: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x247174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_247178:
    // 0x247178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24717c: 0x244582f8  addiu       $a1, $v0, -0x7D08
    ctx->pc = 0x24717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935288));
    // 0x247180: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247184: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x247184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247188:
    // 0x247188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24718c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x247190: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247194: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x247194u;
    {
        const bool branch_taken_0x247194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247194u;
        // 0x247198: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247194) {
            ctx->pc = 0x2470CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2470cc;
        }
    }
    ctx->pc = 0x24719Cu;
    // 0x24719c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2471a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2471a4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2471a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2471a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2471A8u;
    {
        const bool branch_taken_0x2471a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471A8u;
        // 0x2471ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471a8) {
            ctx->pc = 0x247188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247188;
        }
    }
    ctx->pc = 0x2471B0u;
    // 0x2471b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2471b4:
    // 0x2471b4: 0x16620050  bne         $s3, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2471B4u;
    {
        const bool branch_taken_0x2471b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471B4u;
        // 0x2471b8: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471b4) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x2471BCu;
    // 0x2471bc: 0xc091850  jal         func_246140
    ctx->pc = 0x2471BCu;
    SET_GPR_U32(ctx, 31, 0x2471C4u);
    ctx->pc = 0x246140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246140u, 0x2471BCu, 0x2471C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471C4u;
label_2471c4:
    // 0x2471c4: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2471C4u;
    {
        const bool branch_taken_0x2471c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471C4u;
        // 0x2471c8: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471c4) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x2471CCu;
    // 0x2471cc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2471d0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2471d4: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2471d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2471d8: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x2471d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x2471dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2471e0: 0x34a53c7f  ori         $a1, $a1, 0x3C7F
    ctx->pc = 0x2471e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15487);
    // 0x2471e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2471e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2471e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2471e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2471ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2471f0: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x2471F0u;
    SET_GPR_U32(ctx, 31, 0x2471F8u);
    ctx->pc = 0x2471F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471F0u;
    // 0x2471f4: 0x8c440d9c  lw          $a0, 0xD9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x2471F0u, 0x2471F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471F8u;
label_2471f8:
    // 0x2471f8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2471F8u;
    {
        const bool branch_taken_0x2471f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2471FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471F8u;
        // 0x2471fc: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471f8) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x247200u;
label_247200:
    // 0x247200: 0xc081546  jal         func_205518
    ctx->pc = 0x247200u;
    SET_GPR_U32(ctx, 31, 0x247208u);
    ctx->pc = 0x247204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247200u;
    // 0x247204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x247200u, 0x247208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247208u;
label_247208:
    // 0x247208: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x247208u;
    {
        const bool branch_taken_0x247208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247208u;
        // 0x24720c: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247208) {
            ctx->pc = 0x2471F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2471f8;
        }
    }
    ctx->pc = 0x247210u;
label_247210:
    // 0x247210: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x247210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x247214: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x247214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x247218: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x247218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24721c: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x247220: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x247220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x247224: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x247224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x247228: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x247228u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24722c: 0xaf88a0d8  sw          $t0, -0x5F28($gp)
    ctx->pc = 0x24722cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
    // 0x247230: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x247230u;
    SET_GPR_U32(ctx, 31, 0x247238u);
    ctx->pc = 0x247234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247230u;
    // 0x247234: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x247230u, 0x247238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247238u;
label_247238:
    // 0x247238: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x247238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24723c: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x24723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x247240: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x247244: 0x8f86a15c  lw          $a2, -0x5EA4($gp)
    ctx->pc = 0x247244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x247248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24724c: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x247250: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x247250u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x247254: 0xaf83a100  sw          $v1, -0x5F00($gp)
    ctx->pc = 0x247254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942976), GPR_U32(ctx, 3));
    // 0x247258: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x247258u;
    SET_GPR_U32(ctx, 31, 0x247260u);
    ctx->pc = 0x24725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247258u;
    // 0x24725c: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x247258u, 0x247260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247260u;
label_247260:
    // 0x247260: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x247264: 0x8f88a0d8  lw          $t0, -0x5F28($gp)
    ctx->pc = 0x247264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x247268: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24726c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24726Cu;
    {
        const bool branch_taken_0x24726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24726Cu;
        // 0x247270: 0xaf83a104  sw          $v1, -0x5EFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24726c) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x247274u;
label_247274:
    // 0x247274: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x247274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x247278: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x247278u;
    {
        const bool branch_taken_0x247278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247278u;
        // 0x24727c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247278) {
            ctx->pc = 0x2472F4u;
            goto label_2472f4;
        }
    }
    ctx->pc = 0x247280u;
    // 0x247280: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x247280u;
    {
        const bool branch_taken_0x247280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x247284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247280u;
        // 0x247284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247280) {
            ctx->pc = 0x2472F4u;
            goto label_2472f4;
        }
    }
    ctx->pc = 0x247288u;
    // 0x247288: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x247288u;
    {
        const bool branch_taken_0x247288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247288u;
        // 0x24728c: 0x8f82a0f8  lw          $v0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247288) {
            ctx->pc = 0x2472D4u;
            goto label_2472d4;
        }
    }
    ctx->pc = 0x247290u;
    // 0x247290: 0x8f84a0f4  lw          $a0, -0x5F0C($gp)
    ctx->pc = 0x247290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x247294: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x247294u;
    {
        const bool branch_taken_0x247294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247294u;
        // 0x247298: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247294) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x24729Cu;
    // 0x24729c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2472a0: 0x14450016  bne         $v0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2472A0u;
    {
        const bool branch_taken_0x2472a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472A0u;
        // 0x2472a4: 0x8f89a004  lw          $t1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472a0) {
            ctx->pc = 0x2472FCu;
            goto label_2472fc;
        }
    }
    ctx->pc = 0x2472A8u;
    // 0x2472a8: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x2472a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2472ac: 0xa382a1f8  sb          $v0, -0x5E08($gp)
    ctx->pc = 0x2472acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943224), (uint8_t)GPR_U32(ctx, 2));
    // 0x2472b0: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x2472b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x2472b4: 0xa383a1f9  sb          $v1, -0x5E07($gp)
    ctx->pc = 0x2472b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943225), (uint8_t)GPR_U32(ctx, 3));
    // 0x2472b8: 0xc0918c6  jal         func_246318
    ctx->pc = 0x2472B8u;
    SET_GPR_U32(ctx, 31, 0x2472C0u);
    ctx->pc = 0x2472BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472B8u;
    // 0x2472bc: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246318u, 0x2472B8u, 0x2472C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x8f82a0f4  lw          $v0, -0x5F0C($gp)
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x2472c4: 0xc093eb0  jal         func_24FAC0
    ctx->pc = 0x2472C4u;
    SET_GPR_U32(ctx, 31, 0x2472CCu);
    ctx->pc = 0x2472C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472C4u;
    // 0x2472c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FAC0u, 0x2472C4u, 0x2472CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472CCu;
label_2472cc:
    // 0x2472cc: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x2472CCu;
    {
        const bool branch_taken_0x2472cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472CCu;
        // 0x2472d0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472cc) {
            ctx->pc = 0x24780Cu;
            goto label_24780c;
        }
    }
    ctx->pc = 0x2472D4u;
label_2472d4:
    // 0x2472d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2472D4u;
    {
        const bool branch_taken_0x2472d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2472D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472D4u;
        // 0x2472d8: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472d4) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x2472DCu;
    // 0x2472dc: 0xc091734  jal         func_245CD0
    ctx->pc = 0x2472DCu;
    SET_GPR_U32(ctx, 31, 0x2472E4u);
    ctx->pc = 0x2472E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472DCu;
    // 0x2472e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245CD0u, 0x2472DCu, 0x2472E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472E4u;
label_2472e4:
    // 0x2472e4: 0xc0916da  jal         func_245B68
    ctx->pc = 0x2472E4u;
    SET_GPR_U32(ctx, 31, 0x2472ECu);
    ctx->pc = 0x2472E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472E4u;
    // 0x2472e8: 0x3c170035  lui         $s7, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B68u, 0x2472E4u, 0x2472ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472ECu;
label_2472ec:
    // 0x2472ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2472ECu;
    {
        const bool branch_taken_0x2472ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ECu;
        // 0x2472f0: 0x8f88a0d8  lw          $t0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472ec) {
            ctx->pc = 0x2472F8u;
            goto label_2472f8;
        }
    }
    ctx->pc = 0x2472F4u;
label_2472f4:
    // 0x2472f4: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
label_2472f8:
    // 0x2472f8: 0x8f89a004  lw          $t1, -0x5FFC($gp)
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2472fc:
    // 0x2472fc: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x247300: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x247300u;
    {
        const bool branch_taken_0x247300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247300u;
        // 0x247304: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247300) {
            ctx->pc = 0x247340u;
            goto label_247340;
        }
    }
    ctx->pc = 0x247308u;
    // 0x247308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247308u;
    {
        const bool branch_taken_0x247308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247308) {
            ctx->pc = 0x247318u;
            goto label_247318;
        }
    }
    ctx->pc = 0x247310u;
label_247310:
    // 0x247310: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
label_247314:
    // 0x247314: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_247318:
    // 0x247318: 0x24467240  addiu       $a2, $v0, 0x7240
    ctx->pc = 0x247318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29248));
    // 0x24731c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x24731cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x247320: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x247320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x247324: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x247324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x247328: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x247328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24732c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x24732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x247330: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x247330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x247334: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x247334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x247338: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x247338u;
    {
        const bool branch_taken_0x247338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247338u;
        // 0x24733c: 0xb7a40008  sdr         $a0, 0x8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247338) {
            ctx->pc = 0x247398u;
            goto label_247398;
        }
    }
    ctx->pc = 0x247340u;
label_247340:
    // 0x247340: 0x8f87a15c  lw          $a3, -0x5EA4($gp)
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x247344: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x247344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x247348: 0x8f86a158  lw          $a2, -0x5EA8($gp)
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x24734c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x24734cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x247350: 0x8f83a164  lw          $v1, -0x5E9C($gp)
    ctx->pc = 0x247350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x247354: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x247358: 0x8f82a160  lw          $v0, -0x5EA0($gp)
    ctx->pc = 0x247358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x24735c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x24735cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x247360: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x247364: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x247364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x247368: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24736c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x247370: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x247374: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x247374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x247378: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x247378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
    // 0x24737c: 0x3c05ff80  lui         $a1, 0xFF80
    ctx->pc = 0x24737cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65408 << 16));
    // 0x247380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x247384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x247388: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x247388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x24738c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x24738cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x247390: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x247390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x247394: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x247394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_247398:
    // 0x247398: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24739c: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x24739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2473a0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2473a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2473a4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2473a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2473a8: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2473A8u;
    {
        const bool branch_taken_0x2473a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473A8u;
        // 0x2473ac: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473a8) {
            ctx->pc = 0x2474F0u;
            goto label_2474f0;
        }
    }
    ctx->pc = 0x2473B0u;
    // 0x2473b0: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2473b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2473b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2473b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2473bc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2473BCu;
    {
        const bool branch_taken_0x2473bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473BCu;
        // 0x2473c0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473bc) {
            ctx->pc = 0x247434u;
            goto label_247434;
        }
    }
    ctx->pc = 0x2473C4u;
    // 0x2473c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2473c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2473c8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2473C8u;
    {
        const bool branch_taken_0x2473c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C8u;
        // 0x2473cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473c8) {
            ctx->pc = 0x247434u;
            goto label_247434;
        }
    }
    ctx->pc = 0x2473D0u;
    // 0x2473d0: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x2473d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x2473d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2473d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2473d8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2473D8u;
    {
        const bool branch_taken_0x2473d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D8u;
        // 0x2473dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473d8) {
            ctx->pc = 0x247434u;
            goto label_247434;
        }
    }
    ctx->pc = 0x2473E0u;
    // 0x2473e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2473e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2473e4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2473E4u;
    {
        const bool branch_taken_0x2473e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2473e4) {
            ctx->pc = 0x247434u;
            goto label_247434;
        }
    }
    ctx->pc = 0x2473ECu;
    // 0x2473ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2473ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2473f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2473f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2473f4: 0xc080ecc  jal         func_203B30
    ctx->pc = 0x2473F4u;
    SET_GPR_U32(ctx, 31, 0x2473FCu);
    ctx->pc = 0x2473F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473F4u;
    // 0x2473f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B30u, 0x2473F4u, 0x2473FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473FCu;
label_2473fc:
    // 0x2473fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2473fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247400: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x247400u;
    SET_GPR_U32(ctx, 31, 0x247408u);
    ctx->pc = 0x247404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247400u;
    // 0x247404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x247400u, 0x247408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247408u;
label_247408:
    // 0x247408: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x247408u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24740c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247410: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x247410u;
    SET_GPR_U32(ctx, 31, 0x247418u);
    ctx->pc = 0x247414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247410u;
    // 0x247414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x247410u, 0x247418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247418u;
label_247418:
    // 0x247418: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x24741c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24741cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247420: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x247420u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x247424: 0xc080ecc  jal         func_203B30
    ctx->pc = 0x247424u;
    SET_GPR_U32(ctx, 31, 0x24742Cu);
    ctx->pc = 0x247428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247424u;
    // 0x247428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B30u, 0x247424u, 0x24742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24742Cu;
label_24742c:
    // 0x24742c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24742Cu;
    {
        const bool branch_taken_0x24742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24742c) {
            ctx->pc = 0x24745Cu;
            goto label_24745c;
        }
    }
    ctx->pc = 0x247434u;
label_247434:
    // 0x247434: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x247434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x247438: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24743c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247440: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x247440u;
    SET_GPR_U32(ctx, 31, 0x247448u);
    ctx->pc = 0x247444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247440u;
    // 0x247444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x247440u, 0x247448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247448u;
label_247448:
    // 0x247448: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x247448u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24744c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247450: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x247450u;
    SET_GPR_U32(ctx, 31, 0x247458u);
    ctx->pc = 0x247454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247450u;
    // 0x247454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x247450u, 0x247458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247458u;
label_247458:
    // 0x247458: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x247458u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_24745c:
    // 0x24745c: 0xc7808264  lwc1        $f0, -0x7D9C($gp)
    ctx->pc = 0x24745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247460: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x247460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x247464: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x247464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x247468: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x247468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24746c: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x24746cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x247470: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x247470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x247474: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x247474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x247478: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247478u;
    {
        const bool branch_taken_0x247478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247478u;
        // 0x24747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247478) {
            ctx->pc = 0x247488u;
            goto label_247488;
        }
    }
    ctx->pc = 0x247480u;
    // 0x247480: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x247480u;
    {
        const bool branch_taken_0x247480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247480u;
        // 0x247484: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247480) {
            ctx->pc = 0x2474C8u;
            goto label_2474c8;
        }
    }
    ctx->pc = 0x247488u;
label_247488:
    // 0x247488: 0xc0926d6  jal         func_249B58
    ctx->pc = 0x247488u;
    SET_GPR_U32(ctx, 31, 0x247490u);
    ctx->pc = 0x24748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247488u;
    // 0x24748c: 0x112823  negu        $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B58u, 0x247488u, 0x247490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247490u;
label_247490:
    // 0x247490: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x247494: 0x34480002  ori         $t0, $v0, 0x2
    ctx->pc = 0x247494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x247498: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247498u;
    {
        const bool branch_taken_0x247498 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x24749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247498u;
        // 0x24749c: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247498) {
            ctx->pc = 0x2474A8u;
            goto label_2474a8;
        }
    }
    ctx->pc = 0x2474A0u;
    // 0x2474a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2474A0u;
    {
        const bool branch_taken_0x2474a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474A0u;
        // 0x2474a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474a0) {
            ctx->pc = 0x2474C0u;
            goto label_2474c0;
        }
    }
    ctx->pc = 0x2474A8u;
label_2474a8:
    // 0x2474a8: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2474A8u;
    {
        const bool branch_taken_0x2474a8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2474ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474A8u;
        // 0x2474ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474a8) {
            ctx->pc = 0x2474C0u;
            goto label_2474c0;
        }
    }
    ctx->pc = 0x2474B0u;
    // 0x2474b0: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2474B0u;
    {
        const bool branch_taken_0x2474b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2474B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474B0u;
        // 0x2474b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474b0) {
            ctx->pc = 0x2474C0u;
            goto label_2474c0;
        }
    }
    ctx->pc = 0x2474B8u;
    // 0x2474b8: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2474B8u;
    {
        const bool branch_taken_0x2474b8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2474BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474B8u;
        // 0x2474bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474b8) {
            ctx->pc = 0x2474C4u;
            goto label_2474c4;
        }
    }
    ctx->pc = 0x2474C0u;
label_2474c0:
    // 0x2474c0: 0xa382a190  sb          $v0, -0x5E70($gp)
    ctx->pc = 0x2474c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943120), (uint8_t)GPR_U32(ctx, 2));
label_2474c4:
    // 0x2474c4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2474c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2474c8:
    // 0x2474c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2474c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2474cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2474CCu;
    {
        const bool branch_taken_0x2474cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2474D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474CCu;
        // 0x2474d0: 0x32c20002  andi        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474cc) {
            ctx->pc = 0x2474F0u;
            goto label_2474f0;
        }
    }
    ctx->pc = 0x2474D4u;
    // 0x2474d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2474D4u;
    {
        const bool branch_taken_0x2474d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474D4u;
        // 0x2474d8: 0x3c150001  lui         $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474d4) {
            ctx->pc = 0x2474E4u;
            goto label_2474e4;
        }
    }
    ctx->pc = 0x2474DCu;
    // 0x2474dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2474DCu;
    {
        const bool branch_taken_0x2474dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474DCu;
        // 0x2474e0: 0x36b5051e  ori         $s5, $s5, 0x51E (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1310);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474dc) {
            ctx->pc = 0x2474F0u;
            goto label_2474f0;
        }
    }
    ctx->pc = 0x2474E4u;
label_2474e4:
    // 0x2474e4: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x2474e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
    // 0x2474e8: 0x3415fae1  ori         $s5, $zero, 0xFAE1
    ctx->pc = 0x2474e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64225);
    // 0x2474ec: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x2474ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2474f0:
    // 0x2474f0: 0xc091a48  jal         func_246920
    ctx->pc = 0x2474F0u;
    SET_GPR_U32(ctx, 31, 0x2474F8u);
    ctx->pc = 0x2474F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474F0u;
    // 0x2474f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246920u, 0x2474F0u, 0x2474F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474F8u;
label_2474f8:
    // 0x2474f8: 0x12a00082  beqz        $s5, . + 4 + (0x82 << 2)
    ctx->pc = 0x2474F8u;
    {
        const bool branch_taken_0x2474f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474F8u;
        // 0x2474fc: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474f8) {
            ctx->pc = 0x247704u;
            goto label_247704;
        }
    }
    ctx->pc = 0x247500u;
    // 0x247500: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x247504: 0x8f84a158  lw          $a0, -0x5EA8($gp)
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x247508: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x247508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24750c: 0x34680001  ori         $t0, $v1, 0x1
    ctx->pc = 0x24750cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x247510: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x247510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x247514: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x247518: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24751c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24751Cu;
    SET_GPR_U32(ctx, 31, 0x247524u);
    ctx->pc = 0x247520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24751Cu;
    // 0x247520: 0xaf88a0d8  sw          $t0, -0x5F28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24751Cu, 0x247524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247524u;
label_247524:
    // 0x247524: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x247528: 0x8f84a15c  lw          $a0, -0x5EA4($gp)
    ctx->pc = 0x247528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x24752c: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x24752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x247530: 0x8f87a168  lw          $a3, -0x5E98($gp)
    ctx->pc = 0x247530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x247534: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x247538: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x247538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x24753c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x247540: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x247540u;
    SET_GPR_U32(ctx, 31, 0x247548u);
    ctx->pc = 0x247544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247540u;
    // 0x247544: 0xe29821  addu        $s3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x247540u, 0x247548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247548u;
label_247548:
    // 0x247548: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x247548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x24754c: 0x3c050780  lui         $a1, 0x780
    ctx->pc = 0x24754cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1920 << 16));
    // 0x247550: 0x8f88a178  lw          $t0, -0x5E88($gp)
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x247554: 0x8f84a17c  lw          $a0, -0x5E84($gp)
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
    // 0x247558: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24755c: 0x8f87a168  lw          $a3, -0x5E98($gp)
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x247560: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x247564: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x247568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24756c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x247570: 0x2833023  subu        $a2, $s4, $v1
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x247574: 0x2671023  subu        $v0, $s3, $a3
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x247578: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x24757c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x247580: 0x8f84a160  lw          $a0, -0x5EA0($gp)
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x247584: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x247584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x247588: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24758c: 0xaf87a168  sw          $a3, -0x5E98($gp)
    ctx->pc = 0x24758cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 7));
    // 0x247590: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x247594: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x247594u;
    SET_GPR_U32(ctx, 31, 0x24759Cu);
    ctx->pc = 0x247598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247594u;
    // 0x247598: 0xaf83a16c  sw          $v1, -0x5E94($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x247594u, 0x24759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24759Cu;
label_24759c:
    // 0x24759c: 0x8f84a160  lw          $a0, -0x5EA0($gp)
    ctx->pc = 0x24759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x2475a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2475a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475a4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2475a8: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x2475A8u;
    SET_GPR_U32(ctx, 31, 0x2475B0u);
    ctx->pc = 0x2475ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475A8u;
    // 0x2475ac: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x2475A8u, 0x2475B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475B0u;
label_2475b0:
    // 0x2475b0: 0x8f84a180  lw          $a0, -0x5E80($gp)
    ctx->pc = 0x2475b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x2475b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2475b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475b8: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2475B8u;
    SET_GPR_U32(ctx, 31, 0x2475C0u);
    ctx->pc = 0x2475BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475B8u;
    // 0x2475bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2475B8u, 0x2475C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475C0u;
label_2475c0:
    // 0x2475c0: 0x8f84a184  lw          $a0, -0x5E7C($gp)
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x2475c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475c8: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2475C8u;
    SET_GPR_U32(ctx, 31, 0x2475D0u);
    ctx->pc = 0x2475CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475C8u;
    // 0x2475cc: 0xaf82a180  sw          $v0, -0x5E80($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2475C8u, 0x2475D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475D0u;
label_2475d0:
    // 0x2475d0: 0x8f84a164  lw          $a0, -0x5E9C($gp)
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x2475d4: 0x8f85a160  lw          $a1, -0x5EA0($gp)
    ctx->pc = 0x2475d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x2475d8: 0xaf82a184  sw          $v0, -0x5E7C($gp)
    ctx->pc = 0x2475d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 2));
    // 0x2475dc: 0x42440  sll         $a0, $a0, 17
    ctx->pc = 0x2475dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 17));
    // 0x2475e0: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x2475E0u;
    SET_GPR_U32(ctx, 31, 0x2475E8u);
    ctx->pc = 0x2475E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475E0u;
    // 0x2475e4: 0x52c00  sll         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x2475E0u, 0x2475E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475E8u;
label_2475e8:
    // 0x2475e8: 0x8f83a180  lw          $v1, -0x5E80($gp)
    ctx->pc = 0x2475e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x2475ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2475ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475f0: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2475f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2475f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2475F4u;
    {
        const bool branch_taken_0x2475f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2475F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475F4u;
        // 0x2475f8: 0x8f90a164  lw          $s0, -0x5E9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475f4) {
            ctx->pc = 0x247608u;
            goto label_247608;
        }
    }
    ctx->pc = 0x2475FCu;
    // 0x2475fc: 0x3c040780  lui         $a0, 0x780
    ctx->pc = 0x2475fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1920 << 16));
    // 0x247600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x247600u;
    {
        const bool branch_taken_0x247600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247600u;
        // 0x247604: 0xaf92a180  sw          $s2, -0x5E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247600) {
            ctx->pc = 0x24761Cu;
            goto label_24761c;
        }
    }
    ctx->pc = 0x247608u;
label_247608:
    // 0x247608: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x247608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24760c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24760Cu;
    {
        const bool branch_taken_0x24760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24760c) {
            ctx->pc = 0x247610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24760Cu;
            // 0x247610: 0x8f85a180  lw          $a1, -0x5E80($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247638u;
            goto label_247638;
        }
    }
    ctx->pc = 0x247614u;
    // 0x247614: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x247618: 0xaf91a180  sw          $s1, -0x5E80($gp)
    ctx->pc = 0x247618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 17));
label_24761c:
    // 0x24761c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24761Cu;
    SET_GPR_U32(ctx, 31, 0x247624u);
    ctx->pc = 0x247620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24761Cu;
    // 0x247620: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24761Cu, 0x247624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247624u;
label_247624:
    // 0x247624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247628: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x247628u;
    SET_GPR_U32(ctx, 31, 0x247630u);
    ctx->pc = 0x24762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247628u;
    // 0x24762c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x247628u, 0x247630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247630u;
label_247630:
    // 0x247630: 0xaf82a184  sw          $v0, -0x5E7C($gp)
    ctx->pc = 0x247630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943108), GPR_U32(ctx, 2));
    // 0x247634: 0x8f85a180  lw          $a1, -0x5E80($gp)
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
label_247638:
    // 0x247638: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x247638u;
    SET_GPR_U32(ctx, 31, 0x247640u);
    ctx->pc = 0x24763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247638u;
    // 0x24763c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x247638u, 0x247640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247640u;
label_247640:
    // 0x247640: 0x8f85a184  lw          $a1, -0x5E7C($gp)
    ctx->pc = 0x247640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x247644: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x247644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x247648: 0xc092e68  jal         func_24B9A0
    ctx->pc = 0x247648u;
    SET_GPR_U32(ctx, 31, 0x247650u);
    ctx->pc = 0x24764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247648u;
    // 0x24764c: 0xaf82a188  sw          $v0, -0x5E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9A0u, 0x247648u, 0x247650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247650u;
label_247650:
    // 0x247650: 0x8f84a160  lw          $a0, -0x5EA0($gp)
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
    // 0x247654: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x247658: 0xaf82a18c  sw          $v0, -0x5E74($gp)
    ctx->pc = 0x247658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 2));
    // 0x24765c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24765Cu;
    SET_GPR_U32(ctx, 31, 0x247664u);
    ctx->pc = 0x247660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24765Cu;
    // 0x247660: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24765Cu, 0x247664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247664u;
label_247664:
    // 0x247664: 0x8f84a164  lw          $a0, -0x5E9C($gp)
    ctx->pc = 0x247664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943076)));
    // 0x247668: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x247668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x24766c: 0xaf82a178  sw          $v0, -0x5E88($gp)
    ctx->pc = 0x24766cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943096), GPR_U32(ctx, 2));
    // 0x247670: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x247670u;
    SET_GPR_U32(ctx, 31, 0x247678u);
    ctx->pc = 0x247674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247670u;
    // 0x247674: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x247670u, 0x247678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247678u;
label_247678:
    // 0x247678: 0x8f87a178  lw          $a3, -0x5E88($gp)
    ctx->pc = 0x247678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x24767c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x24767cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x247680: 0x8f88a168  lw          $t0, -0x5E98($gp)
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x247684: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247688: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x247688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x24768c: 0x8f86a16c  lw          $a2, -0x5E94($gp)
    ctx->pc = 0x24768cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x247690: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x247690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x247694: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x247698: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x247698u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24769c: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x24769cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2476a0: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2476a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2476a4: 0x8f85a180  lw          $a1, -0x5E80($gp)
    ctx->pc = 0x2476a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943104)));
    // 0x2476a8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2476a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2476ac: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2476acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2476b0: 0x2682023  subu        $a0, $s3, $t0
    ctx->pc = 0x2476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2476b4: 0xaf87a170  sw          $a3, -0x5E90($gp)
    ctx->pc = 0x2476b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943088), GPR_U32(ctx, 7));
    // 0x2476b8: 0xaf83a174  sw          $v1, -0x5E8C($gp)
    ctx->pc = 0x2476b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943092), GPR_U32(ctx, 3));
    // 0x2476bc: 0xaf82a17c  sw          $v0, -0x5E84($gp)
    ctx->pc = 0x2476bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943100), GPR_U32(ctx, 2));
    // 0x2476c0: 0xaf88a168  sw          $t0, -0x5E98($gp)
    ctx->pc = 0x2476c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943080), GPR_U32(ctx, 8));
    // 0x2476c4: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2476C4u;
    SET_GPR_U32(ctx, 31, 0x2476CCu);
    ctx->pc = 0x2476C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476C4u;
    // 0x2476c8: 0xaf86a16c  sw          $a2, -0x5E94($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943084), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2476C4u, 0x2476CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476CCu;
label_2476cc:
    // 0x2476cc: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x2476ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x2476d0: 0x8f84a16c  lw          $a0, -0x5E94($gp)
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x2476d4: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x2476d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2476d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2476dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2476e0: 0x8f85a184  lw          $a1, -0x5E7C($gp)
    ctx->pc = 0x2476e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x2476e4: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x2476e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x2476e8: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2476E8u;
    SET_GPR_U32(ctx, 31, 0x2476F0u);
    ctx->pc = 0x2476ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476E8u;
    // 0x2476ec: 0x2842023  subu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2476E8u, 0x2476F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476F0u;
label_2476f0:
    // 0x2476f0: 0x8f83a15c  lw          $v1, -0x5EA4($gp)
    ctx->pc = 0x2476f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x2476f4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2476f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2476f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2476f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2476fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2476fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247700: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x247700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_247704:
    // 0x247704: 0xc09194c  jal         func_246530
    ctx->pc = 0x247704u;
    SET_GPR_U32(ctx, 31, 0x24770Cu);
    ctx->pc = 0x246530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246530u, 0x247704u, 0x24770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24770Cu;
label_24770c:
    // 0x24770c: 0x8f89a004  lw          $t1, -0x5FFC($gp)
    ctx->pc = 0x24770cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x247710: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x247710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x247714: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x247714u;
    {
        const bool branch_taken_0x247714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247714u;
        // 0x247718: 0x26e36688  addiu       $v1, $s7, 0x6688 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 26248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247714) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x24771Cu;
    // 0x24771c: 0x8f84a0f4  lw          $a0, -0x5F0C($gp)
    ctx->pc = 0x24771cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x247720: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x247720u;
    {
        const bool branch_taken_0x247720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247720u;
        // 0x247724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247720) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x247728u;
    // 0x247728: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24772c: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x24772Cu;
    {
        const bool branch_taken_0x24772c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24772Cu;
        // 0x247730: 0x26e36688  addiu       $v1, $s7, 0x6688 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 26248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24772c) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x247734u;
    // 0x247734: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x247734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x247738: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x247738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24773c: 0x24637370  addiu       $v1, $v1, 0x7370
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29552));
    // 0x247740: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x247740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x247744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24774c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247750: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x247750u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x247754: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x247754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247758: 0x0  nop
    ctx->pc = 0x247758u;
    // NOP
    // 0x24775c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24775Cu;
    {
        const bool branch_taken_0x24775c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24775Cu;
        // 0x247760: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24775c) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x247764u;
    // 0x247764: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x247764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x247768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24776c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x24776cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_247770:
    // 0x247770: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x247770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x247774: 0xc094140  jal         func_250500
    ctx->pc = 0x247774u;
    SET_GPR_U32(ctx, 31, 0x24777Cu);
    ctx->pc = 0x247778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247774u;
    // 0x247778: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250500u, 0x247774u, 0x24777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24777Cu;
label_24777c:
    // 0x24777c: 0x8f85a0f4  lw          $a1, -0x5F0C($gp)
    ctx->pc = 0x24777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x247780: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x247784: 0x24847940  addiu       $a0, $a0, 0x7940
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31040));
    // 0x247788: 0x3c034f72  lui         $v1, 0x4F72
    ctx->pc = 0x247788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20338 << 16));
    // 0x24778c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x247790: 0x3463c235  ori         $v1, $v1, 0xC235
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49717);
    // 0x247794: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247798: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x247798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24779c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x24779cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2477a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2477a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477a4: 0xc094180  jal         func_250600
    ctx->pc = 0x2477A4u;
    SET_GPR_U32(ctx, 31, 0x2477ACu);
    ctx->pc = 0x2477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477A4u;
    // 0x2477a8: 0xaf82a210  sw          $v0, -0x5DF0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x2477A4u, 0x2477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477ACu;
label_2477ac:
    // 0x2477ac: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2477acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2477b0: 0x8f83a0f4  lw          $v1, -0x5F0C($gp)
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x2477b4: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x2477b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2477b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2477bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2477c0: 0xe794a218  swc1        $f20, -0x5DE8($gp)
    ctx->pc = 0x2477c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), bits); }
    // 0x2477c4: 0xe780a214  swc1        $f0, -0x5DEC($gp)
    ctx->pc = 0x2477c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
    // 0x2477c8: 0xe781a21c  swc1        $f1, -0x5DE4($gp)
    ctx->pc = 0x2477c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
    // 0x2477cc: 0xaf82a208  sw          $v0, -0x5DF8($gp)
    ctx->pc = 0x2477ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943240), GPR_U32(ctx, 2));
    // 0x2477d0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2477D0u;
    SET_GPR_U32(ctx, 31, 0x2477D8u);
    ctx->pc = 0x2477D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477D0u;
    // 0x2477d4: 0xaf83a20c  sw          $v1, -0x5DF4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943244), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2506C0u, 0x2477D0u, 0x2477D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477D8u;
label_2477d8:
    // 0x2477d8: 0x8f89a004  lw          $t1, -0x5FFC($gp)
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2477dc: 0x26e36688  addiu       $v1, $s7, 0x6688
    ctx->pc = 0x2477dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 26248));
label_2477e0:
    // 0x2477e0: 0xaee06688  sw          $zero, 0x6688($s7)
    ctx->pc = 0x2477e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 26248), GPR_U32(ctx, 0));
    // 0x2477e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2477e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2477e8: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2477ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2477ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2477f0: 0xaf84a1f4  sw          $a0, -0x5E0C($gp)
    ctx->pc = 0x2477f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943220), GPR_U32(ctx, 4));
    // 0x2477f4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2477f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2477f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2477F8u;
    {
        const bool branch_taken_0x2477f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2477FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477F8u;
        // 0x2477fc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477f8) {
            ctx->pc = 0x247808u;
            goto label_247808;
        }
    }
    ctx->pc = 0x247800u;
    // 0x247800: 0xc09197e  jal         func_2465F8
    ctx->pc = 0x247800u;
    SET_GPR_U32(ctx, 31, 0x247808u);
    ctx->pc = 0x2465F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2465F8u, 0x247800u, 0x247808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247808u;
label_247808:
    // 0x247808: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x247808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_24780c:
    // 0x24780c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x24780cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x247810: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x247810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x247814: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x247814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x247818: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x247818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24781c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x24781cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247820: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x247820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247824: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x247824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247828: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x247828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24782c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x24782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x247830: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x247830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247834: 0x3e00008  jr          $ra
    ctx->pc = 0x247834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247834u;
        // 0x247838: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24783Cu;
}
