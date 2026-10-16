#pragma once
// In-place vertex fetch (src/xbox/PUSH-BC-PLAN.md section 3.3, M8; owned by
// C-XF): the NV2A reads a model's vertices from guest RAM where the game
// keeps them, instead of the native pipeline writing them into the
// transform ring. A run of such strips goes to the backend through
// GSRasterBackend::XfInPlace (gs_backend.h), one GSXfInPlaceStrip each.
//
// Week 0: the type exists so that the backend interface can name it; its
// fields are C-XF's to settle with M8 (the formats, modes 5-8 and the index
// lists are theirs).
#include <cstdint>

struct GSXfInPlaceStrip
{
    const void *vertices = nullptr; // the strip's first vertex in guest RAM (physically contiguous: P0/P1)
    uint32_t count = 0;             // vertices
    uint32_t stride = 0;            // bytes between vertices
    uint32_t mode = 0;              // vertex mode (5..8: the in-place programs' layouts)
    const uint16_t *indices = nullptr; // optional ARRAY_ELEMENT16 index list (null: in order)
    uint32_t indexCount = 0;
};
