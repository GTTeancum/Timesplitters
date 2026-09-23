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

// Function: _vfiprintf_r
// Address: 0x2e6908 - 0x2e74d4
void _vfiprintf_r_0x2e6908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_vfiprintf_r_0x2e6908");
#endif

    switch (ctx->pc) {
        case 0x2e6968u: goto label_2e6968;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69d8u: goto label_2e69d8;
        case 0x2e69f8u: goto label_2e69f8;
        case 0x2e6a54u: goto label_2e6a54;
        case 0x2e6a84u: goto label_2e6a84;
        case 0x2e6a88u: goto label_2e6a88;
        case 0x2e6a94u: goto label_2e6a94;
        case 0x2e6b50u: goto label_2e6b50;
        case 0x2e6b98u: goto label_2e6b98;
        case 0x2e6d2cu: goto label_2e6d2c;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e7480u: goto label_2e7480;
        default: break;
    }

    ctx->pc = 0x2e6908u;

    // 0x2e6908: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2e6908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2e690c: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x2e690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x2e6910: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2e6910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2e6914: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e6914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6918: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2e6918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2e691c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6920: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x2e6920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x2e6924: 0xffb70140  sd          $s7, 0x140($sp)
    ctx->pc = 0x2e6924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 23));
    // 0x2e6928: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2e6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2e692c: 0xffb50120  sd          $s5, 0x120($sp)
    ctx->pc = 0x2e692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 21));
    // 0x2e6930: 0xffb30100  sd          $s3, 0x100($sp)
    ctx->pc = 0x2e6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 19));
    // 0x2e6934: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2e6934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x2e6938: 0xffb100e0  sd          $s1, 0xE0($sp)
    ctx->pc = 0x2e6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 17));
    // 0x2e693c: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x2e693cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x2e6940: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2e6940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e6944: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2e6944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2e6948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6948u;
    {
        const bool branch_taken_0x2e6948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6948u;
        // 0x2e694c: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6948) {
            ctx->pc = 0x2E6960u;
            goto label_2e6960;
        }
    }
    ctx->pc = 0x2E6950u;
    // 0x2e6950: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6954: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e6958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6958u;
    {
        const bool branch_taken_0x2e6958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6958u;
        // 0x2e695c: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6958) {
            ctx->pc = 0x2E697Cu;
            goto label_2e697c;
        }
    }
    ctx->pc = 0x2E6960u;
label_2e6960:
    // 0x2e6960: 0xc0ba6b0  jal         func_2E9AC0
    ctx->pc = 0x2E6960u;
    SET_GPR_U32(ctx, 31, 0x2E6968u);
    ctx->pc = 0x2E6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6960u;
    // 0x2e6964: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AC0u, 0x2E6960u, 0x2E6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6968u;
label_2e6968:
    // 0x2e6968: 0x144002ce  bnez        $v0, . + 4 + (0x2CE << 2)
    ctx->pc = 0x2E6968u;
    {
        const bool branch_taken_0x2e6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6968u;
        // 0x2e696c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6968) {
            ctx->pc = 0x2E74A4u;
            goto label_2e74a4;
        }
    }
    ctx->pc = 0x2E6970u;
    // 0x2e6970: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e6974: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2e6974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e6978: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x2e6978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_2e697c:
    // 0x2e697c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e6980: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6980u;
    {
        const bool branch_taken_0x2e6980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6980u;
        // 0x2e6984: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6980) {
            ctx->pc = 0x2E69ACu;
            goto label_2e69ac;
        }
    }
    ctx->pc = 0x2E6988u;
    // 0x2e6988: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x2e6988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e698c: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x2e698cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2e6990: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6990u;
    {
        const bool branch_taken_0x2e6990 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6990u;
        // 0x2e6994: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6990) {
            ctx->pc = 0x2E69ACu;
            goto label_2e69ac;
        }
    }
    ctx->pc = 0x2E6998u;
    // 0x2e6998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e699c: 0xc0b99f6  jal         func_2E67D8
    ctx->pc = 0x2E699Cu;
    SET_GPR_U32(ctx, 31, 0x2E69A4u);
    ctx->pc = 0x2E69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E699Cu;
    // 0x2e69a0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E67D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E67D8u, 0x2E699Cu, 0x2E69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69A4u;
label_2e69a4:
    // 0x2e69a4: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x2E69A4u;
    {
        const bool branch_taken_0x2e69a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69A4u;
        // 0x2e69a8: 0xdfbf0160  ld          $ra, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69a4) {
            ctx->pc = 0x2E74A8u;
            goto label_2e74a8;
        }
    }
    ctx->pc = 0x2E69ACu;
label_2e69ac:
    // 0x2e69ac: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x2e69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2e69b0: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2e69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2e69b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e69b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e69b8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2e69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2e69bc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2e69bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e69c4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2e69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2e69c8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x2e69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x2e69cc: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x2e69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_2e69d0:
    // 0x2e69d0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2e69d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69d4: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x2e69d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2e69d8:
    // 0x2e69d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e69dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2e69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2e69e0: 0x8c44330c  lw          $a0, 0x330C($v0)
    ctx->pc = 0x2e69e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e69e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e69e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69e8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2e69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2e69ec: 0x8c673768  lw          $a3, 0x3768($v1)
    ctx->pc = 0x2e69ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383768u));
    // 0x2e69f0: 0xc0baf60  jal         func_2EBD80
    ctx->pc = 0x2E69F0u;
    SET_GPR_U32(ctx, 31, 0x2E69F8u);
    ctx->pc = 0x2E69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69F0u;
    // 0x2e69f4: 0x8fa800b8  lw          $t0, 0xB8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD80u, 0x2E69F0u, 0x2E69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69F8u;
label_2e69f8:
    // 0x2e69f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e69f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69fc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E69FCu;
    {
        const bool branch_taken_0x2e69fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69FCu;
        // 0x2e6a00: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69fc) {
            ctx->pc = 0x2E6A10u;
            goto label_2e6a10;
        }
    }
    ctx->pc = 0x2E6A04u;
    // 0x2e6a04: 0x1451fff4  bne         $v0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E6A04u;
    {
        const bool branch_taken_0x2e6a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A04u;
        // 0x2e6a08: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a04) {
            ctx->pc = 0x2E69D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e69d8;
        }
    }
    ctx->pc = 0x2E6A0Cu;
    // 0x2e6a0c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2e6a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2e6a10:
    // 0x2e6a10: 0x2b38823  subu        $s1, $s5, $s3
    ctx->pc = 0x2e6a10u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2e6a14: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6A14u;
    {
        const bool branch_taken_0x2e6a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a14) {
            ctx->pc = 0x2E6A68u;
            goto label_2e6a68;
        }
    }
    ctx->pc = 0x2E6A1Cu;
    // 0x2e6a1c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2e6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x2e6a20: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x2e6a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x2e6a24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2e6a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6a28: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6a2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e6a30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e6a34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e6a38: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2e6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e6a3c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e6a3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e6a40: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6A40u;
    {
        const bool branch_taken_0x2e6a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A40u;
        // 0x2e6a44: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a40) {
            ctx->pc = 0x2E6A5Cu;
            goto label_2e6a5c;
        }
    }
    ctx->pc = 0x2E6A48u;
    // 0x2e6a48: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e6a4c: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E6A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A54u);
    ctx->pc = 0x2E6A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A4Cu;
    // 0x2e6a50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E6A4Cu, 0x2E6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A54u;
label_2e6a54:
    // 0x2e6a54: 0x1440028d  bnez        $v0, . + 4 + (0x28D << 2)
    ctx->pc = 0x2E6A54u;
    {
        const bool branch_taken_0x2e6a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A54u;
        // 0x2e6a58: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a54) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E6A5Cu;
label_2e6a5c:
    // 0x2e6a5c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2e6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6a60: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2e6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2e6a64: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2e6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_2e6a68:
    // 0x2e6a68: 0x1a000280  blez        $s0, . + 4 + (0x280 << 2)
    ctx->pc = 0x2E6A68u;
    {
        const bool branch_taken_0x2e6a68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A68u;
        // 0x2e6a6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a68) {
            ctx->pc = 0x2E746Cu;
            goto label_2e746c;
        }
    }
    ctx->pc = 0x2E6A70u;
    // 0x2e6a70: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2e6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2e6a74: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2e6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2e6a78: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e6a78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a7c: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2e6a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6a80: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6a84:
    // 0x2e6a84: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2e6a84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2e6a88:
    // 0x2e6a88: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2e6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2e6a8c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e6a8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e6a90: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
label_2e6a94:
    // 0x2e6a94: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x2e6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x2e6a98: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x2e6a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e6a9c: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x2E6A9Cu;
    {
        const bool branch_taken_0x2e6a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A9Cu;
        // 0x2e6aa0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a9c) {
            ctx->pc = 0x2E6F94u;
            goto label_2e6f94;
        }
    }
    ctx->pc = 0x2E6AA4u;
    // 0x2e6aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e6aa8: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x2e6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
    // 0x2e6aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e6ab0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6ab4: 0x800008  jr          $a0
    ctx->pc = 0x2E6AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E6ABCu: goto label_2e6abc;
            case 0x2E6AD0u: goto label_2e6ad0;
            case 0x2E6AD8u: goto label_2e6ad8;
            case 0x2E6AF0u: goto label_2e6af0;
            case 0x2E6AF8u: goto label_2e6af8;
            case 0x2E6B08u: goto label_2e6b08;
            case 0x2E6B84u: goto label_2e6b84;
            case 0x2E6B8Cu: goto label_2e6b8c;
            case 0x2E6BC0u: goto label_2e6bc0;
            case 0x2E6BC8u: goto label_2e6bc8;
            case 0x2E6BDCu: goto label_2e6bdc;
            case 0x2E6BECu: goto label_2e6bec;
            case 0x2E6C14u: goto label_2e6c14;
            case 0x2E6C18u: goto label_2e6c18;
            case 0x2E6C5Cu: goto label_2e6c5c;
            case 0x2E6CA8u: goto label_2e6ca8;
            case 0x2E6CACu: goto label_2e6cac;
            case 0x2E6CE0u: goto label_2e6ce0;
            case 0x2E6D04u: goto label_2e6d04;
            case 0x2E6D74u: goto label_2e6d74;
            case 0x2E6D78u: goto label_2e6d78;
            case 0x2E6DACu: goto label_2e6dac;
            case 0x2E6DB8u: goto label_2e6db8;
            case 0x2E6F94u: goto label_2e6f94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6AB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E6ABCu;
label_2e6abc:
    // 0x2e6abc: 0x83a20090  lb          $v0, 0x90($sp)
    ctx->pc = 0x2e6abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6ac0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E6AC0u;
    {
        const bool branch_taken_0x2e6ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ac0) {
            ctx->pc = 0x2E6AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6AC0u;
            // 0x2e6ac4: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a88;
        }
    }
    ctx->pc = 0x2E6AC8u;
    // 0x2e6ac8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E6AC8u;
    {
        const bool branch_taken_0x2e6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AC8u;
        // 0x2e6acc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ac8) {
            ctx->pc = 0x2E6AFCu;
            goto label_2e6afc;
        }
    }
    ctx->pc = 0x2E6AD0u;
label_2e6ad0:
    // 0x2e6ad0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E6AD0u;
    {
        const bool branch_taken_0x2e6ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AD0u;
        // 0x2e6ad4: 0x37de0001  ori         $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ad0) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6AD8u;
label_2e6ad8:
    // 0x2e6ad8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6ad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6adc: 0x8e85fff8  lw          $a1, -0x8($s4)
    ctx->pc = 0x2e6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6ae0: 0x4a1ffe8  bgez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E6AE0u;
    {
        const bool branch_taken_0x2e6ae0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AE0u;
        // 0x2e6ae4: 0xafa500a4  sw          $a1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ae0) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6AE8u;
    // 0x2e6ae8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2e6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2e6aec: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x2e6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_2e6af0:
    // 0x2e6af0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x2E6AF0u;
    {
        const bool branch_taken_0x2e6af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AF0u;
        // 0x2e6af4: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6af0) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6AF8u;
label_2e6af8:
    // 0x2e6af8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2e6afc:
    // 0x2e6afc: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2e6afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6b00: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E6B00u;
    {
        const bool branch_taken_0x2e6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B00u;
        // 0x2e6b04: 0xa3a20090  sb          $v0, 0x90($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b00) {
            ctx->pc = 0x2E6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a88;
        }
    }
    ctx->pc = 0x2E6B08u;
label_2e6b08:
    // 0x2e6b08: 0x82b70000  lb          $s7, 0x0($s5)
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6b0c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2e6b10: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6B10u;
    {
        const bool branch_taken_0x2e6b10 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B10u;
        // 0x2e6b14: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b10) {
            ctx->pc = 0x2E6B38u;
            goto label_2e6b38;
        }
    }
    ctx->pc = 0x2E6B18u;
    // 0x2e6b18: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6b1c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e6b20: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x2e6b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6b24: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e6b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6b28: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2e6b28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6b2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2e6b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e6b30: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2E6B30u;
    {
        const bool branch_taken_0x2e6b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B30u;
        // 0x2e6b34: 0x202880b  movn        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b30) {
            ctx->pc = 0x2E6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a88;
        }
    }
    ctx->pc = 0x2E6B38u;
label_2e6b38:
    // 0x2e6b38: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e6b3c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e6b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e6b40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6B40u;
    {
        const bool branch_taken_0x2e6b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B40u;
        // 0x2e6b44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b40) {
            ctx->pc = 0x2E6B70u;
            goto label_2e6b70;
        }
    }
    ctx->pc = 0x2E6B48u;
    // 0x2e6b48: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e6b4c: 0x0  nop
    ctx->pc = 0x2e6b4cu;
    // NOP
label_2e6b50:
    // 0x2e6b50: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2e6b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e6b54: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2e6b58: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e6b5c: 0x82b70000  lb          $s7, 0x0($s5)
    ctx->pc = 0x2e6b5cu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6b60: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e6b64: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e6b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e6b68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E6B68u;
    {
        const bool branch_taken_0x2e6b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B68u;
        // 0x2e6b6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b68) {
            ctx->pc = 0x2E6B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6b50;
        }
    }
    ctx->pc = 0x2E6B70u;
label_2e6b70:
    // 0x2e6b70: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e6b74: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e6b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6b78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2e6b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e6b7c: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x2E6B7Cu;
    {
        const bool branch_taken_0x2e6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B7Cu;
        // 0x2e6b80: 0x202880b  movn        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b7c) {
            ctx->pc = 0x2E6A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a94;
        }
    }
    ctx->pc = 0x2E6B84u;
label_2e6b84:
    // 0x2e6b84: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E6B84u;
    {
        const bool branch_taken_0x2e6b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B84u;
        // 0x2e6b88: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b84) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6B8Cu;
label_2e6b8c:
    // 0x2e6b8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e6b94: 0x0  nop
    ctx->pc = 0x2e6b94u;
    // NOP
label_2e6b98:
    // 0x2e6b98: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2e6b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e6b9c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2e6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2e6ba0: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x2e6ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e6ba4: 0x82b70000  lb          $s7, 0x0($s5)
    ctx->pc = 0x2e6ba4u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6ba8: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x2e6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x2e6bac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e6bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e6bb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E6BB0u;
    {
        const bool branch_taken_0x2e6bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BB0u;
        // 0x2e6bb4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bb0) {
            ctx->pc = 0x2E6B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6b98;
        }
    }
    ctx->pc = 0x2E6BB8u;
    // 0x2e6bb8: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x2E6BB8u;
    {
        const bool branch_taken_0x2e6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BB8u;
        // 0x2e6bbc: 0xafb000a4  sw          $s0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bb8) {
            ctx->pc = 0x2E6A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a94;
        }
    }
    ctx->pc = 0x2E6BC0u;
label_2e6bc0:
    // 0x2e6bc0: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x2E6BC0u;
    {
        const bool branch_taken_0x2e6bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BC0u;
        // 0x2e6bc4: 0x37de0040  ori         $fp, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bc0) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6BC8u;
label_2e6bc8:
    // 0x2e6bc8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e6bcc: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2e6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2e6bd0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6BD0u;
    {
        const bool branch_taken_0x2e6bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BD0u;
        // 0x2e6bd4: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bd0) {
            ctx->pc = 0x2E6BE4u;
            goto label_2e6be4;
        }
    }
    ctx->pc = 0x2E6BD8u;
    // 0x2e6bd8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e6bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2e6bdc:
    // 0x2e6bdc: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E6BDCu;
    {
        const bool branch_taken_0x2e6bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BDCu;
        // 0x2e6be0: 0x37de0020  ori         $fp, $fp, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bdc) {
            ctx->pc = 0x2E6A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6BE4u;
label_2e6be4:
    // 0x2e6be4: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
    ctx->pc = 0x2E6BE4u;
    {
        const bool branch_taken_0x2e6be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BE4u;
        // 0x2e6be8: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6be4) {
            ctx->pc = 0x2E6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a88;
        }
    }
    ctx->pc = 0x2E6BECu;
label_2e6bec:
    // 0x2e6bec: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6bf4: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x2e6bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6bf8: 0x33c40084  andi        $a0, $fp, 0x84
    ctx->pc = 0x2e6bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6bfc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2e6bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6c00: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2e6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x2e6c04: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2e6c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6c08: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6c0c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2E6C0Cu;
    {
        const bool branch_taken_0x2e6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C0Cu;
        // 0x2e6c10: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c0c) {
            ctx->pc = 0x2E6FB4u;
            goto label_2e6fb4;
        }
    }
    ctx->pc = 0x2E6C14u;
label_2e6c14:
    // 0x2e6c14: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e6c14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e6c18:
    // 0x2e6c18: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e6c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6C1Cu;
    {
        const bool branch_taken_0x2e6c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C1Cu;
        // 0x2e6c20: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c1c) {
            ctx->pc = 0x2E6C30u;
            goto label_2e6c30;
        }
    }
    ctx->pc = 0x2E6C24u;
    // 0x2e6c24: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6c28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6C28u;
    {
        const bool branch_taken_0x2e6c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C28u;
        // 0x2e6c2c: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c28) {
            ctx->pc = 0x2E6C44u;
            goto label_2e6c44;
        }
    }
    ctx->pc = 0x2E6C30u;
label_2e6c30:
    // 0x2e6c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6C30u;
    {
        const bool branch_taken_0x2e6c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C30u;
        // 0x2e6c34: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c30) {
            ctx->pc = 0x2E6C40u;
            goto label_2e6c40;
        }
    }
    ctx->pc = 0x2E6C38u;
    // 0x2e6c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6C38u;
    {
        const bool branch_taken_0x2e6c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C38u;
        // 0x2e6c3c: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c38) {
            ctx->pc = 0x2E6C44u;
            goto label_2e6c44;
        }
    }
    ctx->pc = 0x2E6C40u;
label_2e6c40:
    // 0x2e6c40: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x2e6c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e6c44:
    // 0x2e6c44: 0x6010070  bgez        $s0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2E6C44u;
    {
        const bool branch_taken_0x2e6c44 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2E6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C44u;
        // 0x2e6c48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c44) {
            ctx->pc = 0x2E6E08u;
            goto label_2e6e08;
        }
    }
    ctx->pc = 0x2E6C4Cu;
    // 0x2e6c4c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e6c50: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x2e6c50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x2e6c54: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2E6C54u;
    {
        const bool branch_taken_0x2e6c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C54u;
        // 0x2e6c58: 0xa3a20090  sb          $v0, 0x90($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c54) {
            ctx->pc = 0x2E6E08u;
            goto label_2e6e08;
        }
    }
    ctx->pc = 0x2E6C5Cu;
label_2e6c5c:
    // 0x2e6c5c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e6c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e6c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6C60u;
    {
        const bool branch_taken_0x2e6c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C60u;
        // 0x2e6c64: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c60) {
            ctx->pc = 0x2E6C78u;
            goto label_2e6c78;
        }
    }
    ctx->pc = 0x2E6C68u;
    // 0x2e6c68: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6c6c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6c70: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x2E6C70u;
    {
        const bool branch_taken_0x2e6c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C70u;
        // 0x2e6c74: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c70) {
            ctx->pc = 0x2E69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E6C78u;
label_2e6c78:
    // 0x2e6c78: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x2e6c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x2e6c7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6C7Cu;
    {
        const bool branch_taken_0x2e6c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C7Cu;
        // 0x2e6c80: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c7c) {
            ctx->pc = 0x2E6C94u;
            goto label_2e6c94;
        }
    }
    ctx->pc = 0x2E6C84u;
    // 0x2e6c84: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6c88: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6c8c: 0x1000ff50  b           . + 4 + (-0xB0 << 2)
    ctx->pc = 0x2E6C8Cu;
    {
        const bool branch_taken_0x2e6c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C8Cu;
        // 0x2e6c90: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c8c) {
            ctx->pc = 0x2E69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E6C94u;
label_2e6c94:
    // 0x2e6c94: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6c98: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2e6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6c9c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x2e6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6ca0: 0x1000ff4b  b           . + 4 + (-0xB5 << 2)
    ctx->pc = 0x2E6CA0u;
    {
        const bool branch_taken_0x2e6ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CA0u;
        // 0x2e6ca4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ca0) {
            ctx->pc = 0x2E69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E6CA8u;
label_2e6ca8:
    // 0x2e6ca8: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e6ca8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e6cac:
    // 0x2e6cac: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e6cb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6CB0u;
    {
        const bool branch_taken_0x2e6cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CB0u;
        // 0x2e6cb4: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cb0) {
            ctx->pc = 0x2E6CC4u;
            goto label_2e6cc4;
        }
    }
    ctx->pc = 0x2E6CB8u;
    // 0x2e6cb8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6cbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6CBCu;
    {
        const bool branch_taken_0x2e6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CBCu;
        // 0x2e6cc0: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cbc) {
            ctx->pc = 0x2E6CD8u;
            goto label_2e6cd8;
        }
    }
    ctx->pc = 0x2E6CC4u;
label_2e6cc4:
    // 0x2e6cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6CC4u;
    {
        const bool branch_taken_0x2e6cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CC4u;
        // 0x2e6cc8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cc4) {
            ctx->pc = 0x2E6CD4u;
            goto label_2e6cd4;
        }
    }
    ctx->pc = 0x2E6CCCu;
    // 0x2e6ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6CCCu;
    {
        const bool branch_taken_0x2e6ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CCCu;
        // 0x2e6cd0: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ccc) {
            ctx->pc = 0x2E6CD8u;
            goto label_2e6cd8;
        }
    }
    ctx->pc = 0x2E6CD4u;
label_2e6cd4:
    // 0x2e6cd4: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e6cd4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e6cd8:
    // 0x2e6cd8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2E6CD8u;
    {
        const bool branch_taken_0x2e6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CD8u;
        // 0x2e6cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cd8) {
            ctx->pc = 0x2E6E04u;
            goto label_2e6e04;
        }
    }
    ctx->pc = 0x2E6CE0u;
label_2e6ce0:
    // 0x2e6ce0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e6ce4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6ce8: 0x2442bbd0  addiu       $v0, $v0, -0x4430
    ctx->pc = 0x2e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949840));
    // 0x2e6cec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6cf0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e6cf4: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x2e6cf4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2e6cf8: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x2e6cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2e6cfc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E6CFCu;
    {
        const bool branch_taken_0x2e6cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CFCu;
        // 0x2e6d00: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cfc) {
            ctx->pc = 0x2E6E04u;
            goto label_2e6e04;
        }
    }
    ctx->pc = 0x2E6D04u;
label_2e6d04:
    // 0x2e6d04: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6d08: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x2e6d08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x2e6d0c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6D0Cu;
    {
        const bool branch_taken_0x2e6d0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D0Cu;
        // 0x2e6d10: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d0c) {
            ctx->pc = 0x2E6D18u;
            goto label_2e6d18;
        }
    }
    ctx->pc = 0x2E6D14u;
    // 0x2e6d14: 0x2453bbe8  addiu       $s3, $v0, -0x4418
    ctx->pc = 0x2e6d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
label_2e6d18:
    // 0x2e6d18: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E6D18u;
    {
        const bool branch_taken_0x2e6d18 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D18u;
        // 0x2e6d1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d18) {
            ctx->pc = 0x2E6D54u;
            goto label_2e6d54;
        }
    }
    ctx->pc = 0x2E6D20u;
    // 0x2e6d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d24: 0xc0baf6f  jal         func_2EBDBC
    ctx->pc = 0x2E6D24u;
    SET_GPR_U32(ctx, 31, 0x2E6D2Cu);
    ctx->pc = 0x2E6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D24u;
    // 0x2e6d28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDBCu, 0x2E6D24u, 0x2E6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D2Cu;
label_2e6d2c:
    // 0x2e6d2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6D2Cu;
    {
        const bool branch_taken_0x2e6d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D2Cu;
        // 0x2e6d30: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d2c) {
            ctx->pc = 0x2E6D4Cu;
            goto label_2e6d4c;
        }
    }
    ctx->pc = 0x2E6D34u;
    // 0x2e6d34: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2e6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2e6d38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e6d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6d3c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2e6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e6d40: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x2e6d40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2e6d44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6D44u;
    {
        const bool branch_taken_0x2e6d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D44u;
        // 0x2e6d48: 0xafa500ac  sw          $a1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d44) {
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6D4Cu;
label_2e6d4c:
    // 0x2e6d4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6D4Cu;
    {
        const bool branch_taken_0x2e6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D4Cu;
        // 0x2e6d50: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d4c) {
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6D54u;
label_2e6d54:
    // 0x2e6d54: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2E6D54u;
    SET_GPR_U32(ctx, 31, 0x2E6D5Cu);
    ctx->pc = 0x2E6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D54u;
    // 0x2e6d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2E6D54u, 0x2E6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D5Cu;
label_2e6d5c:
    // 0x2e6d5c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2e6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2e6d60:
    // 0x2e6d60: 0x33c20084  andi        $v0, $fp, 0x84
    ctx->pc = 0x2e6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6d64: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2e6d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6d68: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6d6c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2E6D6Cu;
    {
        const bool branch_taken_0x2e6d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D6Cu;
        // 0x2e6d70: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d6c) {
            ctx->pc = 0x2E6FB8u;
            goto label_2e6fb8;
        }
    }
    ctx->pc = 0x2E6D74u;
label_2e6d74:
    // 0x2e6d74: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2e6d74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_2e6d78:
    // 0x2e6d78: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e6d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e6d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6D7Cu;
    {
        const bool branch_taken_0x2e6d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D7Cu;
        // 0x2e6d80: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d7c) {
            ctx->pc = 0x2E6D90u;
            goto label_2e6d90;
        }
    }
    ctx->pc = 0x2E6D84u;
    // 0x2e6d84: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6d88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6D88u;
    {
        const bool branch_taken_0x2e6d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D88u;
        // 0x2e6d8c: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d88) {
            ctx->pc = 0x2E6DA4u;
            goto label_2e6da4;
        }
    }
    ctx->pc = 0x2E6D90u;
label_2e6d90:
    // 0x2e6d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6D90u;
    {
        const bool branch_taken_0x2e6d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D90u;
        // 0x2e6d94: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d90) {
            ctx->pc = 0x2E6DA0u;
            goto label_2e6da0;
        }
    }
    ctx->pc = 0x2E6D98u;
    // 0x2e6d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6D98u;
    {
        const bool branch_taken_0x2e6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D98u;
        // 0x2e6d9c: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d98) {
            ctx->pc = 0x2E6DA4u;
            goto label_2e6da4;
        }
    }
    ctx->pc = 0x2E6DA0u;
label_2e6da0:
    // 0x2e6da0: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e6da0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e6da4:
    // 0x2e6da4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E6DA4u;
    {
        const bool branch_taken_0x2e6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DA4u;
        // 0x2e6da8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6da4) {
            ctx->pc = 0x2E6E04u;
            goto label_2e6e04;
        }
    }
    ctx->pc = 0x2E6DACu;
label_2e6dac:
    // 0x2e6dac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e6db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6DB0u;
    {
        const bool branch_taken_0x2e6db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DB0u;
        // 0x2e6db4: 0x2442bbf0  addiu       $v0, $v0, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6db0) {
            ctx->pc = 0x2E6DC0u;
            goto label_2e6dc0;
        }
    }
    ctx->pc = 0x2E6DB8u;
label_2e6db8:
    // 0x2e6db8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e6dbc: 0x2442bbd0  addiu       $v0, $v0, -0x4430
    ctx->pc = 0x2e6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949840));
label_2e6dc0:
    // 0x2e6dc0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e6dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e6dc4: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2e6dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2e6dc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6DC8u;
    {
        const bool branch_taken_0x2e6dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DC8u;
        // 0x2e6dcc: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dc8) {
            ctx->pc = 0x2E6DDCu;
            goto label_2e6ddc;
        }
    }
    ctx->pc = 0x2E6DD0u;
    // 0x2e6dd0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2e6dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2e6dd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6DD4u;
    {
        const bool branch_taken_0x2e6dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD4u;
        // 0x2e6dd8: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dd4) {
            ctx->pc = 0x2E6DF0u;
            goto label_2e6df0;
        }
    }
    ctx->pc = 0x2E6DDCu;
label_2e6ddc:
    // 0x2e6ddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6DDCu;
    {
        const bool branch_taken_0x2e6ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DDCu;
        // 0x2e6de0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ddc) {
            ctx->pc = 0x2E6DECu;
            goto label_2e6dec;
        }
    }
    ctx->pc = 0x2E6DE4u;
    // 0x2e6de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6DE4u;
    {
        const bool branch_taken_0x2e6de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE4u;
        // 0x2e6de8: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6de4) {
            ctx->pc = 0x2E6DF0u;
            goto label_2e6df0;
        }
    }
    ctx->pc = 0x2E6DECu;
label_2e6dec:
    // 0x2e6dec: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2e6decu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2e6df0:
    // 0x2e6df0: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2e6df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e6df4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6DF4u;
    {
        const bool branch_taken_0x2e6df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DF4u;
        // 0x2e6df8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6df4) {
            ctx->pc = 0x2E6E04u;
            goto label_2e6e04;
        }
    }
    ctx->pc = 0x2E6DFCu;
    // 0x2e6dfc: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x2e6dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2e6e00: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x2e6e00u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_2e6e04:
    // 0x2e6e04: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2e6e04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_2e6e08:
    // 0x2e6e08: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6E08u;
    {
        const bool branch_taken_0x2e6e08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E08u;
        // 0x2e6e0c: 0xafb100a8  sw          $s1, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e08) {
            ctx->pc = 0x2E6E18u;
            goto label_2e6e18;
        }
    }
    ctx->pc = 0x2E6E10u;
    // 0x2e6e10: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2e6e14: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x2e6e14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_2e6e18:
    // 0x2e6e18: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E18u;
    {
        const bool branch_taken_0x2e6e18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E18u;
        // 0x2e6e1c: 0x27b30078  addiu       $s3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e18) {
            ctx->pc = 0x2E6E2Cu;
            goto label_2e6e2c;
        }
    }
    ctx->pc = 0x2E6E20u;
    // 0x2e6e20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e6e24: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E6E24u;
    {
        const bool branch_taken_0x2e6e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E24u;
        // 0x2e6e28: 0x33c20084  andi        $v0, $fp, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e24) {
            ctx->pc = 0x2E6F78u;
            goto label_2e6f78;
        }
    }
    ctx->pc = 0x2E6E2Cu;
label_2e6e2c:
    // 0x2e6e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6e30: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E6E30u;
    {
        const bool branch_taken_0x2e6e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E30u;
        // 0x2e6e34: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e30) {
            ctx->pc = 0x2E6EBCu;
            goto label_2e6ebc;
        }
    }
    ctx->pc = 0x2E6E38u;
    // 0x2e6e38: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6E38u;
    {
        const bool branch_taken_0x2e6e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E38u;
        // 0x2e6e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e38) {
            ctx->pc = 0x2E6E68u;
            goto label_2e6e68;
        }
    }
    ctx->pc = 0x2E6E40u;
    // 0x2e6e40: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E6E40u;
    {
        const bool branch_taken_0x2e6e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E40u;
        // 0x2e6e44: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e40) {
            ctx->pc = 0x2E6F38u;
            goto label_2e6f38;
        }
    }
    ctx->pc = 0x2E6E48u;
    // 0x2e6e48: 0x33c40084  andi        $a0, $fp, 0x84
    ctx->pc = 0x2e6e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6e4c: 0x2453bc08  addiu       $s3, $v0, -0x43F8
    ctx->pc = 0x2e6e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949896));
    // 0x2e6e50: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x2e6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x2e6e54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e58: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2E6E58u;
    SET_GPR_U32(ctx, 31, 0x2E6E60u);
    ctx->pc = 0x2E6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E58u;
    // 0x2e6e5c: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2E6E58u, 0x2E6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E60u;
label_2e6e60:
    // 0x2e6e60: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2E6E60u;
    {
        const bool branch_taken_0x2e6e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E60u;
        // 0x2e6e64: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e60) {
            ctx->pc = 0x2E6FB8u;
            goto label_2e6fb8;
        }
    }
    ctx->pc = 0x2E6E68u;
label_2e6e68:
    // 0x2e6e68: 0x33c50084  andi        $a1, $fp, 0x84
    ctx->pc = 0x2e6e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6e6c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6e70: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x2e6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x2e6e74: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2e6e74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6e78: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2e6e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2e6e7c: 0x0  nop
    ctx->pc = 0x2e6e7cu;
    // NOP
label_2e6e80:
    // 0x2e6e80: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x2e6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2e6e84: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e6e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e6e88: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2e6e88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2e6e8c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x2e6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x2e6e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6e94: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2e6e94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6e98: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E6E98u;
    {
        const bool branch_taken_0x2e6e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e98) {
            ctx->pc = 0x2E6E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6e80;
        }
    }
    ctx->pc = 0x2E6EA0u;
    // 0x2e6ea0: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2E6EA0u;
    {
        const bool branch_taken_0x2e6ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EA0u;
        // 0x2e6ea4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ea0) {
            ctx->pc = 0x2E6F84u;
            goto label_2e6f84;
        }
    }
    ctx->pc = 0x2E6EA8u;
    // 0x2e6ea8: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E6EA8u;
    {
        const bool branch_taken_0x2e6ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EA8u;
        // 0x2e6eac: 0x2662ffd8  addiu       $v0, $s3, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ea8) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6EB0u;
    // 0x2e6eb0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e6eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e6eb4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2E6EB4u;
    {
        const bool branch_taken_0x2e6eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EB4u;
        // 0x2e6eb8: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6eb4) {
            ctx->pc = 0x2E6F84u;
            goto label_2e6f84;
        }
    }
    ctx->pc = 0x2E6EBCu;
label_2e6ebc:
    // 0x2e6ebc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E6EBCu;
    {
        const bool branch_taken_0x2e6ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EBCu;
        // 0x2e6ec0: 0x33c30084  andi        $v1, $fp, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ebc) {
            ctx->pc = 0x2E6F18u;
            goto label_2e6f18;
        }
    }
    ctx->pc = 0x2E6EC4u;
    // 0x2e6ec4: 0x33c20084  andi        $v0, $fp, 0x84
    ctx->pc = 0x2e6ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6ec8: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6ecc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2e6ed0: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6ed4: 0x0  nop
    ctx->pc = 0x2e6ed4u;
    // NOP
label_2e6ed8:
    // 0x2e6ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6edc: 0xc0b8a0c  jal         func_2E2830
    ctx->pc = 0x2E6EDCu;
    SET_GPR_U32(ctx, 31, 0x2E6EE4u);
    ctx->pc = 0x2E6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EDCu;
    // 0x2e6ee0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2830u, 0x2E6EDCu, 0x2E6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EE4u;
label_2e6ee4:
    // 0x2e6ee4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e6ee8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2e6eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6ef4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e6ef8: 0xc0b8898  jal         func_2E2260
    ctx->pc = 0x2E6EF8u;
    SET_GPR_U32(ctx, 31, 0x2E6F00u);
    ctx->pc = 0x2E6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EF8u;
    // 0x2e6efc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2260u, 0x2E6EF8u, 0x2E6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F00u;
label_2e6f00:
    // 0x2e6f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f04: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2e6f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e6f08: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E6F08u;
    {
        const bool branch_taken_0x2e6f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F08u;
        // 0x2e6f0c: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f08) {
            ctx->pc = 0x2E6ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6ed8;
        }
    }
    ctx->pc = 0x2E6F10u;
    // 0x2e6f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6F10u;
    {
        const bool branch_taken_0x2e6f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F10u;
        // 0x2e6f14: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f10) {
            ctx->pc = 0x2E6F2Cu;
            goto label_2e6f2c;
        }
    }
    ctx->pc = 0x2E6F18u;
label_2e6f18:
    // 0x2e6f18: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6f1c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x2e6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x2e6f20: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2e6f20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6f24: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x2e6f24u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x2e6f28: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2e6f2c:
    // 0x2e6f2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6f30: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6F30u;
    {
        const bool branch_taken_0x2e6f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F30u;
        // 0x2e6f34: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f30) {
            ctx->pc = 0x2E6F84u;
            goto label_2e6f84;
        }
    }
    ctx->pc = 0x2E6F38u;
label_2e6f38:
    // 0x2e6f38: 0x33c40084  andi        $a0, $fp, 0x84
    ctx->pc = 0x2e6f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6f3c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6f40: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x2e6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x2e6f44: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2e6f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e6f48:
    // 0x2e6f48: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2e6f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2e6f4c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e6f50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e6f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6f54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e6f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e6f58: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e6f5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e6f60: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x2e6f60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x2e6f64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e6f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6f68: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E6F68u;
    {
        const bool branch_taken_0x2e6f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F68u;
        // 0x2e6f6c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f68) {
            ctx->pc = 0x2E6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6f48;
        }
    }
    ctx->pc = 0x2E6F70u;
    // 0x2e6f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6F70u;
    {
        const bool branch_taken_0x2e6f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F70u;
        // 0x2e6f74: 0x2662ffd8  addiu       $v0, $s3, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f70) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6F78u;
label_2e6f78:
    // 0x2e6f78: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6f7c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2e6f80: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e6f84:
    // 0x2e6f84: 0x2662ffd8  addiu       $v0, $s3, -0x28
    ctx->pc = 0x2e6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967256));
label_2e6f88:
    // 0x2e6f88: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e6f8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6F8Cu;
    {
        const bool branch_taken_0x2e6f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F8Cu;
        // 0x2e6f90: 0xafb600ac  sw          $s6, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f8c) {
            ctx->pc = 0x2E6FB8u;
            goto label_2e6fb8;
        }
    }
    ctx->pc = 0x2E6F94u;
label_2e6f94:
    // 0x2e6f94: 0x12e00135  beqz        $s7, . + 4 + (0x135 << 2)
    ctx->pc = 0x2E6F94u;
    {
        const bool branch_taken_0x2e6f94 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f94) {
            ctx->pc = 0x2E746Cu;
            goto label_2e746c;
        }
    }
    ctx->pc = 0x2E6F9Cu;
    // 0x2e6f9c: 0x33c40084  andi        $a0, $fp, 0x84
    ctx->pc = 0x2e6f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2e6fa0: 0xa3b70050  sb          $s7, 0x50($sp)
    ctx->pc = 0x2e6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e6fa4: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2e6fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6fa8: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2e6fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6fac: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e6facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e6fb0: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2e6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_2e6fb4:
    // 0x2e6fb4: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x2e6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_2e6fb8:
    // 0x2e6fb8: 0x8fb600ac  lw          $s6, 0xAC($sp)
    ctx->pc = 0x2e6fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e6fbc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2e6fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e6fc0: 0x83a30090  lb          $v1, 0x90($sp)
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6fc4: 0x2c5102a  slt         $v0, $s6, $a1
    ctx->pc = 0x2e6fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e6fc8: 0x93a40090  lbu         $a0, 0x90($sp)
    ctx->pc = 0x2e6fc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6fcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6FCCu;
    {
        const bool branch_taken_0x2e6fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FCCu;
        // 0x2e6fd0: 0xa2b00b  movn        $s6, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fcc) {
            ctx->pc = 0x2E6FDCu;
            goto label_2e6fdc;
        }
    }
    ctx->pc = 0x2E6FD4u;
    // 0x2e6fd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6FD4u;
    {
        const bool branch_taken_0x2e6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD4u;
        // 0x2e6fd8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fd4) {
            ctx->pc = 0x2E6FE4u;
            goto label_2e6fe4;
        }
    }
    ctx->pc = 0x2E6FDCu;
label_2e6fdc:
    // 0x2e6fdc: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2e6fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2e6fe0: 0x56b021  addu        $s6, $v0, $s6
    ctx->pc = 0x2e6fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2e6fe4:
    // 0x2e6fe4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2e6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2e6fe8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E6FE8u;
    {
        const bool branch_taken_0x2e6fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FE8u;
        // 0x2e6fec: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fe8) {
            ctx->pc = 0x2E70C8u;
            goto label_2e70c8;
        }
    }
    ctx->pc = 0x2E6FF0u;
    // 0x2e6ff0: 0x768023  subu        $s0, $v1, $s6
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2e6ff4: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E6FF4u;
    {
        const bool branch_taken_0x2e6ff4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FF4u;
        // 0x2e6ff8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ff4) {
            ctx->pc = 0x2E70C8u;
            goto label_2e70c8;
        }
    }
    ctx->pc = 0x2E6FFCu;
    // 0x2e6ffc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E6FFCu;
    {
        const bool branch_taken_0x2e6ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FFCu;
        // 0x2e7000: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ffc) {
            ctx->pc = 0x2E7070u;
            goto label_2e7070;
        }
    }
    ctx->pc = 0x2E7004u;
    // 0x2e7004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7004u;
    {
        const bool branch_taken_0x2e7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7004u;
        // 0x2e7008: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7004) {
            ctx->pc = 0x2E7014u;
            goto label_2e7014;
        }
    }
    ctx->pc = 0x2E700Cu;
    // 0x2e700c: 0x0  nop
    ctx->pc = 0x2e700cu;
    // NOP
label_2e7010:
    // 0x2e7010: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7014:
    // 0x2e7014: 0x24c4bbb0  addiu       $a0, $a2, -0x4450
    ctx->pc = 0x2e7014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x2e7018: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e7018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2e701c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e701cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e7020: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7028: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e702c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e7030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7034: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e7034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e7038: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7038u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e703c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E703Cu;
    {
        const bool branch_taken_0x2e703c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E703Cu;
        // 0x2e7040: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e703c) {
            ctx->pc = 0x2E7060u;
            goto label_2e7060;
        }
    }
    ctx->pc = 0x2E7044u;
    // 0x2e7044: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e7044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e7048: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e704c: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E704Cu;
    SET_GPR_U32(ctx, 31, 0x2E7054u);
    ctx->pc = 0x2E7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E704Cu;
    // 0x2e7050: 0x7fa600c0  sq          $a2, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E704Cu, 0x2E7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7054u;
label_2e7054:
    // 0x2e7054: 0x1440010d  bnez        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x2E7054u;
    {
        const bool branch_taken_0x2e7054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7054u;
        // 0x2e7058: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7054) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E705Cu;
    // 0x2e705c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2e705cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e7060:
    // 0x2e7060: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e7064: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e7064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e7068: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E7068u;
    {
        const bool branch_taken_0x2e7068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7068u;
        // 0x2e706c: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7068) {
            ctx->pc = 0x2E7010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7010;
        }
    }
    ctx->pc = 0x2E7070u;
label_2e7070:
    // 0x2e7070: 0x24c2bbb0  addiu       $v0, $a2, -0x4450
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x2e7074: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2e7074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2e7078: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e7078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e707c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7080: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7084: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e708c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e7090: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7090u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7094: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e7094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e7098: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7098u;
    {
        const bool branch_taken_0x2e7098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7098u;
        // 0x2e709c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7098) {
            ctx->pc = 0x2E70C0u;
            goto label_2e70c0;
        }
    }
    ctx->pc = 0x2E70A0u;
    // 0x2e70a0: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e70a4: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E70A4u;
    SET_GPR_U32(ctx, 31, 0x2E70ACu);
    ctx->pc = 0x2E70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70A4u;
    // 0x2e70a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E70A4u, 0x2E70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70ACu;
label_2e70ac:
    // 0x2e70ac: 0x144000f7  bnez        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2E70ACu;
    {
        const bool branch_taken_0x2e70ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70ACu;
        // 0x2e70b0: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70ac) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E70B4u;
    // 0x2e70b4: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x2e70b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e70b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E70B8u;
    {
        const bool branch_taken_0x2e70b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B8u;
        // 0x2e70bc: 0x93a40090  lbu         $a0, 0x90($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70b8) {
            ctx->pc = 0x2E70C8u;
            goto label_2e70c8;
        }
    }
    ctx->pc = 0x2E70C0u;
label_2e70c0:
    // 0x2e70c0: 0x93a40090  lbu         $a0, 0x90($sp)
    ctx->pc = 0x2e70c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e70c4: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e70c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2e70c8:
    // 0x2e70c8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E70C8u;
    {
        const bool branch_taken_0x2e70c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C8u;
        // 0x2e70cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70c8) {
            ctx->pc = 0x2E7108u;
            goto label_2e7108;
        }
    }
    ctx->pc = 0x2E70D0u;
    // 0x2e70d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e70d4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e70d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2e70d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e70dc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e70dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e70e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e70e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e70ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e70f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e70f4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e70f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e70f8: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E70F8u;
    {
        const bool branch_taken_0x2e70f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70F8u;
        // 0x2e70fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70f8) {
            ctx->pc = 0x2E716Cu;
            goto label_2e716c;
        }
    }
    ctx->pc = 0x2E7100u;
    // 0x2e7100: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7100u;
    {
        const bool branch_taken_0x2e7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7100u;
        // 0x2e7104: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7100) {
            ctx->pc = 0x2E7154u;
            goto label_2e7154;
        }
    }
    ctx->pc = 0x2E7108u;
label_2e7108:
    // 0x2e7108: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2e7108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2e710c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E710Cu;
    {
        const bool branch_taken_0x2e710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E710Cu;
        // 0x2e7110: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e710c) {
            ctx->pc = 0x2E7170u;
            goto label_2e7170;
        }
    }
    ctx->pc = 0x2E7114u;
    // 0x2e7114: 0xa3b70081  sb          $s7, 0x81($sp)
    ctx->pc = 0x2e7114u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 23));
    // 0x2e7118: 0xa3a30080  sb          $v1, 0x80($sp)
    ctx->pc = 0x2e7118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e711c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7120: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2e7120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e7124: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e7124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e7128: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2e7128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2e712c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e712cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7130: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e7130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7134: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7138: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e7138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e713c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7140: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2e7140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2e7144: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x2e7144u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7148: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7148u;
    {
        const bool branch_taken_0x2e7148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7148) {
            ctx->pc = 0x2E716Cu;
            goto label_2e716c;
        }
    }
    ctx->pc = 0x2E7150u;
    // 0x2e7150: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2e7154:
    // 0x2e7154: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E7154u;
    SET_GPR_U32(ctx, 31, 0x2E715Cu);
    ctx->pc = 0x2E7158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7154u;
    // 0x2e7158: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E7154u, 0x2E715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E715Cu;
label_2e715c:
    // 0x2e715c: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2E715Cu;
    {
        const bool branch_taken_0x2e715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E715Cu;
        // 0x2e7160: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e715c) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E7164u;
    // 0x2e7164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7164u;
    {
        const bool branch_taken_0x2e7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7164u;
        // 0x2e7168: 0x27b10018  addiu       $s1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7164) {
            ctx->pc = 0x2E7170u;
            goto label_2e7170;
        }
    }
    ctx->pc = 0x2E716Cu;
label_2e716c:
    // 0x2e716c: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e716cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2e7170:
    // 0x2e7170: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2e7174: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e7178: 0x14820034  bne         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E7178u;
    {
        const bool branch_taken_0x2e7178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7178) {
            ctx->pc = 0x2E724Cu;
            goto label_2e724c;
        }
    }
    ctx->pc = 0x2E7180u;
    // 0x2e7180: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2e7180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2e7184: 0xb68023  subu        $s0, $a1, $s6
    ctx->pc = 0x2e7184u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2e7188: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E7188u;
    {
        const bool branch_taken_0x2e7188 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7188) {
            ctx->pc = 0x2E7248u;
            goto label_2e7248;
        }
    }
    ctx->pc = 0x2E7190u;
    // 0x2e7190: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E7190u;
    {
        const bool branch_taken_0x2e7190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7190u;
        // 0x2e7194: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7190) {
            ctx->pc = 0x2E71F8u;
            goto label_2e71f8;
        }
    }
    ctx->pc = 0x2E7198u;
    // 0x2e7198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7198u;
    {
        const bool branch_taken_0x2e7198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7198u;
        // 0x2e719c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7198) {
            ctx->pc = 0x2E71A4u;
            goto label_2e71a4;
        }
    }
    ctx->pc = 0x2E71A0u;
label_2e71a0:
    // 0x2e71a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e71a4:
    // 0x2e71a4: 0x26e4bbc0  addiu       $a0, $s7, -0x4440
    ctx->pc = 0x2e71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949824));
    // 0x2e71a8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e71a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2e71ac: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e71acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e71b0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e71b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e71b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e71bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e71c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e71c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e71c8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e71c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e71cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E71CCu;
    {
        const bool branch_taken_0x2e71cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71CCu;
        // 0x2e71d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71cc) {
            ctx->pc = 0x2E71E8u;
            goto label_2e71e8;
        }
    }
    ctx->pc = 0x2E71D4u;
    // 0x2e71d4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e71d8: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E71D8u;
    SET_GPR_U32(ctx, 31, 0x2E71E0u);
    ctx->pc = 0x2E71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71D8u;
    // 0x2e71dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E71D8u, 0x2E71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71E0u;
label_2e71e0:
    // 0x2e71e0: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2E71E0u;
    {
        const bool branch_taken_0x2e71e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71E0u;
        // 0x2e71e4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71e0) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E71E8u;
label_2e71e8:
    // 0x2e71e8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e71e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e71ec: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e71ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e71f0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E71F0u;
    {
        const bool branch_taken_0x2e71f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F0u;
        // 0x2e71f4: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71f0) {
            ctx->pc = 0x2E71A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e71a0;
        }
    }
    ctx->pc = 0x2E71F8u;
label_2e71f8:
    // 0x2e71f8: 0x26e2bbc0  addiu       $v0, $s7, -0x4440
    ctx->pc = 0x2e71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949824));
    // 0x2e71fc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2e71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2e7200: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e7200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e7204: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7208: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e720c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7214: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e7218: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7218u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e721c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e721cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e7220: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7220u;
    {
        const bool branch_taken_0x2e7220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7220u;
        // 0x2e7224: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7220) {
            ctx->pc = 0x2E7244u;
            goto label_2e7244;
        }
    }
    ctx->pc = 0x2E7228u;
    // 0x2e7228: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e7228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e722c: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E722Cu;
    SET_GPR_U32(ctx, 31, 0x2E7234u);
    ctx->pc = 0x2E7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E722Cu;
    // 0x2e7230: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E722Cu, 0x2E7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7234u;
label_2e7234:
    // 0x2e7234: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2E7234u;
    {
        const bool branch_taken_0x2e7234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7234u;
        // 0x2e7238: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7234) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E723Cu;
    // 0x2e723c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E723Cu;
    {
        const bool branch_taken_0x2e723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E723Cu;
        // 0x2e7240: 0x27b10018  addiu       $s1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e723c) {
            ctx->pc = 0x2E7248u;
            goto label_2e7248;
        }
    }
    ctx->pc = 0x2E7244u;
label_2e7244:
    // 0x2e7244: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e7244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2e7248:
    // 0x2e7248: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2e724c:
    // 0x2e724c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2e724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e7250: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2e7250u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7254: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E7254u;
    {
        const bool branch_taken_0x2e7254 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7254u;
        // 0x2e7258: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7254) {
            ctx->pc = 0x2E7318u;
            goto label_2e7318;
        }
    }
    ctx->pc = 0x2E725Cu;
    // 0x2e725c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E725Cu;
    {
        const bool branch_taken_0x2e725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e725c) {
            ctx->pc = 0x2E72C8u;
            goto label_2e72c8;
        }
    }
    ctx->pc = 0x2E7264u;
    // 0x2e7264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7264u;
    {
        const bool branch_taken_0x2e7264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7264u;
        // 0x2e7268: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7264) {
            ctx->pc = 0x2E7274u;
            goto label_2e7274;
        }
    }
    ctx->pc = 0x2E726Cu;
    // 0x2e726c: 0x0  nop
    ctx->pc = 0x2e726cu;
    // NOP
label_2e7270:
    // 0x2e7270: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7274:
    // 0x2e7274: 0x26e4bbc0  addiu       $a0, $s7, -0x4440
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949824));
    // 0x2e7278: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e7278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2e727c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e727cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e7280: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7284: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7288: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e728c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e7290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7294: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e7294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e7298: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7298u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e729c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E729Cu;
    {
        const bool branch_taken_0x2e729c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E729Cu;
        // 0x2e72a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e729c) {
            ctx->pc = 0x2E72B8u;
            goto label_2e72b8;
        }
    }
    ctx->pc = 0x2E72A4u;
    // 0x2e72a4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e72a8: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E72A8u;
    SET_GPR_U32(ctx, 31, 0x2E72B0u);
    ctx->pc = 0x2E72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72A8u;
    // 0x2e72ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E72A8u, 0x2E72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72B0u;
label_2e72b0:
    // 0x2e72b0: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2E72B0u;
    {
        const bool branch_taken_0x2e72b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72B0u;
        // 0x2e72b4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72b0) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E72B8u;
label_2e72b8:
    // 0x2e72b8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e72b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e72bc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e72bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e72c0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E72C0u;
    {
        const bool branch_taken_0x2e72c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C0u;
        // 0x2e72c4: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72c0) {
            ctx->pc = 0x2E7270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7270;
        }
    }
    ctx->pc = 0x2E72C8u;
label_2e72c8:
    // 0x2e72c8: 0x26e2bbc0  addiu       $v0, $s7, -0x4440
    ctx->pc = 0x2e72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949824));
    // 0x2e72cc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2e72d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e72d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e72d8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e72d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e72dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e72e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e72e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e72e8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e72e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e72ec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e72f0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E72F0u;
    {
        const bool branch_taken_0x2e72f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72F0u;
        // 0x2e72f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72f0) {
            ctx->pc = 0x2E7314u;
            goto label_2e7314;
        }
    }
    ctx->pc = 0x2E72F8u;
    // 0x2e72f8: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e72f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e72fc: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E72FCu;
    SET_GPR_U32(ctx, 31, 0x2E7304u);
    ctx->pc = 0x2E7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72FCu;
    // 0x2e7300: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E72FCu, 0x2E7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7304u;
label_2e7304:
    // 0x2e7304: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2E7304u;
    {
        const bool branch_taken_0x2e7304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7304u;
        // 0x2e7308: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7304) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E730Cu;
    // 0x2e730c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E730Cu;
    {
        const bool branch_taken_0x2e730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E730Cu;
        // 0x2e7310: 0x27b10018  addiu       $s1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e730c) {
            ctx->pc = 0x2E7318u;
            goto label_2e7318;
        }
    }
    ctx->pc = 0x2E7314u;
label_2e7314:
    // 0x2e7314: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2e7314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2e7318:
    // 0x2e7318: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2e7318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e731c: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x2e731cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x2e7320: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x2e7320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x2e7324: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2e7324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7328: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e7328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e732c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2e732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7330: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e7330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e7334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7338: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2e7338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e733c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2e733cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7340: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7340u;
    {
        const bool branch_taken_0x2e7340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7340u;
        // 0x2e7344: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7340) {
            ctx->pc = 0x2E735Cu;
            goto label_2e735c;
        }
    }
    ctx->pc = 0x2E7348u;
    // 0x2e7348: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e734c: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E734Cu;
    SET_GPR_U32(ctx, 31, 0x2E7354u);
    ctx->pc = 0x2E7350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E734Cu;
    // 0x2e7350: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E734Cu, 0x2E7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7354u;
label_2e7354:
    // 0x2e7354: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E7354u;
    {
        const bool branch_taken_0x2e7354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7354u;
        // 0x2e7358: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7354) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E735Cu;
label_2e735c:
    // 0x2e735c: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x2e735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
    // 0x2e7360: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E7360u;
    {
        const bool branch_taken_0x2e7360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7360u;
        // 0x2e7364: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7360) {
            ctx->pc = 0x2E7428u;
            goto label_2e7428;
        }
    }
    ctx->pc = 0x2E7368u;
    // 0x2e7368: 0xb68023  subu        $s0, $a1, $s6
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2e736c: 0x1a00002e  blez        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E736Cu;
    {
        const bool branch_taken_0x2e736c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E736Cu;
        // 0x2e7370: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e736c) {
            ctx->pc = 0x2E7428u;
            goto label_2e7428;
        }
    }
    ctx->pc = 0x2E7374u;
    // 0x2e7374: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E7374u;
    {
        const bool branch_taken_0x2e7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7374u;
        // 0x2e7378: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7374) {
            ctx->pc = 0x2E73E8u;
            goto label_2e73e8;
        }
    }
    ctx->pc = 0x2E737Cu;
    // 0x2e737c: 0x0  nop
    ctx->pc = 0x2e737cu;
    // NOP
label_2e7380:
    // 0x2e7380: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e7380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e7384: 0x24c4bbb0  addiu       $a0, $a2, -0x4450
    ctx->pc = 0x2e7384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x2e7388: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2e7388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2e738c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2e738cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2e7390: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2e7394: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e7394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7398: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e739c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e73a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e73a4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e73a8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e73a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e73ac: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E73ACu;
    {
        const bool branch_taken_0x2e73ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73ACu;
        // 0x2e73b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73ac) {
            ctx->pc = 0x2E73D0u;
            goto label_2e73d0;
        }
    }
    ctx->pc = 0x2E73B4u;
    // 0x2e73b4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e73b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e73b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e73b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73bc: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E73BCu;
    SET_GPR_U32(ctx, 31, 0x2E73C4u);
    ctx->pc = 0x2E73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73BCu;
    // 0x2e73c0: 0x7fa600c0  sq          $a2, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E73BCu, 0x2E73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73C4u;
label_2e73c4:
    // 0x2e73c4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E73C4u;
    {
        const bool branch_taken_0x2e73c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73C4u;
        // 0x2e73c8: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73c4) {
            ctx->pc = 0x2E748Cu;
            goto label_2e748c;
        }
    }
    ctx->pc = 0x2E73CCu;
    // 0x2e73cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2e73ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e73d0:
    // 0x2e73d0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2e73d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2e73d4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2e73d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e73d8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E73D8u;
    {
        const bool branch_taken_0x2e73d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D8u;
        // 0x2e73dc: 0x24c2bbb0  addiu       $v0, $a2, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73d8) {
            ctx->pc = 0x2E7380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7380;
        }
    }
    ctx->pc = 0x2E73E0u;
    // 0x2e73e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E73E0u;
    {
        const bool branch_taken_0x2e73e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73E0u;
        // 0x2e73e4: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73e0) {
            ctx->pc = 0x2E73F0u;
            goto label_2e73f0;
        }
    }
    ctx->pc = 0x2E73E8u;
label_2e73e8:
    // 0x2e73e8: 0x24c2bbb0  addiu       $v0, $a2, -0x4450
    ctx->pc = 0x2e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x2e73ec: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2e73ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2e73f0:
    // 0x2e73f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e73f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e73f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e73fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7400: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e7404: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2e7404u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7408: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e7408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e740c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E740Cu;
    {
        const bool branch_taken_0x2e740c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E740Cu;
        // 0x2e7410: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e740c) {
            ctx->pc = 0x2E7428u;
            goto label_2e7428;
        }
    }
    ctx->pc = 0x2E7414u;
    // 0x2e7414: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e7418: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E7418u;
    SET_GPR_U32(ctx, 31, 0x2E7420u);
    ctx->pc = 0x2E741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7418u;
    // 0x2e741c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E7418u, 0x2E7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7420u;
label_2e7420:
    // 0x2e7420: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E7420u;
    {
        const bool branch_taken_0x2e7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7420u;
        // 0x2e7424: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7420) {
            ctx->pc = 0x2E7490u;
            goto label_2e7490;
        }
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2e7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2e742c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x2e742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2e7430: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x2e7430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e7434: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2e7434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7438: 0x2c2200a  movz        $a0, $s6, $v0
    ctx->pc = 0x2e7438u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
    // 0x2e743c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7440: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2e7440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e7444: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7444u;
    {
        const bool branch_taken_0x2e7444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7444u;
        // 0x2e7448: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7444) {
            ctx->pc = 0x2E7460u;
            goto label_2e7460;
        }
    }
    ctx->pc = 0x2E744Cu;
    // 0x2e744c: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2e744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e7450: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E7450u;
    SET_GPR_U32(ctx, 31, 0x2E7458u);
    ctx->pc = 0x2E7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7450u;
    // 0x2e7454: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E7450u, 0x2E7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7458u;
label_2e7458:
    // 0x2e7458: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7458u;
    {
        const bool branch_taken_0x2e7458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7458u;
        // 0x2e745c: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7458) {
            ctx->pc = 0x2E7490u;
            goto label_2e7490;
        }
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e7460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e7464: 0x1000fd5a  b           . + 4 + (-0x2A6 << 2)
    ctx->pc = 0x2E7464u;
    {
        const bool branch_taken_0x2e7464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7464u;
        // 0x2e7468: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7464) {
            ctx->pc = 0x2E69D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E746Cu;
label_2e746c:
    // 0x2e746c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7470u;
        // 0x2e7474: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E7488u;
            goto label_2e7488;
        }
    }
    ctx->pc = 0x2E7478u;
    // 0x2e7478: 0xc0b99e4  jal         func_2E6790
    ctx->pc = 0x2E7478u;
    SET_GPR_U32(ctx, 31, 0x2E7480u);
    ctx->pc = 0x2E747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7478u;
    // 0x2e747c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6790u, 0x2E7478u, 0x2E7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7480u;
label_2e7480:
    // 0x2e7480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7480u;
    {
        const bool branch_taken_0x2e7480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7480u;
        // 0x2e7484: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7480) {
            ctx->pc = 0x2E7490u;
            goto label_2e7490;
        }
    }
    ctx->pc = 0x2E7488u;
label_2e7488:
    // 0x2e7488: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e7488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2e748c:
    // 0x2e748c: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2e748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2e7490:
    // 0x2e7490: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2e7490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7494: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2e7494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e7498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e749c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2e749cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2e74a0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2e74a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2e74a4:
    // 0x2e74a4: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2e74a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2e74a8:
    // 0x2e74a8: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x2e74a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e74ac: 0xdfb70140  ld          $s7, 0x140($sp)
    ctx->pc = 0x2e74acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e74b0: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2e74b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e74b4: 0xdfb50120  ld          $s5, 0x120($sp)
    ctx->pc = 0x2e74b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e74b8: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x2e74b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e74bc: 0xdfb30100  ld          $s3, 0x100($sp)
    ctx->pc = 0x2e74bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e74c0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2e74c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e74c4: 0xdfb100e0  ld          $s1, 0xE0($sp)
    ctx->pc = 0x2e74c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e74c8: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2e74c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e74cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E74CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74CCu;
        // 0x2e74d0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E74CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E74D4u;
}
