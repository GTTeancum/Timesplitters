// Native model cache: see xbox_model_cache.h.
#include "xbox_model_cache.h"

#if TS_NATIVE_MODELS
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_frontend.h"
#include "../../project/game/vu1_native_xf.h"

#include <cstdlib>
#include <cstring>

// The Xbox renderer's store for these records (gs_nv2a_backend.cpp).
uint8_t *xboxNv2aAllocResident(uint32_t bytes);
void xboxNv2aDrawResident(const uint8_t *block, uint32_t index, uint32_t count, uint32_t format);
void xboxNv2aWaitIdle();

namespace
{
    // Budgets (bytes are allocated once, at the first capture). A full arena
    // fails the capture and asks for a flush at the next walk.
    constexpr uint32_t kSlots = 1024u;            // models (power of two)
    constexpr uint32_t kStoreBytes = 2048u * 1024u; // the records (28-44 bytes each)
    // The store is cut into blocks of one format each: the renderer binds a
    // block once and draws its runs by index. A run never spans blocks.
    constexpr uint32_t kBlockBytes = 128u * 1024u;
    constexpr uint32_t kBlocks = kStoreBytes / kBlockBytes;
    constexpr uint32_t kStrips = 24u * 1024u;
    constexpr uint32_t kRuns = 8u * 1024u;
    constexpr uint32_t kDraws = 8u * 1024u;
    constexpr uint32_t kStateBytes = 64u * 1024u; // distinct state blocks
    constexpr uint32_t kStateSlots = 1024u;       // their index (power of two)
    constexpr uint32_t kMaxVerifyTags = 4096u;    // a chain longer than this is not kept
    constexpr uint32_t kVerifyEvery = 32u;        // replays between re-hashes
    constexpr uint32_t kFlushSpacing = 400000u;   // walks between flushes (a full store)

    enum State : uint8_t { Empty = 0, Capturing = 1, Ready = 2, Failed = 3 };

    struct Strip { uint32_t first; uint16_t n; uint16_t pad; };
    // A run's strips lie joined (two repeated records between strips), as
    // one strip the NV2A draws where it lies: `count` records from byte
    // `first` of the store, in the draw's format.
    struct Run { uint32_t firstStrip; uint16_t strips; uint16_t prim; uint32_t first, count; };

    // Record formats (gs_nv2a_backend.cpp's kResidentFormats): what each
    // layout's vertex program reads. Full is GSXfVertex itself.
    enum Format : uint8_t { Full = 0, PlainFormat = 1, EnvFormat = 2, LitFormat = 3 };
    constexpr uint32_t kStride[4] = {44u, 28u, 28u, 40u};

    uint32_t formatFor(uint32_t kind)
    {
        const ts_native_xf::Layout &L = ts_native_xf::kLayouts[kind];
        return L.skinned ? Full : L.envMap ? EnvFormat : L.lit ? LitFormat : PlainFormat;
    }

    void packRecord(uint32_t format, const GSXfVertex &v, uint8_t *out)
    {
        const uint8_t *in = reinterpret_cast<const uint8_t *>(&v);
        switch (format)
        {
        case PlainFormat: // position, colour, s t q
            std::memcpy(out, in, 12);
            std::memcpy(out + 12, in + 24, 4);
            std::memcpy(out + 16, in + 28, 12);
            break;
        case EnvFormat: // position, normal, colour
            std::memcpy(out, in, 28);
            break;
        case LitFormat: // all but the bone
            std::memcpy(out, in, 40);
            break;
        default:
            std::memcpy(out, in, 44);
            break;
        }
    }

    void unpackRecord(uint32_t format, const uint8_t *in, GSXfVertex &v)
    {
        uint8_t *out = reinterpret_cast<uint8_t *>(&v);
        std::memset(out, 0, sizeof(v));
        switch (format)
        {
        case PlainFormat:
            std::memcpy(out, in, 12);
            std::memcpy(out + 24, in + 12, 4);
            std::memcpy(out + 28, in + 16, 12);
            break;
        case EnvFormat:
            std::memcpy(out, in, 28);
            v.q = 1.0f;
            break;
        case LitFormat:
            std::memcpy(out, in, 40);
            break;
        default:
            std::memcpy(out, in, 44);
            break;
        }
    }
    struct Draw
    {
        uint32_t firstRun;
        uint16_t runs;
        uint8_t kind, pad;
        uint32_t state;      // offset in g_stateBytes
        uint32_t stateBytes;
    };

    struct Model
    {
        uint32_t target = 0, gen = 0;
        uint8_t state = Empty, failures = 0;
        uint32_t firstDraw = 0, draws = 0;
        uint32_t hash = 0, replays = 0;
        uint32_t mscals = 0;
        // The registers the chain sets (bit per field in `sets`), as it left them.
        uint32_t cycle = 0, mode = 0, mask = 0, itops = 0, row[4]{}, col[4]{}, code = 0, num = 0;
        uint8_t sets = 0;
        uint32_t markers[3][4]{}; // BEGIN, END, REPLAY pieces (16 bytes each)
    };
    enum Sets : uint8_t { SetCycle = 1, SetMode = 2, SetMask = 4, SetItops = 8, SetRow = 16, SetCol = 32 };

    Model *g_models = nullptr;
    uint8_t *g_store = nullptr;
    Strip *g_strips = nullptr;
    Run *g_runs = nullptr;
    Draw *g_draws = nullptr;
    uint8_t *g_stateBytes = nullptr;
    uint32_t *g_stateIndex = nullptr; // offset + 1 (0: empty)
    bool g_allocated = false, g_disabled = false, g_resident = false;
    uint32_t g_walksSinceFlush = 0;
    uint32_t g_blocksUsed = 0;
    int32_t g_openBlock[4] = {-1, -1, -1, -1}; // per format: the block being filled
    uint32_t g_blockUsed[kBlocks] = {};
    uint32_t g_usedStore = 0, g_usedStrips = 0, g_usedRuns = 0, g_usedDraws = 0,
             g_usedStateBytes = 0;
    uint32_t g_generation = 1;
    bool g_flushRequested = false;
    XboxModelStats g_stats;

    // Walker side: the chain being captured.
    struct WalkCapture
    {
        Model *model = nullptr;
        const uint8_t *rdram = nullptr;
        uint32_t asp = 0, hash = 0;
        bool ok = true;
    } g_walk;

    // Decoder side: the capture in progress.
    struct DecodeCapture
    {
        Model *model = nullptr;
        uint32_t gen = 0;
        bool ok = true;
        uint32_t failReason = 0;
        uint32_t watchedWrites = 0; // g_vu1WatchedRows.writes at BEGIN
        VIFRegisters start{};
    } g_decode;

    bool allocate()
    {
        if (g_allocated)
            return !g_disabled;
        g_allocated = true;
        g_models = static_cast<Model *>(std::calloc(kSlots, sizeof(Model)));
        // In the renderer's memory when it has room (drawn in place), else
        // copied into its ring at each replay.
        g_store = xboxNv2aAllocResident(kStoreBytes);
        g_resident = g_store != nullptr;
        if (!g_resident)
            g_store = static_cast<uint8_t *>(std::malloc(kStoreBytes));
        g_strips = static_cast<Strip *>(std::malloc(kStrips * sizeof(Strip)));
        g_runs = static_cast<Run *>(std::malloc(kRuns * sizeof(Run)));
        g_draws = static_cast<Draw *>(std::malloc(kDraws * sizeof(Draw)));
        g_stateBytes = static_cast<uint8_t *>(std::malloc(kStateBytes));
        g_stateIndex = static_cast<uint32_t *>(std::calloc(kStateSlots, sizeof(uint32_t)));
        if (!g_models || !g_store || !g_strips || !g_runs || !g_draws || !g_stateBytes ||
            !g_stateIndex)
        {
            std::free(g_models); if (!g_resident) std::free(g_store); std::free(g_strips); std::free(g_runs);
            std::free(g_draws); std::free(g_stateBytes); std::free(g_stateIndex);
            g_disabled = true;
            return false;
        }
        g_stats.vertexCapacity = kStoreBytes;
        return true;
    }

    void flush()
    {
        if (g_resident)
            xboxNv2aWaitIdle(); // the GPU may still read the records being replaced
        g_walksSinceFlush = 0;
        g_blocksUsed = 0;
        for (int32_t &b : g_openBlock)
            b = -1;
        std::memset(g_blockUsed, 0, sizeof(g_blockUsed));
        std::memset(g_models, 0, kSlots * sizeof(Model));
        std::memset(g_stateIndex, 0, kStateSlots * sizeof(uint32_t));
        g_usedStore = g_usedStrips = g_usedRuns = g_usedDraws = g_usedStateBytes = 0;
        ++g_generation;
        g_walk = {};
        g_decode = {};
        g_flushRequested = false;
        ++g_stats.flushes;
    }

    Model *find(uint32_t target, bool create)
    {
        uint32_t h = (target >> 4) * 2654435761u;
        for (uint32_t probe = 0; probe < 16u; ++probe)
        {
            Model &m = g_models[(h + probe) & (kSlots - 1u)];
            if (m.state != Empty && m.target == target)
                return &m;
            if (m.state == Empty)
            {
                if (!create)
                    return nullptr;
                m = Model{};
                m.target = target;
                return &m;
            }
        }
        return nullptr; // a full neighbourhood: this chain keeps the original path
    }

    void setMarkers(Model &m)
    {
        const uint32_t slot = static_cast<uint32_t>(&m - g_models);
        for (uint32_t type = 0; type < 3u; ++type)
        {
            m.markers[type][0] = (kXboxModelMarkerOpcode << 24) | (type + 1u);
            m.markers[type][1] = slot;
            m.markers[type][2] = kXboxModelMagic;
            m.markers[type][3] = m.gen;
        }
    }

    constexpr uint32_t kHashSeed = 2166136261u;

    uint32_t mix(uint32_t h, const uint8_t *p, uint32_t bytes)
    {
        for (uint32_t k = 0; k + 4u <= bytes; k += 4u)
        {
            uint32_t w;
            std::memcpy(&w, p + k, 4);
            h = (h ^ w) * 16777619u;
        }
        return h;
    }

    // The chain's tags and payloads hashed in the walker's order (its tag,
    // then its payload), walked again from guest memory: VIF1 tag IDs as
    // ps2_memory.cpp takes them, without tag transfer. False when it leaves
    // main RAM or runs too long (the walk then counts as changed).
    bool hashChain(const uint8_t *rdram, uint32_t target, uint32_t &hash)
    {
        uint32_t h = kHashSeed, tagAddr = target, stack[2], depth = 0;
        for (uint32_t tags = 0; tags < kMaxVerifyTags; ++tags)
        {
            if (tagAddr & 0x80000000u)
                return false; // scratchpad
            const uint32_t phys = tagAddr & 0x01FFFFFFu;
            if (phys + 16u > PS2_RAM_SIZE)
                return false;
            const uint8_t *tp = rdram + phys;
            h = mix(h, tp, 16u);
            uint64_t tag;
            std::memcpy(&tag, tp, 8);
            const uint32_t qwc = static_cast<uint32_t>(tag & 0xFFFFu), id = static_cast<uint32_t>((tag >> 28) & 7u);
            const uint32_t addr = static_cast<uint32_t>((tag >> 32) & 0x7FFFFFFFu);
            uint32_t data = tagAddr + 16u, next = 0;
            bool end = false;
            switch (id)
            {
            case 0: data = addr; end = true; break;
            case 1: next = data + qwc * 16u; break;
            case 2: next = addr; break;
            case 3: case 4: data = addr; next = tagAddr + 16u; break;
            case 5:
                if (depth >= 2u)
                    return false;
                stack[depth++] = data + qwc * 16u;
                next = addr;
                break;
            case 6:
                if (depth == 0u)
                    end = true;
                else
                    next = stack[--depth];
                break;
            default: end = true; break;
            }
            if (qwc)
            {
                if (data >= PS2_RAM_SIZE || qwc * 16u > PS2_RAM_SIZE - data)
                    return false;
                h = mix(h, rdram + data, qwc * 16u);
            }
            if (end)
            {
                hash = h;
                return true;
            }
            tagAddr = next;
        }
        return false;
    }

    void beginWalkCapture(Model &m, const uint8_t *rdram, uint32_t asp)
    {
        m.state = Capturing;
        m.gen = g_generation;
        m.firstDraw = 0;
        m.draws = 0;
        m.mscals = 0;
        m.replays = 0;
        m.failures = 0;
        setMarkers(m);
        g_walk.model = &m;
        g_walk.rdram = rdram;
        g_walk.asp = asp;
        g_walk.hash = kHashSeed;
        g_walk.ok = true;
        ++g_stats.captures;
    }

    void hashPiece(const uint8_t *data, uint32_t bytes)
    {
        const uintptr_t base = reinterpret_cast<uintptr_t>(g_walk.rdram);
        const uintptr_t p = reinterpret_cast<uintptr_t>(data);
        if (p < base || p - base + bytes > PS2_RAM_SIZE)
        {
            g_walk.ok = false; // scratchpad or a copied piece: no stable source
            return;
        }
        g_walk.hash = mix(g_walk.hash, data, bytes);
    }

    bool isMarker(const uint8_t *data)
    {
        const uintptr_t p = reinterpret_cast<uintptr_t>(data);
        const uintptr_t a = reinterpret_cast<uintptr_t>(g_models);
        return g_models && p >= a && p < a + kSlots * sizeof(Model);
    }

    uint32_t internState(const uint8_t *block, uint32_t bytes)
    {
        uint32_t h = 2166136261u;
        for (uint32_t i = 0; i < bytes; ++i)
            h = (h ^ block[i]) * 16777619u;
        for (uint32_t probe = 0; probe < kStateSlots; ++probe)
        {
            uint32_t &slot = g_stateIndex[(h + probe) & (kStateSlots - 1u)];
            if (slot == 0u)
            {
                if (g_usedStateBytes + bytes + 4u > kStateBytes)
                    return UINT32_MAX;
                const uint32_t at = g_usedStateBytes;
                std::memcpy(g_stateBytes + at, &bytes, 4);
                std::memcpy(g_stateBytes + at + 4u, block, bytes);
                g_usedStateBytes += (bytes + 4u + 15u) & ~15u;
                slot = at + 1u;
                return at;
            }
            const uint32_t at = slot - 1u;
            uint32_t size;
            std::memcpy(&size, g_stateBytes + at, 4);
            if (size == bytes && std::memcmp(g_stateBytes + at + 4u, block, bytes) == 0)
                return at;
        }
        return UINT32_MAX;
    }

    void failDecode(uint32_t reason)
    {
        if (g_decode.model && g_decode.ok)
        {
            g_decode.ok = false;
            g_decode.failReason = reason < 8u ? reason : 7u;
        }
    }

    // MSCAL's register steps (ps2_vif1_interpreter.cpp).
    void stepMscal(VIFRegisters &r)
    {
        r.top = r.tops & 0x3FFu;
        r.itop = r.itops & 0x3FFu;
        const bool dbf = (r.stat & (1u << 7)) != 0u;
        r.tops = dbf ? (r.base & 0x3FFu) : ((r.base + r.ofst) & 0x3FFu);
        r.stat ^= (1u << 7);
    }

    // The registers the chain leaves, applied to `r` (the live registers).
    void applyEnd(const Model &m, VIFRegisters &r)
    {
        if (m.sets & SetCycle) r.cycle = m.cycle;
        if (m.sets & SetMode) r.mode = m.mode;
        if (m.sets & SetMask) r.mask = m.mask;
        if (m.sets & SetItops) r.itops = m.itops;
        if (m.sets & SetRow) std::memcpy(r.row, m.row, 16);
        if (m.sets & SetCol) std::memcpy(r.col, m.col, 16);
        for (uint32_t i = 0; i < m.mscals; ++i)
            stepMscal(r);
        r.code = m.code;
        r.num = m.num;
    }

    void finishDecode(Model &m, const VIFRegisters &end)
    {
        const DecodeCapture c = g_decode;
        g_decode = {};
        if (c.model != &m)
            return;
        uint32_t reason = 0;
        if (!c.ok || c.gen != m.gen || m.state != Capturing)
            reason = c.ok ? 1u : (c.failReason ? c.failReason : 1u);
        else if (m.draws == 0u || m.draws != m.mscals)
            reason = 2u; // a constant entry, or an MSCAL that drew nothing natively
        else if (g_vu1WatchedRows.writes != c.watchedWrites)
            reason = 3u; // the chain wrote constant rows
        else
        {
            // MSCAL's toggles alone must give the end's buffer registers.
            const VIFRegisters &s0 = c.start;
            VIFRegisters sim = s0;
            for (uint32_t i = 0; i < m.mscals; ++i)
                stepMscal(sim);
            if (end.base != s0.base || end.ofst != s0.ofst || sim.tops != end.tops ||
                ((sim.stat ^ end.stat) & (1u << 7)) != 0u || sim.top != end.top || sim.itop != end.itop)
                reason = 5u;
        }
        if (reason)
        {
            m.state = Failed;
            ++g_stats.failures[reason < 8u ? reason : 7u];
            return;
        }
        const VIFRegisters &s0 = c.start;
        m.sets = 0;
        if (end.cycle != s0.cycle) { m.sets |= SetCycle; m.cycle = end.cycle; }
        if (end.mode != s0.mode) { m.sets |= SetMode; m.mode = end.mode; }
        if (end.mask != s0.mask) { m.sets |= SetMask; m.mask = end.mask; }
        if (end.itops != s0.itops) { m.sets |= SetItops; m.itops = end.itops; }
        if (std::memcmp(end.row, s0.row, 16) != 0) { m.sets |= SetRow; std::memcpy(m.row, end.row, 16); }
        if (std::memcmp(end.col, s0.col, 16) != 0) { m.sets |= SetCol; std::memcpy(m.col, end.col, 16); }
        m.code = end.code;
        m.num = end.num;
        m.state = Ready;
        ++g_stats.captured;
    }
}

// ---------------------------------------------------------------- walker
XboxModelWalk xboxModelWalkCall(const uint8_t *rdram, uint32_t target, uint32_t asp, const uint8_t *&marker)
{
    marker = nullptr;
    if (g_walk.model || !allocate())
        return XboxModelWalkNormal; // nested CALL inside a capture: as usual
    ++g_walksSinceFlush;
    // A full store empties at most every kFlushSpacing walks: a level whose
    // models do not all fit keeps the rest on the original path between.
    if (g_flushRequested && g_walksSinceFlush >= kFlushSpacing)
        flush();
    Model *m = find(target & 0x7FFFFFF0u, true);
    if (!m)
        return XboxModelWalkNormal;
    if (m->state == Ready)
    {
        if ((++m->replays % kVerifyEvery) == 0u)
        {
            ++g_stats.verifies;
            uint32_t hash = 0;
            if (!hashChain(rdram, m->target, hash) || hash != m->hash)
            {
                ++g_stats.stale;
                // Captured again now, from the guest's current data.
                beginWalkCapture(*m, rdram, asp);
                marker = reinterpret_cast<const uint8_t *>(m->markers[0]);
                return XboxModelWalkCapture;
            }
        }
        marker = reinterpret_cast<const uint8_t *>(m->markers[2]);
        ++g_stats.replays;
        return XboxModelWalkReplay;
    }
    if (m->state == Failed)
        return XboxModelWalkNormal;
    if (m->state == Capturing && m->gen == g_generation)
    {
        // Captured by an earlier walk whose decode has not ended it yet
        // (several instances in one list): those wait for that capture.
        return XboxModelWalkNormal;
    }
    beginWalkCapture(*m, rdram, asp);
    marker = reinterpret_cast<const uint8_t *>(m->markers[0]);
    return XboxModelWalkCapture;
}

void xboxModelWalkPiece(const uint8_t *data, uint32_t bytes)
{
    if (g_walk.model && g_walk.ok && !isMarker(data))
        hashPiece(data, bytes);
}

void xboxModelWalkTag(const uint8_t *tag)
{
    if (g_walk.model && g_walk.ok)
        hashPiece(tag, 16u);
}

const uint8_t *xboxModelWalkAfterRet(uint32_t aspAfter)
{
    if (!g_walk.model || aspAfter != g_walk.asp)
        return nullptr;
    Model &m = *g_walk.model;
    if (g_walk.ok)
        m.hash = g_walk.hash;
    else
        m.failures = 1u; // the decode's END sees it failed
    g_walk = {};
    return reinterpret_cast<const uint8_t *>(m.markers[1]);
}

void xboxModelWalkChainEnd()
{
    if (g_walk.model)
    {
        // The chain ended inside the CALL: that model keeps the original path.
        g_walk.model->failures = 1;
        g_walk = {};
    }
}

// ---------------------------------------------------------------- decoder
bool xboxModelCapturing() { return g_decode.model != nullptr && g_decode.ok; }

void xboxModelCaptureMscal(uint32_t, bool mscnt)
{
    if (!g_decode.model)
        return;
    ++g_decode.model->mscals;
    if (mscnt)
        failDecode(4u);
}

void xboxModelCaptureFail(uint32_t reason) { failDecode(reason); }

void xboxModelCaptureDraw(uint32_t kind, const uint8_t *data, const uint8_t *stateBlock, uint32_t stateBytes,
                          bool material, const uint32_t *strips, uint32_t strideWords, uint32_t count)
{
    if (!g_decode.model || !g_decode.ok)
        return;
    Model &m = *g_decode.model;
    if (!material || kind >= 4u || count == 0u)
    {
        failDecode(6u);
        return;
    }
    if (g_usedDraws >= kDraws)
    {
        g_flushRequested = true;
        failDecode(7u);
        return;
    }
    const uint32_t state = internState(stateBlock, stateBytes);
    if (state == UINT32_MAX)
    {
        g_flushRequested = true;
        failDecode(7u);
        return;
    }
    if (m.draws == 0u)
        m.firstDraw = g_usedDraws;
    else if (m.firstDraw + m.draws != g_usedDraws)
    {
        failDecode(7u); // another capture's draw in between (cannot happen in one decode)
        return;
    }
    Draw &d = g_draws[g_usedDraws];
    d.firstRun = g_usedRuns;
    d.runs = 0;
    d.kind = static_cast<uint8_t>(kind);
    d.state = state;
    d.stateBytes = stateBytes;
    // The runs as runDraw forms them: strips of one PRIM, all with PRE and
    // three vertices or more (anything else took the CPU path).
    for (uint32_t i = 0; i < count;)
    {
        const uint32_t *s = strips + i * strideWords;
        const uint32_t tag1 = s[1];
        if ((tag1 & (1u << 14)) == 0u)
        {
            failDecode(6u);
            return;
        }
        const uint32_t prim = (tag1 >> 15) & 0x7FFu;
        uint32_t j = i;
        while (j < count)
        {
            const uint32_t *t = strips + j * strideWords;
            if ((t[1] & (1u << 14)) == 0u || ((t[1] >> 15) & 0x7FFu) != prim)
                break;
            if (t[4] < 3u)
            {
                failDecode(6u);
                return;
            }
            ++j;
        }
        if (g_usedRuns >= kRuns || g_usedStrips + (j - i) > kStrips)
        {
            g_flushRequested = true;
            failDecode(7u);
            return;
        }
        Run &run = g_runs[g_usedRuns++];
        run.firstStrip = g_usedStrips;
        run.strips = static_cast<uint16_t>(j - i);
        run.prim = static_cast<uint16_t>(prim);
        // Without the renderer's store the replay copies full records into the ring.
        const uint32_t format = g_resident ? formatFor(kind) : Full, stride = kStride[format];
        uint32_t total = 0;
        for (uint32_t k = i; k < j; ++k)
            total += strips[k * strideWords + 4u] + (k > i ? 2u : 0u);
        const uint32_t bytes = total * stride;
        int32_t &open = g_openBlock[format];
        if (open < 0 || g_blockUsed[open] + bytes > kBlockBytes)
        {
            if (bytes > kBlockBytes || g_blocksUsed >= kBlocks)
            {
                g_flushRequested = true;
                failDecode(7u);
                return;
            }
            open = static_cast<int32_t>(g_blocksUsed++);
        }
        // (A block's records sit at multiples of its format's stride.)
        run.first = static_cast<uint32_t>(open) * kBlockBytes + g_blockUsed[open];
        g_blockUsed[open] += bytes;
        g_usedStore += bytes;
        uint32_t at = run.first;
        run.count = 0;
        GSXfVertex strip[64], last{};
        for (uint32_t k = i; k < j; ++k)
        {
            const uint32_t *t = strips + k * strideWords;
            const uint32_t n = t[4], vi = t[5];
            const uint32_t join = k > i ? 2u : 0u;
            ts_native_xf::decodeXfStrip(kind, data, vi, n, strip);
            uint8_t *out = g_store + at; // (write-combined: written once, in order)
            if (join)
            {
                packRecord(format, last, out);
                packRecord(format, strip[0], out + stride);
                out += 2u * stride;
            }
            g_strips[g_usedStrips++] = {static_cast<uint32_t>(out - g_store), static_cast<uint16_t>(n), 0};
            for (uint32_t v = 0; v < n; ++v)
                packRecord(format, strip[v], out + v * stride);
            at += (join + n) * stride;
            run.count += join + n;
            last = strip[n - 1u];
        }
        ++d.runs;
        i = j;
    }
    ++g_usedDraws;
    ++m.draws;
    g_stats.vertexBytes = g_usedStore;
}

namespace
{
    void replay(Model &m, uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory, GS &gs)
    {
        for (uint32_t di = 0; di < m.draws; ++di)
        {
            const Draw &d = g_draws[m.firstDraw + di];
            const uint8_t *block = g_stateBytes + d.state + 4u;
            xboxNativeDrainArbiter(memory);
            const void *material = xboxNativeMaterialFor(block, d.stateBytes);
            if (!material || !xboxNativeApplyMaterial(material, gs))
                xboxNativeSubmitState(block, d.stateBytes, memory, gs);
            const ts_native_xf::Layout &L = ts_native_xf::kLayouts[d.kind];
            GSXfConstants &xc = xboxNativeTransformConstants(vuData);
            xc.variant = L.envMap ? GSXfConstants::EnvMap
                         : L.skinned ? GSXfConstants::Skinned
                         : L.lit     ? GSXfConstants::Lit
                                     : GSXfConstants::Plain;
            xc.check = 0u;
            ++g_stats.replayDraws;
            for (uint32_t ri = 0; ri < d.runs; ++ri)
            {
                const Run &run = g_runs[d.firstRun + ri];
                xboxNativeDrainArbiter(memory);
                GSXfCursor cursor;
                if (!gs.beginXfRun(run.prim, xc, cursor))
                {
                    ++g_stats.replayDeclined;
                    continue;
                }
                ++g_stats.replayRuns;
                const uint32_t format = g_resident ? formatFor(d.kind) : Full;
                const uint8_t *records = g_store + run.first;
                if (cursor.direct && g_resident)
                {
                    const uint32_t block = run.first / kBlockBytes;
                    xboxNv2aDrawResident(g_store + block * kBlockBytes, (run.first % kBlockBytes) / kStride[format],
                                         run.count, format);
                    cursor.strips += run.strips;
                    cursor.vertices += run.count;
                }
                else if (cursor.direct)
                {
                    const GSXfVertex *v = reinterpret_cast<const GSXfVertex *>(records); // (full records)
                    const uint32_t n = run.count;
                    if (cursor.next + (n + 2u) > cursor.end)
                        gs.growXfCursor(cursor, n + 2u);
                    GSXfVertex *out = cursor.next;
                    if (cursor.join)
                    {
                        std::memcpy(out, &cursor.last, sizeof(GSXfVertex));
                        std::memcpy(out + 1, v, sizeof(GSXfVertex));
                        out += 2;
                    }
                    std::memcpy(out, v, n * sizeof(GSXfVertex));
                    cursor.last = v[n - 1u];
                    cursor.next = out + n;
                    cursor.join = true;
                    cursor.strips += run.strips;
                    cursor.vertices += n;
                }
                else
                {
                    // Flat shading: the renderer lays the strips out itself.
                    for (uint32_t si = 0; si < run.strips; ++si)
                    {
                        const Strip &st = g_strips[run.firstStrip + si];
                        GSXfVertex v[64];
                        for (uint32_t k = 0; k < st.n; ++k)
                            unpackRecord(format, g_store + st.first + k * kStride[format], v[k]);
                        gs.emitXfStrip(v, st.n);
                    }
                }
                g_stats.replayVertices += run.count;
                gs.endXfRun(cursor);
            }
        }
        applyEnd(m, regs);
    }
}

void xboxModelDecodeMarker(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory, GS *gs,
                           bool onWorker)
{
    const uint32_t type = words[0] & 0xFFu, slot = words[1], gen = words[3];
    if (words[2] != kXboxModelMagic || slot >= kSlots || !g_models)
        return;
    Model &m = g_models[slot];
    if (type == XboxModelBegin)
    {
        if (g_decode.model) // an unfinished capture (its END never came)
            g_decode.model->state = Failed;
        g_decode = {};
        if (onWorker || m.gen != gen || m.state != Capturing)
            return;
        g_decode.model = &m;
        g_decode.gen = gen;
        g_decode.ok = m.failures == 0u;
        g_decode.start = regs;
        g_decode.watchedWrites = g_vu1WatchedRows.writes;
        m.draws = 0;
        m.mscals = 0;
        return;
    }
    if (type == XboxModelEnd)
    {
        if (m.gen == gen && m.failures != 0u)
            failDecode(1u);
        if (g_decode.model == &m)
            finishDecode(m, regs);
        return;
    }
    if (type == XboxModelReplay)
    {
        if (onWorker || !gs || m.gen != gen || m.state != Ready)
        {
            ++g_stats.replayMissing;
            return;
        }
        replay(m, vuData, regs, memory, *gs);
    }
}

void xboxModelGetStats(XboxModelStats &out)
{
    out = g_stats;
    out.models = out.ready = out.failed = 0;
    if (g_models)
        for (uint32_t i = 0; i < kSlots; ++i)
        {
            if (g_models[i].state != Empty)
                ++out.models;
            if (g_models[i].state == Ready)
                ++out.ready;
            if (g_models[i].state == Failed)
                ++out.failed;
        }
    out.vertexBytes = g_usedStore;
}

#else
void xboxModelGetStats(XboxModelStats &out) { out = {}; }
#endif
