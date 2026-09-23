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

// Function: SetWindow
// Address: 0x230ca8 - 0x231024
void SetWindow_0x230ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWindow_0x230ca8");
#endif

    switch (ctx->pc) {
        case 0x230d68u: goto label_230d68;
        case 0x230d78u: goto label_230d78;
        case 0x230dc0u: goto label_230dc0;
        case 0x230dc8u: goto label_230dc8;
        case 0x230de8u: goto label_230de8;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e04u: goto label_230e04;
        case 0x230f54u: goto label_230f54;
        case 0x230fa0u: goto label_230fa0;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fecu: goto label_230fec;
        case 0x231008u: goto label_231008;
        default: break;
    }

    ctx->pc = 0x230ca8u;

    // 0x230ca8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x230cac: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x230cb0: 0x8c4311fc  lw          $v1, 0x11FC($v0)
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x230cb4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x230cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x230cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230cbc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x230cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x230cc0: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x230cc4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x230cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x230cc8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x230cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x230ccc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x230cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x230cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x230cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x230cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x230cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x230cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce0: 0x12420027  beq         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x230CE0u;
    {
        const bool branch_taken_0x230ce0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x230CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CE0u;
        // 0x230ce4: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ce0) {
            ctx->pc = 0x230D80u;
            goto label_230d80;
        }
    }
    ctx->pc = 0x230CE8u;
    // 0x230ce8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x230ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x230cec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230CECu;
    {
        const bool branch_taken_0x230cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CECu;
        // 0x230cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cec) {
            ctx->pc = 0x230D04u;
            goto label_230d04;
        }
    }
    ctx->pc = 0x230CF4u;
    // 0x230cf4: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x230CF4u;
    {
        const bool branch_taken_0x230cf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x230CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CF4u;
        // 0x230cf8: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cf4) {
            ctx->pc = 0x230D3Cu;
            goto label_230d3c;
        }
    }
    ctx->pc = 0x230CFCu;
    // 0x230cfc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x230CFCu;
    {
        const bool branch_taken_0x230cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CFCu;
        // 0x230d00: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cfc) {
            ctx->pc = 0x230FB8u;
            goto label_230fb8;
        }
    }
    ctx->pc = 0x230D04u;
label_230d04:
    // 0x230d04: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x230d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x230d08: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x230D08u;
    {
        const bool branch_taken_0x230d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D08u;
        // 0x230d0c: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d08) {
            ctx->pc = 0x230FB0u;
            goto label_230fb0;
        }
    }
    ctx->pc = 0x230D10u;
    // 0x230d10: 0x32070001  andi        $a3, $s0, 0x1
    ctx->pc = 0x230d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x230d14: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x230d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x230d18: 0x24030142  addiu       $v1, $zero, 0x142
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x230d1c: 0x7180a  movz        $v1, $zero, $a3
    ctx->pc = 0x230d1cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x230d20: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x230d24: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x230d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x230d28: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x230D28u;
    {
        const bool branch_taken_0x230d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D28u;
        // 0x230d2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d28) {
            ctx->pc = 0x230F5Cu;
            goto label_230f5c;
        }
    }
    ctx->pc = 0x230D30u;
    // 0x230d30: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x230d34: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0x454021  addu        $t0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230D3Cu;
label_230d3c:
    // 0x230d3c: 0x240300df  addiu       $v1, $zero, 0xDF
    ctx->pc = 0x230d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x230d40: 0x2402027f  addiu       $v0, $zero, 0x27F
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x230d44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x230d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x230d48: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x230d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x230d50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d54: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x230d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x230d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d5c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x230d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x230d60: 0xc083108  jal         func_20C420
    ctx->pc = 0x230D60u;
    SET_GPR_U32(ctx, 31, 0x230D68u);
    ctx->pc = 0x230D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D60u;
    // 0x230d64: 0x2406027f  addiu       $a2, $zero, 0x27F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x230D60u, 0x230D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D68u;
label_230d68:
    // 0x230d68: 0x12600092  beqz        $s3, . + 4 + (0x92 << 2)
    ctx->pc = 0x230D68u;
    {
        const bool branch_taken_0x230d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D68u;
        // 0x230d6c: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d68) {
            ctx->pc = 0x230FB4u;
            goto label_230fb4;
        }
    }
    ctx->pc = 0x230D70u;
    // 0x230d70: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x230D70u;
    SET_GPR_U32(ctx, 31, 0x230D78u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x230D70u, 0x230D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D78u;
label_230d78:
    // 0x230d78: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x230D78u;
    {
        const bool branch_taken_0x230d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D78u;
        // 0x230d7c: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d78) {
            ctx->pc = 0x230FB4u;
            goto label_230fb4;
        }
    }
    ctx->pc = 0x230D80u;
label_230d80:
    // 0x230d80: 0x12600066  beqz        $s3, . + 4 + (0x66 << 2)
    ctx->pc = 0x230D80u;
    {
        const bool branch_taken_0x230d80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D80u;
        // 0x230d84: 0x2402ff10  addiu       $v0, $zero, -0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d80) {
            ctx->pc = 0x230F1Cu;
            goto label_230f1c;
        }
    }
    ctx->pc = 0x230D88u;
    // 0x230d88: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x230d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x230d8c: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x230d8cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x230d90: 0x2404ffe4  addiu       $a0, $zero, -0x1C
    ctx->pc = 0x230d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x230d94: 0x24670320  addiu       $a3, $v1, 0x320
    ctx->pc = 0x230d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x230d98: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x230d9c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x230d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x230da0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x230da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230da4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x230da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x230da8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x230da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dac: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x230dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x230db0: 0x2405ffe4  addiu       $a1, $zero, -0x1C
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x230db4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x230db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x230db8: 0xc083108  jal         func_20C420
    ctx->pc = 0x230DB8u;
    SET_GPR_U32(ctx, 31, 0x230DC0u);
    ctx->pc = 0x230DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DB8u;
    // 0x230dbc: 0x240700fc  addiu       $a3, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x230DB8u, 0x230DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC0u;
label_230dc0:
    // 0x230dc0: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x230DC0u, 0x230DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x230dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x230dcc: 0xc78c819c  lwc1        $f12, -0x7E64($gp)
    ctx->pc = 0x230dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x230dd0: 0xc78d81a0  lwc1        $f13, -0x7E60($gp)
    ctx->pc = 0x230dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x230dd4: 0xc78e81a4  lwc1        $f14, -0x7E5C($gp)
    ctx->pc = 0x230dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x230dd8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x230ddc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x230ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x230de0: 0xc0ad496  jal         func_2B5258
    ctx->pc = 0x230DE0u;
    SET_GPR_U32(ctx, 31, 0x230DE8u);
    ctx->pc = 0x230DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE0u;
    // 0x230de4: 0x8c4406e0  lw          $a0, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5258u, 0x230DE0u, 0x230DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x230de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x230dec: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x230decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x230df0: 0x8c4406e8  lw          $a0, 0x6E8($v0)
    ctx->pc = 0x230df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    // 0x230df4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x230DF4u;
    SET_GPR_U32(ctx, 31, 0x230DFCu);
    ctx->pc = 0x230DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF4u;
    // 0x230df8: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x230DF4u, 0x230DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DFCu;
label_230dfc:
    // 0x230dfc: 0xc0807de  jal         func_201F78
    ctx->pc = 0x230DFCu;
    SET_GPR_U32(ctx, 31, 0x230E04u);
    ctx->pc = 0x230E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DFCu;
    // 0x230e00: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x230DFCu, 0x230E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E04u;
label_230e04:
    // 0x230e04: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x230e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x230e08: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x230e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x230e0c: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x230e10: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230e14: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x230e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x230e18: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x230e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x230e1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e20: 0x3c081400  lui         $t0, 0x1400
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5120 << 16));
    // 0x230e24: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x230e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x230e28: 0x3508079d  ori         $t0, $t0, 0x79D
    ctx->pc = 0x230e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1949);
    // 0x230e2c: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x230e30: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x230e30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x230e34: 0x8ca406e0  lw          $a0, 0x6E0($a1)
    ctx->pc = 0x230e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1760)));
    // 0x230e38: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x230e3c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x230e40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x230e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230e44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e48: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x230e48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x230e4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x230e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x230e50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e54: 0xaf8693a0  sw          $a2, -0x6C60($gp)
    ctx->pc = 0x230e54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
    // 0x230e58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x230e5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x230e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x230e68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x230e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x230e74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e78: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e7c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x230e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x230e80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e88: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x230e8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230e94: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x230e98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230e9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230ea0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x230ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x230ea4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230ea8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230eac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x230eb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230eb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230eb8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x230ebc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230ec0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230ec4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x230ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x230ec8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230ecc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230ed0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x230ed4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230ed8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230edc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x230ee0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230ee4: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x230ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x230ee8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230eec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x230eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x230ef0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230ef4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x230ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x230ef8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230efc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230f00: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x230f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x230f04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x230f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x230f08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230f0c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x230f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x230f10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x230f14: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x230f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x230f18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x230f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_230f1c:
    // 0x230f1c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x230f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x230f20: 0x24020142  addiu       $v0, $zero, 0x142
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x230f24: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x230f24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x230f28: 0x240400df  addiu       $a0, $zero, 0xDF
    ctx->pc = 0x230f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x230f2c: 0x24430140  addiu       $v1, $v0, 0x140
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x230f30: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x230f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x230f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x230f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f38: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x230f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x230f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x230f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f44: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x230f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x230f48: 0x240700df  addiu       $a3, $zero, 0xDF
    ctx->pc = 0x230f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x230f4c: 0xc083108  jal         func_20C420
    ctx->pc = 0x230F4Cu;
    SET_GPR_U32(ctx, 31, 0x230F54u);
    ctx->pc = 0x230F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F4Cu;
    // 0x230f50: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x230F4Cu, 0x230F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F54u;
label_230f54:
    // 0x230f54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x230F54u;
    {
        const bool branch_taken_0x230f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F54u;
        // 0x230f58: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f54) {
            ctx->pc = 0x230FB4u;
            goto label_230fb4;
        }
    }
    ctx->pc = 0x230F5Cu;
label_230f5c:
    // 0x230f5c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230f60:
    // 0x230f60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x230f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230f64: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x230f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x230f68: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x230f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x230f6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x230f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x230f70: 0x2485013f  addiu       $a1, $a0, 0x13F
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 319));
    // 0x230f74: 0x2483013d  addiu       $v1, $a0, 0x13D
    ctx->pc = 0x230f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 317));
    // 0x230f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x230f7c: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x230f7cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x230f80: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x230f84: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x230f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x230f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x230f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f90: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x230f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x230f94: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x230f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x230f98: 0xc083108  jal         func_20C420
    ctx->pc = 0x230F98u;
    SET_GPR_U32(ctx, 31, 0x230FA0u);
    ctx->pc = 0x230F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F98u;
    // 0x230f9c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x230F98u, 0x230FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FA0u;
label_230fa0:
    // 0x230fa0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x230FA0u;
    {
        const bool branch_taken_0x230fa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA0u;
        // 0x230fa4: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fa0) {
            ctx->pc = 0x230FB4u;
            goto label_230fb4;
        }
    }
    ctx->pc = 0x230FA8u;
    // 0x230fa8: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x230FA8u;
    SET_GPR_U32(ctx, 31, 0x230FB0u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x230FA8u, 0x230FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FB0u;
label_230fb0:
    // 0x230fb0: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_230fb4:
    // 0x230fb4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x230fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_230fb8:
    // 0x230fb8: 0x248399f0  addiu       $v1, $a0, -0x6610
    ctx->pc = 0x230fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x230fbc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x230fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x230fc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x230fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x230fc4: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x230fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x230fc8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x230FC8u;
    {
        const bool branch_taken_0x230fc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC8u;
        // 0x230fcc: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fc8) {
            ctx->pc = 0x231008u;
            goto label_231008;
        }
    }
    ctx->pc = 0x230FD0u;
    // 0x230fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230fd4: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230FD4u;
    {
        const bool branch_taken_0x230fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x230FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FD4u;
        // 0x230fd8: 0x8c8499f0  lw          $a0, -0x6610($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fd4) {
            ctx->pc = 0x230FF4u;
            goto label_230ff4;
        }
    }
    ctx->pc = 0x230FDCu;
    // 0x230fdc: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x230fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x230fe0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x230fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x230fe4: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x230FE4u;
    SET_GPR_U32(ctx, 31, 0x230FECu);
    ctx->pc = 0x230FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FE4u;
    // 0x230fe8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x230FE4u, 0x230FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FECu;
label_230fec:
    // 0x230fec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x230FECu;
    {
        const bool branch_taken_0x230fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FECu;
        // 0x230ff0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fec) {
            ctx->pc = 0x23100Cu;
            goto label_23100c;
        }
    }
    ctx->pc = 0x230FF4u;
label_230ff4:
    // 0x230ff4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x230ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ffc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x230ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231000: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x231000u;
    SET_GPR_U32(ctx, 31, 0x231008u);
    ctx->pc = 0x231004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231000u;
    // 0x231004: 0x240700df  addiu       $a3, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x231000u, 0x231008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231008u;
label_231008:
    // 0x231008: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x231008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23100c:
    // 0x23100c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23100cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231010: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x231010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231014: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x231014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x231018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23101c: 0x3e00008  jr          $ra
    ctx->pc = 0x23101Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23101Cu;
        // 0x231020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23101Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231024u;
}
