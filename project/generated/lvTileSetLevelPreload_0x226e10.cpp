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

// Function: lvTileSetLevelPreload
// Address: 0x226e10 - 0x226fd0
void lvTileSetLevelPreload_0x226e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvTileSetLevelPreload_0x226e10");
#endif

    switch (ctx->pc) {
        case 0x226e70u: goto label_226e70;
        case 0x226eb0u: goto label_226eb0;
        case 0x226ec0u: goto label_226ec0;
        case 0x226eecu: goto label_226eec;
        case 0x226efcu: goto label_226efc;
        case 0x226f40u: goto label_226f40;
        default: break;
    }

    ctx->pc = 0x226e10u;

    // 0x226e10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x226e14: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x226e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x226e18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x226e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x226e1c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x226e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x226e20: 0x24b20008  addiu       $s2, $a1, 0x8
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x226e24: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x226e28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x226e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x226e2c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x226e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x226e30: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x226e30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e34: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x226e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x226e38: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x226e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x226e3c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x226e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x226e40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x226e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x226e44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x226e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x226e48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x226e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x226e4c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x226E4Cu;
    {
        const bool branch_taken_0x226e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E4Cu;
        // 0x226e50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e4c) {
            ctx->pc = 0x226FA0u;
            goto label_226fa0;
        }
    }
    ctx->pc = 0x226E54u;
    // 0x226e54: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x226e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e58: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x226e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x226e5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x226e60: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x226e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x226e64: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x226E64u;
    {
        const bool branch_taken_0x226e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E64u;
        // 0x226e68: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e64) {
            ctx->pc = 0x226FA0u;
            goto label_226fa0;
        }
    }
    ctx->pc = 0x226E6Cu;
    // 0x226e6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x226e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_226e70:
    // 0x226e70: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x226e74: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x226e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x226e78: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226E78u;
    {
        const bool branch_taken_0x226e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x226E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E78u;
        // 0x226e7c: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e78) {
            ctx->pc = 0x226E88u;
            goto label_226e88;
        }
    }
    ctx->pc = 0x226E80u;
    // 0x226e80: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x226E80u;
    {
        const bool branch_taken_0x226e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E80u;
        // 0x226e84: 0x8e560004  lw          $s6, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e80) {
            ctx->pc = 0x226F70u;
            goto label_226f70;
        }
    }
    ctx->pc = 0x226E88u;
label_226e88:
    // 0x226e88: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x226e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x226e8c: 0x54820039  bnel        $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x226E8Cu;
    {
        const bool branch_taken_0x226e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x226e8c) {
            ctx->pc = 0x226E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E8Cu;
            // 0x226e90: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F74u;
            goto label_226f74;
        }
    }
    ctx->pc = 0x226E94u;
    // 0x226e94: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x226e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e98: 0x1ac00035  blez        $s6, . + 4 + (0x35 << 2)
    ctx->pc = 0x226E98u;
    {
        const bool branch_taken_0x226e98 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x226E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E98u;
        // 0x226e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e98) {
            ctx->pc = 0x226F70u;
            goto label_226f70;
        }
    }
    ctx->pc = 0x226EA0u;
    // 0x226ea0: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x226ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x226ea4: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x226ea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226ea8: 0x9614000a  lhu         $s4, 0xA($s0)
    ctx->pc = 0x226ea8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x226eac: 0x0  nop
    ctx->pc = 0x226eacu;
    // NOP
label_226eb0:
    // 0x226eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb4: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x226EB4u;
    {
        const bool branch_taken_0x226eb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB4u;
        // 0x226eb8: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226eb4) {
            ctx->pc = 0x226F58u;
            goto label_226f58;
        }
    }
    ctx->pc = 0x226EBCu;
    // 0x226ebc: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x226ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_226ec0:
    // 0x226ec0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x226ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226ec4: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x226ec8: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x226ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x226ecc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226ECCu;
    {
        const bool branch_taken_0x226ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ECCu;
        // 0x226ed0: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ecc) {
            ctx->pc = 0x226F00u;
            goto label_226f00;
        }
    }
    ctx->pc = 0x226ED4u;
    // 0x226ed4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x226ed8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x226ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x226edc: 0x2463832c  addiu       $v1, $v1, -0x7CD4
    ctx->pc = 0x226edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935340));
    // 0x226ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226ee4: 0xc089f08  jal         func_227C20
    ctx->pc = 0x226EE4u;
    SET_GPR_U32(ctx, 31, 0x226EECu);
    ctx->pc = 0x226EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EE4u;
    // 0x226ee8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x226EE4u, 0x226EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EECu;
label_226eec:
    // 0x226eec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226EECu;
    {
        const bool branch_taken_0x226eec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x226eec) {
            ctx->pc = 0x226EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226EECu;
            // 0x226ef0: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F00u;
            goto label_226f00;
        }
    }
    ctx->pc = 0x226EF4u;
    // 0x226ef4: 0xc099c88  jal         func_267220
    ctx->pc = 0x226EF4u;
    SET_GPR_U32(ctx, 31, 0x226EFCu);
    ctx->pc = 0x226EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF4u;
    // 0x226ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x226EF4u, 0x226EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EFCu;
label_226efc:
    // 0x226efc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x226efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_226f00:
    // 0x226f00: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x226f04: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x226f04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x226f08: 0x2483fffb  addiu       $v1, $a0, -0x5
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x226f0c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x226f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x226f10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226F10u;
    {
        const bool branch_taken_0x226f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F10u;
        // 0x226f14: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f10) {
            ctx->pc = 0x226F40u;
            goto label_226f40;
        }
    }
    ctx->pc = 0x226F18u;
    // 0x226f18: 0x2442c50c  addiu       $v0, $v0, -0x3AF4
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952204));
    // 0x226f1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x226f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226f24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226F24u;
    {
        const bool branch_taken_0x226f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F24u;
        // 0x226f28: 0x27c5c4a8  addiu       $a1, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f24) {
            ctx->pc = 0x226F40u;
            goto label_226f40;
        }
    }
    ctx->pc = 0x226F2Cu;
    // 0x226f2c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x226f30: 0x54570004  bnel        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x226F30u;
    {
        const bool branch_taken_0x226f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x226f30) {
            ctx->pc = 0x226F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F30u;
            // 0x226f34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F44u;
            goto label_226f44;
        }
    }
    ctx->pc = 0x226F38u;
    // 0x226f38: 0xc099c88  jal         func_267220
    ctx->pc = 0x226F38u;
    SET_GPR_U32(ctx, 31, 0x226F40u);
    ctx->pc = 0x226F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F38u;
    // 0x226f3c: 0x2484013b  addiu       $a0, $a0, 0x13B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 315));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267220u, 0x226F38u, 0x226F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F40u;
label_226f40:
    // 0x226f40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_226f44:
    // 0x226f44: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x226f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x226f48: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x226F48u;
    {
        const bool branch_taken_0x226f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F48u;
        // 0x226f4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f48) {
            ctx->pc = 0x226EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ec0;
        }
    }
    ctx->pc = 0x226F50u;
    // 0x226f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226F50u;
    {
        const bool branch_taken_0x226f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F50u;
        // 0x226f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f50) {
            ctx->pc = 0x226F60u;
            goto label_226f60;
        }
    }
    ctx->pc = 0x226F58u;
label_226f58:
    // 0x226f58: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226f5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x226f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_226f60:
    // 0x226f60: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x226f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x226f64: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x226F64u;
    {
        const bool branch_taken_0x226f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226f64) {
            ctx->pc = 0x226F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F64u;
            // 0x226f68: 0x9614000a  lhu         $s4, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226eb0;
        }
    }
    ctx->pc = 0x226F6Cu;
    // 0x226f6c: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x226f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_226f70:
    // 0x226f70: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_226f74:
    // 0x226f74: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x226f78: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x226f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x226f7c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x226f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x226f80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226F80u;
    {
        const bool branch_taken_0x226f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F80u;
        // 0x226f84: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f80) {
            ctx->pc = 0x226FA0u;
            goto label_226fa0;
        }
    }
    ctx->pc = 0x226F88u;
    // 0x226f88: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x226f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x226f8c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x226f90: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x226f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x226f94: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x226f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x226f98: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x226F98u;
    {
        const bool branch_taken_0x226f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F98u;
        // 0x226f9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f98) {
            ctx->pc = 0x226E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226e70;
        }
    }
    ctx->pc = 0x226FA0u;
label_226fa0:
    // 0x226fa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x226fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226fa4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x226fa4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226fa8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x226fa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226fac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x226facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226fb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x226fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226fb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x226fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226fb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x226fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226fbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x226fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226fc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x226fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x226FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FC8u;
        // 0x226fcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226FD0u;
}
