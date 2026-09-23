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

// Function: chrAvail
// Address: 0x224c00 - 0x224d58
void chrAvail_0x224c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrAvail_0x224c00");
#endif

    switch (ctx->pc) {
        case 0x224c40u: goto label_224c40;
        case 0x224c80u: goto label_224c80;
        case 0x224c98u: goto label_224c98;
        case 0x224cb0u: goto label_224cb0;
        case 0x224cc8u: goto label_224cc8;
        case 0x224ce0u: goto label_224ce0;
        case 0x224cf8u: goto label_224cf8;
        case 0x224d00u: goto label_224d00;
        case 0x224d10u: goto label_224d10;
        case 0x224d40u: goto label_224d40;
        default: break;
    }

    ctx->pc = 0x224c00u;

    // 0x224c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x224c04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224c08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x224c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224c0c: 0x244231d8  addiu       $v0, $v0, 0x31D8
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12760));
    // 0x224c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x224c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x224c18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x224c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224c1c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x224c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x224c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224c24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224c28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224c2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224C2Cu;
    {
        const bool branch_taken_0x224c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C2Cu;
        // 0x224c30: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c2c) {
            ctx->pc = 0x224C48u;
            goto label_224c48;
        }
    }
    ctx->pc = 0x224C34u;
    // 0x224c34: 0x8043df8a  lb          $v1, -0x2076($v0)
    ctx->pc = 0x224c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958986)));
    // 0x224c38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224C38u;
    {
        const bool branch_taken_0x224c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C38u;
        // 0x224c3c: 0x2623ffec  addiu       $v1, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c38) {
            ctx->pc = 0x224C4Cu;
            goto label_224c4c;
        }
    }
    ctx->pc = 0x224C40u;
label_224c40:
    // 0x224c40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x224C40u;
    {
        const bool branch_taken_0x224c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C40u;
        // 0x224c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c40) {
            ctx->pc = 0x224D40u;
            goto label_224d40;
        }
    }
    ctx->pc = 0x224C48u;
label_224c48:
    // 0x224c48: 0x2623ffec  addiu       $v1, $s1, -0x14
    ctx->pc = 0x224c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_224c4c:
    // 0x224c4c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x224c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x224c50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x224C50u;
    {
        const bool branch_taken_0x224c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C50u;
        // 0x224c54: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c50) {
            ctx->pc = 0x224CE8u;
            goto label_224ce8;
        }
    }
    ctx->pc = 0x224C58u;
    // 0x224c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224c5c: 0x24420b10  addiu       $v0, $v0, 0xB10
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x224c60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224c64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224c68: 0x800008  jr          $a0
    ctx->pc = 0x224C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224C70u: goto label_224c70;
            case 0x224C88u: goto label_224c88;
            case 0x224CA0u: goto label_224ca0;
            case 0x224CB8u: goto label_224cb8;
            case 0x224CD0u: goto label_224cd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224C70u;
label_224c70:
    // 0x224c70: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c78: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224C78u;
    SET_GPR_U32(ctx, 31, 0x224C80u);
    ctx->pc = 0x224C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C78u;
    // 0x224c7c: 0x248436d8  addiu       $a0, $a0, 0x36D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224C78u, 0x224C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C80u;
label_224c80:
    // 0x224c80: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x224C80u;
    {
        const bool branch_taken_0x224c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C80u;
        // 0x224c84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c80) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224C88u;
label_224c88:
    // 0x224c88: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c90: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224C90u;
    SET_GPR_U32(ctx, 31, 0x224C98u);
    ctx->pc = 0x224C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C90u;
    // 0x224c94: 0x248436e8  addiu       $a0, $a0, 0x36E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224C90u, 0x224C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C98u;
label_224c98:
    // 0x224c98: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x224C98u;
    {
        const bool branch_taken_0x224c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C98u;
        // 0x224c9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c98) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224CA0u;
label_224ca0:
    // 0x224ca0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ca8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224CA8u;
    SET_GPR_U32(ctx, 31, 0x224CB0u);
    ctx->pc = 0x224CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CA8u;
    // 0x224cac: 0x248436f8  addiu       $a0, $a0, 0x36F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224CA8u, 0x224CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CB0u;
label_224cb0:
    // 0x224cb0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x224CB0u;
    {
        const bool branch_taken_0x224cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CB0u;
        // 0x224cb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cb0) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224CB8u;
label_224cb8:
    // 0x224cb8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc0: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224CC0u;
    SET_GPR_U32(ctx, 31, 0x224CC8u);
    ctx->pc = 0x224CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CC0u;
    // 0x224cc4: 0x24843708  addiu       $a0, $a0, 0x3708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224CC0u, 0x224CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CC8u;
label_224cc8:
    // 0x224cc8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x224CC8u;
    {
        const bool branch_taken_0x224cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CC8u;
        // 0x224ccc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cc8) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224CD0u;
label_224cd0:
    // 0x224cd0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cd8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224CD8u;
    SET_GPR_U32(ctx, 31, 0x224CE0u);
    ctx->pc = 0x224CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CD8u;
    // 0x224cdc: 0x24843718  addiu       $a0, $a0, 0x3718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224CD8u, 0x224CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CE0u;
label_224ce0:
    // 0x224ce0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x224CE0u;
    {
        const bool branch_taken_0x224ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE0u;
        // 0x224ce4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ce0) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224CE8u;
label_224ce8:
    // 0x224ce8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x224cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cf0: 0x24523f24  addiu       $s2, $v0, 0x3F24
    ctx->pc = 0x224cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16164));
    // 0x224cf4: 0x0  nop
    ctx->pc = 0x224cf4u;
    // NOP
label_224cf8:
    // 0x224cf8: 0xc0893c8  jal         func_224F20
    ctx->pc = 0x224CF8u;
    SET_GPR_U32(ctx, 31, 0x224D00u);
    ctx->pc = 0x224CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CF8u;
    // 0x224cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F20u, 0x224CF8u, 0x224D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D00u;
label_224d00:
    // 0x224d00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224D00u;
    {
        const bool branch_taken_0x224d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D00u;
        // 0x224d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d00) {
            ctx->pc = 0x224D28u;
            goto label_224d28;
        }
    }
    ctx->pc = 0x224D08u;
    // 0x224d08: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x224d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d0c: 0x0  nop
    ctx->pc = 0x224d0cu;
    // NOP
label_224d10:
    // 0x224d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224d14: 0x1051ffca  beq         $v0, $s1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x224D14u;
    {
        const bool branch_taken_0x224d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x224D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D14u;
        // 0x224d18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d14) {
            ctx->pc = 0x224C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224c40;
        }
    }
    ctx->pc = 0x224D1Cu;
    // 0x224d1c: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x224d20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x224D20u;
    {
        const bool branch_taken_0x224d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D20u;
        // 0x224d24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d20) {
            ctx->pc = 0x224D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224d10;
        }
    }
    ctx->pc = 0x224D28u;
label_224d28:
    // 0x224d28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x224d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x224d2c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x224d30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x224D30u;
    {
        const bool branch_taken_0x224d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D30u;
        // 0x224d34: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d30) {
            ctx->pc = 0x224CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224cf8;
        }
    }
    ctx->pc = 0x224D38u;
    // 0x224d38: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x224D38u;
    SET_GPR_U32(ctx, 31, 0x224D40u);
    ctx->pc = 0x224D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D38u;
    // 0x224d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x224D38u, 0x224D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D40u;
label_224d40:
    // 0x224d40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_224d44:
    // 0x224d44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x224d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224d48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x224d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224d50: 0x3e00008  jr          $ra
    ctx->pc = 0x224D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D50u;
        // 0x224d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224D58u;
}
