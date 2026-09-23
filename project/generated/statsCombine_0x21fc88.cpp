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

// Function: statsCombine
// Address: 0x21fc88 - 0x21ffb0
void statsCombine_0x21fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsCombine_0x21fc88");
#endif

    switch (ctx->pc) {
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fcf4u: goto label_21fcf4;
        case 0x21fd34u: goto label_21fd34;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd50u: goto label_21fd50;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fedcu: goto label_21fedc;
        default: break;
    }

    ctx->pc = 0x21fc88u;

    // 0x21fc88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21fc8c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21fc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21fc90: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x21fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21fc94: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21fc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21fc98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21fc9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fca0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x21fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x21fca4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x21fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x21fca8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x21fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x21fcac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21fcb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21fcb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21fcb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21fcbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21fcc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FCC0u;
    {
        const bool branch_taken_0x21fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCC0u;
        // 0x21fcc4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcc0) {
            ctx->pc = 0x21FCE0u;
            goto label_21fce0;
        }
    }
    ctx->pc = 0x21FCC8u;
    // 0x21fcc8: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x21fcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x21fccc: 0x2610c168  addiu       $s0, $s0, -0x3E98
    ctx->pc = 0x21fcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951272));
    // 0x21fcd0: 0xc088020  jal         func_220080
    ctx->pc = 0x21FCD0u;
    SET_GPR_U32(ctx, 31, 0x21FCD8u);
    ctx->pc = 0x21FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCD0u;
    // 0x21fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220080u, 0x21FCD0u, 0x21FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD8u;
label_21fcd8:
    // 0x21fcd8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x21FCD8u;
    {
        const bool branch_taken_0x21fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCD8u;
        // 0x21fcdc: 0xaf90b714  sw          $s0, -0x48EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948628), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcd8) {
            ctx->pc = 0x21FF80u;
            goto label_21ff80;
        }
    }
    ctx->pc = 0x21FCE0u;
label_21fce0:
    // 0x21fce0: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x21fce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21fce4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21FCE4u;
    {
        const bool branch_taken_0x21fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCE4u;
        // 0x21fce8: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fce4) {
            ctx->pc = 0x21FD24u;
            goto label_21fd24;
        }
    }
    ctx->pc = 0x21FCECu;
    // 0x21fcec: 0xc08828c  jal         func_220A30
    ctx->pc = 0x21FCECu;
    SET_GPR_U32(ctx, 31, 0x21FCF4u);
    ctx->pc = 0x21FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCECu;
    // 0x21fcf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x21FCECu, 0x21FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCF4u;
label_21fcf4:
    // 0x21fcf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcf8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FCF8u;
    {
        const bool branch_taken_0x21fcf8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x21FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF8u;
        // 0x21fcfc: 0x24030b78  addiu       $v1, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcf8) {
            ctx->pc = 0x21FD10u;
            goto label_21fd10;
        }
    }
    ctx->pc = 0x21FD00u;
    // 0x21fd00: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x21fd04: 0x2442c168  addiu       $v0, $v0, -0x3E98
    ctx->pc = 0x21fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x21fd08: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x21FD08u;
    {
        const bool branch_taken_0x21fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD08u;
        // 0x21fd0c: 0xaf82b714  sw          $v0, -0x48EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd08) {
            ctx->pc = 0x21FF80u;
            goto label_21ff80;
        }
    }
    ctx->pc = 0x21FD10u;
label_21fd10:
    // 0x21fd10: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x21fd14: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x21fd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21fd18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21fd1c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x21FD1Cu;
    {
        const bool branch_taken_0x21fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD1Cu;
        // 0x21fd20: 0x24420084  addiu       $v0, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd1c) {
            ctx->pc = 0x21FF4Cu;
            goto label_21ff4c;
        }
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21fd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd28: 0x2444c168  addiu       $a0, $v0, -0x3E98
    ctx->pc = 0x21fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x21fd2c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x21FD2Cu;
    SET_GPR_U32(ctx, 31, 0x21FD34u);
    ctx->pc = 0x21FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD2Cu;
    // 0x21fd30: 0x24060af4  addiu       $a2, $zero, 0xAF4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x21FD2Cu, 0x21FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD34u;
label_21fd34:
    // 0x21fd34: 0x1ac00083  blez        $s6, . + 4 + (0x83 << 2)
    ctx->pc = 0x21FD34u;
    {
        const bool branch_taken_0x21fd34 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x21FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD34u;
        // 0x21fd38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd34) {
            ctx->pc = 0x21FF44u;
            goto label_21ff44;
        }
    }
    ctx->pc = 0x21FD3Cu;
    // 0x21fd3c: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x21fd3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x21fd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd44: 0x0  nop
    ctx->pc = 0x21fd44u;
    // NOP
label_21fd48:
    // 0x21fd48: 0xc08828c  jal         func_220A30
    ctx->pc = 0x21FD48u;
    SET_GPR_U32(ctx, 31, 0x21FD50u);
    ctx->pc = 0x21FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD48u;
    // 0x21fd4c: 0x26170001  addiu       $s7, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x21FD48u, 0x21FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD50u;
label_21fd50:
    // 0x21fd50: 0x2414004f  addiu       $s4, $zero, 0x4F
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x21fd54: 0x24050b78  addiu       $a1, $zero, 0xB78
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x21fd58: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x21fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x21fd5c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x21fd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21fd60: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x21fd64: 0x2465c168  addiu       $a1, $v1, -0x3E98
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951272));
    // 0x21fd68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21fd6c: 0x24950084  addiu       $s5, $a0, 0x84
    ctx->pc = 0x21fd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x21fd70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd74: 0x0  nop
    ctx->pc = 0x21fd74u;
    // NOP
label_21fd78:
    // 0x21fd78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fd7c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x21fd7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x21fd80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21fd84: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21fd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21fd8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21fd90: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21FD90u;
    {
        const bool branch_taken_0x21fd90 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x21FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD90u;
        // 0x21fd94: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd90) {
            ctx->pc = 0x21FD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fd78;
        }
    }
    ctx->pc = 0x21FD98u;
    // 0x21fd98: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x21fd9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21fd9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fda0: 0x244dc2a8  addiu       $t5, $v0, -0x3D58
    ctx->pc = 0x21fda0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951592));
    // 0x21fda4: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x21fda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21fda8: 0x28c1818  mult        $v1, $s4, $t4
    ctx->pc = 0x21fda8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21fdac: 0x0  nop
    ctx->pc = 0x21fdacu;
    // NOP
label_21fdb0:
    // 0x21fdb0: 0x268b0001  addiu       $t3, $s4, 0x1
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21fdb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21fdb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdb8: 0x6d3821  addu        $a3, $v1, $t5
    ctx->pc = 0x21fdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x21fdbc: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x21fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x21fdc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21fdc4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x21fdc8: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x21fdcc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fdd0: 0x246a0014  addiu       $t2, $v1, 0x14
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x21fdd4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21fdd8: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21fddc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21fde0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21fde4: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x21fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x21fde8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21fdec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21fdf0: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x21fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x21fdf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21fdf8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21fdfc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x21fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_21fe00:
    // 0x21fe00: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x21fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21fe04: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FE04u;
    {
        const bool branch_taken_0x21fe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe04) {
            ctx->pc = 0x21FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE04u;
            // 0x21fe08: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE28u;
            goto label_21fe28;
        }
    }
    ctx->pc = 0x21FE0Cu;
    // 0x21fe0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21fe10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE10u;
    {
        const bool branch_taken_0x21fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE10u;
        // 0x21fe14: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe10) {
            ctx->pc = 0x21FE20u;
            goto label_21fe20;
        }
    }
    ctx->pc = 0x21FE18u;
    // 0x21fe18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE18u;
    {
        const bool branch_taken_0x21fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe18) {
            ctx->pc = 0x21FE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE18u;
            // 0x21fe1c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE28u;
            goto label_21fe28;
        }
    }
    ctx->pc = 0x21FE20u;
label_21fe20:
    // 0x21fe20: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21fe24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21fe24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21fe28:
    // 0x21fe28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x21fe2c: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x21fe2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21fe30: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x21FE30u;
    {
        const bool branch_taken_0x21fe30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE30u;
        // 0x21fe34: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe30) {
            ctx->pc = 0x21FE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe00;
        }
    }
    ctx->pc = 0x21FE38u;
    // 0x21fe38: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x21fe3c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x21fe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21fe40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe44: 0x0  nop
    ctx->pc = 0x21fe44u;
    // NOP
label_21fe48:
    // 0x21fe48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fe4c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FE4Cu;
    {
        const bool branch_taken_0x21fe4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe4c) {
            ctx->pc = 0x21FE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE4Cu;
            // 0x21fe50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE70u;
            goto label_21fe70;
        }
    }
    ctx->pc = 0x21FE54u;
    // 0x21fe54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fe58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE58u;
    {
        const bool branch_taken_0x21fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe58) {
            ctx->pc = 0x21FE68u;
            goto label_21fe68;
        }
    }
    ctx->pc = 0x21FE60u;
    // 0x21fe60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE60u;
    {
        const bool branch_taken_0x21fe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe60) {
            ctx->pc = 0x21FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE60u;
            // 0x21fe64: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE70u;
            goto label_21fe70;
        }
    }
    ctx->pc = 0x21FE68u;
label_21fe68:
    // 0x21fe68: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x21fe6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21fe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21fe70:
    // 0x21fe70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21fe74: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x21fe74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21fe78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x21FE78u;
    {
        const bool branch_taken_0x21fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE78u;
        // 0x21fe7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe78) {
            ctx->pc = 0x21FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe48;
        }
    }
    ctx->pc = 0x21FE80u;
    // 0x21fe80: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x21fe80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe84: 0x2a82001e  slti        $v0, $s4, 0x1E
    ctx->pc = 0x21fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21fe88: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x21FE88u;
    {
        const bool branch_taken_0x21fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE88u;
        // 0x21fe8c: 0x28c1818  mult        $v1, $s4, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe88) {
            ctx->pc = 0x21FDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fdb0;
        }
    }
    ctx->pc = 0x21FE90u;
    // 0x21fe90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21fe90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe94: 0x0  nop
    ctx->pc = 0x21fe94u;
    // NOP
label_21fe98:
    // 0x21fe98: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x21fe9c: 0x27c2c6e0  addiu       $v0, $fp, -0x3920
    ctx->pc = 0x21fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952672));
    // 0x21fea0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x21fea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fea4: 0x24630578  addiu       $v1, $v1, 0x578
    ctx->pc = 0x21fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1400));
    // 0x21fea8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21feac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FEACu;
    {
        const bool branch_taken_0x21feac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEACu;
        // 0x21feb0: 0x2a39021  addu        $s2, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feac) {
            ctx->pc = 0x21FEC0u;
            goto label_21fec0;
        }
    }
    ctx->pc = 0x21FEB4u;
    // 0x21feb4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x21feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21feb8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21FEB8u;
    {
        const bool branch_taken_0x21feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEB8u;
        // 0x21febc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feb8) {
            ctx->pc = 0x21FF1Cu;
            goto label_21ff1c;
        }
    }
    ctx->pc = 0x21FEC0u;
label_21fec0:
    // 0x21fec0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21fec4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FF24u;
            goto label_21ff24;
        }
    }
    ctx->pc = 0x21FECCu;
    // 0x21fecc: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x21feccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21fed0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fed4: 0xc087cac  jal         func_21F2B0
    ctx->pc = 0x21FED4u;
    SET_GPR_U32(ctx, 31, 0x21FEDCu);
    ctx->pc = 0x21FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FED4u;
    // 0x21fed8: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2B0u, 0x21FED4u, 0x21FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEDCu;
label_21fedc:
    // 0x21fedc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21fee0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x21fee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21fee4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21FEE4u;
    {
        const bool branch_taken_0x21fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEE4u;
        // 0x21fee8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fee4) {
            ctx->pc = 0x21FF14u;
            goto label_21ff14;
        }
    }
    ctx->pc = 0x21FEECu;
    // 0x21feec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21feecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fef0: 0x24420aa0  addiu       $v0, $v0, 0xAA0
    ctx->pc = 0x21fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2720));
    // 0x21fef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fefc: 0x800008  jr          $a0
    ctx->pc = 0x21FEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FF04u: goto label_21ff04;
            case 0x21FF0Cu: goto label_21ff0c;
            case 0x21FF14u: goto label_21ff14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FEFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21FF04u;
label_21ff04:
    // 0x21ff04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21FF04u;
    {
        const bool branch_taken_0x21ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF04u;
        // 0x21ff08: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff04) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FF0Cu;
label_21ff0c:
    // 0x21ff0c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x21ff0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21ff10:
    // 0x21ff10: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x21ff10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_21ff14:
    // 0x21ff14: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x21ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x21ff18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21ff1c:
    // 0x21ff1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21ff20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21ff24:
    // 0x21ff24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ff24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21ff28: 0x2a82001b  slti        $v0, $s4, 0x1B
    ctx->pc = 0x21ff28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x21ff2c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x21FF2Cu;
    {
        const bool branch_taken_0x21ff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF2Cu;
        // 0x21ff30: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff2c) {
            ctx->pc = 0x21FE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe98;
        }
    }
    ctx->pc = 0x21FF34u;
    // 0x21ff34: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x21ff34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff38: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x21ff38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x21ff3c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x21FF3Cu;
    {
        const bool branch_taken_0x21ff3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF3Cu;
        // 0x21ff40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff3c) {
            ctx->pc = 0x21FD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fd48;
        }
    }
    ctx->pc = 0x21FF44u;
label_21ff44:
    // 0x21ff44: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x21ff48: 0x2462c168  addiu       $v0, $v1, -0x3E98
    ctx->pc = 0x21ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951272));
label_21ff4c:
    // 0x21ff4c: 0xaf82b714  sw          $v0, -0x48EC($gp)
    ctx->pc = 0x21ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948628), GPR_U32(ctx, 2));
    // 0x21ff50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21ff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ff54: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x21ff54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ff58: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21ff58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ff5c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21ff5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ff60: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21ff60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ff64: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21ff64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ff68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21ff68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ff6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ff6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ff70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21ff70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ff74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ff74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ff78: 0x8089542  j           func_225508
    ctx->pc = 0x21FF78u;
    ctx->pc = 0x21FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF78u;
    // 0x21ff7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225508u;
    cheatsUpdate_0x225508(rdram, ctx, runtime); return;
    ctx->pc = 0x21FF80u;
label_21ff80:
    // 0x21ff80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21ff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ff84: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x21ff84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ff88: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21ff88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ff8c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21ff8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ff90: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21ff90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ff94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21ff94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ff98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21ff98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ff9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ff9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ffa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21ffa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ffa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ffa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x21FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FFB0u;
}
