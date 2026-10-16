// The native VU1 program's materials and transform constants
// (src/xbox/PUSH-BC-PLAN.md W0-C; section 6, I-3 and I-4; handed to B-GS's
// M4.1 for the material table): the render-state block of a draw batch
// decoded once into the GS front end's register writes and found again by
// its bytes (materialFor), and the renderer's transform constants copied
// from the VU1 constant rows only after one was written (transformConstants).
// Moved verbatim from vu1_native_ts.cpp; the vector maths and VU1 row loads
// the draw path and the constant entries share are here too.
#pragma once

#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_frontend.h"
#include "vu1_native_xf.h"

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // status counters
#include "runtime/ps2_render_counters.h"
#define TS_NATIVE_STAT(expr) (expr)
// TS_NATIVE_DRAW_SELFCHECK 1: the first TS_NATIVE_DRAW_SELFCHECK_RUNS draw
// runs on the renderer's path (one in TS_NATIVE_DRAW_SELFCHECK_EVERY) also
// take the old one and compare what reaches the GS and the renderer: the
// render-state block processed again as a GIF packet over the applied one
// (it must change no register and no CLUT), the transform constants copied
// afresh from VU1 memory, the renderer's full texture lookup and constant
// rebuild, and its window clip (the run's GS scissor, which the run's state
// carries like every draw's, mapped afresh). Differences count in drawdiff=
// (status block), the first few are logged, and the old path's result is the
// one used. (The runs and the sampling: vu1_native_draw.h.)
#ifndef TS_NATIVE_DRAW_SELFCHECK
#define TS_NATIVE_DRAW_SELFCHECK 0
#endif
#include <iostream>
#else
#define TS_NATIVE_STAT(expr) ((void)0)
#undef TS_NATIVE_DRAW_SELFCHECK // (the renderer's path is the Xbox's)
#define TS_NATIVE_DRAW_SELFCHECK 0
#endif
// TS_XF_DIRTY_ROWS 1: after a write to the watched VU1 rows only the rows
// written are copied into the transform constants, and the renderer is told
// which (nv2aXfConstantsChanged); 0: every row is copied again, as before.
#ifndef TS_XF_DIRTY_ROWS
#define TS_XF_DIRTY_ROWS 1
#endif
#if defined(PLATFORM_XBOX)
#define TS_XF_ROWS_CHANGED(serial, rows) nv2aXfConstantsChanged(serial, rows)
#else
#define TS_XF_ROWS_CHANGED(serial, rows) ((void)0)
#endif

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>

namespace ts_native_draw
{
    using ts_native_xf::kDataQwords;

    struct V4
    {
        float x, y, z, w;
    };
    struct Mat
    {
        V4 r[4];
    };

    // VU1 data rows (16 bytes each, wrapping at 1024) as vectors and matrices.
    inline V4 loadV(const uint8_t *d, uint32_t q)
    {
        V4 v;
        std::memcpy(&v, d + (q & (kDataQwords - 1u)) * 16u, 16);
        return v;
    }
    inline void loadI(const uint8_t *d, uint32_t q, uint32_t out[4]) { std::memcpy(out, d + (q & (kDataQwords - 1u)) * 16u, 16); }
    inline Mat loadM(const uint8_t *d, uint32_t q)
    {
        Mat m;
        for (uint32_t i = 0; i < 4; ++i)
            m.r[i] = loadV(d, q + i);
        return m;
    }
    // acc = r0*x + r1*y + r2*z + r3*w (the microprogram's mulax/madday/maddaz/maddw).
    inline V4 transform(const Mat &m, float x, float y, float z, float w)
    {
        V4 o;
        o.x = m.r[0].x * x + m.r[1].x * y + m.r[2].x * z + m.r[3].x * w;
        o.y = m.r[0].y * x + m.r[1].y * y + m.r[2].y * z + m.r[3].y * w;
        o.z = m.r[0].z * x + m.r[1].z * y + m.r[2].z * z + m.r[3].z * w;
        o.w = m.r[0].w * x + m.r[1].w * y + m.r[2].w * z + m.r[3].w * w;
        return o;
    }

#if TS_NATIVE_DRAW_SELFCHECK
    inline void noteDrawDiff(const char *what)
    {
        std::snprintf(g_nv2aTextureStats.drawDiffLast, sizeof(g_nv2aTextureStats.drawDiffLast), "%s", what);
        if (++g_nv2aTextureStats.drawDiffs <= 16u)
            std::cout << "[TS:drawcheck] run " << g_nv2aTextureStats.drawChecked << ": " << what << " differs" << std::endl;
    }
#endif

    // Render-state blocks (top+216: TEXFLUSH, TEX1, TEX0, MIPTBP1/2, CLAMP,
    // built once per texture by the game, emLoadTexture_0x2b7190) decoded
    // once into the GS front end's register writes, found again by their
    // bytes (two ways per set: a level has a few hundred). A run usually
    // repeats the block before it, else a texture seen before.
    constexpr uint32_t kMaterialSets = 128u;
    constexpr uint32_t kMaxMaterialBytes = (1u + GS::StateBlock::kMaxWrites) * 16u;
    struct Material
    {
        uint32_t size = 0; // block bytes (0: empty slot)
        uint8_t bytes[kMaxMaterialBytes];
        GS::StateBlock block;
    };

    // The decoded block, or null when the block is not one GS::decodeStateBlock
    // takes (it then goes as a packet). `found`: it was decoded before.
    // (The table is this function's static: one for the program, whichever
    // translation unit calls.)
    inline const GS::StateBlock *materialFor(const uint8_t *block, uint32_t size, bool &found)
    {
        static Material s_materials[kMaterialSets][2];
        static uint8_t s_older[kMaterialSets]; // the way to replace next
        static Material *s_last = nullptr;
        static uint32_t s_serial = 0;
        found = true;
        if (size > kMaxMaterialBytes)
            return nullptr;
        if (s_last && s_last->size == size && std::memcmp(s_last->bytes, block, size) == 0)
            return &s_last->block;
        uint32_t hash = 2166136261u;
        for (uint32_t i = 0; i < size; i += 4u)
        {
            uint32_t word;
            std::memcpy(&word, block + i, 4);
            hash = (hash ^ word) * 16777619u;
        }
        const uint32_t set = (hash ^ (hash >> 15)) % kMaterialSets;
        uint32_t way = 0;
        while (way < 2u && (s_materials[set][way].size != size || std::memcmp(s_materials[set][way].bytes, block, size) != 0))
            ++way;
        if (way == 2u)
        {
            found = false;
            GS::StateBlock decoded;
            if (!GS::decodeStateBlock(block, size, decoded))
                return nullptr;
            decoded.serial = ++s_serial ? s_serial : ++s_serial;
            way = s_older[set];
            Material &m = s_materials[set][way];
            m.size = size;
            std::memcpy(m.bytes, block, size);
            m.block = decoded;
        }
        s_older[set] = static_cast<uint8_t>(way ^ 1u);
        s_last = &s_materials[set][way];
        return &s_last->block;
    }

    inline void loadConstants(GSXfConstants &xc, const uint8_t *data)
    {
        std::memcpy(xc.mvp[0], data + 8u * 16u, 64);
        std::memcpy(xc.mvp[1], data + 12u * 16u, 64);
        std::memcpy(xc.mvp[2], data + 16u * 16u, 64);
        std::memcpy(xc.lightDir[0], data + 110u * 16u, 64);
        std::memcpy(xc.lightDir[1], data + 114u * 16u, 64);
        std::memcpy(xc.lightDir[2], data + 118u * 16u, 64);
        std::memcpy(xc.lightColour, data + 106u * 16u, 64);
        std::memcpy(xc.scale, data + 20u * 16u, 16);
        std::memcpy(xc.offset, data + 21u * 16u, 16);
        std::memcpy(xc.model, data + 4u * 16u, 48);
    }

#if TS_XF_DIRTY_ROWS
    // The VU1 row each transform-constant row is copied from (GSXfConstants
    // as 33 rows of four floats, in loadConstants' order: mvp, lightDir,
    // lightColour, scale, offset, model).
    constexpr uint8_t kXfSourceRow[33] = {8,   9,   10,  11,  12,  13,  14,  15,  16,  17,  18,  19,
                                          110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
                                          106, 107, 108, 109, 20,  21,  4,   5,   6};
    static_assert(offsetof(GSXfConstants, variant) == sizeof(kXfSourceRow) * 16u, "GSXfConstants rows");

    // The rows of xc whose VU1 rows were written (dirty: g_vu1WatchedRows'
    // bits) copied again; returns them (bit r: row r).
    inline uint64_t loadDirtyConstants(GSXfConstants &xc, const uint8_t *data, uint64_t dirty)
    {
        static uint64_t s_rowBit[33];
        static bool s_bitsKnown = false;
        if (!s_bitsKnown)
        {
            for (uint32_t r = 0; r < 33u; ++r)
                s_rowBit[r] = g_vu1WatchedRows.rowBit(kXfSourceRow[r]);
            s_bitsKnown = true;
        }
        uint64_t rows = 0;
        for (uint32_t r = 0; r < 33u; ++r)
            if (dirty & s_rowBit[r])
            {
                std::memcpy(reinterpret_cast<uint8_t *>(&xc) + r * 16u, data + kXfSourceRow[r] * 16u, 16);
                rows |= 1ull << r;
            }
        return rows;
    }
#endif

    // The GPU transform's constants (raw VU1 rows 4-21 and 106-121), copied
    // out again only after one of those rows was written (g_vu1WatchedRows:
    // the constant entries, UNPACKs, the translated microprogram, EE
    // stores), and then (TS_XF_DIRTY_ROWS) only the rows written. A new
    // serial tells the renderer to rebuild its constant block, and which
    // rows changed; otherwise it keeps the one it has (the serial used to
    // change every run, and every run rebuilt and compared ~550 bytes).
    // data: VU1 data memory (the constant rows are always read from it).
    inline GSXfConstants &transformConstants(const uint8_t *data, bool check)
    {
        static GSXfConstants s_xc{};
        static uint32_t s_writes = 0, s_serial = 0;
        static bool s_valid = false;
        bool full = !s_valid;
        if (s_valid && s_writes == g_vu1WatchedRows.writes)
        {
            if (!check)
                return s_xc;
#if TS_NATIVE_DRAW_SELFCHECK
            GSXfConstants fresh{};
            loadConstants(fresh, data);
            if (std::memcmp(&fresh, &s_xc, offsetof(GSXfConstants, variant)) == 0)
                return s_xc;
            noteDrawDiff("transform constants (a VU1 row write was missed)");
            full = true;
#endif
        }
#if TS_XF_DIRTY_ROWS
        const uint64_t dirty = g_vu1WatchedRows.takeDirty();
        if (!full)
        {
            uint64_t changed = loadDirtyConstants(s_xc, data, dirty);
#if TS_NATIVE_DRAW_SELFCHECK
            if (check)
            {
                // The rows left out must be the VU1 rows' values still.
                GSXfConstants fresh{};
                loadConstants(fresh, data);
                if (std::memcmp(&fresh, &s_xc, offsetof(GSXfConstants, variant)) != 0)
                {
                    noteDrawDiff("transform constants (dirty rows)");
                    std::memcpy(&s_xc, &fresh, offsetof(GSXfConstants, variant));
                    changed = ~0ull;
                }
            }
#endif
            s_writes = g_vu1WatchedRows.writes;
            if (changed == 0u)
                return s_xc; // only rows the constants do not use: the same serial
            s_xc.serial = ++s_serial ? s_serial : ++s_serial;
            TS_XF_ROWS_CHANGED(s_xc.serial, changed);
            TS_NATIVE_STAT(++g_nv2aTextureStats.constRebuilds);
            return s_xc;
        }
#endif
        loadConstants(s_xc, data);
        s_xc.serial = ++s_serial ? s_serial : ++s_serial;
        s_writes = g_vu1WatchedRows.writes;
        s_valid = true;
        TS_NATIVE_STAT(++g_nv2aTextureStats.constRebuilds);
        return s_xc;
    }
}
