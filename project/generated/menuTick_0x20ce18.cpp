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

// Function: menuTick
// Address: 0x20ce18 - 0x20cefc
void menuTick_0x20ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuTick_0x20ce18");
#endif

    switch (ctx->pc) {
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20cea0u: goto label_20cea0;
        case 0x20cea4u: goto label_20cea4;
        case 0x20cea8u: goto label_20cea8;
        case 0x20ceacu: goto label_20ceac;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceb4u: goto label_20ceb4;
        case 0x20ceb8u: goto label_20ceb8;
        case 0x20cebcu: goto label_20cebc;
        case 0x20cec0u: goto label_20cec0;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ceccu: goto label_20cecc;
        case 0x20ced0u: goto label_20ced0;
        case 0x20ced4u: goto label_20ced4;
        case 0x20ced8u: goto label_20ced8;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cee4u: goto label_20cee4;
        case 0x20cee8u: goto label_20cee8;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cef8u: goto label_20cef8;
        default: break;
    }

    ctx->pc = 0x20ce18u;

label_20ce18:
    // 0x20ce18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20ce1c:
    // 0x20ce1c: 0x8f829c68  lw          $v0, -0x6398($gp)
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
label_20ce20:
    // 0x20ce20: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_20ce24:
    if (ctx->pc == 0x20CE24u) {
        ctx->pc = 0x20CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE20u;
        // 0x20ce24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE28u;
        goto label_20ce28;
    }
    ctx->pc = 0x20CE20u;
    {
        const bool branch_taken_0x20ce20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE20u;
        // 0x20ce24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce20) {
            ctx->pc = 0x20CEF0u;
            goto label_20cef0;
        }
    }
    ctx->pc = 0x20CE28u;
label_20ce28:
    // 0x20ce28: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20ce2c:
    // 0x20ce2c: 0xc080e3a  jal         func_2038E8
label_20ce30:
    if (ctx->pc == 0x20CE30u) {
        ctx->pc = 0x20CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE2Cu;
        // 0x20ce30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE34u;
        goto label_20ce34;
    }
    ctx->pc = 0x20CE2Cu;
    SET_GPR_U32(ctx, 31, 0x20CE34u);
    ctx->pc = 0x20CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE2Cu;
    // 0x20ce30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20CE2Cu, 0x20CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20ce38:
    // 0x20ce38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20ce3c:
    if (ctx->pc == 0x20CE3Cu) {
        ctx->pc = 0x20CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE38u;
        // 0x20ce3c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE40u;
        goto label_20ce40;
    }
    ctx->pc = 0x20CE38u;
    {
        const bool branch_taken_0x20ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE38u;
        // 0x20ce3c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce38) {
            ctx->pc = 0x20CE4Cu;
            goto label_20ce4c;
        }
    }
    ctx->pc = 0x20CE40u;
label_20ce40:
    // 0x20ce40: 0xc083288  jal         func_20CA20
label_20ce44:
    if (ctx->pc == 0x20CE44u) {
        ctx->pc = 0x20CE48u;
        goto label_20ce48;
    }
    ctx->pc = 0x20CE40u;
    SET_GPR_U32(ctx, 31, 0x20CE48u);
    ctx->pc = 0x20CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CA20u, 0x20CE40u, 0x20CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE48u;
label_20ce48:
    // 0x20ce48: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20ce4c:
    // 0x20ce4c: 0xc080e3a  jal         func_2038E8
label_20ce50:
    if (ctx->pc == 0x20CE50u) {
        ctx->pc = 0x20CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE4Cu;
        // 0x20ce50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE54u;
        goto label_20ce54;
    }
    ctx->pc = 0x20CE4Cu;
    SET_GPR_U32(ctx, 31, 0x20CE54u);
    ctx->pc = 0x20CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE4Cu;
    // 0x20ce50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20CE4Cu, 0x20CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE54u;
label_20ce54:
    // 0x20ce54: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x20ce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_20ce58:
    // 0x20ce58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20ce5c:
    if (ctx->pc == 0x20CE5Cu) {
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE60u;
        goto label_20ce60;
    }
    ctx->pc = 0x20CE58u;
    {
        const bool branch_taken_0x20ce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce58) {
            ctx->pc = 0x20CE6Cu;
            goto label_20ce6c;
        }
    }
    ctx->pc = 0x20CE60u;
label_20ce60:
    // 0x20ce60: 0xc08326a  jal         func_20C9A8
label_20ce64:
    if (ctx->pc == 0x20CE64u) {
        ctx->pc = 0x20CE68u;
        goto label_20ce68;
    }
    ctx->pc = 0x20CE60u;
    SET_GPR_U32(ctx, 31, 0x20CE68u);
    ctx->pc = 0x20C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C9A8u, 0x20CE60u, 0x20CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE68u;
label_20ce68:
    // 0x20ce68: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20ce6c:
    // 0x20ce6c: 0xc080e3a  jal         func_2038E8
label_20ce70:
    if (ctx->pc == 0x20CE70u) {
        ctx->pc = 0x20CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE6Cu;
        // 0x20ce70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE74u;
        goto label_20ce74;
    }
    ctx->pc = 0x20CE6Cu;
    SET_GPR_U32(ctx, 31, 0x20CE74u);
    ctx->pc = 0x20CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE6Cu;
    // 0x20ce70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20CE6Cu, 0x20CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE74u;
label_20ce74:
    // 0x20ce74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_20ce78:
    // 0x20ce78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_20ce7c:
    if (ctx->pc == 0x20CE7Cu) {
        ctx->pc = 0x20CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE78u;
        // 0x20ce7c: 0x8f829c68  lw          $v0, -0x6398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE80u;
        goto label_20ce80;
    }
    ctx->pc = 0x20CE78u;
    {
        const bool branch_taken_0x20ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE78u;
        // 0x20ce7c: 0x8f829c68  lw          $v0, -0x6398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce78) {
            ctx->pc = 0x20CED0u;
            goto label_20ced0;
        }
    }
    ctx->pc = 0x20CE80u;
label_20ce80:
    // 0x20ce80: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x20ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_20ce84:
    // 0x20ce84: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x20ce84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_20ce88:
    // 0x20ce88: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_20ce8c:
    // 0x20ce8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20ce90:
    if (ctx->pc == 0x20CE90u) {
        ctx->pc = 0x20CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE8Cu;
        // 0x20ce90: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE94u;
        goto label_20ce94;
    }
    ctx->pc = 0x20CE8Cu;
    {
        const bool branch_taken_0x20ce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE8Cu;
        // 0x20ce90: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce8c) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CE94u;
label_20ce94:
    // 0x20ce94: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x20ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20ce98:
    // 0x20ce98: 0x40f809  jalr        $v0
label_20ce9c:
    if (ctx->pc == 0x20CE9Cu) {
        ctx->pc = 0x20CEA0u;
        goto label_20cea0;
    }
    ctx->pc = 0x20CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CEA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE98u, 0x20CEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CEA0u;
label_20cea0:
    // 0x20cea0: 0x1000000c  b           . + 4 + (0xC << 2)
label_20cea4:
    if (ctx->pc == 0x20CEA4u) {
        ctx->pc = 0x20CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEA0u;
        // 0x20cea4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEA8u;
        goto label_20cea8;
    }
    ctx->pc = 0x20CEA0u;
    {
        const bool branch_taken_0x20cea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEA0u;
        // 0x20cea4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cea0) {
            ctx->pc = 0x20CED4u;
            goto label_20ced4;
        }
    }
    ctx->pc = 0x20CEA8u;
label_20cea8:
    // 0x20cea8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20ceac:
    if (ctx->pc == 0x20CEACu) {
        ctx->pc = 0x20CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEA8u;
        // 0x20ceac: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEB0u;
        goto label_20ceb0;
    }
    ctx->pc = 0x20CEA8u;
    {
        const bool branch_taken_0x20cea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEA8u;
        // 0x20ceac: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cea8) {
            ctx->pc = 0x20CEC0u;
            goto label_20cec0;
        }
    }
    ctx->pc = 0x20CEB0u;
label_20ceb0:
    // 0x20ceb0: 0xc083338  jal         func_20CCE0
label_20ceb4:
    if (ctx->pc == 0x20CEB4u) {
        ctx->pc = 0x20CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB0u;
        // 0x20ceb4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEB8u;
        goto label_20ceb8;
    }
    ctx->pc = 0x20CEB0u;
    SET_GPR_U32(ctx, 31, 0x20CEB8u);
    ctx->pc = 0x20CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEB0u;
    // 0x20ceb4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CCE0u, 0x20CEB0u, 0x20CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEB8u;
label_20ceb8:
    // 0x20ceb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_20cebc:
    if (ctx->pc == 0x20CEBCu) {
        ctx->pc = 0x20CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB8u;
        // 0x20cebc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEC0u;
        goto label_20cec0;
    }
    ctx->pc = 0x20CEB8u;
    {
        const bool branch_taken_0x20ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB8u;
        // 0x20cebc: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ceb8) {
            ctx->pc = 0x20CED4u;
            goto label_20ced4;
        }
    }
    ctx->pc = 0x20CEC0u;
label_20cec0:
    // 0x20cec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20cec4:
    if (ctx->pc == 0x20CEC4u) {
        ctx->pc = 0x20CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEC0u;
        // 0x20cec4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEC8u;
        goto label_20cec8;
    }
    ctx->pc = 0x20CEC0u;
    {
        const bool branch_taken_0x20cec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEC0u;
        // 0x20cec4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cec0) {
            ctx->pc = 0x20CED4u;
            goto label_20ced4;
        }
    }
    ctx->pc = 0x20CEC8u;
label_20cec8:
    // 0x20cec8: 0xc083368  jal         func_20CDA0
label_20cecc:
    if (ctx->pc == 0x20CECCu) {
        ctx->pc = 0x20CED0u;
        goto label_20ced0;
    }
    ctx->pc = 0x20CEC8u;
    SET_GPR_U32(ctx, 31, 0x20CED0u);
    ctx->pc = 0x20CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CDA0u, 0x20CEC8u, 0x20CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CED0u;
label_20ced0:
    // 0x20ced0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20ced4:
    // 0x20ced4: 0xc080e3a  jal         func_2038E8
label_20ced8:
    if (ctx->pc == 0x20CED8u) {
        ctx->pc = 0x20CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CED4u;
        // 0x20ced8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEDCu;
        goto label_20cedc;
    }
    ctx->pc = 0x20CED4u;
    SET_GPR_U32(ctx, 31, 0x20CEDCu);
    ctx->pc = 0x20CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CED4u;
    // 0x20ced8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20CED4u, 0x20CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEDCu;
label_20cedc:
    // 0x20cedc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_20cee0:
    // 0x20cee0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20cee4:
    if (ctx->pc == 0x20CEE4u) {
        ctx->pc = 0x20CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE0u;
        // 0x20cee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEE8u;
        goto label_20cee8;
    }
    ctx->pc = 0x20CEE0u;
    {
        const bool branch_taken_0x20cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE0u;
        // 0x20cee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cee0) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CEE8u;
label_20cee8:
    // 0x20cee8: 0x8083368  j           func_20CDA0
label_20ceec:
    if (ctx->pc == 0x20CEECu) {
        ctx->pc = 0x20CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE8u;
        // 0x20ceec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEF0u;
        goto label_20cef0;
    }
    ctx->pc = 0x20CEE8u;
    ctx->pc = 0x20CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEE8u;
    // 0x20ceec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CDA0u;
    menuEnd_0x20cda0(rdram, ctx, runtime); return;
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cef4:
    // 0x20cef4: 0x3e00008  jr          $ra
label_20cef8:
    if (ctx->pc == 0x20CEF8u) {
        ctx->pc = 0x20CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF4u;
        // 0x20cef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEFCu;
        goto label_fallthrough_0x20cef4;
    }
    ctx->pc = 0x20CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEF4u;
        // 0x20cef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cef4:
    ctx->pc = 0x20CEFCu;
}
