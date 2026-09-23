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

// Function: obRelocate
// Address: 0x25e930 - 0x25ea78
void obRelocate_0x25e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obRelocate_0x25e930");
#endif

    switch (ctx->pc) {
        case 0x25e950u: goto label_25e950;
        default: break;
    }

    ctx->pc = 0x25e930u;

    // 0x25e930: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e934: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25e938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e93c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25e93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e940: 0x1860004b  blez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x25E940u;
    {
        const bool branch_taken_0x25e940 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E940u;
        // 0x25e944: 0x824023  subu        $t0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e940) {
            ctx->pc = 0x25EA70u;
            goto label_25ea70;
        }
    }
    ctx->pc = 0x25E948u;
    // 0x25e948: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x25e948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e94c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x25e94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25e950:
    // 0x25e950: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x25e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x25e954: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E954u;
    {
        const bool branch_taken_0x25e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E954u;
        // 0x25e958: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e954) {
            ctx->pc = 0x25E960u;
            goto label_25e960;
        }
    }
    ctx->pc = 0x25E95Cu;
    // 0x25e95c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x25e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_25e960:
    // 0x25e960: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x25e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x25e964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E964u;
    {
        const bool branch_taken_0x25e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E964u;
        // 0x25e968: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e964) {
            ctx->pc = 0x25E970u;
            goto label_25e970;
        }
    }
    ctx->pc = 0x25E96Cu;
    // 0x25e96c: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x25e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_25e970:
    // 0x25e970: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x25e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x25e974: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E974u;
    {
        const bool branch_taken_0x25e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E974u;
        // 0x25e978: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e974) {
            ctx->pc = 0x25E980u;
            goto label_25e980;
        }
    }
    ctx->pc = 0x25E97Cu;
    // 0x25e97c: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x25e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_25e980:
    // 0x25e980: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x25e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x25e984: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E984u;
    {
        const bool branch_taken_0x25e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E984u;
        // 0x25e988: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e984) {
            ctx->pc = 0x25E990u;
            goto label_25e990;
        }
    }
    ctx->pc = 0x25E98Cu;
    // 0x25e98c: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x25e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_25e990:
    // 0x25e990: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x25e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x25e994: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E994u;
    {
        const bool branch_taken_0x25e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E994u;
        // 0x25e998: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e994) {
            ctx->pc = 0x25E9A0u;
            goto label_25e9a0;
        }
    }
    ctx->pc = 0x25E99Cu;
    // 0x25e99c: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x25e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
label_25e9a0:
    // 0x25e9a0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x25e9a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E9A4u;
    {
        const bool branch_taken_0x25e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9A4u;
        // 0x25e9a8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9a4) {
            ctx->pc = 0x25E9B0u;
            goto label_25e9b0;
        }
    }
    ctx->pc = 0x25E9ACu;
    // 0x25e9ac: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x25e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
label_25e9b0:
    // 0x25e9b0: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x25e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x25e9b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E9B4u;
    {
        const bool branch_taken_0x25e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9B4u;
        // 0x25e9b8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9b4) {
            ctx->pc = 0x25E9C0u;
            goto label_25e9c0;
        }
    }
    ctx->pc = 0x25E9BCu;
    // 0x25e9bc: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x25e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
label_25e9c0:
    // 0x25e9c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x25e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x25e9c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E9C4u;
    {
        const bool branch_taken_0x25e9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9C4u;
        // 0x25e9c8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9c4) {
            ctx->pc = 0x25E9D4u;
            goto label_25e9d4;
        }
    }
    ctx->pc = 0x25E9CCu;
    // 0x25e9cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25e9d0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x25e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_25e9d4:
    // 0x25e9d4: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x25e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x25e9d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E9D8u;
    {
        const bool branch_taken_0x25e9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9D8u;
        // 0x25e9dc: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9d8) {
            ctx->pc = 0x25E9E4u;
            goto label_25e9e4;
        }
    }
    ctx->pc = 0x25E9E0u;
    // 0x25e9e0: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x25e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
label_25e9e4:
    // 0x25e9e4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x25e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x25e9e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E9E8u;
    {
        const bool branch_taken_0x25e9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9E8u;
        // 0x25e9ec: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9e8) {
            ctx->pc = 0x25E9F4u;
            goto label_25e9f4;
        }
    }
    ctx->pc = 0x25E9F0u;
    // 0x25e9f0: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x25e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_25e9f4:
    // 0x25e9f4: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x25e9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e9f8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x25e9fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x25ea00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA00u;
    {
        const bool branch_taken_0x25ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA00u;
        // 0x25ea04: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea00) {
            ctx->pc = 0x25EA0Cu;
            goto label_25ea0c;
        }
    }
    ctx->pc = 0x25EA08u;
    // 0x25ea08: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x25ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_25ea0c:
    // 0x25ea0c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x25ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x25ea10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA10u;
    {
        const bool branch_taken_0x25ea10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA10u;
        // 0x25ea14: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea10) {
            ctx->pc = 0x25EA1Cu;
            goto label_25ea1c;
        }
    }
    ctx->pc = 0x25EA18u;
    // 0x25ea18: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x25ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_25ea1c:
    // 0x25ea1c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x25ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x25ea20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA20u;
    {
        const bool branch_taken_0x25ea20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA20u;
        // 0x25ea24: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea20) {
            ctx->pc = 0x25EA2Cu;
            goto label_25ea2c;
        }
    }
    ctx->pc = 0x25EA28u;
    // 0x25ea28: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x25ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_25ea2c:
    // 0x25ea2c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x25ea30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA30u;
    {
        const bool branch_taken_0x25ea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA30u;
        // 0x25ea34: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea30) {
            ctx->pc = 0x25EA3Cu;
            goto label_25ea3c;
        }
    }
    ctx->pc = 0x25EA38u;
    // 0x25ea38: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x25ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_25ea3c:
    // 0x25ea3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25ea40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA40u;
    {
        const bool branch_taken_0x25ea40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA40u;
        // 0x25ea44: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea40) {
            ctx->pc = 0x25EA4Cu;
            goto label_25ea4c;
        }
    }
    ctx->pc = 0x25EA48u;
    // 0x25ea48: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x25ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_25ea4c:
    // 0x25ea4c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x25ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25ea50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EA50u;
    {
        const bool branch_taken_0x25ea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA50u;
        // 0x25ea54: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea50) {
            ctx->pc = 0x25EA5Cu;
            goto label_25ea5c;
        }
    }
    ctx->pc = 0x25EA58u;
    // 0x25ea58: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x25ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_25ea5c:
    // 0x25ea5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25ea5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25ea60: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x25ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x25ea64: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x25ea64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25ea68: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x25EA68u;
    {
        const bool branch_taken_0x25ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA68u;
        // 0x25ea6c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea68) {
            ctx->pc = 0x25E950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e950;
        }
    }
    ctx->pc = 0x25EA70u;
label_25ea70:
    // 0x25ea70: 0x3e00008  jr          $ra
    ctx->pc = 0x25EA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA78u;
}
