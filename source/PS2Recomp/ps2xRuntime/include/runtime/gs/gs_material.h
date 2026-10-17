#pragma once
// The GS material table (src/xbox/PUSH-BC-PLAN.md section 3.5 item 1 and
// section 6, I-4; owned by B-GS). A material is a native pipeline's
// render-state block (a PACKED GIF packet of one tag, no PRE, every
// register A+D, drawing-state registers only: texture registers and
// TEXFLUSH for the game's per-texture blocks) kept by content: `find(bytes,
// size, guestAddr)` returns the table's entry for the block (inserting it
// when there is room), `check(id, bytes, size)` re-checks an id against the
// block's bytes (a texture packet can be rewritten in place, so an id is
// never trusted by guest address alone), and GS::applyMaterial applies one
// with the commit-on-bind rule (gs_frontend.h: the id bound by value, a
// repeat applies nothing but the TEXFLUSH).
//
// Content, not bytes: two blocks are the same material when they decode to
// the same register writes in the same order (the tag's NLOOP and NREG, and
// each A+D qword's value and address byte). The other bytes of an A+D qword
// are ignored by the GS, so the same material means the same effect.
//
// Ids are unique for the life of the program: an id is the slot plus an
// insertion generation, so an id whose slot has since been taken by another
// block answers nothing (entry() null, check() false) rather than that
// block. 512 entries x 128 B = 64 KB, fixed storage; the table replaces the
// 62 KB of s_materials in vu1_native_material.h.
//
// Threads: the table belongs to the renderer thread (the game's thread,
// which runs the native VU1 program off the VIF1 worker); callers on the
// VIF1 worker use the packet path (GS::processPath1Bulk checks).
#include "runtime/gs/gs_types.h"

// TS_GS_MATERIAL_TABLE 1 (M4.1 phase 1): the native draw path's render-state
// blocks (project/game/vu1_native_material.h materialFor) and the GIF bulk
// path's texture blocks (GS::processPath1Bulk) are entries of this one
// table, so a block's id is the serial its repeat is recognised by on
// either path (GS::applyStateBlock's Repeated); 0: the draw path keeps its
// own table and serials (s_materials) and the bulk path's blocks never
// repeat. Defined here so that every user sees one value (a .mk -D flips
// it everywhere).
#ifndef TS_GS_MATERIAL_TABLE
#define TS_GS_MATERIAL_TABLE 1
#endif

#include <cstddef>
#include <cstdint>
#include <cstring>

// A render-state block decoded once into the GS front end's register writes
// (GS::StateBlock is this type).
struct GSStateBlock
{
    static constexpr uint32_t kMaxWrites = 8u;
    uint32_t serial = 0;     // the material id (0: none)
    uint32_t count = 0;      // A+D writes, in packet order
    uint32_t nloop = 0, nreg = 0;
    bool repeatable = false; // see GS::applyStateBlock
    bool idempotent = false; // applying it twice is applying it once (but for TEXFLUSH)
    bool flushes = false;    // writes TEXFLUSH
    uint8_t regs[kMaxWrites] = {};
    uint64_t values[kMaxWrites] = {};
};

namespace gs_material
{
    // Registers a native state block may write (GS::decodeStateBlock):
    // drawing state whose write does nothing beyond storing the value, a CLUT
    // load (TEX0, TEX2) or a texture-cache flush.
    inline bool isStateRegister(uint8_t reg)
    {
        switch (reg)
        {
        case GS_REG_TEX0_1: case GS_REG_TEX0_2: case GS_REG_CLAMP_1: case GS_REG_CLAMP_2:
        case GS_REG_TEX1_1: case GS_REG_TEX1_2: case GS_REG_TEX2_1: case GS_REG_TEX2_2:
        case GS_REG_XYOFFSET_1: case GS_REG_XYOFFSET_2: case GS_REG_TEXCLUT: case GS_REG_SCANMSK:
        case GS_REG_MIPTBP1_1: case GS_REG_MIPTBP1_2: case GS_REG_MIPTBP2_1: case GS_REG_MIPTBP2_2:
        case GS_REG_TEXA: case GS_REG_FOGCOL: case GS_REG_TEXFLUSH:
        case GS_REG_SCISSOR_1: case GS_REG_SCISSOR_2: case GS_REG_ALPHA_1: case GS_REG_ALPHA_2:
        case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP: case GS_REG_TEST_1: case GS_REG_TEST_2:
        case GS_REG_PABE: case GS_REG_FBA_1: case GS_REG_FBA_2: case GS_REG_FRAME_1: case GS_REG_FRAME_2:
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2:
            return true;
        default:
            return false;
        }
    }

    inline bool isClutRegister(uint8_t reg)
    {
        return reg == GS_REG_TEX0_1 || reg == GS_REG_TEX0_2 || reg == GS_REG_TEX2_1 || reg == GS_REG_TEX2_2;
    }

    // The registers GS::m_textureStateWrites counts.
    inline bool isTextureRegister(uint8_t reg)
    {
        return isClutRegister(reg) || reg == GS_REG_TEX1_1 || reg == GS_REG_TEX1_2 || reg == GS_REG_CLAMP_1 ||
               reg == GS_REG_CLAMP_2 || reg == GS_REG_MIPTBP1_1 || reg == GS_REG_MIPTBP1_2 ||
               reg == GS_REG_MIPTBP2_1 || reg == GS_REG_MIPTBP2_2;
    }

    // A TEX0/TEX2 value whose write loads the CLUT whatever was loaded before
    // (an indexed format with CLD 1-3); CLD 4 and 5 load only when CBP
    // differs from the address the last load recorded.
    inline bool alwaysLoadsClut(uint64_t value)
    {
        const uint32_t psm = static_cast<uint32_t>((value >> 20) & 0x3Fu), cld = static_cast<uint32_t>((value >> 61) & 7u);
        const bool indexed = psm == GS_PSM_T8 || psm == GS_PSM_T4 || psm == GS_PSM_T8H || psm == GS_PSM_T4HL ||
                             psm == GS_PSM_T4HH;
        return indexed && cld >= 1u && cld <= 3u;
    }

    inline uint64_t loadLE64(const uint8_t *p)
    {
        uint64_t v;
        std::memcpy(&v, p, 8);
        return v;
    }

    // Decodes a state block (the packet shape in the header comment) into
    // its writes; false when the packet is not one. `textureOnly`: every
    // write is a texture register or TEXFLUSH.
    inline bool decodeStateBlock(const uint8_t *data, uint32_t sizeBytes, GSStateBlock &out, bool *textureOnlyOut = nullptr)
    {
        if (!data || sizeBytes < 32u || (sizeBytes & 15u) != 0u)
            return false;
        const uint64_t lo = loadLE64(data), hi = loadLE64(data + 8u);
        const uint32_t nloop = static_cast<uint32_t>(lo & 0x7FFFu);
        const uint32_t nreg = ((lo >> 60u) & 0xFu) ? static_cast<uint32_t>((lo >> 60u) & 0xFu) : 16u;
        if (((lo >> 58u) & 3u) != GIF_FMT_PACKED || ((lo >> 46u) & 1u) != 0u || nloop == 0u)
            return false;
        for (uint32_t i = 0; i < nreg; ++i)
            if (((hi >> (i * 4u)) & 0xFu) != 0xEu)
                return false;
        const uint32_t writes = nloop * nreg;
        if (writes > GSStateBlock::kMaxWrites || 16u + writes * 16u != sizeBytes)
            return false;
        out.count = writes;
        out.nloop = nloop;
        out.nreg = nreg;
        out.flushes = false;
        out.idempotent = true;
        uint32_t clutWrites = 0;
        bool textureOnly = true;
        for (uint32_t i = 0; i < writes; ++i)
        {
            const uint8_t *qword = data + 16u + i * 16u;
            const uint8_t reg = qword[8]; // A+D: the address is the high half's low byte
            if (!isStateRegister(reg))
                return false;
            out.regs[i] = reg;
            out.values[i] = loadLE64(qword);
            if (reg == GS_REG_TEXFLUSH)
                out.flushes = true;
            else if (!isTextureRegister(reg))
                textureOnly = false;
            // Written again, a CLD 1-3 load loads again, and a second CLUT write
            // loads over the first one's CBP.
            if (isClutRegister(reg) && (++clutWrites > 1u || alwaysLoadsClut(out.values[i])))
                out.idempotent = false;
        }
        for (uint32_t i = writes; i < GSStateBlock::kMaxWrites; ++i)
        {
            out.regs[i] = 0u;
            out.values[i] = 0u;
        }
        out.repeatable = out.idempotent && textureOnly;
        if (textureOnlyOut)
            *textureOnlyOut = textureOnly;
        return true;
    }

    // The same writes in the same order (what the GS sees of the block).
    inline bool sameWrites(const GSStateBlock &a, const GSStateBlock &b)
    {
        if (a.count != b.count || a.nloop != b.nloop || a.nreg != b.nreg)
            return false;
        for (uint32_t i = 0; i < a.count; ++i)
            if (a.regs[i] != b.regs[i] || a.values[i] != b.values[i])
                return false;
        return true;
    }

    // FNV-1a over the writes (never 0: 0 marks an empty slot's hash).
    inline uint32_t hashWrites(const GSStateBlock &b)
    {
        uint32_t hash = 2166136261u;
        auto mix = [&hash](uint32_t word) { hash = (hash ^ word) * 16777619u; };
        mix(b.count | (b.nloop << 8) | (b.nreg << 24));
        for (uint32_t i = 0; i < b.count; ++i)
        {
            mix(b.regs[i]);
            mix(static_cast<uint32_t>(b.values[i]));
            mix(static_cast<uint32_t>(b.values[i] >> 32));
        }
        return hash ? hash : 1u;
    }

    // The block written back as the packet the GS would read (a tag of
    // nloop/nreg with every descriptor A+D, EOP set, then the writes), for
    // GS::checkStateBlock; returns the bytes (16 + 16 per write).
    inline uint32_t encodeStateBlock(const GSStateBlock &b, uint8_t *out, uint32_t capacity)
    {
        const uint32_t bytes = 16u + b.count * 16u;
        if (capacity < bytes)
            return 0u;
        const uint64_t lo = static_cast<uint64_t>(b.nloop & 0x7FFFu) | (1ull << 15) | (static_cast<uint64_t>(b.nreg & 0xFu) << 60);
        uint64_t hi = 0;
        for (uint32_t i = 0; i < b.nreg; ++i)
            hi |= 0xEull << (i * 4u);
        std::memcpy(out, &lo, 8);
        std::memcpy(out + 8, &hi, 8);
        for (uint32_t i = 0; i < b.count; ++i)
        {
            const uint64_t reg = b.regs[i];
            std::memcpy(out + 16u + i * 16u, &b.values[i], 8);
            std::memcpy(out + 16u + i * 16u + 8u, &reg, 8);
        }
        return bytes;
    }
}

// One entry: the decoded writes, the id (slot | generation << 9), flags and
// the last-use tick (the set's replacement order).
struct GSMaterial
{
    static constexpr uint32_t kComplete = 1u;    // writes TEX0 (not TEX2 alone), TEX1 and CLAMP of one context
    static constexpr uint32_t kTextureOnly = 2u; // texture registers and TEXFLUSH only
    uint32_t id = 0;    // 0: an empty slot
    uint32_t flags = 0; // kComplete, kTextureOnly
    uint32_t use = 0;   // the table's tick at the last find
    uint32_t hash = 0;  // of the writes (0: empty)
    GSStateBlock block;
};

// 512 entries (128 sets x 4 ways) x 128 B, content-exact.
class GSMaterialTable
{
public:
    static constexpr uint32_t kEntries = 512u;
    static constexpr uint32_t kEntryBytes = 128u;
    static constexpr uint32_t kWays = 4u;
    static constexpr uint32_t kSets = kEntries / kWays;
    static_assert(sizeof(GSMaterial) <= kEntryBytes, "material entry size");

    // The entry for a state block, inserted when it decodes (GSStateBlock)
    // and `insert` allows it (true: any decodable block; false: texture-only
    // blocks only, the GIF bulk path's rule), the least recently used way of
    // its set giving way; null: not a material (not decodable, or not
    // inserted). guestAddr: statistics only.
    const GSMaterial *find(const uint8_t *bytes, uint32_t size, uint32_t guestAddr = 0u, bool insert = true)
    {
        (void)guestAddr;
        GSStateBlock decoded;
        bool textureOnly = false;
        if (!gs_material::decodeStateBlock(bytes, size, decoded, &textureOnly))
        {
            ++m_rejected;
            return nullptr;
        }
        return findDecoded(decoded, textureOnly, insert);
    }
    // find for a block already decoded (gs_material::decodeStateBlock).
    const GSMaterial *findBlock(const GSStateBlock &decoded, bool textureOnly, bool insert = true)
    {
        return findDecoded(decoded, textureOnly, insert);
    }
    // True when id's entry still holds exactly these writes.
    bool check(uint32_t id, const uint8_t *bytes, uint32_t size) const
    {
        const GSMaterial *m = entry(id);
        if (!m)
            return false;
        GSStateBlock decoded;
        return gs_material::decodeStateBlock(bytes, size, decoded) && gs_material::sameWrites(decoded, m->block);
    }
    // The entry with this id (null: none, or its slot holds another block).
    const GSMaterial *entry(uint32_t id) const
    {
        if (id == 0u)
            return nullptr;
        const GSMaterial &m = m_entries[id & (kEntries - 1u)];
        return m.id == id ? &m : nullptr;
    }
    uint32_t count() const { return m_count; }
    uint32_t inserts() const { return m_inserts; }
    uint32_t hits() const { return m_hits; }
    uint32_t rejected() const { return m_rejected; }
    uint32_t evictions() const { return m_evictions; }
    void reset()
    {
        for (GSMaterial &m : m_entries)
            m = GSMaterial{};
        m_count = 0;
        m_tick = 0;
        // Ids keep counting: an id handed out before the reset answers nothing.
    }

private:
    const GSMaterial *findDecoded(const GSStateBlock &decoded, bool textureOnly, bool insert)
    {
        const uint32_t hash = gs_material::hashWrites(decoded);
        const uint32_t set = (hash ^ (hash >> 7) ^ (hash >> 15)) % kSets;
        GSMaterial *const ways = &m_entries[set * kWays];
        ++m_tick;
        uint32_t victim = 0;
        for (uint32_t w = 0; w < kWays; ++w)
        {
            GSMaterial &m = ways[w];
            if (m.id != 0u && m.hash == hash && gs_material::sameWrites(m.block, decoded))
            {
                m.use = m_tick;
                ++m_hits;
                return &m;
            }
            if (m.id == 0u)
            {
                if (ways[victim].id != 0u)
                    victim = w;
            }
            else if (ways[victim].id != 0u && m.use < ways[victim].use)
                victim = w;
        }
        if (!insert && !textureOnly)
            return nullptr;
        GSMaterial &m = ways[victim];
        if (m.id != 0u)
            ++m_evictions;
        else
            ++m_count;
        // slot | generation << 9: the generation moves per insert and skips
        // a value that would make the id 0.
        const uint32_t slot = set * kWays + victim;
        m_generation = (m_generation + 1u) & 0x7FFFFFu;
        if (m_generation == 0u)
            m_generation = 1u;
        m.id = slot | (m_generation << 9);
        m.hash = hash;
        m.use = m_tick;
        m.block = decoded;
        m.block.serial = m.id;
        m.flags = (textureOnly ? GSMaterial::kTextureOnly : 0u) | (completeFlag(decoded) ? GSMaterial::kComplete : 0u);
        ++m_inserts;
        return &m;
    }

    // TEX0 (not TEX2 alone), TEX1 and CLAMP of one context.
    static bool completeFlag(const GSStateBlock &b)
    {
        for (int ctx = 0; ctx < 2; ++ctx)
        {
            bool tex0 = false, tex1 = false, clamp = false;
            for (uint32_t i = 0; i < b.count; ++i)
            {
                const uint8_t r = b.regs[i];
                tex0 = tex0 || r == (ctx ? GS_REG_TEX0_2 : GS_REG_TEX0_1);
                tex1 = tex1 || r == (ctx ? GS_REG_TEX1_2 : GS_REG_TEX1_1);
                clamp = clamp || r == (ctx ? GS_REG_CLAMP_2 : GS_REG_CLAMP_1);
            }
            if (tex0 && tex1 && clamp)
                return true;
        }
        return false;
    }

    GSMaterial m_entries[kEntries];
    uint32_t m_count = 0, m_tick = 0, m_generation = 0;
    uint32_t m_inserts = 0, m_hits = 0, m_rejected = 0, m_evictions = 0;
};

// The runtime's one table (function-local storage reached through this
// function, not a GS member, so PS2Runtime's layout stays).
inline GSMaterialTable &gsMaterialTable()
{
    static GSMaterialTable table;
    return table;
}
