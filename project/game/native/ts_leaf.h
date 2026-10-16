// Exact inline leaf cores (src/xbox/PUSH-BC-PLAN.md section 3.6 item 4;
// section 6, I-12; owned by B-LOGIC, sub-owner L1). B-CODEGEN's
// direct_calls.py emits inline calls to the cores listed in
// src/xbox/tools/leaf_whitelist.txt at translated call sites, respecting
// the per-callee observed-register sets of ts_abi_observed.h.
//
// Week 0 (W0-I): the header exists (empty) so that the generated code's
// include and the whitelist tooling have a fixed name; B-LOGIC fills it in
// in week 1.
#pragma once
#include <cstdint>

namespace ts_leaf
{
    // B-LOGIC: inline cores, one per whitelist entry, exact to the original's
    // float order and register effects.
}
