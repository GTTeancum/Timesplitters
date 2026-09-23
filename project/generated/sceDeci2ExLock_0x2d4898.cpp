#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceDeci2ExLock_0x2d4898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceDeci2ExLock_0x2d4898");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceDeci2ExLock(rdram, ctx, runtime); 
}
