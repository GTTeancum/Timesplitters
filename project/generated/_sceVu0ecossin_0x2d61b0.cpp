#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void _sceVu0ecossin_0x2d61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sceVu0ecossin_0x2d61b0");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceVu0ecossin(rdram, ctx, runtime); 
}
