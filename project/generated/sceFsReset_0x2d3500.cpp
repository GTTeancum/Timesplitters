#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceFsReset_0x2d3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceFsReset_0x2d3500");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceFsReset(rdram, ctx, runtime); 
}
