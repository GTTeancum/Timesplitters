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

// Function: __do_global_dtors
// Address: 0x2e1228 - 0x2e127c
void ps2___do_global_dtors_0x2e1228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x2e1228");
#endif

    switch (ctx->pc) {
        case 0x2e1228u: goto label_2e1228;
        case 0x2e122cu: goto label_2e122c;
        case 0x2e1230u: goto label_2e1230;
        case 0x2e1234u: goto label_2e1234;
        case 0x2e1238u: goto label_2e1238;
        case 0x2e123cu: goto label_2e123c;
        case 0x2e1240u: goto label_2e1240;
        case 0x2e1244u: goto label_2e1244;
        case 0x2e1248u: goto label_2e1248;
        case 0x2e124cu: goto label_2e124c;
        case 0x2e1250u: goto label_2e1250;
        case 0x2e1254u: goto label_2e1254;
        case 0x2e1258u: goto label_2e1258;
        case 0x2e125cu: goto label_2e125c;
        case 0x2e1260u: goto label_2e1260;
        case 0x2e1264u: goto label_2e1264;
        case 0x2e1268u: goto label_2e1268;
        case 0x2e126cu: goto label_2e126c;
        case 0x2e1270u: goto label_2e1270;
        case 0x2e1274u: goto label_2e1274;
        case 0x2e1278u: goto label_2e1278;
        default: break;
    }

    ctx->pc = 0x2e1228u;

label_2e1228:
    // 0x2e1228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e122c:
    // 0x2e122c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2e122cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2e1230:
    // 0x2e1230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e1230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e1234:
    // 0x2e1234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e1238:
    // 0x2e1238: 0x8c823018  lw          $v0, 0x3018($a0)
    ctx->pc = 0x2e1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12312)));
label_2e123c:
    // 0x2e123c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1240:
    // 0x2e1240: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2e1244:
    if (ctx->pc == 0x2E1244u) {
        ctx->pc = 0x2E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1240u;
        // 0x2e1244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1248u;
        goto label_2e1248;
    }
    ctx->pc = 0x2E1240u;
    {
        const bool branch_taken_0x2e1240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1240u;
        // 0x2e1244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1240) {
            ctx->pc = 0x2E126Cu;
            goto label_2e126c;
        }
    }
    ctx->pc = 0x2E1248u;
label_2e1248:
    // 0x2e1248: 0x8e023018  lw          $v0, 0x3018($s0)
    ctx->pc = 0x2e1248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12312)));
label_2e124c:
    // 0x2e124c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2e124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e1250:
    // 0x2e1250: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x2e1250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2e1254:
    // 0x2e1254: 0x60f809  jalr        $v1
label_2e1258:
    if (ctx->pc == 0x2E1258u) {
        ctx->pc = 0x2E1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1254u;
        // 0x2e1258: 0xae023018  sw          $v0, 0x3018($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E125Cu;
        goto label_2e125c;
    }
    ctx->pc = 0x2E1254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E125Cu);
        ctx->pc = 0x2E1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1254u;
        // 0x2e1258: 0xae023018  sw          $v0, 0x3018($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1254u, 0x2E125Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E125Cu;
label_2e125c:
    // 0x2e125c: 0x8e023018  lw          $v0, 0x3018($s0)
    ctx->pc = 0x2e125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12312)));
label_2e1260:
    // 0x2e1260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e1260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1264:
    // 0x2e1264: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e1268:
    if (ctx->pc == 0x2E1268u) {
        ctx->pc = 0x2E1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1264u;
        // 0x2e1268: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E126Cu;
        goto label_2e126c;
    }
    ctx->pc = 0x2E1264u;
    {
        const bool branch_taken_0x2e1264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1264u;
        // 0x2e1268: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1264) {
            ctx->pc = 0x2E1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1250;
        }
    }
    ctx->pc = 0x2E126Cu;
label_2e126c:
    // 0x2e126c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1270:
    // 0x2e1270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1274:
    // 0x2e1274: 0x3e00008  jr          $ra
label_2e1278:
    if (ctx->pc == 0x2E1278u) {
        ctx->pc = 0x2E1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1274u;
        // 0x2e1278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E127Cu;
        goto label_fallthrough_0x2e1274;
    }
    ctx->pc = 0x2E1274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1274u;
        // 0x2e1278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1274:
    ctx->pc = 0x2E127Cu;
}
