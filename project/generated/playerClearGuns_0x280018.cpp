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

// Function: playerClearGuns
// Address: 0x280018 - 0x2800fc
void playerClearGuns_0x280018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerClearGuns_0x280018");
#endif

    switch (ctx->pc) {
        case 0x280050u: goto label_280050;
        case 0x280068u: goto label_280068;
        case 0x280074u: goto label_280074;
        case 0x280098u: goto label_280098;
        case 0x2800b0u: goto label_2800b0;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800dcu: goto label_2800dc;
        default: break;
    }

    ctx->pc = 0x280018u;

    // 0x280018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28001c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280028: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x280028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28002c: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x28002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x280030: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x280030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x280034: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x280034u;
    {
        const bool branch_taken_0x280034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280034u;
        // 0x280038: 0x8c510160  lw          $s1, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280034) {
            ctx->pc = 0x280078u;
            goto label_280078;
        }
    }
    ctx->pc = 0x28003Cu;
    // 0x28003c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x28003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x280040: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280040u;
    {
        const bool branch_taken_0x280040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280040) {
            ctx->pc = 0x280044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280040u;
            // 0x280044: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280058u;
            goto label_280058;
        }
    }
    ctx->pc = 0x280048u;
    // 0x280048: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x280048u;
    SET_GPR_U32(ctx, 31, 0x280050u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x280048u, 0x280050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280050u;
label_280050:
    // 0x280050: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x280050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x280054: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x280054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_280058:
    // 0x280058: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280058u;
    {
        const bool branch_taken_0x280058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280058) {
            ctx->pc = 0x28006Cu;
            goto label_28006c;
        }
    }
    ctx->pc = 0x280060u;
    // 0x280060: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x280060u;
    SET_GPR_U32(ctx, 31, 0x280068u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x280060u, 0x280068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280068u;
label_280068:
    // 0x280068: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x280068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_28006c:
    // 0x28006c: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x28006Cu;
    SET_GPR_U32(ctx, 31, 0x280074u);
    ctx->pc = 0x280070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28006Cu;
    // 0x280070: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x28006Cu, 0x280074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280074u;
label_280074:
    // 0x280074: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x280074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
label_280078:
    // 0x280078: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x280078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x28007c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x28007Cu;
    {
        const bool branch_taken_0x28007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28007c) {
            ctx->pc = 0x280080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28007Cu;
            // 0x280080: 0xae000198  sw          $zero, 0x198($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800C4u;
            goto label_2800c4;
        }
    }
    ctx->pc = 0x280084u;
    // 0x280084: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x280084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x280088: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280088u;
    {
        const bool branch_taken_0x280088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280088) {
            ctx->pc = 0x28008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280088u;
            // 0x28008c: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800A0u;
            goto label_2800a0;
        }
    }
    ctx->pc = 0x280090u;
    // 0x280090: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x280090u;
    SET_GPR_U32(ctx, 31, 0x280098u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x280090u, 0x280098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280098u;
label_280098:
    // 0x280098: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x280098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x28009c: 0x8e0402e8  lw          $a0, 0x2E8($s0)
    ctx->pc = 0x28009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
label_2800a0:
    // 0x2800a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2800A0u;
    {
        const bool branch_taken_0x2800a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2800a0) {
            ctx->pc = 0x2800B4u;
            goto label_2800b4;
        }
    }
    ctx->pc = 0x2800A8u;
    // 0x2800a8: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2800A8u;
    SET_GPR_U32(ctx, 31, 0x2800B0u);
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2800A8u, 0x2800B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800B0u;
label_2800b0:
    // 0x2800b0: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x2800b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
label_2800b4:
    // 0x2800b4: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2800B4u;
    SET_GPR_U32(ctx, 31, 0x2800BCu);
    ctx->pc = 0x2800B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800B4u;
    // 0x2800b8: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2800B4u, 0x2800BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x2800bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x2800c0: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x2800c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
label_2800c4:
    // 0x2800c4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x2800c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x2800c8: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x2800c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x2800cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2800ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800d0: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x2800d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x2800d4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2800D4u;
    SET_GPR_U32(ctx, 31, 0x2800DCu);
    ctx->pc = 0x2800D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800D4u;
    // 0x2800d8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2800D4u, 0x2800DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800DCu;
label_2800dc:
    // 0x2800dc: 0x2624017c  addiu       $a0, $s1, 0x17C
    ctx->pc = 0x2800dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    // 0x2800e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2800e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2800e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2800e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2800ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2800f0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2800f4: 0x80b9583  j           func_2E560C
    ctx->pc = 0x2800F4u;
    ctx->pc = 0x2800F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800F4u;
    // 0x2800f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x2800FCu;
}
