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

// Function: replayTick
// Address: 0x202d90 - 0x202fec
void replayTick_0x202d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("replayTick_0x202d90");
#endif

    switch (ctx->pc) {
        case 0x202dbcu: goto label_202dbc;
        case 0x202de0u: goto label_202de0;
        case 0x202e34u: goto label_202e34;
        case 0x202e4cu: goto label_202e4c;
        case 0x202e64u: goto label_202e64;
        case 0x202e70u: goto label_202e70;
        case 0x202e8cu: goto label_202e8c;
        case 0x202e98u: goto label_202e98;
        case 0x202ea4u: goto label_202ea4;
        case 0x202eb0u: goto label_202eb0;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec8u: goto label_202ec8;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ee0u: goto label_202ee0;
        case 0x202eecu: goto label_202eec;
        case 0x202f80u: goto label_202f80;
        case 0x202f88u: goto label_202f88;
        case 0x202fb0u: goto label_202fb0;
        default: break;
    }

    ctx->pc = 0x202d90u;

    // 0x202d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x202d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x202d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x202d9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x202d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x202da0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202da4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x202da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x202da8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x202da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x202dac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x202dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x202db0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x202db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x202db4: 0xc080e18  jal         func_203860
    ctx->pc = 0x202DB4u;
    SET_GPR_U32(ctx, 31, 0x202DBCu);
    ctx->pc = 0x202DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB4u;
    // 0x202db8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x202DB4u, 0x202DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DBCu;
label_202dbc:
    // 0x202dbc: 0x30420950  andi        $v0, $v0, 0x950
    ctx->pc = 0x202dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2384);
    // 0x202dc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202DC0u;
    {
        const bool branch_taken_0x202dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DC0u;
        // 0x202dc4: 0x8f829aec  lw          $v0, -0x6514($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dc0) {
            ctx->pc = 0x202DCCu;
            goto label_202dcc;
        }
    }
    ctx->pc = 0x202DC8u;
    // 0x202dc8: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x202dc8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202dcc:
    // 0x202dcc: 0x8f869ae8  lw          $a2, -0x6518($gp)
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x202dd0: 0x18c0007d  blez        $a2, . + 4 + (0x7D << 2)
    ctx->pc = 0x202DD0u;
    {
        const bool branch_taken_0x202dd0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x202DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DD0u;
        // 0x202dd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dd0) {
            ctx->pc = 0x202FC8u;
            goto label_202fc8;
        }
    }
    ctx->pc = 0x202DD8u;
    // 0x202dd8: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x202dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
    // 0x202ddc: 0x26a3df68  addiu       $v1, $s5, -0x2098
    ctx->pc = 0x202ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958952));
label_202de0:
    // 0x202de0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x202de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x202de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202de8: 0x8f929ae4  lw          $s2, -0x651C($gp)
    ctx->pc = 0x202de8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941412)));
    // 0x202dec: 0x12400072  beqz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x202DECu;
    {
        const bool branch_taken_0x202dec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DECu;
        // 0x202df0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dec) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202DF4u;
    // 0x202df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202df8: 0x56420070  bnel        $s2, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x202DF8u;
    {
        const bool branch_taken_0x202df8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x202df8) {
            ctx->pc = 0x202DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202DF8u;
            // 0x202dfc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202FBCu;
            goto label_202fbc;
        }
    }
    ctx->pc = 0x202E00u;
    // 0x202e00: 0x8f829aec  lw          $v0, -0x6514($gp)
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941420)));
    // 0x202e04: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x202E04u;
    {
        const bool branch_taken_0x202e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E04u;
        // 0x202e08: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e04) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202E0Cu;
    // 0x202e0c: 0x8f829adc  lw          $v0, -0x6524($gp)
    ctx->pc = 0x202e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941404)));
    // 0x202e10: 0x8f849ae0  lw          $a0, -0x6520($gp)
    ctx->pc = 0x202e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941408)));
    // 0x202e14: 0x8f83b62c  lw          $v1, -0x49D4($gp)
    ctx->pc = 0x202e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948396)));
    // 0x202e18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202e1c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x202e1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x202e20: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x202E20u;
    {
        const bool branch_taken_0x202e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E20u;
        // 0x202e24: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e20) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202E28u;
    // 0x202e28: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e2c: 0xc081046  jal         func_204118
    ctx->pc = 0x202E2Cu;
    SET_GPR_U32(ctx, 31, 0x202E34u);
    ctx->pc = 0x202E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E2Cu;
    // 0x202e30: 0x24100180  addiu       $s0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202E2Cu, 0x202E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E34u;
label_202e34:
    // 0x202e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202e3c: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e40: 0xaf82b458  sw          $v0, -0x4BA8($gp)
    ctx->pc = 0x202e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 2));
    // 0x202e44: 0xc081046  jal         func_204118
    ctx->pc = 0x202E44u;
    SET_GPR_U32(ctx, 31, 0x202E4Cu);
    ctx->pc = 0x202E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E44u;
    // 0x202e48: 0xe780b464  swc1        $f0, -0x4B9C($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947940), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202E44u, 0x202E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E4Cu;
label_202e4c:
    // 0x202e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202e54: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e58: 0xaf82b460  sw          $v0, -0x4BA0($gp)
    ctx->pc = 0x202e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 2));
    // 0x202e5c: 0xc08105c  jal         func_204170
    ctx->pc = 0x202E5Cu;
    SET_GPR_U32(ctx, 31, 0x202E64u);
    ctx->pc = 0x202E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E5Cu;
    // 0x202e60: 0xe780b468  swc1        $f0, -0x4B98($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947944), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x204170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204170u, 0x202E5Cu, 0x202E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E64u;
label_202e64:
    // 0x202e64: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e68: 0xc081050  jal         func_204140
    ctx->pc = 0x202E68u;
    SET_GPR_U32(ctx, 31, 0x202E70u);
    ctx->pc = 0x202E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E68u;
    // 0x202e6c: 0xaf829da8  sw          $v0, -0x6258($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x202E68u, 0x202E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E70u;
label_202e70:
    // 0x202e70: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x202e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x202e74: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x202e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x202e78: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x202e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x202e7c: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e80: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x202e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x202e84: 0xc081050  jal         func_204140
    ctx->pc = 0x202E84u;
    SET_GPR_U32(ctx, 31, 0x202E8Cu);
    ctx->pc = 0x202E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E84u;
    // 0x202e88: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x202E84u, 0x202E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E8Cu;
label_202e8c:
    // 0x202e8c: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e90: 0xc081050  jal         func_204140
    ctx->pc = 0x202E90u;
    SET_GPR_U32(ctx, 31, 0x202E98u);
    ctx->pc = 0x202E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E90u;
    // 0x202e94: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x202E90u, 0x202E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E98u;
label_202e98:
    // 0x202e98: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202e9c: 0xc081050  jal         func_204140
    ctx->pc = 0x202E9Cu;
    SET_GPR_U32(ctx, 31, 0x202EA4u);
    ctx->pc = 0x202EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E9Cu;
    // 0x202ea0: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204140u, 0x202E9Cu, 0x202EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EA4u;
label_202ea4:
    // 0x202ea4: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202ea8: 0xc081046  jal         func_204118
    ctx->pc = 0x202EA8u;
    SET_GPR_U32(ctx, 31, 0x202EB0u);
    ctx->pc = 0x202EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EA8u;
    // 0x202eac: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202EA8u, 0x202EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EB0u;
label_202eb0:
    // 0x202eb0: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202eb4: 0xc081046  jal         func_204118
    ctx->pc = 0x202EB4u;
    SET_GPR_U32(ctx, 31, 0x202EBCu);
    ctx->pc = 0x202EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EB4u;
    // 0x202eb8: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202EB4u, 0x202EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EBCu;
label_202ebc:
    // 0x202ebc: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202ec0: 0xc081046  jal         func_204118
    ctx->pc = 0x202EC0u;
    SET_GPR_U32(ctx, 31, 0x202EC8u);
    ctx->pc = 0x202EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EC0u;
    // 0x202ec4: 0xae020130  sw          $v0, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202EC0u, 0x202EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202ecc: 0xc081046  jal         func_204118
    ctx->pc = 0x202ECCu;
    SET_GPR_U32(ctx, 31, 0x202ED4u);
    ctx->pc = 0x202ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ECCu;
    // 0x202ed0: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204118u, 0x202ECCu, 0x202ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202ED4u;
label_202ed4:
    // 0x202ed4: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202ed8: 0xc08105c  jal         func_204170
    ctx->pc = 0x202ED8u;
    SET_GPR_U32(ctx, 31, 0x202EE0u);
    ctx->pc = 0x202EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ED8u;
    // 0x202edc: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204170u, 0x202ED8u, 0x202EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE0u;
label_202ee0:
    // 0x202ee0: 0x2784b62c  addiu       $a0, $gp, -0x49D4
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948396));
    // 0x202ee4: 0xc08105c  jal         func_204170
    ctx->pc = 0x202EE4u;
    SET_GPR_U32(ctx, 31, 0x202EECu);
    ctx->pc = 0x202EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EE4u;
    // 0x202ee8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204170u, 0x202EE4u, 0x202EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EECu;
label_202eec:
    // 0x202eec: 0x9f83b480  lwu         $v1, -0x4B80($gp)
    ctx->pc = 0x202eecu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294947968)));
    // 0x202ef0: 0x8f869ae8  lw          $a2, -0x6518($gp)
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x202ef4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202ef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202efc: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x202efcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x202f00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x202F00u;
    {
        const bool branch_taken_0x202f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F00u;
        // 0x202f04: 0x250a00b  movn        $s4, $s2, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f00) {
            ctx->pc = 0x202F58u;
            goto label_202f58;
        }
    }
    ctx->pc = 0x202F08u;
label_202f08:
    // 0x202f08: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x202f0c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x202f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x202f10: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202f14: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x202f18: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x202f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x202f1c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x202f1cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202f24: 0xaf80b468  sw          $zero, -0x4B98($gp)
    ctx->pc = 0x202f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947944), GPR_U32(ctx, 0));
    // 0x202f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202f2c: 0xac440138  sw          $a0, 0x138($v0)
    ctx->pc = 0x202f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 4));
    // 0x202f30: 0xaf94b458  sw          $s4, -0x4BA8($gp)
    ctx->pc = 0x202f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947928), GPR_U32(ctx, 20));
    // 0x202f34: 0xaf80b460  sw          $zero, -0x4BA0($gp)
    ctx->pc = 0x202f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 0));
    // 0x202f38: 0xe780b464  swc1        $f0, -0x4B9C($gp)
    ctx->pc = 0x202f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947940), bits); }
    // 0x202f3c: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x202f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x202f40: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x202f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x202f44: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x202f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x202f48: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x202f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x202f4c: 0xac44012c  sw          $a0, 0x12C($v0)
    ctx->pc = 0x202f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 4));
    // 0x202f50: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x202f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
    // 0x202f54: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x202f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 4));
label_202f58:
    // 0x202f58: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x202F58u;
    {
        const bool branch_taken_0x202f58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F58u;
        // 0x202f5c: 0x8f829aec  lw          $v0, -0x6514($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f58) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202F60u;
    // 0x202f60: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x202F60u;
    {
        const bool branch_taken_0x202f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f60) {
            ctx->pc = 0x202F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202F60u;
            // 0x202f64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202FBCu;
            goto label_202fbc;
        }
    }
    ctx->pc = 0x202F68u;
    // 0x202f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f70: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x202F70u;
    {
        const bool branch_taken_0x202f70 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x202F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F70u;
        // 0x202f74: 0xaf829aec  sw          $v0, -0x6514($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f70) {
            ctx->pc = 0x202FA4u;
            goto label_202fa4;
        }
    }
    ctx->pc = 0x202F78u;
    // 0x202f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202f7c: 0x0  nop
    ctx->pc = 0x202f7cu;
    // NOP
label_202f80:
    // 0x202f80: 0xc09fbea  jal         func_27EFA8
    ctx->pc = 0x202F80u;
    SET_GPR_U32(ctx, 31, 0x202F88u);
    ctx->pc = 0x202F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F80u;
    // 0x202f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFA8u, 0x202F80u, 0x202F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F88u;
label_202f88:
    // 0x202f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x202f8c: 0x8f829ae8  lw          $v0, -0x6518($gp)
    ctx->pc = 0x202f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941416)));
    // 0x202f90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x202f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202f94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x202F94u;
    {
        const bool branch_taken_0x202f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f94) {
            ctx->pc = 0x202F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f80;
        }
    }
    ctx->pc = 0x202F9Cu;
    // 0x202f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202F9Cu;
    {
        const bool branch_taken_0x202f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f9c) {
            ctx->pc = 0x202FA8u;
            goto label_202fa8;
        }
    }
    ctx->pc = 0x202FA4u;
label_202fa4:
    // 0x202fa4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_202fa8:
    // 0x202fa8: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x202FA8u;
    SET_GPR_U32(ctx, 31, 0x202FB0u);
    ctx->pc = 0x2257D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257D8u, 0x202FA8u, 0x202FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FB0u;
label_202fb0:
    // 0x202fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202FB0u;
    {
        const bool branch_taken_0x202fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB0u;
        // 0x202fb4: 0x8f869ae8  lw          $a2, -0x6518($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb0) {
            ctx->pc = 0x202FBCu;
            goto label_202fbc;
        }
    }
    ctx->pc = 0x202FB8u;
label_202fb8:
    // 0x202fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_202fbc:
    // 0x202fbc: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x202fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x202fc0: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x202FC0u;
    {
        const bool branch_taken_0x202fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FC0u;
        // 0x202fc4: 0x26a3df68  addiu       $v1, $s5, -0x2098 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fc0) {
            ctx->pc = 0x202DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202de0;
        }
    }
    ctx->pc = 0x202FC8u;
label_202fc8:
    // 0x202fc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x202fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202fcc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x202fccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202fd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x202fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202fd4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x202fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202fd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x202fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202fdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x202fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x202FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE4u;
        // 0x202fe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202FECu;
}
