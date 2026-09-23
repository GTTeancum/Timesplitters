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

// Function: particleGfx
// Address: 0x2a1908 - 0x2a1e98
void particleGfx_0x2a1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGfx_0x2a1908");
#endif

    switch (ctx->pc) {
        case 0x2a1934u: goto label_2a1934;
        case 0x2a193cu: goto label_2a193c;
        case 0x2a19acu: goto label_2a19ac;
        case 0x2a19b0u: goto label_2a19b0;
        case 0x2a19d4u: goto label_2a19d4;
        case 0x2a1a0cu: goto label_2a1a0c;
        case 0x2a1a14u: goto label_2a1a14;
        case 0x2a1a28u: goto label_2a1a28;
        case 0x2a1a64u: goto label_2a1a64;
        case 0x2a1aa0u: goto label_2a1aa0;
        case 0x2a1adcu: goto label_2a1adc;
        case 0x2a1b18u: goto label_2a1b18;
        case 0x2a1b2cu: goto label_2a1b2c;
        case 0x2a1b48u: goto label_2a1b48;
        case 0x2a1b50u: goto label_2a1b50;
        case 0x2a1b74u: goto label_2a1b74;
        case 0x2a1bacu: goto label_2a1bac;
        case 0x2a1bb4u: goto label_2a1bb4;
        case 0x2a1bd0u: goto label_2a1bd0;
        case 0x2a1be0u: goto label_2a1be0;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1c04u: goto label_2a1c04;
        case 0x2a1c14u: goto label_2a1c14;
        case 0x2a1c1cu: goto label_2a1c1c;
        case 0x2a1c40u: goto label_2a1c40;
        case 0x2a1c50u: goto label_2a1c50;
        case 0x2a1c58u: goto label_2a1c58;
        case 0x2a1c7cu: goto label_2a1c7c;
        case 0x2a1ce0u: goto label_2a1ce0;
        case 0x2a1ce8u: goto label_2a1ce8;
        case 0x2a1cf4u: goto label_2a1cf4;
        case 0x2a1d04u: goto label_2a1d04;
        case 0x2a1d0cu: goto label_2a1d0c;
        case 0x2a1d20u: goto label_2a1d20;
        case 0x2a1d58u: goto label_2a1d58;
        case 0x2a1d60u: goto label_2a1d60;
        case 0x2a1d74u: goto label_2a1d74;
        case 0x2a1db0u: goto label_2a1db0;
        case 0x2a1decu: goto label_2a1dec;
        case 0x2a1e28u: goto label_2a1e28;
        case 0x2a1e64u: goto label_2a1e64;
        case 0x2a1e7cu: goto label_2a1e7c;
        default: break;
    }

    ctx->pc = 0x2a1908u;

    // 0x2a1908: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a190c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a1910: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2a1910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2a1914: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1918: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a191c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2a1920: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2a1920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2a1924: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a1928: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x2a1928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2a192c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A192Cu;
    SET_GPR_U32(ctx, 31, 0x2A1934u);
    ctx->pc = 0x2A1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A192Cu;
    // 0x2a1930: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A192Cu, 0x2A1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1934u;
label_2a1934:
    // 0x2a1934: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A1934u;
    SET_GPR_U32(ctx, 31, 0x2A193Cu);
    ctx->pc = 0x2A1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1934u;
    // 0x2a1938: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A1934u, 0x2A193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A193Cu;
label_2a193c:
    // 0x2a193c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a193cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1944: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a1948: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a194c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A194Cu;
    {
        const bool branch_taken_0x2a194c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A194Cu;
        // 0x2a1950: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a194c) {
            ctx->pc = 0x2A198Cu;
            goto label_2a198c;
        }
    }
    ctx->pc = 0x2A1954u;
    // 0x2a1954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1954u;
    {
        const bool branch_taken_0x2a1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1954u;
        // 0x2a1958: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1954) {
            ctx->pc = 0x2A196Cu;
            goto label_2a196c;
        }
    }
    ctx->pc = 0x2A195Cu;
    // 0x2a195c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A195Cu;
    {
        const bool branch_taken_0x2a195c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A195Cu;
        // 0x2a1960: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a195c) {
            ctx->pc = 0x2A1984u;
            goto label_2a1984;
        }
    }
    ctx->pc = 0x2A1964u;
    // 0x2a1964: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1964u;
    {
        const bool branch_taken_0x2a1964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1964) {
            ctx->pc = 0x2A19A4u;
            goto label_2a19a4;
        }
    }
    ctx->pc = 0x2A196Cu;
label_2a196c:
    // 0x2a196c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A196Cu;
    {
        const bool branch_taken_0x2a196c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A196Cu;
        // 0x2a1970: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a196c) {
            ctx->pc = 0x2A1994u;
            goto label_2a1994;
        }
    }
    ctx->pc = 0x2A1974u;
    // 0x2a1974: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1974u;
    {
        const bool branch_taken_0x2a1974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1974u;
        // 0x2a1978: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1974) {
            ctx->pc = 0x2A199Cu;
            goto label_2a199c;
        }
    }
    ctx->pc = 0x2A197Cu;
    // 0x2a197c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A197Cu;
    {
        const bool branch_taken_0x2a197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a197c) {
            ctx->pc = 0x2A19A4u;
            goto label_2a19a4;
        }
    }
    ctx->pc = 0x2A1984u;
label_2a1984:
    // 0x2a1984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1984u;
    {
        const bool branch_taken_0x2a1984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1984u;
        // 0x2a1988: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1984) {
            ctx->pc = 0x2A19A0u;
            goto label_2a19a0;
        }
    }
    ctx->pc = 0x2A198Cu;
label_2a198c:
    // 0x2a198c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A198Cu;
    {
        const bool branch_taken_0x2a198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A198Cu;
        // 0x2a1990: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a198c) {
            ctx->pc = 0x2A19A0u;
            goto label_2a19a0;
        }
    }
    ctx->pc = 0x2A1994u;
label_2a1994:
    // 0x2a1994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1994u;
    {
        const bool branch_taken_0x2a1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1994u;
        // 0x2a1998: 0x24120020  addiu       $s2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1994) {
            ctx->pc = 0x2A19A0u;
            goto label_2a19a0;
        }
    }
    ctx->pc = 0x2A199Cu;
label_2a199c:
    // 0x2a199c: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x2a199cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2a19a0:
    // 0x2a19a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a19a4:
    // 0x2a19a4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A19A4u;
    SET_GPR_U32(ctx, 31, 0x2A19ACu);
    ctx->pc = 0x2A19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19A4u;
    // 0x2a19a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A19A4u, 0x2A19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19ACu;
label_2a19ac:
    // 0x2a19ac: 0x240317a0  addiu       $v1, $zero, 0x17A0
    ctx->pc = 0x2a19acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
label_2a19b0:
    // 0x2a19b0: 0x8f84b2f0  lw          $a0, -0x4D10($gp)
    ctx->pc = 0x2a19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
    // 0x2a19b4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a19b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a19b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a19b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a19bc: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2a19bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a19c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a19c4: 0x10450059  beq         $v0, $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A19C4u;
    {
        const bool branch_taken_0x2a19c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19C4u;
        // 0x2a19c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19c4) {
            ctx->pc = 0x2A1B2Cu;
            goto label_2a1b2c;
        }
    }
    ctx->pc = 0x2A19CCu;
    // 0x2a19cc: 0xc0a8628  jal         func_2A18A0
    ctx->pc = 0x2A19CCu;
    SET_GPR_U32(ctx, 31, 0x2A19D4u);
    ctx->pc = 0x2A19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19CCu;
    // 0x2a19d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A18A0u, 0x2A19CCu, 0x2A19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19D4u;
label_2a19d4:
    // 0x2a19d4: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A19D4u;
    {
        const bool branch_taken_0x2a19d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a19d4) {
            ctx->pc = 0x2A19D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A19D4u;
            // 0x2a19d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A19DCu;
    // 0x2a19dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a19e0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2a19e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a19e4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A19E4u;
    {
        const bool branch_taken_0x2a19e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19E4u;
        // 0x2a19e8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19e4) {
            ctx->pc = 0x2A1B2Cu;
            goto label_2a1b2c;
        }
    }
    ctx->pc = 0x2A19ECu;
    // 0x2a19ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a19f0: 0x24429060  addiu       $v0, $v0, -0x6FA0
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938720));
    // 0x2a19f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a19f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a19fc: 0x800008  jr          $a0
    ctx->pc = 0x2A19FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1A04u: goto label_2a1a04;
            case 0x2A1A30u: goto label_2a1a30;
            case 0x2A1A6Cu: goto label_2a1a6c;
            case 0x2A1AA8u: goto label_2a1aa8;
            case 0x2A1AE4u: goto label_2a1ae4;
            case 0x2A1B20u: goto label_2a1b20;
            case 0x2A1B2Cu: goto label_2a1b2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A19FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A1A04u;
label_2a1a04:
    // 0x2a1a04: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1A04u;
    SET_GPR_U32(ctx, 31, 0x2A1A0Cu);
    ctx->pc = 0x2A1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A04u;
    // 0x2a1a08: 0x8f84b978  lw          $a0, -0x4688($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1A04u, 0x2A1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A0Cu;
label_2a1a0c:
    // 0x2a1a0c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A14u);
    ctx->pc = 0x2A1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A0Cu;
    // 0x2a1a10: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1A0Cu, 0x2A1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A14u;
label_2a1a14:
    // 0x2a1a14: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2a1a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a1c: 0x34a52f2f  ori         $a1, $a1, 0x2F2F
    ctx->pc = 0x2a1a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12079);
    // 0x2a1a20: 0xc0a7710  jal         func_29DC40
    ctx->pc = 0x2A1A20u;
    SET_GPR_U32(ctx, 31, 0x2A1A28u);
    ctx->pc = 0x2A1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A20u;
    // 0x2a1a24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DC40u, 0x2A1A20u, 0x2A1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A28u;
label_2a1a28:
    // 0x2a1a28: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2A1A28u;
    {
        const bool branch_taken_0x2a1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A28u;
        // 0x2a1a2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a28) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1A30u;
label_2a1a30:
    // 0x2a1a30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1a34: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1a38: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a40: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1a44: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1a48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1a4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1a50: 0x54450037  bnel        $v0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A1A50u;
    {
        const bool branch_taken_0x2a1a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1a50) {
            ctx->pc = 0x2A1A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A50u;
            // 0x2a1a54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1A58u;
    // 0x2a1a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a5c: 0xc0a7d7a  jal         func_29F5E8
    ctx->pc = 0x2A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A64u);
    ctx->pc = 0x2A1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A5Cu;
    // 0x2a1a60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F5E8u, 0x2A1A5Cu, 0x2A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A64u;
label_2a1a64:
    // 0x2a1a64: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2A1A64u;
    {
        const bool branch_taken_0x2a1a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A64u;
        // 0x2a1a68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a64) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1A6Cu;
label_2a1a6c:
    // 0x2a1a6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1a70: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1a74: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a7c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1a80: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1a84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1a88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1a8c: 0x54450028  bnel        $v0, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A1A8Cu;
    {
        const bool branch_taken_0x2a1a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1a8c) {
            ctx->pc = 0x2A1A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A8Cu;
            // 0x2a1a90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1A94u;
    // 0x2a1a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a98: 0xc0a7f88  jal         func_29FE20
    ctx->pc = 0x2A1A98u;
    SET_GPR_U32(ctx, 31, 0x2A1AA0u);
    ctx->pc = 0x2A1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A98u;
    // 0x2a1a9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE20u, 0x2A1A98u, 0x2A1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA0u;
label_2a1aa0:
    // 0x2a1aa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A1AA0u;
    {
        const bool branch_taken_0x2a1aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AA0u;
        // 0x2a1aa4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1aa0) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1AA8u;
label_2a1aa8:
    // 0x2a1aa8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1aac: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1ab0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ab8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1abc: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1ac4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1ac8: 0x54450019  bnel        $v0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1AC8u;
    {
        const bool branch_taken_0x2a1ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1ac8) {
            ctx->pc = 0x2A1ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1AC8u;
            // 0x2a1acc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1AD0u;
    // 0x2a1ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ad4: 0xc0a81ca  jal         func_2A0728
    ctx->pc = 0x2A1AD4u;
    SET_GPR_U32(ctx, 31, 0x2A1ADCu);
    ctx->pc = 0x2A1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AD4u;
    // 0x2a1ad8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0728u, 0x2A1AD4u, 0x2A1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ADCu;
label_2a1adc:
    // 0x2a1adc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1ADCu;
    {
        const bool branch_taken_0x2a1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ADCu;
        // 0x2a1ae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1adc) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1AE4u;
label_2a1ae4:
    // 0x2a1ae4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1ae8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1aec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1af4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1af8: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1b00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1b04: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1B04u;
    {
        const bool branch_taken_0x2a1b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1b04) {
            ctx->pc = 0x2A1B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1B04u;
            // 0x2a1b08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1B0Cu;
    // 0x2a1b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b10: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x2A1B10u;
    SET_GPR_U32(ctx, 31, 0x2A1B18u);
    ctx->pc = 0x2A1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B10u;
    // 0x2a1b14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x2A1B10u, 0x2A1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B18u;
label_2a1b18:
    // 0x2a1b18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1B18u;
    {
        const bool branch_taken_0x2a1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B18u;
        // 0x2a1b1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b18) {
            ctx->pc = 0x2A1B30u;
            goto label_2a1b30;
        }
    }
    ctx->pc = 0x2A1B20u;
label_2a1b20:
    // 0x2a1b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b24: 0xc0a84a4  jal         func_2A1290
    ctx->pc = 0x2A1B24u;
    SET_GPR_U32(ctx, 31, 0x2A1B2Cu);
    ctx->pc = 0x2A1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B24u;
    // 0x2a1b28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1290u, 0x2A1B24u, 0x2A1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B2Cu;
label_2a1b2c:
    // 0x2a1b2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a1b30:
    // 0x2a1b30: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x2a1b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2a1b34: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2A1B34u;
    {
        const bool branch_taken_0x2a1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B34u;
        // 0x2a1b38: 0x240317a0  addiu       $v1, $zero, 0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b34) {
            ctx->pc = 0x2A19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a19b0;
        }
    }
    ctx->pc = 0x2A1B3Cu;
    // 0x2a1b3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1b40: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2A1B40u;
    SET_GPR_U32(ctx, 31, 0x2A1B48u);
    ctx->pc = 0x2A1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B40u;
    // 0x2a1b44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2A1B40u, 0x2A1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B48u;
label_2a1b48:
    // 0x2a1b48: 0x240317a0  addiu       $v1, $zero, 0x17A0
    ctx->pc = 0x2a1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
    // 0x2a1b4c: 0x0  nop
    ctx->pc = 0x2a1b4cu;
    // NOP
label_2a1b50:
    // 0x2a1b50: 0x8f84b2f0  lw          $a0, -0x4D10($gp)
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
    // 0x2a1b54: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2a1b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a1b58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1b5c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2a1b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a1b60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1b64: 0x104500bf  beq         $v0, $a1, . + 4 + (0xBF << 2)
    ctx->pc = 0x2A1B64u;
    {
        const bool branch_taken_0x2a1b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B64u;
        // 0x2a1b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b64) {
            ctx->pc = 0x2A1E64u;
            goto label_2a1e64;
        }
    }
    ctx->pc = 0x2A1B6Cu;
    // 0x2a1b6c: 0xc0a8628  jal         func_2A18A0
    ctx->pc = 0x2A1B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1B74u);
    ctx->pc = 0x2A1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B6Cu;
    // 0x2a1b70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A18A0u, 0x2A1B6Cu, 0x2A1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B74u;
label_2a1b74:
    // 0x2a1b74: 0x504000bc  beql        $v0, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x2A1B74u;
    {
        const bool branch_taken_0x2a1b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b74) {
            ctx->pc = 0x2A1B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1B74u;
            // 0x2a1b78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1B7Cu;
    // 0x2a1b7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1b80: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2a1b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a1b84: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2A1B84u;
    {
        const bool branch_taken_0x2a1b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B84u;
        // 0x2a1b88: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b84) {
            ctx->pc = 0x2A1E64u;
            goto label_2a1e64;
        }
    }
    ctx->pc = 0x2A1B8Cu;
    // 0x2a1b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a1b90: 0x244290a0  addiu       $v0, $v0, -0x6F60
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938784));
    // 0x2a1b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1b98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1b9c: 0x800008  jr          $a0
    ctx->pc = 0x2A1B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1BA4u: goto label_2a1ba4;
            case 0x2A1BD8u: goto label_2a1bd8;
            case 0x2A1C0Cu: goto label_2a1c0c;
            case 0x2A1C48u: goto label_2a1c48;
            case 0x2A1C84u: goto label_2a1c84;
            case 0x2A1CFCu: goto label_2a1cfc;
            case 0x2A1D28u: goto label_2a1d28;
            case 0x2A1D7Cu: goto label_2a1d7c;
            case 0x2A1DB8u: goto label_2a1db8;
            case 0x2A1DF4u: goto label_2a1df4;
            case 0x2A1E30u: goto label_2a1e30;
            case 0x2A1E64u: goto label_2a1e64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1B9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A1BA4u;
label_2a1ba4:
    // 0x2a1ba4: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1BA4u;
    SET_GPR_U32(ctx, 31, 0x2A1BACu);
    ctx->pc = 0x2A1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BA4u;
    // 0x2a1ba8: 0x8f84b964  lw          $a0, -0x469C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1BA4u, 0x2A1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BACu;
label_2a1bac:
    // 0x2a1bac: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1BACu;
    SET_GPR_U32(ctx, 31, 0x2A1BB4u);
    ctx->pc = 0x2A1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BACu;
    // 0x2a1bb0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1BACu, 0x2A1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BB4u;
label_2a1bb4:
    // 0x2a1bb4: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2a1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2a1bb8: 0xc78c8d9c  lwc1        $f12, -0x7264($gp)
    ctx->pc = 0x2a1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1bbc: 0xc78d8da0  lwc1        $f13, -0x7260($gp)
    ctx->pc = 0x2a1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a1bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a1bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a1bc8: 0xc0a701e  jal         func_29C078
    ctx->pc = 0x2A1BC8u;
    SET_GPR_U32(ctx, 31, 0x2A1BD0u);
    ctx->pc = 0x2A1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BC8u;
    // 0x2a1bcc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C078u, 0x2A1BC8u, 0x2A1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BD0u;
label_2a1bd0:
    // 0x2a1bd0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A1BD0u;
    {
        const bool branch_taken_0x2a1bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BD0u;
        // 0x2a1bd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bd0) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1BD8u;
label_2a1bd8:
    // 0x2a1bd8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1BD8u;
    SET_GPR_U32(ctx, 31, 0x2A1BE0u);
    ctx->pc = 0x2A1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BD8u;
    // 0x2a1bdc: 0x8f84b97c  lw          $a0, -0x4684($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1BD8u, 0x2A1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE0u;
label_2a1be0:
    // 0x2a1be0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1BE0u;
    SET_GPR_U32(ctx, 31, 0x2A1BE8u);
    ctx->pc = 0x2A1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BE0u;
    // 0x2a1be4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1BE0u, 0x2A1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE8u;
label_2a1be8:
    // 0x2a1be8: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2a1bec: 0xc78c8da4  lwc1        $f12, -0x725C($gp)
    ctx->pc = 0x2a1becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1bf0: 0xc78d8da8  lwc1        $f13, -0x7258($gp)
    ctx->pc = 0x2a1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a1bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bf8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a1bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a1bfc: 0xc0a7204  jal         func_29C810
    ctx->pc = 0x2A1BFCu;
    SET_GPR_U32(ctx, 31, 0x2A1C04u);
    ctx->pc = 0x2A1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BFCu;
    // 0x2a1c00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C810u, 0x2A1BFCu, 0x2A1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C04u;
label_2a1c04:
    // 0x2a1c04: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2A1C04u;
    {
        const bool branch_taken_0x2a1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C04u;
        // 0x2a1c08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c04) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1C0Cu;
label_2a1c0c:
    // 0x2a1c0c: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C14u);
    ctx->pc = 0x2A1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C0Cu;
    // 0x2a1c10: 0x8f84b968  lw          $a0, -0x4698($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1C0Cu, 0x2A1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C14u;
label_2a1c14:
    // 0x2a1c14: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1C14u;
    SET_GPR_U32(ctx, 31, 0x2A1C1Cu);
    ctx->pc = 0x2A1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C14u;
    // 0x2a1c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1C14u, 0x2A1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C1Cu;
label_2a1c1c:
    // 0x2a1c1c: 0x8e0303a0  lw          $v1, 0x3A0($s0)
    ctx->pc = 0x2a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x2a1c20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a1c24: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x2a1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x2a1c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1c30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a1c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1c38: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2A1C38u;
    SET_GPR_U32(ctx, 31, 0x2A1C40u);
    ctx->pc = 0x2A1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C38u;
    // 0x2a1c3c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2A1C38u, 0x2A1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C40u;
label_2a1c40:
    // 0x2a1c40: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2A1C40u;
    {
        const bool branch_taken_0x2a1c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C40u;
        // 0x2a1c44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c40) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1C48u;
label_2a1c48:
    // 0x2a1c48: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1C48u;
    SET_GPR_U32(ctx, 31, 0x2A1C50u);
    ctx->pc = 0x2A1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C48u;
    // 0x2a1c4c: 0x8f84b96c  lw          $a0, -0x4694($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1C48u, 0x2A1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C50u;
label_2a1c50:
    // 0x2a1c50: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1C50u;
    SET_GPR_U32(ctx, 31, 0x2A1C58u);
    ctx->pc = 0x2A1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C50u;
    // 0x2a1c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1C50u, 0x2A1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C58u;
label_2a1c58:
    // 0x2a1c58: 0x8e0303a0  lw          $v1, 0x3A0($s0)
    ctx->pc = 0x2a1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x2a1c5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a1c60: 0x2442a1c8  addiu       $v0, $v0, -0x5E38
    ctx->pc = 0x2a1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
    // 0x2a1c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c68: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1c6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a1c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1c74: 0xc0a7556  jal         func_29D558
    ctx->pc = 0x2A1C74u;
    SET_GPR_U32(ctx, 31, 0x2A1C7Cu);
    ctx->pc = 0x2A1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C74u;
    // 0x2a1c78: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D558u, 0x2A1C74u, 0x2A1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C7Cu;
label_2a1c7c:
    // 0x2a1c7c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2A1C7Cu;
    {
        const bool branch_taken_0x2a1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C7Cu;
        // 0x2a1c80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c7c) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1C84u;
label_2a1c84:
    // 0x2a1c84: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2a1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a1c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1c8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a1c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1c90: 0x0  nop
    ctx->pc = 0x2a1c90u;
    // NOP
    // 0x2a1c94: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1C94u;
    {
        const bool branch_taken_0x2a1c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1c94) {
            ctx->pc = 0x2A1C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1C94u;
            // 0x2a1c98: 0x8e0403a0  lw          $a0, 0x3A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1CB4u;
            goto label_2a1cb4;
        }
    }
    ctx->pc = 0x2A1C9Cu;
    // 0x2a1c9c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a1ca0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1ca4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1ca8: 0x5440006f  bnel        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A1CA8u;
    {
        const bool branch_taken_0x2a1ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ca8) {
            ctx->pc = 0x2A1CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1CA8u;
            // 0x2a1cac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1CB0u;
    // 0x2a1cb0: 0x8e0403a0  lw          $a0, 0x3A0($s0)
    ctx->pc = 0x2a1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
label_2a1cb4:
    // 0x2a1cb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1cb8: 0x2463a1b0  addiu       $v1, $v1, -0x5E50
    ctx->pc = 0x2a1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
    // 0x2a1cbc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a1cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a1cc0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a1cc4: 0x24a59810  addiu       $a1, $a1, -0x67F0
    ctx->pc = 0x2a1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940688));
    // 0x2a1cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1ccc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1cd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1cd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a1cd8: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1CD8u;
    SET_GPR_U32(ctx, 31, 0x2A1CE0u);
    ctx->pc = 0x2A1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CD8u;
    // 0x2a1cdc: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1CD8u, 0x2A1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CE0u;
label_2a1ce0:
    // 0x2a1ce0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1CE0u;
    SET_GPR_U32(ctx, 31, 0x2A1CE8u);
    ctx->pc = 0x2A1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CE0u;
    // 0x2a1ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1CE0u, 0x2A1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CE8u;
label_2a1ce8:
    // 0x2a1ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cec: 0xc0a7a5a  jal         func_29E968
    ctx->pc = 0x2A1CECu;
    SET_GPR_U32(ctx, 31, 0x2A1CF4u);
    ctx->pc = 0x2A1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CECu;
    // 0x2a1cf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E968u, 0x2A1CECu, 0x2A1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CF4u;
label_2a1cf4:
    // 0x2a1cf4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2A1CF4u;
    {
        const bool branch_taken_0x2a1cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CF4u;
        // 0x2a1cf8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cf4) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1CFCu;
label_2a1cfc:
    // 0x2a1cfc: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1CFCu;
    SET_GPR_U32(ctx, 31, 0x2A1D04u);
    ctx->pc = 0x2A1D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CFCu;
    // 0x2a1d00: 0x8f84b974  lw          $a0, -0x468C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1CFCu, 0x2A1D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D04u;
label_2a1d04:
    // 0x2a1d04: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1D04u;
    SET_GPR_U32(ctx, 31, 0x2A1D0Cu);
    ctx->pc = 0x2A1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D04u;
    // 0x2a1d08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1D04u, 0x2A1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D0Cu;
label_2a1d0c:
    // 0x2a1d0c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2a1d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d14: 0x34a5ff30  ori         $a1, $a1, 0xFF30
    ctx->pc = 0x2a1d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65328);
    // 0x2a1d18: 0xc0a7bee  jal         func_29EFB8
    ctx->pc = 0x2A1D18u;
    SET_GPR_U32(ctx, 31, 0x2A1D20u);
    ctx->pc = 0x2A1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D18u;
    // 0x2a1d1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EFB8u, 0x2A1D18u, 0x2A1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D20u;
label_2a1d20:
    // 0x2a1d20: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2A1D20u;
    {
        const bool branch_taken_0x2a1d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D20u;
        // 0x2a1d24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d20) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1D28u;
label_2a1d28:
    // 0x2a1d28: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2a1d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a1d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1d30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a1d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1d34: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1D34u;
    {
        const bool branch_taken_0x2a1d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1d34) {
            ctx->pc = 0x2A1D50u;
            goto label_2a1d50;
        }
    }
    ctx->pc = 0x2A1D3Cu;
    // 0x2a1d3c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a1d40: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1d44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1d48: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A1D48u;
    {
        const bool branch_taken_0x2a1d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d48) {
            ctx->pc = 0x2A1D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D48u;
            // 0x2a1d4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1D50u;
label_2a1d50:
    // 0x2a1d50: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A1D50u;
    SET_GPR_U32(ctx, 31, 0x2A1D58u);
    ctx->pc = 0x2A1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D50u;
    // 0x2a1d54: 0x8f84b970  lw          $a0, -0x4690($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A1D50u, 0x2A1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D58u;
label_2a1d58:
    // 0x2a1d58: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A1D58u;
    SET_GPR_U32(ctx, 31, 0x2A1D60u);
    ctx->pc = 0x2A1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D58u;
    // 0x2a1d5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A1D58u, 0x2A1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D60u;
label_2a1d60:
    // 0x2a1d60: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2a1d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2a1d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a1d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a1d6c: 0xc0a78b2  jal         func_29E2C8
    ctx->pc = 0x2A1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D74u);
    ctx->pc = 0x2A1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D6Cu;
    // 0x2a1d70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2C8u, 0x2A1D6Cu, 0x2A1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D74u;
label_2a1d74:
    // 0x2a1d74: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A1D74u;
    {
        const bool branch_taken_0x2a1d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D74u;
        // 0x2a1d78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d74) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1D7Cu;
label_2a1d7c:
    // 0x2a1d7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1d80: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1d84: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1d8c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1d90: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1d94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1d98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1d9c: 0x54450032  bnel        $v0, $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A1D9Cu;
    {
        const bool branch_taken_0x2a1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1d9c) {
            ctx->pc = 0x2A1DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D9Cu;
            // 0x2a1da0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1DA4u;
    // 0x2a1da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1da8: 0xc0a7d7a  jal         func_29F5E8
    ctx->pc = 0x2A1DA8u;
    SET_GPR_U32(ctx, 31, 0x2A1DB0u);
    ctx->pc = 0x2A1DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1DA8u;
    // 0x2a1dac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F5E8u, 0x2A1DA8u, 0x2A1DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DB0u;
label_2a1db0:
    // 0x2a1db0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A1DB0u;
    {
        const bool branch_taken_0x2a1db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DB0u;
        // 0x2a1db4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1db0) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1DB8u;
label_2a1db8:
    // 0x2a1db8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1dbc: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1dc0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1dc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1dc8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1dcc: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1dd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1dd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1dd8: 0x54450023  bnel        $v0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A1DD8u;
    {
        const bool branch_taken_0x2a1dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1dd8) {
            ctx->pc = 0x2A1DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1DD8u;
            // 0x2a1ddc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1DE0u;
    // 0x2a1de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1de4: 0xc0a7f88  jal         func_29FE20
    ctx->pc = 0x2A1DE4u;
    SET_GPR_U32(ctx, 31, 0x2A1DECu);
    ctx->pc = 0x2A1DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1DE4u;
    // 0x2a1de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FE20u, 0x2A1DE4u, 0x2A1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DECu;
label_2a1dec:
    // 0x2a1dec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A1DECu;
    {
        const bool branch_taken_0x2a1dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DECu;
        // 0x2a1df0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dec) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1DF4u;
label_2a1df4:
    // 0x2a1df4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1df8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1dfc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1e00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1e04: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1e08: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1e0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1e10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1e14: 0x54450014  bnel        $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1E14u;
    {
        const bool branch_taken_0x2a1e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1e14) {
            ctx->pc = 0x2A1E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1E14u;
            // 0x2a1e18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E1Cu;
    // 0x2a1e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e20: 0xc0a81ca  jal         func_2A0728
    ctx->pc = 0x2A1E20u;
    SET_GPR_U32(ctx, 31, 0x2A1E28u);
    ctx->pc = 0x2A1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E20u;
    // 0x2a1e24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0728u, 0x2A1E20u, 0x2A1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E28u;
label_2a1e28:
    // 0x2a1e28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1E28u;
    {
        const bool branch_taken_0x2a1e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E28u;
        // 0x2a1e2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e28) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E30u;
label_2a1e30:
    // 0x2a1e30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a1e34: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a1e38: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a1e3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1e40: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a1e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a1e44: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x2a1e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1e4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1e50: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1E50u;
    {
        const bool branch_taken_0x2a1e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a1e50) {
            ctx->pc = 0x2A1E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1E50u;
            // 0x2a1e54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E58u;
    // 0x2a1e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e5c: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x2A1E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E64u);
    ctx->pc = 0x2A1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E5Cu;
    // 0x2a1e60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x2A1E5Cu, 0x2A1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E64u;
label_2a1e64:
    // 0x2a1e64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a1e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a1e68:
    // 0x2a1e68: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x2a1e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2a1e6c: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x2A1E6Cu;
    {
        const bool branch_taken_0x2a1e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E6Cu;
        // 0x2a1e70: 0x240317a0  addiu       $v1, $zero, 0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e6c) {
            ctx->pc = 0x2A1B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1b50;
        }
    }
    ctx->pc = 0x2A1E74u;
    // 0x2a1e74: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2A1E74u;
    SET_GPR_U32(ctx, 31, 0x2A1E7Cu);
    ctx->pc = 0x2A1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E74u;
    // 0x2a1e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2A1E74u, 0x2A1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E7Cu;
label_2a1e7c:
    // 0x2a1e7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a1e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1e80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2a1e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2a1e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1e88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2a1e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1e8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a1e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E90u;
        // 0x2a1e94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1E98u;
}
