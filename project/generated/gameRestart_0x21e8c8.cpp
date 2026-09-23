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

// Function: gameRestart
// Address: 0x21e8c8 - 0x21ea90
void gameRestart_0x21e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameRestart_0x21e8c8");
#endif

    switch (ctx->pc) {
        case 0x21e904u: goto label_21e904;
        case 0x21e92cu: goto label_21e92c;
        case 0x21e950u: goto label_21e950;
        case 0x21e998u: goto label_21e998;
        case 0x21e9d8u: goto label_21e9d8;
        case 0x21ea18u: goto label_21ea18;
        case 0x21ea58u: goto label_21ea58;
        default: break;
    }

    ctx->pc = 0x21e8c8u;

    // 0x21e8c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21e8cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e8d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21e8d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21e8dc: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x21e8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x21e8e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21e8e4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x21e8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e8ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21e8f0: 0x2630c4a8  addiu       $s0, $s1, -0x3B58
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21e8f4: 0xaf829dac  sw          $v0, -0x6254($gp)
    ctx->pc = 0x21e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
    // 0x21e8f8: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x21e8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x21e8fc: 0xc0ada06  jal         func_2B6818
    ctx->pc = 0x21E8FCu;
    SET_GPR_U32(ctx, 31, 0x21E904u);
    ctx->pc = 0x21E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8FCu;
    // 0x21e900: 0xaf809da8  sw          $zero, -0x6258($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6818u, 0x21E8FCu, 0x21E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E904u;
label_21e904:
    // 0x21e904: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21e908: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x21e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x21e90c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21e910: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x21e910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x21e914: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21e914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21e918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e91c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x21e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x21e920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e924: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21E924u;
    SET_GPR_U32(ctx, 31, 0x21E92Cu);
    ctx->pc = 0x21E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E924u;
    // 0x21e928: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21E924u, 0x21E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E92Cu;
label_21e92c:
    // 0x21e92c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21e930: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21E930u;
    {
        const bool branch_taken_0x21e930 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E930u;
        // 0x21e934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e930) {
            ctx->pc = 0x21E970u;
            goto label_21e970;
        }
    }
    ctx->pc = 0x21E938u;
    // 0x21e938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21e938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e940: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x21e940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x21e944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21e944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e948: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x21e94c: 0x0  nop
    ctx->pc = 0x21e94cu;
    // NOP
label_21e950:
    // 0x21e950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21e950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21e954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21e958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e95c: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x21e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x21e960: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x21e964: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x21e964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21E968u;
    {
        const bool branch_taken_0x21e968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E968u;
        // 0x21e96c: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e968) {
            ctx->pc = 0x21E950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e950;
        }
    }
    ctx->pc = 0x21E970u;
label_21e970:
    // 0x21e970: 0x2624c4a8  addiu       $a0, $s1, -0x3B58
    ctx->pc = 0x21e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21e974: 0x8e25c4a8  lw          $a1, -0x3B58($s1)
    ctx->pc = 0x21e974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952104)));
    // 0x21e978: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21e978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21e97c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21e980: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x21e980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e984: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E984u;
    {
        const bool branch_taken_0x21e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E984u;
        // 0x21e988: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e984) {
            ctx->pc = 0x21E9B8u;
            goto label_21e9b8;
        }
    }
    ctx->pc = 0x21E98Cu;
    // 0x21e98c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21e98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e990: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21e990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e994: 0x24c80031  addiu       $t0, $a2, 0x31
    ctx->pc = 0x21e994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 49));
label_21e998:
    // 0x21e998: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x21e99c: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x21e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x21e9a0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x21e9a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e9a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21e9a8: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x21e9a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x21e9ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e9b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21E9B0u;
    {
        const bool branch_taken_0x21e9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9B0u;
        // 0x21e9b4: 0xacc2006c  sw          $v0, 0x6C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9b0) {
            ctx->pc = 0x21E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e998;
        }
    }
    ctx->pc = 0x21E9B8u;
label_21e9b8:
    // 0x21e9b8: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21e9bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21e9c0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x21E9C0u;
    {
        const bool branch_taken_0x21e9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9C0u;
        // 0x21e9c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9c0) {
            ctx->pc = 0x21EA78u;
            goto label_21ea78;
        }
    }
    ctx->pc = 0x21E9C8u;
    // 0x21e9c8: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21E9C8u;
    {
        const bool branch_taken_0x21e9c8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x21e9c8) {
            ctx->pc = 0x21E9FCu;
            goto label_21e9fc;
        }
    }
    ctx->pc = 0x21E9D0u;
    // 0x21e9d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9d4: 0x0  nop
    ctx->pc = 0x21e9d4u;
    // NOP
label_21e9d8:
    // 0x21e9d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21e9dc: 0x0  nop
    ctx->pc = 0x21e9dcu;
    // NOP
    // 0x21e9e0: 0x0  nop
    ctx->pc = 0x21e9e0u;
    // NOP
    // 0x21e9e4: 0x0  nop
    ctx->pc = 0x21e9e4u;
    // NOP
    // 0x21e9e8: 0x0  nop
    ctx->pc = 0x21e9e8u;
    // NOP
    // 0x21e9ec: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21E9ECu;
    {
        const bool branch_taken_0x21e9ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e9ec) {
            ctx->pc = 0x21E9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e9d8;
        }
    }
    ctx->pc = 0x21E9F4u;
    // 0x21e9f4: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21e9f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_21e9fc:
    // 0x21e9fc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E9FCu;
    {
        const bool branch_taken_0x21e9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9FCu;
        // 0x21ea00: 0x8e62c4a8  lw          $v0, -0x3B58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9fc) {
            ctx->pc = 0x21EA74u;
            goto label_21ea74;
        }
    }
    ctx->pc = 0x21EA04u;
    // 0x21ea04: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21EA04u;
    {
        const bool branch_taken_0x21ea04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA04u;
        // 0x21ea08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea04) {
            ctx->pc = 0x21EA38u;
            goto label_21ea38;
        }
    }
    ctx->pc = 0x21EA0Cu;
    // 0x21ea0c: 0x8e25c4a8  lw          $a1, -0x3B58($s1)
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952104)));
    // 0x21ea10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21ea10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea14: 0x0  nop
    ctx->pc = 0x21ea14u;
    // NOP
label_21ea18:
    // 0x21ea18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21ea1c: 0x0  nop
    ctx->pc = 0x21ea1cu;
    // NOP
    // 0x21ea20: 0x0  nop
    ctx->pc = 0x21ea20u;
    // NOP
    // 0x21ea24: 0x0  nop
    ctx->pc = 0x21ea24u;
    // NOP
    // 0x21ea28: 0x0  nop
    ctx->pc = 0x21ea28u;
    // NOP
    // 0x21ea2c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21EA2Cu;
    {
        const bool branch_taken_0x21ea2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ea2c) {
            ctx->pc = 0x21EA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ea18;
        }
    }
    ctx->pc = 0x21EA34u;
    // 0x21ea34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ea38:
    // 0x21ea38: 0x2623c4a8  addiu       $v1, $s1, -0x3B58
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x21ea3c: 0x8e24c4a8  lw          $a0, -0x3B58($s1)
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952104)));
    // 0x21ea40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21ea44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21ea48: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x21ea48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21ea4c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21EA4Cu;
    {
        const bool branch_taken_0x21ea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA4Cu;
        // 0x21ea50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea4c) {
            ctx->pc = 0x21EA78u;
            goto label_21ea78;
        }
    }
    ctx->pc = 0x21EA54u;
    // 0x21ea54: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x21ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21ea58:
    // 0x21ea58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21ea5c: 0x0  nop
    ctx->pc = 0x21ea5cu;
    // NOP
    // 0x21ea60: 0x0  nop
    ctx->pc = 0x21ea60u;
    // NOP
    // 0x21ea64: 0x0  nop
    ctx->pc = 0x21ea64u;
    // NOP
    // 0x21ea68: 0x0  nop
    ctx->pc = 0x21ea68u;
    // NOP
    // 0x21ea6c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21EA6Cu;
    {
        const bool branch_taken_0x21ea6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ea6c) {
            ctx->pc = 0x21EA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ea58;
        }
    }
    ctx->pc = 0x21EA74u;
label_21ea74:
    // 0x21ea74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21ea78:
    // 0x21ea78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21ea78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ea7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ea7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ea80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21ea80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ea84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ea84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ea88: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA88u;
        // 0x21ea8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA90u;
}
