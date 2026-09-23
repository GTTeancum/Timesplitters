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

// Function: dying
// Address: 0x2c3d40 - 0x2c4288
void dying_0x2c3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dying_0x2c3d40");
#endif

    switch (ctx->pc) {
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e9cu: goto label_2c3e9c;
        case 0x2c3ec4u: goto label_2c3ec4;
        case 0x2c3efcu: goto label_2c3efc;
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3fc0u: goto label_2c3fc0;
        case 0x2c3fd0u: goto label_2c3fd0;
        case 0x2c3fe0u: goto label_2c3fe0;
        case 0x2c402cu: goto label_2c402c;
        case 0x2c403cu: goto label_2c403c;
        case 0x2c404cu: goto label_2c404c;
        case 0x2c406cu: goto label_2c406c;
        case 0x2c407cu: goto label_2c407c;
        case 0x2c408cu: goto label_2c408c;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c4184u: goto label_2c4184;
        case 0x2c4198u: goto label_2c4198;
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c426cu: goto label_2c426c;
        default: break;
    }

    ctx->pc = 0x2c3d40u;

    // 0x2c3d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c3d44: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c3d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c3d48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3d4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c3d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c3d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c3d58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3d5c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D64u);
    ctx->pc = 0x2C3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D5Cu;
    // 0x2c3d60: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3D5Cu, 0x2C3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D64u;
label_2c3d64:
    // 0x2c3d64: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c3d68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3d6c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2c3d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2c3d70: 0xae200bbc  sw          $zero, 0xBBC($s1)
    ctx->pc = 0x2c3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 0));
    // 0x2c3d74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d7c: 0xae230a90  sw          $v1, 0xA90($s1)
    ctx->pc = 0x2c3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
    // 0x2c3d80: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3D80u;
    SET_GPR_U32(ctx, 31, 0x2C3D88u);
    ctx->pc = 0x2C3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D80u;
    // 0x2c3d84: 0x240501d5  addiu       $a1, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3D80u, 0x2C3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D88u;
label_2c3d88:
    // 0x2c3d88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3D88u;
    {
        const bool branch_taken_0x2c3d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d88) {
            ctx->pc = 0x2C3D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3D88u;
            // 0x2c3d8c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DA4u;
            goto label_2c3da4;
        }
    }
    ctx->pc = 0x2C3D90u;
    // 0x2c3d90: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3D90u;
    SET_GPR_U32(ctx, 31, 0x2C3D98u);
    ctx->pc = 0x2C3D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D90u;
    // 0x2c3d94: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3D90u, 0x2C3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D98u;
label_2c3d98:
    // 0x2c3d98: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x2C3D98u;
    {
        const bool branch_taken_0x2c3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D98u;
        // 0x2c3d9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d98) {
            ctx->pc = 0x2C4274u;
            goto label_2c4274;
        }
    }
    ctx->pc = 0x2C3DA0u;
    // 0x2c3da0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c3da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3da4:
    // 0x2c3da4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3DA4u;
    {
        const bool branch_taken_0x2c3da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DA4u;
        // 0x2c3da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3da4) {
            ctx->pc = 0x2C3DB4u;
            goto label_2c3db4;
        }
    }
    ctx->pc = 0x2C3DACu;
    // 0x2c3dac: 0x14a20047  bne         $a1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C3DACu;
    {
        const bool branch_taken_0x2c3dac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3dac) {
            ctx->pc = 0x2C3ECCu;
            goto label_2c3ecc;
        }
    }
    ctx->pc = 0x2C3DB4u;
label_2c3db4:
    // 0x2c3db4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2c3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c3db8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c3dbc: 0x2462fdca  addiu       $v0, $v1, -0x236
    ctx->pc = 0x2c3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966730));
    // 0x2c3dc0: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2c3dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2c3dc4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3DC4u;
    {
        const bool branch_taken_0x2c3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DC4u;
        // 0x2c3dc8: 0x240201d8  addiu       $v0, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dc4) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DCCu;
    // 0x2c3dcc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3DCCu;
    {
        const bool branch_taken_0x2c3dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DCCu;
        // 0x2c3dd0: 0x240201d7  addiu       $v0, $zero, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dcc) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DD4u;
    // 0x2c3dd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3DD4u;
    {
        const bool branch_taken_0x2c3dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DD4u;
        // 0x2c3dd8: 0x240201fe  addiu       $v0, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dd4) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DDCu;
    // 0x2c3ddc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3DDCu;
    {
        const bool branch_taken_0x2c3ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DDCu;
        // 0x2c3de0: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ddc) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DE4u;
    // 0x2c3de4: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C3DE4u;
    {
        const bool branch_taken_0x2c3de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3de4) {
            ctx->pc = 0x2C3ECCu;
            goto label_2c3ecc;
        }
    }
    ctx->pc = 0x2C3DECu;
label_2c3dec:
    // 0x2c3dec: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3DECu;
    SET_GPR_U32(ctx, 31, 0x2C3DF4u);
    ctx->pc = 0x2C3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DECu;
    // 0x2c3df0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3DECu, 0x2C3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DF4u;
label_2c3df4:
    // 0x2c3df4: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C3DF4u;
    {
        const bool branch_taken_0x2c3df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3df4) {
            ctx->pc = 0x2C3DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3DF4u;
            // 0x2c3df8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3ECCu;
            goto label_2c3ecc;
        }
    }
    ctx->pc = 0x2C3DFCu;
    // 0x2c3dfc: 0xc094ff4  jal         func_253FD0
    ctx->pc = 0x2C3DFCu;
    SET_GPR_U32(ctx, 31, 0x2C3E04u);
    ctx->pc = 0x2C3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DFCu;
    // 0x2c3e00: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FD0u, 0x2C3DFCu, 0x2C3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E04u;
label_2c3e04:
    // 0x2c3e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3E04u;
    {
        const bool branch_taken_0x2c3e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E04u;
        // 0x2c3e08: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e04) {
            ctx->pc = 0x2C3E20u;
            goto label_2c3e20;
        }
    }
    ctx->pc = 0x2C3E0Cu;
    // 0x2c3e0c: 0x8e2211b0  lw          $v0, 0x11B0($s1)
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4528)));
    // 0x2c3e10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e14: 0x14520023  bne         $v0, $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C3E14u;
    {
        const bool branch_taken_0x2c3e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c3e14) {
            ctx->pc = 0x2C3EA4u;
            goto label_2c3ea4;
        }
    }
    ctx->pc = 0x2C3E1Cu;
    // 0x2c3e1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2c3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2c3e20:
    // 0x2c3e20: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2c3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2c3e24: 0x1860005f  blez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C3E24u;
    {
        const bool branch_taken_0x2c3e24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E24u;
        // 0x2c3e28: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e24) {
            ctx->pc = 0x2C3FA4u;
            goto label_2c3fa4;
        }
    }
    ctx->pc = 0x2C3E2Cu;
    // 0x2c3e2c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3E2Cu;
    {
        const bool branch_taken_0x2c3e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e2c) {
            ctx->pc = 0x2C3E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E2Cu;
            // 0x2c3e30: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E5Cu;
            goto label_2c3e5c;
        }
    }
    ctx->pc = 0x2C3E34u;
    // 0x2c3e34: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2c3e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c3e38: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C3E38u;
    {
        const bool branch_taken_0x2c3e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e38) {
            ctx->pc = 0x2C3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E38u;
            // 0x2c3e3c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3FA8u;
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3E40u;
    // 0x2c3e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c3e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3e48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c3e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3e4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c3e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3e54: 0x80b3126  j           func_2CC498
    ctx->pc = 0x2C3E54u;
    ctx->pc = 0x2C3E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E54u;
    // 0x2c3e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC498u;
    enemyDeleteNPC_0x2cc498(rdram, ctx, runtime); return;
    ctx->pc = 0x2C3E5Cu;
label_2c3e5c:
    // 0x2c3e5c: 0x3c02f0ff  lui         $v0, 0xF0FF
    ctx->pc = 0x2c3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61695 << 16));
    // 0x2c3e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3e64: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c3e68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3e6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c3e70: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2c3e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2c3e74: 0xc62c0b4c  lwc1        $f12, 0xB4C($s1)
    ctx->pc = 0x2c3e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c3e78: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2c3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2c3e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c3e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c3e84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3e88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3e8c: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c3e90: 0xae260a9c  sw          $a2, 0xA9C($s1)
    ctx->pc = 0x2c3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 6));
    // 0x2c3e94: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C3E94u;
    SET_GPR_U32(ctx, 31, 0x2C3E9Cu);
    ctx->pc = 0x2C3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E94u;
    // 0x2c3e98: 0xae220aa0  sw          $v0, 0xAA0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C3E94u, 0x2C3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E9Cu;
label_2c3e9c:
    // 0x2c3e9c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C3E9Cu;
    {
        const bool branch_taken_0x2c3e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E9Cu;
        // 0x2c3ea0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e9c) {
            ctx->pc = 0x2C3FA8u;
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3EA4u;
label_2c3ea4:
    // 0x2c3ea4: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2C3EA4u;
    {
        const bool branch_taken_0x2c3ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ea4) {
            ctx->pc = 0x2C3EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3EA4u;
            // 0x2c3ea8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3FA8u;
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3EACu;
    // 0x2c3eac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3eb0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c3eb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c3eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3eb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c3eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ebc: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x2C3EBCu;
    SET_GPR_U32(ctx, 31, 0x2C3EC4u);
    ctx->pc = 0x2C3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EBCu;
    // 0x2c3ec0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x2C3EBCu, 0x2C3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EC4u;
label_2c3ec4:
    // 0x2c3ec4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2C3EC4u;
    {
        const bool branch_taken_0x2c3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EC4u;
        // 0x2c3ec8: 0xae3211b0  sw          $s2, 0x11B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4528), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ec4) {
            ctx->pc = 0x2C3FA4u;
            goto label_2c3fa4;
        }
    }
    ctx->pc = 0x2C3ECCu;
label_2c3ecc:
    // 0x2c3ecc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3ECCu;
    {
        const bool branch_taken_0x2c3ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ECCu;
        // 0x2c3ed0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ecc) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3ED4u;
    // 0x2c3ed4: 0x14a20035  bne         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C3ED4u;
    {
        const bool branch_taken_0x2c3ed4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ED4u;
        // 0x2c3ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ed4) {
            ctx->pc = 0x2C3FACu;
            goto label_2c3fac;
        }
    }
    ctx->pc = 0x2C3EDCu;
label_2c3edc:
    // 0x2c3edc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c3ee0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c3ee4: 0x2442fdca  addiu       $v0, $v0, -0x236
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966730));
    // 0x2c3ee8: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2c3ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2c3eec: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C3EECu;
    {
        const bool branch_taken_0x2c3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EECu;
        // 0x2c3ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3eec) {
            ctx->pc = 0x2C3FACu;
            goto label_2c3fac;
        }
    }
    ctx->pc = 0x2C3EF4u;
    // 0x2c3ef4: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3EF4u;
    SET_GPR_U32(ctx, 31, 0x2C3EFCu);
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3EF4u, 0x2C3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EFCu;
label_2c3efc:
    // 0x2c3efc: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C3EFCu;
    {
        const bool branch_taken_0x2c3efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3efc) {
            ctx->pc = 0x2C3F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3EFCu;
            // 0x2c3f00: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3FA8u;
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3F04u;
    // 0x2c3f04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c3f08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3f0c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2c3f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x2c3f10: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2c3f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c3f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3f18: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2c3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2c3f1c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2c3f20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c3f24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3F24u;
    {
        const bool branch_taken_0x2c3f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F24u;
        // 0x2c3f28: 0x8cc20060  lw          $v0, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f24) {
            ctx->pc = 0x2C3F34u;
            goto label_2c3f34;
        }
    }
    ctx->pc = 0x2C3F2Cu;
    // 0x2c3f2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3F2Cu;
    {
        const bool branch_taken_0x2c3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F2Cu;
        // 0x2c3f30: 0x2445fdca  addiu       $a1, $v0, -0x236 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f2c) {
            ctx->pc = 0x2C3F38u;
            goto label_2c3f38;
        }
    }
    ctx->pc = 0x2C3F34u;
label_2c3f34:
    // 0x2c3f34: 0x2445fdb5  addiu       $a1, $v0, -0x24B
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966709));
label_2c3f38:
    // 0x2c3f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3f3c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2c3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c3f40: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2c3f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c3f44: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c3f48: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x2c3f48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x2c3f4c: 0x24630a88  addiu       $v1, $v1, 0xA88
    ctx->pc = 0x2c3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2696));
    // 0x2c3f50: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x2c3f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c3f54: 0xc4c10064  lwc1        $f1, 0x64($a2)
    ctx->pc = 0x2c3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3f58: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x2c3f58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2c3f5c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2c3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c3f60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c3f64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c3f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3f6c: 0x0  nop
    ctx->pc = 0x2c3f6cu;
    // NOP
    // 0x2c3f70: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C3F70u;
    {
        const bool branch_taken_0x2c3f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F70u;
        // 0x2c3f74: 0x24120063  addiu       $s2, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f70) {
            ctx->pc = 0x2C3FA4u;
            goto label_2c3fa4;
        }
    }
    ctx->pc = 0x2C3F78u;
    // 0x2c3f78: 0x8e220aa8  lw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c3f7c: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3F7Cu;
    {
        const bool branch_taken_0x2c3f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F7Cu;
        // 0x2c3f80: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f7c) {
            ctx->pc = 0x2C3FA4u;
            goto label_2c3fa4;
        }
    }
    ctx->pc = 0x2C3F84u;
    // 0x2c3f84: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3F84u;
    {
        const bool branch_taken_0x2c3f84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F84u;
        // 0x2c3f88: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f84) {
            ctx->pc = 0x2C3FA0u;
            goto label_2c3fa0;
        }
    }
    ctx->pc = 0x2C3F8Cu;
    // 0x2c3f8c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2c3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c3f90: 0x24420ad8  addiu       $v0, $v0, 0xAD8
    ctx->pc = 0x2c3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2c3f94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3f98: 0xc081546  jal         func_205518
    ctx->pc = 0x2C3F98u;
    SET_GPR_U32(ctx, 31, 0x2C3FA0u);
    ctx->pc = 0x2C3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F98u;
    // 0x2c3f9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2C3F98u, 0x2C3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FA0u;
label_2c3fa0:
    // 0x2c3fa0: 0xae320aa8  sw          $s2, 0xAA8($s1)
    ctx->pc = 0x2c3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 18));
label_2c3fa4:
    // 0x2c3fa4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3fa8:
    // 0x2c3fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3fac:
    // 0x2c3fac: 0x14a200b1  bne         $a1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2C3FACu;
    {
        const bool branch_taken_0x2c3fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FACu;
        // 0x2c3fb0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fac) {
            ctx->pc = 0x2C4274u;
            goto label_2c4274;
        }
    }
    ctx->pc = 0x2C3FB4u;
    // 0x2c3fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fb8: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3FB8u;
    SET_GPR_U32(ctx, 31, 0x2C3FC0u);
    ctx->pc = 0x2C3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FB8u;
    // 0x2c3fbc: 0x2405020c  addiu       $a1, $zero, 0x20C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3FB8u, 0x2C3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FC0u;
label_2c3fc0:
    // 0x2c3fc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3FC0u;
    {
        const bool branch_taken_0x2c3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FC0u;
        // 0x2c3fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fc0) {
            ctx->pc = 0x2C3FD8u;
            goto label_2c3fd8;
        }
    }
    ctx->pc = 0x2C3FC8u;
    // 0x2c3fc8: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3FC8u;
    SET_GPR_U32(ctx, 31, 0x2C3FD0u);
    ctx->pc = 0x2C3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FC8u;
    // 0x2c3fcc: 0x2405020d  addiu       $a1, $zero, 0x20D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3FC8u, 0x2C3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FD0u;
label_2c3fd0:
    // 0x2c3fd0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3FD0u;
    {
        const bool branch_taken_0x2c3fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FD0u;
        // 0x2c3fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fd0) {
            ctx->pc = 0x2C4024u;
            goto label_2c4024;
        }
    }
    ctx->pc = 0x2C3FD8u;
label_2c3fd8:
    // 0x2c3fd8: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C3FD8u;
    SET_GPR_U32(ctx, 31, 0x2C3FE0u);
    ctx->pc = 0x2C3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FD8u;
    // 0x2c3fdc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C3FD8u, 0x2C3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FE0u;
label_2c3fe0:
    // 0x2c3fe0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3FE0u;
    {
        const bool branch_taken_0x2c3fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3fe0) {
            ctx->pc = 0x2C3FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3FE0u;
            // 0x2c3fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4024u;
            goto label_2c4024;
        }
    }
    ctx->pc = 0x2C3FE8u;
    // 0x2c3fe8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c3fec: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2c3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2c3ff0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2c3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2c3ff4: 0x8e230a98  lw          $v1, 0xA98($s1)
    ctx->pc = 0x2c3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2712)));
    // 0x2c3ff8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2c3ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2c3ffc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3FFCu;
    {
        const bool branch_taken_0x2c3ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FFCu;
        // 0x2c4000: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ffc) {
            ctx->pc = 0x2C400Cu;
            goto label_2c400c;
        }
    }
    ctx->pc = 0x2C4004u;
    // 0x2c4004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4004u;
    {
        const bool branch_taken_0x2c4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4004u;
        // 0x2c4008: 0x8e230a9c  lw          $v1, 0xA9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4004) {
            ctx->pc = 0x2C4014u;
            goto label_2c4014;
        }
    }
    ctx->pc = 0x2C400Cu;
label_2c400c:
    // 0x2c400c: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c4010: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c4014:
    // 0x2c4014: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c4014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c4018: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c4018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
    // 0x2c401c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2C401Cu;
    {
        const bool branch_taken_0x2c401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C401Cu;
        // 0x2c4020: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c401c) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C4024u;
label_2c4024:
    // 0x2c4024: 0xc085608  jal         func_215820
    ctx->pc = 0x2C4024u;
    SET_GPR_U32(ctx, 31, 0x2C402Cu);
    ctx->pc = 0x2C4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4024u;
    // 0x2c4028: 0x2405020c  addiu       $a1, $zero, 0x20C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C4024u, 0x2C402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C402Cu;
label_2c402c:
    // 0x2c402c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C402Cu;
    {
        const bool branch_taken_0x2c402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C402Cu;
        // 0x2c4030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c402c) {
            ctx->pc = 0x2C4044u;
            goto label_2c4044;
        }
    }
    ctx->pc = 0x2C4034u;
    // 0x2c4034: 0xc085608  jal         func_215820
    ctx->pc = 0x2C4034u;
    SET_GPR_U32(ctx, 31, 0x2C403Cu);
    ctx->pc = 0x2C4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4034u;
    // 0x2c4038: 0x2405020d  addiu       $a1, $zero, 0x20D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C4034u, 0x2C403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C403Cu;
label_2c403c:
    // 0x2c403c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C403Cu;
    {
        const bool branch_taken_0x2c403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C403Cu;
        // 0x2c4040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c403c) {
            ctx->pc = 0x2C4064u;
            goto label_2c4064;
        }
    }
    ctx->pc = 0x2C4044u;
label_2c4044:
    // 0x2c4044: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C4044u;
    SET_GPR_U32(ctx, 31, 0x2C404Cu);
    ctx->pc = 0x2C4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4044u;
    // 0x2c4048: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C4044u, 0x2C404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C404Cu;
label_2c404c:
    // 0x2c404c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C404Cu;
    {
        const bool branch_taken_0x2c404c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c404c) {
            ctx->pc = 0x2C4050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C404Cu;
            // 0x2c4050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4064u;
            goto label_2c4064;
        }
    }
    ctx->pc = 0x2C4054u;
    // 0x2c4054: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c4058: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2c4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2c405c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C405Cu;
    {
        const bool branch_taken_0x2c405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C405Cu;
        // 0x2c4060: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c405c) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C4064u;
label_2c4064:
    // 0x2c4064: 0xc085608  jal         func_215820
    ctx->pc = 0x2C4064u;
    SET_GPR_U32(ctx, 31, 0x2C406Cu);
    ctx->pc = 0x2C4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4064u;
    // 0x2c4068: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C4064u, 0x2C406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C406Cu;
label_2c406c:
    // 0x2c406c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C406Cu;
    {
        const bool branch_taken_0x2c406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C406Cu;
        // 0x2c4070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c406c) {
            ctx->pc = 0x2C4084u;
            goto label_2c4084;
        }
    }
    ctx->pc = 0x2C4074u;
    // 0x2c4074: 0xc085608  jal         func_215820
    ctx->pc = 0x2C4074u;
    SET_GPR_U32(ctx, 31, 0x2C407Cu);
    ctx->pc = 0x2C4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4074u;
    // 0x2c4078: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C4074u, 0x2C407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C407Cu;
label_2c407c:
    // 0x2c407c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C407Cu;
    {
        const bool branch_taken_0x2c407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C407Cu;
        // 0x2c4080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c407c) {
            ctx->pc = 0x2C4190u;
            goto label_2c4190;
        }
    }
    ctx->pc = 0x2C4084u;
label_2c4084:
    // 0x2c4084: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C4084u;
    SET_GPR_U32(ctx, 31, 0x2C408Cu);
    ctx->pc = 0x2C4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4084u;
    // 0x2c4088: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C4084u, 0x2C408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C408Cu;
label_2c408c:
    // 0x2c408c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C408Cu;
    {
        const bool branch_taken_0x2c408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C408Cu;
        // 0x2c4090: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c408c) {
            ctx->pc = 0x2C418Cu;
            goto label_2c418c;
        }
    }
    ctx->pc = 0x2C4094u;
    // 0x2c4094: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c4094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c4098: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c4098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c409c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C409Cu;
    {
        const bool branch_taken_0x2c409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C409Cu;
        // 0x2c40a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c409c) {
            ctx->pc = 0x2C4190u;
            goto label_2c4190;
        }
    }
    ctx->pc = 0x2C40A4u;
    // 0x2c40a4: 0xc094ff4  jal         func_253FD0
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x2C40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40A4u;
    // 0x2c40a8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FD0u, 0x2C40A4u, 0x2C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c40b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c40b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c40b4: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x2c40b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x2c40b8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2c40b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c40bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C40BCu;
    {
        const bool branch_taken_0x2c40bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40BCu;
        // 0x2c40c0: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40bc) {
            ctx->pc = 0x2C40D4u;
            goto label_2c40d4;
        }
    }
    ctx->pc = 0x2C40C4u;
    // 0x2c40c4: 0x8e2211b0  lw          $v0, 0x11B0($s1)
    ctx->pc = 0x2c40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4528)));
    // 0x2c40c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c40c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c40cc: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C40CCu;
    {
        const bool branch_taken_0x2c40cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c40cc) {
            ctx->pc = 0x2C4164u;
            goto label_2c4164;
        }
    }
    ctx->pc = 0x2C40D4u;
label_2c40d4:
    // 0x2c40d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2c40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2c40d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c40dc: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x2c40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2c40e0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c40e4: 0x14640019  bne         $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C40E4u;
    {
        const bool branch_taken_0x2c40e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40E4u;
        // 0x2c40e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40e4) {
            ctx->pc = 0x2C414Cu;
            goto label_2c414c;
        }
    }
    ctx->pc = 0x2C40ECu;
    // 0x2c40ec: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2c40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c40f0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c40f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c40f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C40F4u;
    {
        const bool branch_taken_0x2c40f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40F4u;
        // 0x2c40f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40f4) {
            ctx->pc = 0x2C4150u;
            goto label_2c4150;
        }
    }
    ctx->pc = 0x2C40FCu;
    // 0x2c40fc: 0x3c02f0ff  lui         $v0, 0xF0FF
    ctx->pc = 0x2c40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61695 << 16));
    // 0x2c4100: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c4100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c4104: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c4104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4108: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c4108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c410c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2c410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2c4110: 0xc62c0b4c  lwc1        $f12, 0xB4C($s1)
    ctx->pc = 0x2c4110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4114: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2c4114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2c4118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c411c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2c411cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2c4120: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4124: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c4124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c4128: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c4128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c412c: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c4130: 0xae230a9c  sw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c4130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 3));
    // 0x2c4134: 0xae220aa0  sw          $v0, 0xAA0($s1)
    ctx->pc = 0x2c4134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 2));
    // 0x2c4138: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c4138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c413c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c413cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4144: 0x808535a  j           func_214D68
    ctx->pc = 0x2C4144u;
    ctx->pc = 0x2C4148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4144u;
    // 0x2c4148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    setAnim_0x214d68(rdram, ctx, runtime); return;
    ctx->pc = 0x2C414Cu;
label_2c414c:
    // 0x2c414c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4150:
    // 0x2c4150: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c4150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4154: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c4154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c415c: 0x80b3126  j           func_2CC498
    ctx->pc = 0x2C415Cu;
    ctx->pc = 0x2C4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C415Cu;
    // 0x2c4160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC498u;
    enemyDeleteNPC_0x2cc498(rdram, ctx, runtime); return;
    ctx->pc = 0x2C4164u;
label_2c4164:
    // 0x2c4164: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C4164u;
    {
        const bool branch_taken_0x2c4164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4164u;
        // 0x2c4168: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4164) {
            ctx->pc = 0x2C4274u;
            goto label_2c4274;
        }
    }
    ctx->pc = 0x2C416Cu;
    // 0x2c416c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2c416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c4170: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4174: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c4174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4178: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c4178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c417c: 0xc0ab6dc  jal         func_2ADB70
    ctx->pc = 0x2C417Cu;
    SET_GPR_U32(ctx, 31, 0x2C4184u);
    ctx->pc = 0x2C4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C417Cu;
    // 0x2c4180: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB70u, 0x2C417Cu, 0x2C4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4184u;
label_2c4184:
    // 0x2c4184: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C4184u;
    {
        const bool branch_taken_0x2c4184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4184u;
        // 0x2c4188: 0xae3211b0  sw          $s2, 0x11B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4528), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4184) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C418Cu;
label_2c418c:
    // 0x2c418c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4190:
    // 0x2c4190: 0xc085608  jal         func_215820
    ctx->pc = 0x2C4190u;
    SET_GPR_U32(ctx, 31, 0x2C4198u);
    ctx->pc = 0x2C4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4190u;
    // 0x2c4194: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C4190u, 0x2C4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4198u;
label_2c4198:
    // 0x2c4198: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4198u;
    {
        const bool branch_taken_0x2c4198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4198u;
        // 0x2c419c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4198) {
            ctx->pc = 0x2C41B0u;
            goto label_2c41b0;
        }
    }
    ctx->pc = 0x2C41A0u;
    // 0x2c41a0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C41A0u;
    SET_GPR_U32(ctx, 31, 0x2C41A8u);
    ctx->pc = 0x2C41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41A0u;
    // 0x2c41a4: 0x24050243  addiu       $a1, $zero, 0x243 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C41A0u, 0x2C41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41A8u;
label_2c41a8:
    // 0x2c41a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C41A8u;
    {
        const bool branch_taken_0x2c41a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41A8u;
        // 0x2c41ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41a8) {
            ctx->pc = 0x2C4274u;
            goto label_2c4274;
        }
    }
    ctx->pc = 0x2C41B0u;
label_2c41b0:
    // 0x2c41b0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x2C41B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41B0u;
    // 0x2c41b4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C41B0u, 0x2C41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C41B8u;
    {
        const bool branch_taken_0x2c41b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41B8u;
        // 0x2c41bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41b8) {
            ctx->pc = 0x2C4274u;
            goto label_2c4274;
        }
    }
    ctx->pc = 0x2C41C0u;
    // 0x2c41c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c41c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2c41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2c41c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c41cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C41CCu;
    {
        const bool branch_taken_0x2c41cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41cc) {
            ctx->pc = 0x2C41D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41CCu;
            // 0x2c41d0: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C41D4u;
    // 0x2c41d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c41d8: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2c41d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x2c41dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c41e0:
    // 0x2c41e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2c41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2c41e4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2c41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c41e8: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2c41ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c41f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41F0u;
    {
        const bool branch_taken_0x2c41f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41F0u;
        // 0x2c41f4: 0x8cc20060  lw          $v0, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41f0) {
            ctx->pc = 0x2C4200u;
            goto label_2c4200;
        }
    }
    ctx->pc = 0x2C41F8u;
    // 0x2c41f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C41F8u;
    {
        const bool branch_taken_0x2c41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41F8u;
        // 0x2c41fc: 0x2445fdca  addiu       $a1, $v0, -0x236 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41f8) {
            ctx->pc = 0x2C4204u;
            goto label_2c4204;
        }
    }
    ctx->pc = 0x2C4200u;
label_2c4200:
    // 0x2c4200: 0x2445fdb5  addiu       $a1, $v0, -0x24B
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966709));
label_2c4204:
    // 0x2c4204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4208: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c420c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2c420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c4210: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c4214: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x2c4214u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x2c4218: 0x24630a88  addiu       $v1, $v1, 0xA88
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2696));
    // 0x2c421c: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x2c421cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c4220: 0xc4c10064  lwc1        $f1, 0x64($a2)
    ctx->pc = 0x2c4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4224: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x2c4224u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2c4228: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2c4228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c422c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c4230: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c4230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4238: 0x0  nop
    ctx->pc = 0x2c4238u;
    // NOP
    // 0x2c423c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C423Cu;
    {
        const bool branch_taken_0x2c423c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C423Cu;
        // 0x2c4240: 0x24120063  addiu       $s2, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c423c) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C4244u;
    // 0x2c4244: 0x8e220aa8  lw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c4248: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4248u;
    {
        const bool branch_taken_0x2c4248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4248u;
        // 0x2c424c: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4248) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C4250u;
    // 0x2c4250: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4250u;
    {
        const bool branch_taken_0x2c4250 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4250u;
        // 0x2c4254: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4250) {
            ctx->pc = 0x2C426Cu;
            goto label_2c426c;
        }
    }
    ctx->pc = 0x2C4258u;
    // 0x2c4258: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2c4258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c425c: 0x24420ad8  addiu       $v0, $v0, 0xAD8
    ctx->pc = 0x2c425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2c4260: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4264: 0xc081546  jal         func_205518
    ctx->pc = 0x2C4264u;
    SET_GPR_U32(ctx, 31, 0x2C426Cu);
    ctx->pc = 0x2C4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4264u;
    // 0x2c4268: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2C4264u, 0x2C426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C426Cu;
label_2c426c:
    // 0x2c426c: 0xae320aa8  sw          $s2, 0xAA8($s1)
    ctx->pc = 0x2c426cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 18));
label_2c4270:
    // 0x2c4270: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c4270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4274:
    // 0x2c4274: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c4274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4278: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c4278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c427c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c427cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4280: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4280u;
        // 0x2c4284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4288u;
}
