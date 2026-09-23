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

// Function: editTranslate
// Address: 0x265c40 - 0x265dbc
void editTranslate_0x265c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("editTranslate_0x265c40");
#endif

    switch (ctx->pc) {
        case 0x265c64u: goto label_265c64;
        case 0x265c70u: goto label_265c70;
        case 0x265c80u: goto label_265c80;
        case 0x265c9cu: goto label_265c9c;
        case 0x265cd0u: goto label_265cd0;
        case 0x265d04u: goto label_265d04;
        case 0x265d28u: goto label_265d28;
        case 0x265d4cu: goto label_265d4c;
        case 0x265d80u: goto label_265d80;
        default: break;
    }

    ctx->pc = 0x265c40u;

    // 0x265c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x265c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x265c50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x265c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x265c54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x265c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265c5c: 0xc080e18  jal         func_203860
    ctx->pc = 0x265C5Cu;
    SET_GPR_U32(ctx, 31, 0x265C64u);
    ctx->pc = 0x265C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C5Cu;
    // 0x265c60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265C5Cu, 0x265C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C64u;
label_265c64:
    // 0x265c64: 0x30510400  andi        $s1, $v0, 0x400
    ctx->pc = 0x265c64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x265c68: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x265C68u;
    SET_GPR_U32(ctx, 31, 0x265C70u);
    ctx->pc = 0x265C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C68u;
    // 0x265c6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x265C68u, 0x265C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C70u;
label_265c70:
    // 0x265c70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C70u;
    {
        const bool branch_taken_0x265c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265c70) {
            ctx->pc = 0x265C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C70u;
            // 0x265c74: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C8Cu;
            goto label_265c8c;
        }
    }
    ctx->pc = 0x265C78u;
    // 0x265c78: 0xc080e18  jal         func_203860
    ctx->pc = 0x265C78u;
    SET_GPR_U32(ctx, 31, 0x265C80u);
    ctx->pc = 0x265C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C78u;
    // 0x265c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265C78u, 0x265C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C80u;
label_265c80:
    // 0x265c80: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x265c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x265c84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x265C84u;
    {
        const bool branch_taken_0x265c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265c84) {
            ctx->pc = 0x265C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C84u;
            // 0x265c88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C8Cu;
            goto label_265c8c;
        }
    }
    ctx->pc = 0x265C8Cu;
label_265c8c:
    // 0x265c8c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x265C8Cu;
    {
        const bool branch_taken_0x265c8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C8Cu;
        // 0x265c90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c8c) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265C94u;
    // 0x265c94: 0xc080e18  jal         func_203860
    ctx->pc = 0x265C94u;
    SET_GPR_U32(ctx, 31, 0x265C9Cu);
    ctx->pc = 0x265C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C94u;
    // 0x265c98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265C94u, 0x265C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C9Cu;
label_265c9c:
    // 0x265c9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x265c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x265ca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x265CA0u;
    {
        const bool branch_taken_0x265ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ca0) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265CA8u;
    // 0x265ca8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265CA8u;
    {
        const bool branch_taken_0x265ca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x265ca8) {
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265CB0u;
    // 0x265cb0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x265cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265cb4: 0xc78183b8  lwc1        $f1, -0x7C48($gp)
    ctx->pc = 0x265cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265cb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x265cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x265cbc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_265cc0:
    // 0x265cc0: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x265CC0u;
    {
        const bool branch_taken_0x265cc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CC0u;
        // 0x265cc4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cc0) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265CC8u;
    // 0x265cc8: 0xc080e18  jal         func_203860
    ctx->pc = 0x265CC8u;
    SET_GPR_U32(ctx, 31, 0x265CD0u);
    ctx->pc = 0x265CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265CC8u;
    // 0x265ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265CC8u, 0x265CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265CD0u;
label_265cd0:
    // 0x265cd0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x265cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x265cd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x265CD4u;
    {
        const bool branch_taken_0x265cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cd4) {
            ctx->pc = 0x265CF4u;
            goto label_265cf4;
        }
    }
    ctx->pc = 0x265CDCu;
    // 0x265cdc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265CDCu;
    {
        const bool branch_taken_0x265cdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x265cdc) {
            ctx->pc = 0x265CF4u;
            goto label_265cf4;
        }
    }
    ctx->pc = 0x265CE4u;
    // 0x265ce4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x265ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ce8: 0xc78183bc  lwc1        $f1, -0x7C44($gp)
    ctx->pc = 0x265ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265cf0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x265cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_265cf4:
    // 0x265cf4: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x265CF4u;
    {
        const bool branch_taken_0x265cf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CF4u;
        // 0x265cf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cf4) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265CFCu;
    // 0x265cfc: 0xc080e18  jal         func_203860
    ctx->pc = 0x265CFCu;
    SET_GPR_U32(ctx, 31, 0x265D04u);
    ctx->pc = 0x265D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265CFCu;
    // 0x265d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265CFCu, 0x265D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D04u;
label_265d04:
    // 0x265d04: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x265d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x265d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265D08u;
    {
        const bool branch_taken_0x265d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d08) {
            ctx->pc = 0x265D20u;
            goto label_265d20;
        }
    }
    ctx->pc = 0x265D10u;
    // 0x265d10: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d14: 0xc78183c0  lwc1        $f1, -0x7C40($gp)
    ctx->pc = 0x265d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265d18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265d1c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_265d20:
    // 0x265d20: 0xc080e18  jal         func_203860
    ctx->pc = 0x265D20u;
    SET_GPR_U32(ctx, 31, 0x265D28u);
    ctx->pc = 0x265D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265D20u;
    // 0x265d24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265D20u, 0x265D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D28u;
label_265d28:
    // 0x265d28: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x265d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x265d2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265D2Cu;
    {
        const bool branch_taken_0x265d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d2c) {
            ctx->pc = 0x265D44u;
            goto label_265d44;
        }
    }
    ctx->pc = 0x265D34u;
    // 0x265d34: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x265d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d38: 0xc78183c4  lwc1        $f1, -0x7C3C($gp)
    ctx->pc = 0x265d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265d3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x265d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x265d40: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x265d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_265d44:
    // 0x265d44: 0xc080e18  jal         func_203860
    ctx->pc = 0x265D44u;
    SET_GPR_U32(ctx, 31, 0x265D4Cu);
    ctx->pc = 0x265D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265D44u;
    // 0x265d48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265D44u, 0x265D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D4Cu;
label_265d4c:
    // 0x265d4c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x265d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x265d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x265D50u;
    {
        const bool branch_taken_0x265d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d50) {
            ctx->pc = 0x265D70u;
            goto label_265d70;
        }
    }
    ctx->pc = 0x265D58u;
    // 0x265d58: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265D58u;
    {
        const bool branch_taken_0x265d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d58) {
            ctx->pc = 0x265D70u;
            goto label_265d70;
        }
    }
    ctx->pc = 0x265D60u;
    // 0x265d60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x265d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d64: 0xc78183c8  lwc1        $f1, -0x7C38($gp)
    ctx->pc = 0x265d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265d68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265d6c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_265d70:
    // 0x265d70: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x265D70u;
    {
        const bool branch_taken_0x265d70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D70u;
        // 0x265d74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d70) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265D78u;
    // 0x265d78: 0xc080e18  jal         func_203860
    ctx->pc = 0x265D78u;
    SET_GPR_U32(ctx, 31, 0x265D80u);
    ctx->pc = 0x265D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265D78u;
    // 0x265d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x265D78u, 0x265D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D80u;
label_265d80:
    // 0x265d80: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x265d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x265d84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265D84u;
    {
        const bool branch_taken_0x265d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D84u;
        // 0x265d88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d84) {
            ctx->pc = 0x265DA8u;
            goto label_265da8;
        }
    }
    ctx->pc = 0x265D8Cu;
    // 0x265d8c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x265D8Cu;
    {
        const bool branch_taken_0x265d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D8Cu;
        // 0x265d90: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d8c) {
            ctx->pc = 0x265DACu;
            goto label_265dac;
        }
    }
    ctx->pc = 0x265D94u;
    // 0x265d94: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x265d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d98: 0xc78183cc  lwc1        $f1, -0x7C34($gp)
    ctx->pc = 0x265d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265d9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x265d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x265da0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x265da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x265da4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x265da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_265da8:
    // 0x265da8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x265da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_265dac:
    // 0x265dac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x265dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265db4: 0x3e00008  jr          $ra
    ctx->pc = 0x265DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DB4u;
        // 0x265db8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265DBCu;
}
