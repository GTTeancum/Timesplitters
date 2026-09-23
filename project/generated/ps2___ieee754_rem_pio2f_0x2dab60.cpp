#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void ps2___ieee754_rem_pio2f_0x2dab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2f_0x2dab60");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime); 
}
