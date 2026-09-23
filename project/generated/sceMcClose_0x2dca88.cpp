#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceMcClose_0x2dca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMcClose_0x2dca88");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMcClose(rdram, ctx, runtime); 
}
