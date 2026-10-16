#pragma once
// The GS material table (src/xbox/PUSH-BC-PLAN.md section 3.5 item 1 and
// section 6, I-4; owned by B-GS). A material is a native pipeline's
// render-state block (texture registers and TEXFLUSH, A+D, PATH1) kept by
// content: `find(bytes, size, guestAddr)` returns the table's entry for the
// block (inserting texture-only blocks), `check(id, bytes, size)` re-checks
// an id against the block's bytes (a texture packet can be rewritten in
// place, so an id is never trusted by guest address alone), and
// GS::applyMaterial applies one with the commit-on-bind rule.
//
// Week 0 (W0-I): the interface exists with the "no materials" answers, so
// that its consumers (C-REC's descriptors, C-EMIT's Tier 1 material ops,
// project/game/ts_material.h) build against it: find returns null, check
// false, and the native pipeline sends every state block as before. B-GS
// fills in the entries and the table with M4.1 phase 1, and adds
// GS::applyMaterial to gs_frontend.h (its own file; every generated file
// includes that header, so it is not touched in Week 0). Consumers apply a
// material through ts_material::applyRunState, never through GS directly.
#include <cstddef>
#include <cstdint>

// One entry: B-GS adds its decoded writes. kComplete: the block carries the
// whole render state a run needs (not only the texture registers).
struct GSMaterial
{
    static constexpr uint32_t kComplete = 1u;
    uint32_t id = 0;    // 1..kEntries; 0 is "no material"
    uint32_t flags = 0; // kComplete
};

// 512 entries x 128 B, content-exact.
class GSMaterialTable
{
public:
    static constexpr uint32_t kEntries = 512u;
    static constexpr uint32_t kEntryBytes = 128u;

    // The entry for a state block (inserted when it is texture-only and
    // there is room); null: not a material. Week 0: always null.
    const GSMaterial *find(const uint8_t *bytes, uint32_t size, uint32_t guestAddr = 0u)
    {
        (void)bytes;
        (void)size;
        (void)guestAddr;
        return nullptr;
    }
    // True when id's entry still holds exactly these bytes. Week 0: false.
    bool check(uint32_t id, const uint8_t *bytes, uint32_t size) const
    {
        (void)id;
        (void)bytes;
        (void)size;
        return false;
    }
    uint32_t count() const { return 0u; }
};

// The runtime's one table (B-GS: file storage in gs_frontend.cpp, not a GS
// member, so PS2Runtime's layout stays).
inline GSMaterialTable &gsMaterialTable()
{
    static GSMaterialTable table;
    return table;
}
