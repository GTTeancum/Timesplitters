// In-list tokens: see ts_list_tokens.h. Week 0: off.
#include "ts_list_tokens.h"

#include "runtime/ps2_vif1_records.h"

namespace
{
    TsListTokenExecutor s_executors[kTsListKinds] = {};
}

bool tsListTokensEnabled(uint8_t *rdram, uint32_t gp)
{
    (void)rdram;
    (void)gp;
    return false; // C-VIF: frame build open, list pointer inside a list buffer, gp-0x4B50 == 0, run-table room
}

uint32_t tsListTokenWrite(uint8_t *rdram, uint32_t gp, uint8_t listKind, const void *info)
{
    (void)rdram;
    (void)gp;
    (void)listKind;
    (void)info;
    return UINT32_MAX;
}

void tsListTokenRegisterExecutor(uint8_t listKind, TsListTokenExecutor fn)
{
    if (listKind != 0u && listKind < kTsListKinds)
        s_executors[listKind] = fn;
}

TsListTokenExecutor tsListTokenExecutor(uint8_t listKind)
{
    return listKind < kTsListKinds ? s_executors[listKind] : nullptr;
}
