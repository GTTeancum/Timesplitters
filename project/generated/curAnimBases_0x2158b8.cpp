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

// Function: curAnimBases
// Address: 0x2158b8 - 0x215a10
void curAnimBases_0x2158b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnimBases_0x2158b8");
#endif

    switch (ctx->pc) {
        case 0x215918u: goto label_215918;
        case 0x21595cu: goto label_21595c;
        default: break;
    }

    ctx->pc = 0x2158b8u;

    // 0x2158b8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2158bc: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2158BCu;
    {
        const bool branch_taken_0x2158bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158bc) {
            ctx->pc = 0x2158C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158BCu;
            // 0x2158c0: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2159C4u;
            goto label_2159c4;
        }
    }
    ctx->pc = 0x2158C4u;
    // 0x2158c4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2158c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2158c8: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2158C8u;
    {
        const bool branch_taken_0x2158c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2158c8) {
            ctx->pc = 0x2158CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158C8u;
            // 0x2158cc: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2159C4u;
            goto label_2159c4;
        }
    }
    ctx->pc = 0x2158D0u;
    // 0x2158d0: 0x24aafffd  addiu       $t2, $a1, -0x3
    ctx->pc = 0x2158d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x2158d4: 0x2d42000b  sltiu       $v0, $t2, 0xB
    ctx->pc = 0x2158d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2158d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2158D8u;
    {
        const bool branch_taken_0x2158d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D8u;
        // 0x2158dc: 0x24a7ff8f  addiu       $a3, $a1, -0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158d8) {
            ctx->pc = 0x2158F4u;
            goto label_2158f4;
        }
    }
    ctx->pc = 0x2158E0u;
    // 0x2158e0: 0x2ce2000b  sltiu       $v0, $a3, 0xB
    ctx->pc = 0x2158e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2158e4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2158E4u;
    {
        const bool branch_taken_0x2158e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E4u;
        // 0x2158e8: 0x28a90071  slti        $t1, $a1, 0x71 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)113) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158e4) {
            ctx->pc = 0x2159C0u;
            goto label_2159c0;
        }
    }
    ctx->pc = 0x2158ECu;
    // 0x2158ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2158ECu;
    {
        const bool branch_taken_0x2158ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158ec) {
            ctx->pc = 0x2158F8u;
            goto label_2158f8;
        }
    }
    ctx->pc = 0x2158F4u;
label_2158f4:
    // 0x2158f4: 0x28a90071  slti        $t1, $a1, 0x71
    ctx->pc = 0x2158f4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)113) ? 1 : 0);
label_2158f8:
    // 0x2158f8: 0x1520000e  bnez        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2158F8u;
    {
        const bool branch_taken_0x2158f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F8u;
        // 0x2158fc: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158f8) {
            ctx->pc = 0x215934u;
            goto label_215934;
        }
    }
    ctx->pc = 0x215900u;
    // 0x215900: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x215900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x215904: 0x2442ff8f  addiu       $v0, $v0, -0x71
    ctx->pc = 0x215904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967183));
    // 0x215908: 0x2c43014a  sltiu       $v1, $v0, 0x14A
    ctx->pc = 0x215908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)330) ? 1 : 0);
    // 0x21590c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21590Cu;
    {
        const bool branch_taken_0x21590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21590Cu;
        // 0x215910: 0x28a5000e  slti        $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21590c) {
            ctx->pc = 0x215938u;
            goto label_215938;
        }
    }
    ctx->pc = 0x215914u;
    // 0x215914: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x215914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_215918:
    // 0x215918: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x215918u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21591c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21591Cu;
    {
        const bool branch_taken_0x21591c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21591c) {
            ctx->pc = 0x215920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21591Cu;
            // 0x215920: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215924u;
            goto label_215924;
        }
    }
    ctx->pc = 0x215924u;
label_215924:
    // 0x215924: 0x1010  mfhi        $v0
    ctx->pc = 0x215924u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x215928: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x215928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x21592c: 0x3e00008  jr          $ra
    ctx->pc = 0x21592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21592Cu;
        // 0x215930: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215934u;
label_215934:
    // 0x215934: 0x28a5000e  slti        $a1, $a1, 0xE
    ctx->pc = 0x215934u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
label_215938:
    // 0x215938: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x215938u;
    {
        const bool branch_taken_0x215938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x215938) {
            ctx->pc = 0x215978u;
            goto label_215978;
        }
    }
    ctx->pc = 0x215940u;
    // 0x215940: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x215944: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x215944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x215948: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x215948u;
    {
        const bool branch_taken_0x215948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215948u;
        // 0x21594c: 0x2882014d  slti        $v0, $a0, 0x14D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)333) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215948) {
            ctx->pc = 0x215978u;
            goto label_215978;
        }
    }
    ctx->pc = 0x215950u;
    // 0x215950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215950) {
            ctx->pc = 0x215978u;
            goto label_215978;
        }
    }
    ctx->pc = 0x215958u;
    // 0x215958: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_21595c:
    // 0x21595c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21595cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x215960: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215960u;
    {
        const bool branch_taken_0x215960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215960) {
            ctx->pc = 0x215964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215960u;
            // 0x215964: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215968u;
            goto label_215968;
        }
    }
    ctx->pc = 0x215968u;
label_215968:
    // 0x215968: 0x1010  mfhi        $v0
    ctx->pc = 0x215968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21596c: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x21596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x215970: 0x3e00008  jr          $ra
    ctx->pc = 0x215970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215970u;
        // 0x215974: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215978u;
label_215978:
    // 0x215978: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215978u;
    {
        const bool branch_taken_0x215978 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x215978) {
            ctx->pc = 0x215994u;
            goto label_215994;
        }
    }
    ctx->pc = 0x215980u;
    // 0x215980: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x215984: 0x2442ff8f  addiu       $v0, $v0, -0x71
    ctx->pc = 0x215984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967183));
    // 0x215988: 0x2c43014a  sltiu       $v1, $v0, 0x14A
    ctx->pc = 0x215988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)330) ? 1 : 0);
    // 0x21598c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x21598Cu;
    {
        const bool branch_taken_0x21598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21598Cu;
        // 0x215990: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21598c) {
            ctx->pc = 0x215918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215918;
        }
    }
    ctx->pc = 0x215994u;
label_215994:
    // 0x215994: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x215994u;
    {
        const bool branch_taken_0x215994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215994u;
        // 0x215998: 0x2502fe45  addiu       $v0, $t0, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215994) {
            ctx->pc = 0x2159CCu;
            goto label_2159cc;
        }
    }
    ctx->pc = 0x21599Cu;
    // 0x21599c: 0x8cc400a0  lw          $a0, 0xA0($a2)
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2159a0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2159a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2159a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2159A4u;
    {
        const bool branch_taken_0x2159a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159A4u;
        // 0x2159a8: 0x2502fe45  addiu       $v0, $t0, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159a4) {
            ctx->pc = 0x2159CCu;
            goto label_2159cc;
        }
    }
    ctx->pc = 0x2159ACu;
    // 0x2159ac: 0x2882014d  slti        $v0, $a0, 0x14D
    ctx->pc = 0x2159acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)333) ? 1 : 0);
    // 0x2159b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2159B0u;
    {
        const bool branch_taken_0x2159b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159B0u;
        // 0x2159b4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159b0) {
            ctx->pc = 0x2159C8u;
            goto label_2159c8;
        }
    }
    ctx->pc = 0x2159B8u;
    // 0x2159b8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2159B8u;
    {
        const bool branch_taken_0x2159b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159B8u;
        // 0x2159bc: 0x2484fffd  addiu       $a0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159b8) {
            ctx->pc = 0x21595Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21595c;
        }
    }
    ctx->pc = 0x2159C0u;
label_2159c0:
    // 0x2159c0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2159c4:
    // 0x2159c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2159c8:
    // 0x2159c8: 0x2502fe45  addiu       $v0, $t0, -0x1BB
    ctx->pc = 0x2159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966853));
label_2159cc:
    // 0x2159cc: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2159ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2159d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2159D0u;
    {
        const bool branch_taken_0x2159d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159D0u;
        // 0x2159d4: 0x25040026  addiu       $a0, $t0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159d0) {
            ctx->pc = 0x2159E8u;
            goto label_2159e8;
        }
    }
    ctx->pc = 0x2159D8u;
    // 0x2159d8: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2159d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2159dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2159e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2159e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2159e4: 0x83400a  movz        $t0, $a0, $v1
    ctx->pc = 0x2159e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_2159e8:
    // 0x2159e8: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x2159e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2159ec: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2159ECu;
    {
        const bool branch_taken_0x2159ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2159ec) {
            ctx->pc = 0x215A00u;
            goto label_215a00;
        }
    }
    ctx->pc = 0x2159F4u;
    // 0x2159f4: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2159f8: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2159F8u;
    {
        const bool branch_taken_0x2159f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2159f8) {
            ctx->pc = 0x215A08u;
            goto label_215a08;
        }
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0x3e00008  jr          $ra
    ctx->pc = 0x215A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A00u;
        // 0x215a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215A08u;
label_215a08:
    // 0x215a08: 0x3e00008  jr          $ra
    ctx->pc = 0x215A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A08u;
        // 0x215a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215A10u;
}
