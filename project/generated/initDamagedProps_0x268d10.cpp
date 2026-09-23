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

// Function: initDamagedProps
// Address: 0x268d10 - 0x268f00
void initDamagedProps_0x268d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initDamagedProps_0x268d10");
#endif

    switch (ctx->pc) {
        case 0x268ea8u: goto label_268ea8;
        default: break;
    }

    ctx->pc = 0x268d10u;

    // 0x268d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268d14: 0x2402011f  addiu       $v0, $zero, 0x11F
    ctx->pc = 0x268d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x268d18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x268d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268d1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d24: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x268d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268d28: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x268D28u;
    {
        const bool branch_taken_0x268d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D28u;
        // 0x268d2c: 0x28620120  slti        $v0, $v1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)288) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d28) {
            ctx->pc = 0x268EC4u;
            goto label_268ec4;
        }
    }
    ctx->pc = 0x268D30u;
    // 0x268d30: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x268D30u;
    {
        const bool branch_taken_0x268d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D30u;
        // 0x268d34: 0x240200c5  addiu       $v0, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d30) {
            ctx->pc = 0x268D94u;
            goto label_268d94;
        }
    }
    ctx->pc = 0x268D38u;
    // 0x268d38: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x268D38u;
    {
        const bool branch_taken_0x268d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D38u;
        // 0x268d3c: 0x286200c6  slti        $v0, $v1, 0xC6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)198) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d38) {
            ctx->pc = 0x268DF0u;
            goto label_268df0;
        }
    }
    ctx->pc = 0x268D40u;
    // 0x268d40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268D40u;
    {
        const bool branch_taken_0x268d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D40u;
        // 0x268d44: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d40) {
            ctx->pc = 0x268D60u;
            goto label_268d60;
        }
    }
    ctx->pc = 0x268D48u;
    // 0x268d48: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x268D48u;
    {
        const bool branch_taken_0x268d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D48u;
        // 0x268d4c: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d48) {
            ctx->pc = 0x268DF0u;
            goto label_268df0;
        }
    }
    ctx->pc = 0x268D50u;
    // 0x268d50: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x268D50u;
    {
        const bool branch_taken_0x268d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D50u;
        // 0x268d54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d50) {
            ctx->pc = 0x268E14u;
            goto label_268e14;
        }
    }
    ctx->pc = 0x268D58u;
    // 0x268d58: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x268D58u;
    {
        const bool branch_taken_0x268d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D58u;
        // 0x268d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d58) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x268D60u;
label_268d60:
    // 0x268d60: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x268d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x268d64: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x268D64u;
    {
        const bool branch_taken_0x268d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268d64) {
            ctx->pc = 0x268D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268D64u;
            // 0x268d68: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268E18u;
            goto label_268e18;
        }
    }
    ctx->pc = 0x268D6Cu;
    // 0x268d6c: 0x286200c8  slti        $v0, $v1, 0xC8
    ctx->pc = 0x268d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x268d70: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x268D70u;
    {
        const bool branch_taken_0x268d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D70u;
        // 0x268d74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d70) {
            ctx->pc = 0x268EF4u;
            goto label_268ef4;
        }
    }
    ctx->pc = 0x268D78u;
    // 0x268d78: 0x286200cb  slti        $v0, $v1, 0xCB
    ctx->pc = 0x268d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)203) ? 1 : 0);
    // 0x268d7c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x268D7Cu;
    {
        const bool branch_taken_0x268d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D7Cu;
        // 0x268d80: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d7c) {
            ctx->pc = 0x268EF4u;
            goto label_268ef4;
        }
    }
    ctx->pc = 0x268D84u;
    // 0x268d84: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x268d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x268d88: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268d8c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x268D8Cu;
    {
        const bool branch_taken_0x268d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D8Cu;
        // 0x268d90: 0x24424bb8  addiu       $v0, $v0, 0x4BB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d8c) {
            ctx->pc = 0x268E38u;
            goto label_268e38;
        }
    }
    ctx->pc = 0x268D94u;
label_268d94:
    // 0x268d94: 0x28620125  slti        $v0, $v1, 0x125
    ctx->pc = 0x268d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)293) ? 1 : 0);
    // 0x268d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268D98u;
    {
        const bool branch_taken_0x268d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0x28620123  slti        $v0, $v1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d98) {
            ctx->pc = 0x268DB8u;
            goto label_268db8;
        }
    }
    ctx->pc = 0x268DA0u;
    // 0x268da0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x268DA0u;
    {
        const bool branch_taken_0x268da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA0u;
        // 0x268da4: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268da0) {
            ctx->pc = 0x268E28u;
            goto label_268e28;
        }
    }
    ctx->pc = 0x268DA8u;
    // 0x268da8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x268DA8u;
    {
        const bool branch_taken_0x268da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA8u;
        // 0x268dac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268da8) {
            ctx->pc = 0x268E14u;
            goto label_268e14;
        }
    }
    ctx->pc = 0x268DB0u;
    // 0x268db0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x268DB0u;
    {
        const bool branch_taken_0x268db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268db0) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x268DB8u;
label_268db8:
    // 0x268db8: 0x240201a4  addiu       $v0, $zero, 0x1A4
    ctx->pc = 0x268db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x268dbc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x268DBCu;
    {
        const bool branch_taken_0x268dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DBCu;
        // 0x268dc0: 0x286201a5  slti        $v0, $v1, 0x1A5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dbc) {
            ctx->pc = 0x268E54u;
            goto label_268e54;
        }
    }
    ctx->pc = 0x268DC4u;
    // 0x268dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268DC4u;
    {
        const bool branch_taken_0x268dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC4u;
        // 0x268dc8: 0x24020125  addiu       $v0, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc4) {
            ctx->pc = 0x268DDCu;
            goto label_268ddc;
        }
    }
    ctx->pc = 0x268DCCu;
    // 0x268dcc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268DCCu;
    {
        const bool branch_taken_0x268dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DCCu;
        // 0x268dd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dcc) {
            ctx->pc = 0x268E14u;
            goto label_268e14;
        }
    }
    ctx->pc = 0x268DD4u;
    // 0x268dd4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x268DD4u;
    {
        const bool branch_taken_0x268dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DD4u;
        // 0x268dd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dd4) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x268DDCu;
label_268ddc:
    // 0x268ddc: 0x240201a7  addiu       $v0, $zero, 0x1A7
    ctx->pc = 0x268ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x268de0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x268DE0u;
    {
        const bool branch_taken_0x268de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE0u;
        // 0x268de4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268de0) {
            ctx->pc = 0x268E78u;
            goto label_268e78;
        }
    }
    ctx->pc = 0x268DE8u;
    // 0x268de8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x268DE8u;
    {
        const bool branch_taken_0x268de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE8u;
        // 0x268dec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268de8) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x268DF0u;
label_268df0:
    // 0x268df0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x268df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x268df4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x268df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x268df8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x268df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268dfc: 0x244248a8  addiu       $v0, $v0, 0x48A8
    ctx->pc = 0x268dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18600));
    // 0x268e00: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x268e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x268e04: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x268e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x268e08: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x268e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x268e0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x268E0Cu;
    {
        const bool branch_taken_0x268e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E0Cu;
        // 0x268e10: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e0c) {
            ctx->pc = 0x268E48u;
            goto label_268e48;
        }
    }
    ctx->pc = 0x268E14u;
label_268e14:
    // 0x268e14: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x268e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_268e18:
    // 0x268e18: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x268e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x268e1c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x268e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268e20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268E20u;
    {
        const bool branch_taken_0x268e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E20u;
        // 0x268e24: 0x24424998  addiu       $v0, $v0, 0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e20) {
            ctx->pc = 0x268E38u;
            goto label_268e38;
        }
    }
    ctx->pc = 0x268E28u;
label_268e28:
    // 0x268e28: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x268e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x268e2c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x268e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x268e30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x268e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268e34: 0x24424bb0  addiu       $v0, $v0, 0x4BB0
    ctx->pc = 0x268e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19376));
label_268e38:
    // 0x268e38: 0x94a30124  lhu         $v1, 0x124($a1)
    ctx->pc = 0x268e38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x268e3c: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x268e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x268e40: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x268e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x268e44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x268e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_268e48:
    // 0x268e48: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x268e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x268e4c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x268E4Cu;
    {
        const bool branch_taken_0x268e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E4Cu;
        // 0x268e50: 0xa4a30124  sh          $v1, 0x124($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e4c) {
            ctx->pc = 0x268EF0u;
            goto label_268ef0;
        }
    }
    ctx->pc = 0x268E54u;
label_268e54:
    // 0x268e54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x268e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268e58: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x268e5c: 0x24634e50  addiu       $v1, $v1, 0x4E50
    ctx->pc = 0x268e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20048));
    // 0x268e60: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x268e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268e64: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x268e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x268e68: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x268e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x268e6c: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x268e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x268e70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x268E70u;
    {
        const bool branch_taken_0x268e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E70u;
        // 0x268e74: 0x240401a5  addiu       $a0, $zero, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e70) {
            ctx->pc = 0x268E98u;
            goto label_268e98;
        }
    }
    ctx->pc = 0x268E78u;
label_268e78:
    // 0x268e78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x268e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268e7c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x268e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x268e80: 0x24634fe0  addiu       $v1, $v1, 0x4FE0
    ctx->pc = 0x268e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20448));
    // 0x268e84: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x268e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268e88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x268e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x268e8c: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x268e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x268e90: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x268e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x268e94: 0x240401a8  addiu       $a0, $zero, 0x1A8
    ctx->pc = 0x268e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_268e98:
    // 0x268e98: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x268e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x268e9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x268e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x268ea0: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x268EA0u;
    SET_GPR_U32(ctx, 31, 0x268EA8u);
    ctx->pc = 0x268EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EA0u;
    // 0x268ea4: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x268EA0u, 0x268EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EA8u;
label_268ea8:
    // 0x268ea8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x268ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x268eac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x268eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x268eb0: 0x3463ffde  ori         $v1, $v1, 0xFFDE
    ctx->pc = 0x268eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65502);
    // 0x268eb4: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x268eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x268eb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x268eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x268ebc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268EBCu;
    {
        const bool branch_taken_0x268ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EBCu;
        // 0x268ec0: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ebc) {
            ctx->pc = 0x268EF0u;
            goto label_268ef0;
        }
    }
    ctx->pc = 0x268EC4u;
label_268ec4:
    // 0x268ec4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x268ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x268ec8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x268ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x268ecc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x268eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268ed0: 0x24845170  addiu       $a0, $a0, 0x5170
    ctx->pc = 0x268ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20848));
    // 0x268ed4: 0x94a20124  lhu         $v0, 0x124($a1)
    ctx->pc = 0x268ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x268ed8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x268ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x268edc: 0xaf80a360  sw          $zero, -0x5CA0($gp)
    ctx->pc = 0x268edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 0));
    // 0x268ee0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x268ee4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x268ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x268ee8: 0xa4a20124  sh          $v0, 0x124($a1)
    ctx->pc = 0x268ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x268eec: 0xae040180  sw          $a0, 0x180($s0)
    ctx->pc = 0x268eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 4));
label_268ef0:
    // 0x268ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_268ef4:
    // 0x268ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268ef8:
    // 0x268ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x268EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EF8u;
        // 0x268efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F00u;
}
