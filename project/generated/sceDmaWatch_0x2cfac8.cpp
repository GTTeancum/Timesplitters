#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceDmaWatch_0x2cfac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceDmaWatch_0x2cfac8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceDmaWatch(rdram, ctx, runtime); 
}
