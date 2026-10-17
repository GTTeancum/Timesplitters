#pragma once
// In-place vertex fetch (src/xbox/PUSH-BC-PLAN.md section 3.3, M8; owned by
// C-XF): the NV2A reads a model's vertices from guest RAM where the game
// keeps them, instead of the native pipeline writing them into the
// transform ring. A run of such strips goes to the backend through
// GSRasterBackend::XfInPlace (gs_backend.h), one GSXfInPlaceStrip each.
//
// A strip names one array per attribute the strip's program reads, each as
// the game's UNPACK source lies in guest RAM (physically contiguous: P0's
// check or P1's placement, src/xbox/xbox_guest_ram.h), and the mode of the
// in-place program (5..8: the transform programs of vertex modes 1..4 with
// the game's own formats; 8 reads the bone index from the bone array):
//   position  F32 x3 (UNPACK V3-32, or V4-32 at stride 16)
//   normal    F32 x3 (lit and environment-mapped modes)
//   colour    UB x4 in R, G, B, A byte order (UNPACK V4-8: the NV2A's
//             UB_OGL; probe T10a)
//   texture   F32 x3: s, t, q (no q of +-0: the ring's decode turns those
//             into 1, the prepare scan refuses them)
//   bone      S16 (the index, 0..2; mode 8)
// Week 0 had the first six fields only; vertices/stride/count stay for a
// caller with one interleaved array.
#include <cstdint>

enum class GSXfInPlaceFormat : uint8_t
{
    Off = 0,
    F32 = 1,    // floats, `components` of them
    UbRgba = 2, // four unsigned bytes, R G B A in memory, normalised
    S16 = 3,    // signed 16-bit integers, as floats (not normalised)
};

struct GSXfInPlaceArray
{
    const void *host = nullptr; // the strip's first element (CPU view: the self-check's emulated fetch)
    uint32_t physical = 0;      // the same for the GPU (pbkit's DMA object 3: physical offsets)
    GSXfInPlaceFormat format = GSXfInPlaceFormat::Off;
    uint8_t components = 0;
    uint8_t stride = 0; // bytes between elements
};

struct GSXfInPlaceStrip
{
    const void *vertices = nullptr; // the strip's first vertex in guest RAM (physically contiguous: P0/P1)
    uint32_t count = 0;             // vertices
    uint32_t stride = 0;            // bytes between vertices
    uint32_t mode = 0;              // vertex mode (5..8: the in-place programs' layouts)
    const uint16_t *indices = nullptr; // optional ARRAY_ELEMENT16 index list (null: in order)
    uint32_t indexCount = 0;
    // M8: the arrays by attribute.
    GSXfInPlaceArray position, normal, colour, texture, bone;
    // The arrays' generation (moves when a hooked writer touched guest RAM):
    // a new one breaks the GPU's vertex cache before the strip.
    uint32_t stamp = 0;
};
