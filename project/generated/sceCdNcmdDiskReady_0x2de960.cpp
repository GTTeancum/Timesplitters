#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceCdNcmdDiskReady_0x2de960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceCdNcmdDiskReady_0x2de960");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceCdNcmdDiskReady(rdram, ctx, runtime); 
}
