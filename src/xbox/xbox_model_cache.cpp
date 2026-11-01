// Native model cache: see xbox_model_cache.h.
#include "xbox_model_cache.h"

#if TS_NATIVE_MODELS
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_frontend.h"
#include "../../project/game/vu1_native_xf.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#if TS_MODEL_FILES
#include <windows.h>
#endif

// The Xbox renderer's store for these records (gs_nv2a_backend.cpp).
uint8_t *xboxNv2aAllocResident(uint32_t bytes);
void xboxNv2aDrawResident(const uint8_t *block, uint32_t index, uint32_t count, uint32_t format);
void xboxNv2aWaitIdle();

bool g_xboxModelCaptureOpen = false; // a capture is open and still good (the hooks' test)

namespace
{
    // Budgets (bytes are allocated once, at the first capture). A full arena
    // fails the capture and asks for the models replayed least recently to be
    // evicted at the next walk (compact()).
    constexpr uint32_t kSlots = 1024u;            // models (power of two)
    constexpr uint32_t kStoreBytes = 2048u * 1024u; // the records (28-44 bytes each)
    // The store is cut into blocks of one format each: the renderer binds a
    // block once and draws its runs by index. A run never spans blocks.
    constexpr uint32_t kBlockBytes = 128u * 1024u;
    constexpr uint32_t kBlocks = kStoreBytes / kBlockBytes;
    constexpr uint32_t kStrips = 24u * 1024u;
    constexpr uint32_t kRuns = 8u * 1024u;
    constexpr uint32_t kDraws = 8u * 1024u;
    constexpr uint32_t kSteps = 8u * 1024u;       // replay steps (12 bytes each)
    constexpr uint32_t kBlobBytes = 256u * 1024u; // their data: VU1 rows, GIF packets, MPG code
    constexpr uint32_t kStateBytes = 64u * 1024u; // distinct state blocks
    constexpr uint32_t kStateSlots = 1024u;       // their index (power of two)
    constexpr uint32_t kMaxVerifyTags = 16384u;   // a chain longer than this is not kept
    constexpr uint32_t kMaxPieces = 4096u;        // pieces of a chain decoded from guest memory
    constexpr uint32_t kMaxEpochs = 1024u;        // TOPS changes (MSCAL, MSCNT, OFFSET) in one chain
    constexpr uint32_t kVerifyEvery = 32u;        // replays between re-hashes
    constexpr uint32_t kMarkers = 4096u;          // marker pieces between walk and decode (a ring)
    constexpr uint32_t kHotWalks = 20000u;        // models replayed within this many walks are not evicted
    constexpr uint32_t kRetryWalks = 100000u;     // walks before a capture refused for room is tried again
    constexpr uint32_t kCompactSpacing = 1000u;   // walks between evictions at least (each waits for the GPU)
    constexpr uint32_t kStaleCaptureWalks = 50000u; // walks before a capture whose decode never came restarts

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
        uint32_t state; // offset in g_stateBytes
        uint16_t stateBytes;
        uint16_t extent; // VU1 rows from TOP the draw reads (a TOP closer than that to 1024 is refused)
    };

    // The replay's steps, in the chain's stream order (`a`, `b`, `count` by type).
    enum StepType : uint8_t
    {
        StepDraws = 1, // `count` recorded draws, from the model's next one (an MSCAL each)
        StepMscal = 2, // MSCAL/MSCNT `a` (pc): `count` row runs at blob `b` restored, then run as the decoder runs it
        StepRows = 3,  // `count` row runs at blob `b` the chain writes
        StepGif = 4,   // a PATH2 packet (DIRECT/DIRECTHL, or its IMAGE data): `a` bytes at blob `b`
        StepMpg = 5,   // `count` bytes of VU1 code at blob `b` for address `a` (unchanged at replay)
        StepReg = 6,   // flags: the VIFcode (BASE, OFFSET, ITOP), `a` its immediate
        StepPath3 = 7, // MSKPATH3 `a`
    };
    enum StepFlags : uint8_t { StepMscnt = 1, StepPure = 2, StepDirectHl = 4 };
    struct Step { uint8_t type, flags; uint16_t count; uint32_t a, b; };
    // A run of VU1 rows in the blob (this header, then `count` rows): rows
    // from `at`, or (rel) from `at` past the TOPS of epoch `epoch` (the chain
    // wrote them with UNPACK's FLG; an epoch ends at each MSCAL, MSCNT and
    // OFFSET).
    struct RowRun { uint16_t at, count, epoch, rel; uint32_t pad[2]; };
    static_assert(sizeof(RowRun) == 16u, "row runs keep the rows aligned");

    struct Model
    {
        uint32_t target = 0, gen = 0;
        uint8_t state = Empty, failures = 0, flags = 0, deps = 0;
        uint8_t callAsp = 0, pushed = 0, attempts = 0, sets = 0;
        uint32_t firstDraw = 0, draws = 0, firstStep = 0, steps = 0, firstBlob = 0, blobBytes = 0;
        uint32_t hash = 0, replays = 0;
        uint32_t verified = 0; // 0: loaded from a model file, re-hashed before its first replay
        uint32_t lastUse = 0, serial = 0, retryAt = 0; // walks; serial: allocation order
        // TOPS of each epoch at the capture (`epochs` u16 at blob `epochBlob`)
        // and the rows past TOPS the chain's FLG UNPACKs cover (relLo == relHi: none).
        uint32_t epochBlob = 0;
        uint16_t epochs = 0, relLo = 0, relHi = 0, endAsp = 0;
        // The capture's buffer registers, and the UNPACK registers it took from before the chain (`deps`).
        uint32_t startBase = 0, startOfst = 0, startTops = 0, startDbf = 0;
        uint32_t startCycle = 0, startMode = 0, startMask = 0, startRow[4]{}, startCol[4]{};
        // The registers the chain sets (bit per field in `sets`), as it left them.
        uint32_t cycle = 0, mode = 0, mask = 0, row[4]{}, col[4]{}, code = 0, num = 0, mark = 0, statOr = 0;
        // EndsChain: the walker's state where the chain ended inside the CALL.
        uint32_t endTag = 0, endAsr[2]{}, endUpper = 0;
    };
    enum Sets : uint8_t { SetCycle = 1, SetMode = 2, SetMask = 4, SetRow = 16, SetCol = 32, SetMark = 64 };
    enum Deps : uint8_t { DepCycle = 1, DepMode = 2, DepMask = 4, DepRow = 8, DepCol = 16 };
    enum ModelFlags : uint8_t { HasMpg = 1, EndsChain = 2, IrqTags = 4, CaptureTie = 8 };
    constexpr uint32_t kDbf = 1u << 7, kMrk = 1u << 6, kInt = 1u << 11; // VIF1_STAT

    Model *g_models = nullptr;
    uint8_t *g_store = nullptr;
    Strip *g_strips = nullptr;
    Run *g_runs = nullptr;
    Draw *g_draws = nullptr;
    Step *g_steps = nullptr;
    uint8_t *g_blob = nullptr;
    uint8_t *g_stateBytes = nullptr;
    uint32_t *g_stateIndex = nullptr; // offset + 1 (0: empty)
    bool g_allocated = false, g_disabled = false, g_resident = false;
    uint32_t g_blocksUsed = 0; // blocks taken at least once (a model file keeps these)
    int32_t g_openBlock[4] = {-1, -1, -1, -1}; // per format: the block being filled
    uint32_t g_blockUsed[kBlocks] = {};        // 0: free
    uint8_t g_blockFormat[kBlocks] = {};       // (while used)
    uint32_t g_usedStore = 0, g_usedStrips = 0, g_usedRuns = 0, g_usedDraws = 0, g_usedSteps = 0, g_usedBlob = 0,
             g_usedStateBytes = 0;
    uint32_t g_generation = 1; // a capture's (and a flush's): markers name the capture they belong to
    uint32_t g_walkSerial = 0, g_allocSerial = 0, g_compactWalk = 0;
    bool g_compactRequested = false;
    XboxModelStats g_stats;
    // Marker pieces, each walk's own until the ring comes round (the decoder
    // reads them where the walker left them).
    uint32_t g_markers[kMarkers][4];
    uint32_t g_nextMarker = 0;

#if TS_MODEL_FILES
    // Model files (make TS_MODEL_FILES=1): a level's captured models, saved
    // once its captures settle and loaded the next time it starts, so its
    // models replay from the first frame without capturing. A file is named
    // after the level's first capture (its chain address and hash); loaded
    // models are re-hashed against guest memory before their first replay, so
    // a file that does not match the level only costs the captures.
    constexpr uint32_t kFileMagic = 0x31434D58u; // 'XMC1'
    constexpr uint32_t kFileVersion = 2u; // 2: replay steps and their data, Draw's extent, no markers in Model
    constexpr uint32_t kFileQuietWalks = 30000u; // walks without a new capture before a save
    constexpr const char *kFileDir = "E:\\TimeSplitters\\models";
    constexpr const char *kDiscFileDir = "D:\\models"; // harvested files shipped on the disc
    struct FileHeader
    {
        uint32_t magic, version, slots, storeBytes, blockBytes, blocks, strips, runs, draws, stateBytes,
            stateSlots, resident;
        uint32_t anchorTarget, anchorHash;
        uint32_t usedStore, usedStrips, usedRuns, usedDraws, usedStateBytes, blocksUsed;
        int32_t openBlock[4];
        uint32_t blockUsed[kBlocks];
        uint32_t modelBytes;
        uint32_t steps, blobBytes, usedSteps, usedBlob;
    };
    bool g_haveAnchor = false, g_loadPending = false;
    uint32_t g_anchorTarget = 0, g_anchorHash = 0;
    uint32_t g_lastLoadTarget = 0, g_lastLoadHash = 0; // loaded once per boot, not again after a flush
    uint64_t g_capturedSeen = 0, g_capturedAtSave = 0;
    uint32_t g_quietWalks = 0;
#endif

    // Walker side: the chain being captured.
    struct WalkCapture
    {
        Model *model = nullptr;
        const uint8_t *rdram = nullptr;
        uint32_t asp = 0, hash = 0;
        bool ok = true, tie = false, irqTags = false, lastIrq = false;
        uint32_t depth = 0, lastId = 0; // CALLs inside it not yet returned; the last tag's ID
        uint8_t pushed = 0;             // return-stack slots its own CALLs filled
    } g_walk;
    // The model of the last XboxModelWalkReplayEnd and its CALL's return address.
    const Model *g_endModel = nullptr;
    uint32_t g_endReturn = 0;

    // Decoder side: the capture in progress.
    enum Pending : uint8_t { PendingNone = 0, PendingEntry = 1, PendingDraw = 2, PendingInterpreted = 3 };
    struct DecodeCapture
    {
        Model *model = nullptr;
        uint32_t gen = 0;
        bool ok = true;
        uint32_t failReason = 0;
        VIFRegisters start{};
        const uint8_t *vuData = nullptr;
        uint32_t epoch = 0;
        uint8_t sets = 0;              // registers the chain's commands set
        bool marked = false, interrupted = false; // MARK, an I bit
        uint32_t relLo = 0xFFFFu, relHi = 0; // rows past TOPS its FLG UNPACKs cover
        // The MSCAL whose program is running or has just run, resolved at
        // the next command (resolvePending).
        uint8_t pending = PendingNone;
        bool pendingMscnt = false, pendingDrawn = false, pendingCpu = false, pendingRecords = false,
             pendingKicks = false;
        uint32_t pendingPc = 0, pendingTop = 0, pendingExtent = 0;
        uint32_t pendingReads[2][2]{}, pendingReadCount = 0, pendingWrites[2][2]{}, pendingWriteCount = 0;
        // The arenas before the pending draw's records (taken back if it takes the CPU path).
        uint32_t undoDraws = 0, undoRuns = 0, undoStrips = 0, undoStore = 0, undoBlocksUsed = 0;
        int32_t undoOpen[4]{};
        uint32_t undoBlockUsed[kBlocks]{};
        uint8_t undoBlockFormat[kBlocks]{};
        uint32_t mpgs = 0, mpgAt[16][2]{}; // its MPGs' code ranges
    } g_decode;
    // Per capture, per VU1 row: whether the chain wrote it (RowWritten),
    // with FLG (RowRel), in which epoch (bits 10-25) and where (bits 0-9:
    // the row, or its offset past that epoch's TOPS).
    constexpr uint32_t kRowWritten = 0x80000000u, kRowRel = 0x40000000u;
    uint32_t g_rowMap[1024];
    uint32_t g_consumed[32], g_watchedPending[32]; // a bit per row: read by a program of the chain; watched, not yet a step
    uint16_t g_epochTops[kMaxEpochs + 1];          // the capture's TOPS per epoch
    // The pending MSCAL's rows, as row runs ready for the blob.
    uint8_t g_snap[1024u * 32u + 4096u];
    uint32_t g_snapBytes = 0, g_snapRuns = 0, g_snapLast = 0;

    // A guest chain as decoded pieces (the replay's fallback).
    using Piece = PS2Memory::Vif1Piece;
    Piece g_pieces[kMaxPieces];

    void syncOpen() { g_xboxModelCaptureOpen = g_decode.model != nullptr && g_decode.ok; }

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
        g_steps = static_cast<Step *>(std::malloc(kSteps * sizeof(Step)));
        g_blob = static_cast<uint8_t *>(std::malloc(kBlobBytes));
        g_stateBytes = static_cast<uint8_t *>(std::malloc(kStateBytes));
        g_stateIndex = static_cast<uint32_t *>(std::calloc(kStateSlots, sizeof(uint32_t)));
        if (!g_models || !g_store || !g_strips || !g_runs || !g_draws || !g_steps || !g_blob || !g_stateBytes ||
            !g_stateIndex)
        {
            std::free(g_models); if (!g_resident) std::free(g_store); std::free(g_strips); std::free(g_runs);
            std::free(g_draws); std::free(g_steps); std::free(g_blob); std::free(g_stateBytes); std::free(g_stateIndex);
            g_models = nullptr;
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
        g_blocksUsed = 0;
        for (int32_t &b : g_openBlock)
            b = -1;
        std::memset(g_blockUsed, 0, sizeof(g_blockUsed));
        std::memset(g_models, 0, kSlots * sizeof(Model));
        std::memset(g_stateIndex, 0, kStateSlots * sizeof(uint32_t));
        g_usedStore = g_usedStrips = g_usedRuns = g_usedDraws = g_usedSteps = g_usedBlob = g_usedStateBytes = 0;
        ++g_generation;
        g_walk = {};
        g_decode = {};
        g_endModel = nullptr;
        syncOpen();
        g_compactRequested = false;
        ++g_stats.flushes;
#if TS_MODEL_FILES
        g_haveAnchor = g_loadPending = false;
        g_quietWalks = 0;
        g_capturedSeen = g_capturedAtSave = g_stats.captured;
#endif
    }

    uint32_t homeSlot(uint32_t target) { return ((target >> 4) * 2654435761u) & (kSlots - 1u); }

    Model *find(uint32_t target, bool create)
    {
        const uint32_t h = homeSlot(target);
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

    // A marker piece for this walk (BEGIN, END or REPLAY): the slot, the
    // walk's CHCR.TIE and call depth (a replay that falls back walks the chain
    // as this walk would have), the chain, and the capture.
    const uint8_t *newMarker(const Model &m, uint32_t type, bool tie, uint32_t asp)
    {
        uint32_t *w = g_markers[g_nextMarker++ & (kMarkers - 1u)];
        const uint32_t slot = static_cast<uint32_t>(&m - g_models);
        w[0] = (kXboxModelMarkerOpcode << 24) | ((asp & 3u) << 22) | ((tie ? 1u : 0u) << 21) | (slot << 8) | type;
        w[1] = m.target;
        w[2] = kXboxModelMagic;
        w[3] = m.gen;
        return reinterpret_cast<const uint8_t *>(w);
    }

    bool isMarker(const uint8_t *data)
    {
        const uintptr_t p = reinterpret_cast<uintptr_t>(data);
        const uintptr_t a = reinterpret_cast<uintptr_t>(g_markers);
        return p >= a && p < a + sizeof(g_markers);
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

    // A main-RAM guest address as the walker maps it (translateAddress for
    // RAM and its uncached mirrors): false for the scratchpad and anything
    // else, or when `bytes` from it leave RAM.
    bool ramAddress(uint32_t addr, uint32_t bytes, uint32_t &phys)
    {
        if (ps2IsScratchpadAddress(addr))
            return false;
        if (addr < PS2_RAM_SIZE)
            phys = addr;
        else if (addr >= 0x20000000u && addr < 0x40000000u)
            phys = addr & PS2_RAM_MASK;
        else
            return false;
        return bytes <= PS2_RAM_SIZE - phys;
    }

    // The chain from `target` walked again from guest memory, as the DMA
    // walker takes VIF1 tags without tag transfer, to its RET at depth 0, an
    // END tag or (`tie`) an IRQ tag: its tags and payloads hashed in the
    // walker's order (its tag, then its payload), and with `pieces` the
    // payloads listed. False when it leaves main RAM, nests deeper than the
    // DMAC's stack allows from `callAsp`, or runs too long.
    bool walkChain(const uint8_t *rdram, uint32_t target, uint32_t callAsp, bool tie, uint32_t &hash, Piece *pieces,
                   uint32_t &pieceCount, uint32_t &bytes)
    {
        uint32_t h = kHashSeed, tagAddr = target, stack[2], depth = 0;
        const uint32_t maxDepth = callAsp < 1u ? 1u : 0u; // the CALL itself took one of the two
        pieceCount = 0;
        bytes = 0;
        for (uint32_t tags = 0; tags < kMaxVerifyTags; ++tags)
        {
            uint32_t phys;
            if (!ramAddress(tagAddr, 16u, phys))
                return false;
            const uint8_t *tp = rdram + phys;
            h = mix(h, tp, 16u);
            uint64_t tag;
            std::memcpy(&tag, tp, 8);
            const uint32_t qwc = static_cast<uint32_t>(tag & 0xFFFFu), id = static_cast<uint32_t>((tag >> 28) & 7u);
            const bool irq = ((tag >> 31) & 1u) != 0u;
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
                if (depth >= maxDepth)
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
                uint32_t dataPhys;
                if (!ramAddress(data, qwc * 16u, dataPhys))
                    return false;
                h = mix(h, rdram + dataPhys, qwc * 16u);
                if (pieces)
                {
                    const uint8_t *p = rdram + dataPhys;
                    if (pieceCount && pieces[pieceCount - 1u].first + pieces[pieceCount - 1u].second == p)
                        pieces[pieceCount - 1u].second += qwc * 16u;
                    else if (pieceCount >= kMaxPieces)
                        return false;
                    else
                        pieces[pieceCount++] = Piece(p, qwc * 16u);
                    bytes += qwc * 16u;
                }
            }
            if (irq && tie)
                end = true;
            if (end)
            {
                hash = h;
                return true;
            }
            tagAddr = next;
        }
        return false;
    }

    void beginWalkCapture(Model &m, const uint8_t *rdram, uint32_t asp, bool tie)
    {
        m.state = Capturing;
        m.gen = ++g_generation;
        m.replays = 0;
        m.failures = 0;
        m.flags = 0;
        m.callAsp = static_cast<uint8_t>(asp);
        m.lastUse = g_walkSerial;
        g_walk = {};
        g_walk.model = &m;
        g_walk.rdram = rdram;
        g_walk.asp = asp;
        g_walk.hash = kHashSeed;
        g_walk.tie = tie;
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

    uint32_t formatOf(uint32_t kind) { return g_resident ? formatFor(kind) : Full; }

    // Which format each used block holds (after a model file's load).
    void rebuildBlockFormats()
    {
        for (uint32_t di = 0; di < g_usedDraws; ++di)
        {
            const Draw &d = g_draws[di];
            for (uint32_t ri = 0; ri < d.runs; ++ri)
                g_blockFormat[g_runs[d.firstRun + ri].first / kBlockBytes] = static_cast<uint8_t>(formatOf(d.kind));
        }
    }

    // `bytes` of the store in a block of `format`: the open one, another of
    // that format with room, or a free one (UINT32_MAX: none).
    uint32_t allocStore(uint32_t format, uint32_t bytes)
    {
        int32_t &open = g_openBlock[format];
        if (open < 0 || g_blockUsed[open] + bytes > kBlockBytes)
        {
            if (bytes > kBlockBytes)
                return UINT32_MAX;
            int32_t pick = -1;
            for (uint32_t b = 0; b < kBlocks && pick < 0; ++b)
                if (g_blockUsed[b] != 0u && g_blockFormat[b] == format && g_blockUsed[b] + bytes <= kBlockBytes)
                    pick = static_cast<int32_t>(b);
            for (uint32_t b = 0; b < kBlocks && pick < 0; ++b)
                if (g_blockUsed[b] == 0u)
                    pick = static_cast<int32_t>(b);
            if (pick < 0)
                return UINT32_MAX;
            for (int32_t &other : g_openBlock)
                if (other == pick)
                    other = -1; // (a block emptied by a take-back)
            open = pick;
            g_blockFormat[pick] = static_cast<uint8_t>(format);
            if (static_cast<uint32_t>(pick) + 1u > g_blocksUsed)
                g_blocksUsed = static_cast<uint32_t>(pick) + 1u;
        }
        // (A block's records sit at multiples of its format's stride.)
        const uint32_t at = static_cast<uint32_t>(open) * kBlockBytes + g_blockUsed[open];
        g_blockUsed[open] += bytes;
        g_usedStore += bytes;
        return at;
    }

    void failDecode(uint32_t reason)
    {
        if (g_decode.model && g_decode.ok)
        {
            g_decode.ok = false;
            g_decode.failReason = reason < 8u ? reason : 7u;
        }
        syncOpen();
    }

    // An arena is full: this capture is refused, and the models replayed
    // least recently are evicted at the next walk.
    void roomFail()
    {
        g_compactRequested = true;
        failDecode(7u);
    }

    Step *addStep(uint8_t type)
    {
        if (!g_decode.ok)
            return nullptr;
        if (g_usedSteps >= kSteps)
        {
            roomFail();
            return nullptr;
        }
        Step &s = g_steps[g_usedSteps++];
        s = Step{type, 0u, 0u, 0u, 0u};
        ++g_decode.model->steps;
        return &s;
    }

    uint32_t addBlob(uint32_t bytes)
    {
        const uint32_t size = (bytes + 15u) & ~15u;
        if (!g_decode.ok)
            return UINT32_MAX;
        if (size > kBlobBytes - g_usedBlob)
        {
            roomFail();
            return UINT32_MAX;
        }
        const uint32_t at = g_usedBlob;
        g_usedBlob += size;
        return at;
    }

    inline void setBit(uint32_t *bits, uint32_t r) { bits[r >> 5] |= 1u << (r & 31u); }
    inline void clearBit(uint32_t *bits, uint32_t r) { bits[r >> 5] &= ~(1u << (r & 31u)); }
    inline bool testBit(const uint32_t *bits, uint32_t r) { return (bits[r >> 5] >> (r & 31u)) & 1u; }

    bool watchedRow(uint32_t r) { return g_vu1WatchedRows.rowBit(r & 1023u) != 0u; }

    // Whether `count` rows from `from` (wrapping at 1024) touch a watched row.
    bool rangeWatched(uint32_t from, uint32_t count)
    {
        const Vu1WatchedRows &w = g_vu1WatchedRows;
        if (count == 0u || w.ranges == 0u)
            return false;
        if (count >= 1024u)
            return true;
        from &= 1023u;
        const uint32_t end = from + count;
        for (uint32_t i = 0; i < w.ranges; ++i)
            if ((from < w.end[i] && w.first[i] < end) || (end > 1024u && w.first[i] < end - 1024u))
                return true;
        return false;
    }

    // The snapshot: the chain's rows among those asked for, as row runs.
    void snapReset() { g_snapBytes = g_snapRuns = 0; }

    void snapRow(const uint8_t *vu, uint32_t r)
    {
        r &= 1023u;
        const uint32_t e = g_rowMap[r];
        if (!(e & kRowWritten))
            return;
        const uint16_t rel = (e & kRowRel) ? 1u : 0u, epoch = rel ? static_cast<uint16_t>((e >> 10) & 0xFFFFu) : 0u,
                       at = static_cast<uint16_t>(e & 1023u);
        RowRun *last = g_snapRuns ? reinterpret_cast<RowRun *>(g_snap + g_snapLast) : nullptr;
        if (last && last->rel == rel && last->epoch == epoch && ((last->at + last->count) & 1023u) == at &&
            g_snapBytes + 16u <= sizeof(g_snap))
        {
            ++last->count;
        }
        else
        {
            if (g_snapBytes + 32u > sizeof(g_snap))
            {
                failDecode(7u); // (cannot happen: every row once, as its own run)
                return;
            }
            g_snapLast = g_snapBytes;
            RowRun run{at, 1u, epoch, rel, {0u, 0u}};
            std::memcpy(g_snap + g_snapBytes, &run, sizeof(run));
            g_snapBytes += sizeof(run);
            ++g_snapRuns;
        }
        std::memcpy(g_snap + g_snapBytes, vu + r * 16u, 16);
        g_snapBytes += 16u;
    }

    void snapRange(const uint8_t *vu, uint32_t from, uint32_t count)
    {
        for (uint32_t i = 0; i < count && i < 1024u; ++i)
            snapRow(vu, from + i);
    }

    void consume(uint32_t from, uint32_t count)
    {
        for (uint32_t i = 0; i < count && i < 1024u; ++i)
            setBit(g_consumed, (from + i) & 1023u);
    }

    // The snapshot into the blob, for step `s` (`count` runs at `b`).
    void commitSnap(Step &s)
    {
        s.count = static_cast<uint16_t>(g_snapRuns);
        s.b = 0;
        if (!g_snapRuns)
            return;
        const uint32_t at = addBlob(g_snapBytes);
        if (at == UINT32_MAX)
            return;
        std::memcpy(g_blob + at, g_snap, g_snapBytes);
        s.b = at;
    }

    // The chain's rows marked in `bits`, as a StepRows.
    void flushRows(const uint8_t *vu, const uint32_t *bits)
    {
        snapReset();
        for (uint32_t r = 0; r < 1024u; ++r)
            if (testBit(bits, r))
                snapRow(vu, r);
        if (!g_snapRuns)
            return;
        if (Step *s = addStep(StepRows))
            commitSnap(*s);
    }

    // Watched rows (the transform constants') the chain's UNPACKs wrote since
    // the last program: restored before the next.
    void flushWatched(const uint8_t *vu)
    {
        bool any = false;
        for (uint32_t i = 0; i < 32u && !any; ++i)
            any = g_watchedPending[i] != 0u;
        if (!any)
            return;
        flushRows(vu, g_watchedPending);
        for (uint32_t i = 0; i < 32u; ++i)
        {
            g_consumed[i] |= g_watchedPending[i];
            g_watchedPending[i] = 0u;
        }
    }

    void saveUndo()
    {
        DecodeCapture &c = g_decode;
        c.undoDraws = g_usedDraws;
        c.undoRuns = g_usedRuns;
        c.undoStrips = g_usedStrips;
        c.undoStore = g_usedStore;
        c.undoBlocksUsed = g_blocksUsed;
        std::memcpy(c.undoOpen, g_openBlock, sizeof(c.undoOpen));
        std::memcpy(c.undoBlockUsed, g_blockUsed, sizeof(c.undoBlockUsed));
        std::memcpy(c.undoBlockFormat, g_blockFormat, sizeof(c.undoBlockFormat));
    }

    // The pending draw's records go (it took the CPU path).
    void undoRecords()
    {
        DecodeCapture &c = g_decode;
        if (!c.pendingRecords)
            return;
        c.pendingRecords = false;
        if (g_usedDraws > c.undoDraws && c.model && c.model->draws)
            --c.model->draws;
        g_usedDraws = c.undoDraws;
        g_usedRuns = c.undoRuns;
        g_usedStrips = c.undoStrips;
        g_usedStore = c.undoStore;
        g_blocksUsed = c.undoBlocksUsed;
        std::memcpy(g_openBlock, c.undoOpen, sizeof(c.undoOpen));
        std::memcpy(g_blockUsed, c.undoBlockUsed, sizeof(c.undoBlockUsed));
        std::memcpy(g_blockFormat, c.undoBlockFormat, sizeof(c.undoBlockFormat));
        g_stats.vertexBytes = g_usedStore;
    }

    // The pending MSCAL as steps, now its program has run.
    void resolvePending()
    {
        DecodeCapture &c = g_decode;
        const uint8_t p = c.pending;
        c.pending = PendingNone;
        if (p == PendingNone || !c.ok)
            return;
        Model &m = *c.model;
        if (p == PendingDraw && !c.pendingDrawn)
        {
            failDecode(2u); // (a draw entry that neither drew nor went to the interpreter)
            return;
        }
        if (p == PendingDraw && !c.pendingCpu)
        {
            // Its records: one more draw of a StepDraws.
            consume(c.pendingTop, c.pendingExtent);
            Step *last = m.steps ? &g_steps[m.firstStep + m.steps - 1u] : nullptr;
            if (last && last->type == StepDraws && last->count < 0xFFFFu)
                ++last->count;
            else if (Step *s = addStep(StepDraws))
                s->count = 1u;
            return;
        }
        undoRecords();
        Step *s = addStep(StepMscal);
        if (!s)
            return;
        s->a = c.pendingPc;
        s->flags = static_cast<uint8_t>((c.pendingMscnt ? StepMscnt : 0u) |
                                        (p == PendingEntry && !c.pendingKicks ? StepPure : 0u));
        commitSnap(*s);
        if (p == PendingInterpreted)
        {
            for (uint32_t r = 0; r < 1024u; ++r)
                if (g_rowMap[r] & kRowWritten)
                    setBit(g_consumed, r);
        }
        else if (p == PendingDraw)
            consume(c.pendingTop, c.pendingExtent);
        else
        {
            for (uint32_t i = 0; i < c.pendingReadCount; ++i)
                consume(c.pendingReads[i][0], c.pendingReads[i][1]);
            // Its outputs are the program's now: the step makes them again.
            for (uint32_t i = 0; i < c.pendingWriteCount; ++i)
                for (uint32_t k = 0; k < c.pendingWrites[i][1]; ++k)
                {
                    const uint32_t r = (c.pendingWrites[i][0] + k) & 1023u;
                    g_rowMap[r] = 0u;
                    clearBit(g_watchedPending, r);
                }
        }
    }

    // MSCAL's register steps (ps2_vif1_interpreter.cpp).
    void stepMscal(VIFRegisters &r)
    {
        r.top = r.tops & 0x3FFu;
        r.itop = r.itops & 0x3FFu;
        const bool dbf = (r.stat & kDbf) != 0u;
        r.tops = dbf ? (r.base & 0x3FFu) : ((r.base + r.ofst) & 0x3FFu);
        r.stat ^= kDbf;
    }

    // BASE, OFFSET or ITOP (ps2_vif1_interpreter.cpp); true when TOPS moved.
    bool applyReg(VIFRegisters &r, uint32_t opcode, uint32_t imm)
    {
        switch (opcode)
        {
        case 0x02u: // OFFSET
            r.ofst = imm & 0x3FFu;
            r.tops = r.base & 0x3FFu;
            r.stat &= ~kDbf;
            return true;
        case 0x03u: r.base = imm & 0x3FFu; return false; // BASE
        default: r.itops = imm & 0x3FFu; return false;   // ITOP
        }
    }

    // The registers the chain leaves but the steps' (applied to the live ones).
    void applyEnd(const Model &m, VIFRegisters &r)
    {
        if (m.sets & SetCycle) r.cycle = m.cycle;
        if (m.sets & SetMode) r.mode = m.mode;
        if (m.sets & SetMask) r.mask = m.mask;
        if (m.sets & SetRow) std::memcpy(r.row, m.row, 16);
        if (m.sets & SetCol) std::memcpy(r.col, m.col, 16);
        if (m.sets & SetMark) r.mark = m.mark;
        r.stat |= m.statOr;
        r.code = m.code;
        r.num = m.num;
    }

    // The buffer registers the steps leave from `r`.
    void simulateSteps(const Model &m, VIFRegisters &r)
    {
        for (uint32_t si = 0; si < m.steps; ++si)
        {
            const Step &s = g_steps[m.firstStep + si];
            if (s.type == StepDraws)
                for (uint32_t k = 0; k < s.count; ++k)
                    stepMscal(r);
            else if (s.type == StepMscal)
                stepMscal(r);
            else if (s.type == StepReg)
                applyReg(r, s.flags, s.a);
        }
    }

    void finishDecode(Model &m, const VIFRegisters &end, const uint8_t *vu)
    {
        DecodeCapture &c = g_decode;
        if (c.model != &m)
            return;
        resolvePending();
        if (c.ok && vu)
        {
            // Rows the chain leaves that none of its programs read (another
            // MSCAL may): restored at the replay's end.
            uint32_t residual[32] = {};
            for (uint32_t r = 0; r < 1024u; ++r)
                if ((g_rowMap[r] & kRowWritten) && !testBit(g_consumed, r))
                    setBit(residual, r);
            flushRows(vu, residual);
        }
        uint32_t reason = 0;
        if (!c.ok || c.gen != m.gen || m.state != Capturing)
            reason = c.ok ? 1u : (c.failReason ? c.failReason : 1u);
        else
        {
            // The steps must give the end's buffer registers.
            const VIFRegisters &s0 = c.start;
            VIFRegisters sim = s0;
            simulateSteps(m, sim);
            const uint32_t others = ~(kDbf | kMrk | kInt);
            if (end.base != sim.base || end.ofst != sim.ofst || end.tops != sim.tops || end.top != sim.top ||
                end.itop != sim.itop || end.itops != sim.itops || ((sim.stat ^ end.stat) & kDbf) != 0u ||
                ((end.stat ^ s0.stat) & others) != 0u)
                reason = 5u;
        }
        uint32_t epochAt = 0;
        if (!reason)
        {
            epochAt = addBlob((c.epoch + 1u) * 2u);
            if (epochAt == UINT32_MAX)
                reason = 7u;
            else
                std::memcpy(g_blob + epochAt, g_epochTops, (c.epoch + 1u) * 2u);
        }
        const VIFRegisters s0 = c.start;
        const uint8_t sets = c.sets;
        const bool marked = c.marked, interrupted = c.interrupted;
        const uint32_t relLo = c.relLo, relHi = c.relHi, epochs = c.epoch + 1u;
        g_decode = {};
        syncOpen();
        if (reason)
        {
            m.state = Failed;
            m.retryAt = 0u;
            if (reason == 7u)
            {
                // Tried again once the eviction made room; after two refusals
                // (the models in use fill the arenas) only now and then.
                if (m.attempts < 0xFFu)
                    ++m.attempts;
                m.retryAt = g_walkSerial + (m.attempts <= 2u ? kCompactSpacing + 1u : kRetryWalks);
                if (m.retryAt == 0u)
                    m.retryAt = 1u;
            }
            ++g_stats.failures[reason < 8u ? reason : 7u];
            return;
        }
        m.sets = 0;
        if ((sets & SetCycle) || end.cycle != s0.cycle) { m.sets |= SetCycle; m.cycle = end.cycle; }
        if ((sets & SetMode) || end.mode != s0.mode) { m.sets |= SetMode; m.mode = end.mode; }
        if ((sets & SetMask) || end.mask != s0.mask) { m.sets |= SetMask; m.mask = end.mask; }
        if ((sets & SetRow) || std::memcmp(end.row, s0.row, 16) != 0) { m.sets |= SetRow; std::memcpy(m.row, end.row, 16); }
        if ((sets & SetCol) || std::memcmp(end.col, s0.col, 16) != 0) { m.sets |= SetCol; std::memcpy(m.col, end.col, 16); }
        if (marked || end.mark != s0.mark) { m.sets |= SetMark; m.mark = end.mark; }
        m.statOr = (marked ? kMrk : 0u) | (interrupted ? kInt : 0u);
        m.code = end.code;
        m.num = end.num;
        m.startBase = s0.base & 0x3FFu;
        m.startOfst = s0.ofst & 0x3FFu;
        m.startTops = s0.tops & 0x3FFu;
        m.startDbf = (s0.stat & kDbf) ? 1u : 0u;
        m.startCycle = s0.cycle;
        m.startMode = s0.mode;
        m.startMask = s0.mask;
        std::memcpy(m.startRow, s0.row, 16);
        std::memcpy(m.startCol, s0.col, 16);
        m.epochBlob = epochAt;
        m.epochs = static_cast<uint16_t>(epochs);
        m.relLo = static_cast<uint16_t>(relLo < relHi ? relLo : 0u);
        m.relHi = static_cast<uint16_t>(relLo < relHi ? relHi : 0u);
        m.blobBytes = g_usedBlob - m.firstBlob;
        m.state = Ready;
        m.verified = 1u;
        m.attempts = 0;
        m.lastUse = g_walkSerial;
        ++g_stats.captured;
#if TS_MODEL_FILES
        if (!g_haveAnchor)
        {
            // The level's first capture names its file: loaded at the next walk.
            g_haveAnchor = true;
            g_anchorTarget = m.target;
            g_anchorHash = m.hash;
            g_loadPending = !(m.target == g_lastLoadTarget && m.hash == g_lastLoadHash);
        }
#endif
    }

    // --- eviction ----------------------------------------------------------
    struct Usage
    {
        uint32_t draws = 0, runs = 0, strips = 0, steps = 0, blob = 0, store = 0;
    };

    Usage usageOf(const Model &m)
    {
        Usage u;
        u.draws = m.draws;
        u.steps = m.steps;
        u.blob = m.blobBytes;
        for (uint32_t di = 0; di < m.draws; ++di)
        {
            const Draw &d = g_draws[m.firstDraw + di];
            const uint32_t stride = kStride[formatOf(d.kind)];
            u.runs += d.runs;
            for (uint32_t ri = 0; ri < d.runs; ++ri)
            {
                const Run &run = g_runs[d.firstRun + ri];
                u.strips += run.strips;
                u.store += run.count * stride;
            }
        }
        return u;
    }

    bool overBudget(const Usage &u)
    {
        return u.draws > kDraws / 4u * 3u || u.runs > kRuns / 4u * 3u || u.strips > kStrips / 4u * 3u ||
               u.steps > kSteps / 4u * 3u || u.blob > kBlobBytes / 4u * 3u || u.store > kStoreBytes / 4u * 3u;
    }

    // The table again, without the evicted (a model may change slots).
    bool rehash(const uint8_t *evict)
    {
        uint32_t keep = 0;
        for (uint32_t i = 0; i < kSlots; ++i)
            if (g_models[i].state != Empty && !evict[i])
                ++keep;
        Model *kept = static_cast<Model *>(std::malloc((keep ? keep : 1u) * sizeof(Model)));
        if (!kept)
            return false;
        uint32_t n = 0;
        for (uint32_t i = 0; i < kSlots; ++i)
            if (g_models[i].state != Empty && !evict[i])
                kept[n++] = g_models[i];
        std::memset(g_models, 0, kSlots * sizeof(Model));
        for (uint32_t k = 0; k < n; ++k)
        {
            const uint32_t h = homeSlot(kept[k].target);
            for (uint32_t probe = 0; probe < 16u; ++probe)
            {
                Model &slot = g_models[(h + probe) & (kSlots - 1u)];
                if (slot.state == Empty)
                {
                    slot = kept[k];
                    break;
                }
            }
        }
        std::free(kept);
        return true;
    }

    // The distinct state blocks again, for the draws kept.
    bool rebuildStates()
    {
        const uint32_t used = g_usedStateBytes;
        uint8_t *old = static_cast<uint8_t *>(std::malloc(used ? used : 16u));
        if (!old)
            return false;
        std::memcpy(old, g_stateBytes, used);
        std::memset(g_stateIndex, 0, kStateSlots * sizeof(uint32_t));
        g_usedStateBytes = 0;
        bool ok = true;
        for (uint32_t di = 0; di < g_usedDraws && ok; ++di)
        {
            Draw &d = g_draws[di];
            const uint32_t at = internState(old + d.state + 4u, d.stateBytes);
            ok = at != UINT32_MAX;
            d.state = at;
        }
        std::free(old);
        return ok;
    }

    // A full arena (compact requested at a walk with no capture open): the
    // models replayed least recently (not within kHotWalks) are evicted until
    // every arena is at most three quarters full, and what is kept moves down
    // in each arena, in allocation order (its order in every arena); the
    // store's records move only within their block. The GPU is done with the
    // records first. Markers of evicted or moved models still in flight make
    // their replays decode the chain from guest memory.
    void compact()
    {
        g_compactRequested = false;
        g_compactWalk = g_walkSerial;
        ++g_stats.compactions;
        if (g_resident)
            xboxNv2aWaitIdle();
        static uint16_t s_order[kSlots], s_lru[kSlots];
        static uint8_t s_evict[kSlots];
        std::memset(s_evict, 0, sizeof(s_evict));
        uint32_t n = 0;
        Usage total;
        for (uint32_t i = 0; i < kSlots; ++i)
            if (g_models[i].state == Ready)
            {
                s_order[n++] = static_cast<uint16_t>(i);
                const Usage u = usageOf(g_models[i]);
                total.draws += u.draws; total.runs += u.runs; total.strips += u.strips;
                total.steps += u.steps; total.blob += u.blob; total.store += u.store;
            }
        std::memcpy(s_lru, s_order, n * sizeof(uint16_t));
        std::sort(s_lru, s_lru + n, [](uint16_t a, uint16_t b) {
            return static_cast<int32_t>(g_models[a].lastUse - g_models[b].lastUse) < 0;
        });
        for (uint32_t k = 0; k < n && overBudget(total); ++k)
        {
            const Model &m = g_models[s_lru[k]];
            if (g_walkSerial - m.lastUse < kHotWalks)
                break; // the rest were replayed recently: kept (and the refused capture waits)
            s_evict[s_lru[k]] = 1u;
            const Usage u = usageOf(m);
            total.draws -= u.draws; total.runs -= u.runs; total.strips -= u.strips;
            total.steps -= u.steps; total.blob -= u.blob; total.store -= u.store;
            ++g_stats.evicted;
        }
        std::sort(s_order, s_order + n, [](uint16_t a, uint16_t b) {
            return static_cast<int32_t>(g_models[a].serial - g_models[b].serial) < 0;
        });
        uint32_t nd = 0, nr = 0, ns = 0, nst = 0, nb = 0, used[kBlocks] = {};
        for (uint32_t k = 0; k < n; ++k)
        {
            if (s_evict[s_order[k]])
                continue;
            Model &m = g_models[s_order[k]];
            const uint32_t firstDraw = nd;
            for (uint32_t di = 0; di < m.draws; ++di)
            {
                Draw d = g_draws[m.firstDraw + di];
                const uint32_t stride = kStride[formatOf(d.kind)], firstRun = nr;
                for (uint32_t ri = 0; ri < d.runs; ++ri)
                {
                    Run run = g_runs[d.firstRun + ri];
                    const uint32_t bytes = run.count * stride, b = run.first / kBlockBytes;
                    const uint32_t to = b * kBlockBytes + used[b];
                    if (to > run.first || ns > run.firstStrip || nr > d.firstRun + ri || nd > m.firstDraw + di)
                    {
                        flush(); // (never: each arena is in allocation order)
                        return;
                    }
                    if (to != run.first)
                        std::memmove(g_store + to, g_store + run.first, bytes);
                    const uint32_t delta = run.first - to;
                    for (uint32_t si = 0; si < run.strips; ++si)
                    {
                        Strip st = g_strips[run.firstStrip + si];
                        st.first -= delta;
                        g_strips[ns + si] = st;
                    }
                    run.firstStrip = ns;
                    ns += run.strips;
                    run.first = to;
                    used[b] += bytes;
                    g_runs[nr++] = run;
                }
                d.firstRun = firstRun;
                g_draws[nd++] = d;
            }
            m.firstDraw = firstDraw;
            if (nst > m.firstStep || nb > m.firstBlob)
            {
                flush();
                return;
            }
            std::memmove(g_steps + nst, g_steps + m.firstStep, m.steps * sizeof(Step));
            std::memmove(g_blob + nb, g_blob + m.firstBlob, m.blobBytes);
            const uint32_t delta = m.firstBlob - nb;
            for (uint32_t si = 0; si < m.steps; ++si)
            {
                Step &s = g_steps[nst + si];
                if (((s.type == StepMscal || s.type == StepRows) && s.count) || s.type == StepGif ||
                    s.type == StepMpg)
                    s.b -= delta;
            }
            m.epochBlob -= delta;
            m.firstStep = nst;
            nst += m.steps;
            m.firstBlob = nb;
            nb += m.blobBytes;
        }
        g_usedDraws = nd;
        g_usedRuns = nr;
        g_usedStrips = ns;
        g_usedSteps = nst;
        g_usedBlob = nb;
        g_usedStore = 0;
        for (uint32_t b = 0; b < kBlocks; ++b)
        {
            g_blockUsed[b] = used[b];
            g_usedStore += used[b];
        }
        for (int32_t &open : g_openBlock)
            if (open >= 0 && g_blockUsed[open] == 0u)
                open = -1;
        g_stats.vertexBytes = g_usedStore;
        // The evicted are taken out of the table last (their slots, and the
        // models after them, are what the order above refers to).
        if (!rebuildStates() || !rehash(s_evict))
            flush();
    }

#if TS_MODEL_FILES
    void fileName(char *out, size_t size, uint32_t target, uint32_t hash, const char *dir = kFileDir)
    {
        std::snprintf(out, size, "%s\\%08x-%08x.xmc", dir, static_cast<unsigned>(target),
                      static_cast<unsigned>(hash));
    }

    void fillHeader(FileHeader &h)
    {
        std::memset(&h, 0, sizeof(h));
        h.magic = kFileMagic;
        h.version = kFileVersion;
        h.slots = kSlots;
        h.storeBytes = kStoreBytes;
        h.blockBytes = kBlockBytes;
        h.blocks = kBlocks;
        h.strips = kStrips;
        h.runs = kRuns;
        h.draws = kDraws;
        h.stateBytes = kStateBytes;
        h.stateSlots = kStateSlots;
        h.resident = g_resident ? 1u : 0u;
        h.modelBytes = sizeof(Model);
        h.steps = kSteps;
        h.blobBytes = kBlobBytes;
    }

    bool writeAll(HANDLE f, const void *data, uint32_t bytes)
    {
        DWORD written = 0;
        return bytes == 0u || (WriteFile(f, data, bytes, &written, nullptr) && written == bytes);
    }

    bool readAll(HANDLE f, void *data, uint32_t bytes)
    {
        DWORD got = 0;
        return bytes == 0u || (ReadFile(f, data, bytes, &got, nullptr) && got == bytes);
    }

    // Everything captured so far, under the level's first capture's name.
    // The records are read back from the renderer's (write-combined) memory
    // once: two megabytes at most, when the level has settled.
    void saveFile()
    {
        CreateDirectoryA("E:\\TimeSplitters", nullptr);
        CreateDirectoryA(kFileDir, nullptr);
        char name[96];
        fileName(name, sizeof(name), g_anchorTarget, g_anchorHash);
        HANDLE f = CreateFileA(name, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (f == INVALID_HANDLE_VALUE)
        {
            ++g_stats.fileFailures;
            return;
        }
        FileHeader h;
        fillHeader(h);
        h.anchorTarget = g_anchorTarget;
        h.anchorHash = g_anchorHash;
        h.usedStore = g_usedStore;
        h.usedStrips = g_usedStrips;
        h.usedRuns = g_usedRuns;
        h.usedDraws = g_usedDraws;
        h.usedStateBytes = g_usedStateBytes;
        h.blocksUsed = g_blocksUsed;
        h.usedSteps = g_usedSteps;
        h.usedBlob = g_usedBlob;
        std::memcpy(h.openBlock, g_openBlock, sizeof(h.openBlock));
        std::memcpy(h.blockUsed, g_blockUsed, sizeof(h.blockUsed));
        bool ok = writeAll(f, &h, sizeof(h)) && writeAll(f, g_models, kSlots * sizeof(Model)) &&
                  writeAll(f, g_strips, g_usedStrips * sizeof(Strip)) && writeAll(f, g_runs, g_usedRuns * sizeof(Run)) &&
                  writeAll(f, g_draws, g_usedDraws * sizeof(Draw)) && writeAll(f, g_stateBytes, g_usedStateBytes) &&
                  writeAll(f, g_stateIndex, kStateSlots * sizeof(uint32_t)) &&
                  writeAll(f, g_steps, g_usedSteps * sizeof(Step)) && writeAll(f, g_blob, g_usedBlob);
        for (uint32_t b = 0; ok && b < g_blocksUsed; ++b)
            ok = writeAll(f, g_store + b * kBlockBytes, g_blockUsed[b]);
        CloseHandle(f);
        if (!ok)
        {
            DeleteFileA(name);
            ++g_stats.fileFailures;
            return;
        }
        g_capturedAtSave = g_stats.captured;
        ++g_stats.fileSaves;
    }

    // The anchor's file, if one was saved (the hard disk's, newer, before the
    // disc's): the cache is emptied (the GPU done with the old records) and
    // takes the file's models, ready but re-hashed before their first replay.
    void loadFile()
    {
        g_loadPending = false;
        char name[96];
        fileName(name, sizeof(name), g_anchorTarget, g_anchorHash);
        HANDLE f = CreateFileA(name, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (f == INVALID_HANDLE_VALUE)
        {
            fileName(name, sizeof(name), g_anchorTarget, g_anchorHash, kDiscFileDir);
            f = CreateFileA(name, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        }
        if (f == INVALID_HANDLE_VALUE)
            return; // none yet: saved once this level settles
        g_lastLoadTarget = g_anchorTarget;
        g_lastLoadHash = g_anchorHash;
        FileHeader h, want;
        fillHeader(want);
        bool ok = readAll(f, &h, sizeof(h)) && h.magic == want.magic && h.version == want.version &&
                  h.slots == want.slots && h.storeBytes == want.storeBytes && h.blockBytes == want.blockBytes &&
                  h.blocks == want.blocks && h.strips == want.strips && h.runs == want.runs &&
                  h.draws == want.draws && h.stateBytes == want.stateBytes && h.stateSlots == want.stateSlots &&
                  h.resident == want.resident && h.modelBytes == want.modelBytes &&
                  h.anchorTarget == g_anchorTarget && h.anchorHash == g_anchorHash && h.usedStrips <= kStrips &&
                  h.usedRuns <= kRuns && h.usedDraws <= kDraws && h.usedStateBytes <= kStateBytes &&
                  h.blocksUsed <= kBlocks && h.steps == want.steps && h.blobBytes == want.blobBytes &&
                  h.usedSteps <= kSteps && h.usedBlob <= kBlobBytes;
        for (uint32_t b = 0; ok && b < kBlocks; ++b)
            ok = h.blockUsed[b] <= kBlockBytes;
        if (!ok)
        {
            CloseHandle(f);
            ++g_stats.fileFailures;
            return;
        }
        const uint32_t anchorTarget = g_anchorTarget, anchorHash = g_anchorHash;
        flush();
        ok = readAll(f, g_models, kSlots * sizeof(Model)) && readAll(f, g_strips, h.usedStrips * sizeof(Strip)) &&
             readAll(f, g_runs, h.usedRuns * sizeof(Run)) && readAll(f, g_draws, h.usedDraws * sizeof(Draw)) &&
             readAll(f, g_stateBytes, h.usedStateBytes) && readAll(f, g_stateIndex, kStateSlots * sizeof(uint32_t)) &&
             readAll(f, g_steps, h.usedSteps * sizeof(Step)) && readAll(f, g_blob, h.usedBlob);
        for (uint32_t b = 0; ok && b < h.blocksUsed; ++b)
            ok = readAll(f, g_store + b * kBlockBytes, h.blockUsed[b]);
        CloseHandle(f);
        if (!ok)
        {
            flush(); // a part-read file: start empty
            ++g_stats.fileFailures;
            return;
        }
        g_usedStore = h.usedStore;
        g_usedStrips = h.usedStrips;
        g_usedRuns = h.usedRuns;
        g_usedDraws = h.usedDraws;
        g_usedStateBytes = h.usedStateBytes;
        g_blocksUsed = h.blocksUsed;
        g_usedSteps = h.usedSteps;
        g_usedBlob = h.usedBlob;
        std::memcpy(g_openBlock, h.openBlock, sizeof(g_openBlock));
        std::memcpy(g_blockUsed, h.blockUsed, sizeof(g_blockUsed));
        rebuildBlockFormats();
        for (uint32_t i = 0; i < kSlots; ++i)
        {
            Model &m = g_models[i];
            if (m.state != Ready)
            {
                m = Model{}; // failed or unfinished ones are tried again
                continue;
            }
            m.gen = g_generation;
            m.replays = 0;
            m.verified = 0u;
            m.lastUse = g_walkSerial;
            if (static_cast<int32_t>(m.serial - g_allocSerial) > 0)
                g_allocSerial = m.serial; // (the arenas are in the file's allocation order)
        }
        g_haveAnchor = true;
        g_anchorTarget = anchorTarget;
        g_anchorHash = anchorHash;
        g_capturedSeen = g_capturedAtSave = g_stats.captured;
        ++g_stats.fileLoads;
    }

    // Each walk: a pending load, or a save once the level's captures settle.
    void fileTick()
    {
        if (g_loadPending)
            loadFile();
        if (!g_haveAnchor)
            return;
        if (g_stats.captured != g_capturedSeen)
        {
            g_capturedSeen = g_stats.captured;
            g_quietWalks = 0;
            return;
        }
        if (++g_quietWalks >= kFileQuietWalks && g_stats.captured != g_capturedAtSave && !g_walk.model &&
            !g_decode.model)
        {
            g_quietWalks = 0;
            saveFile();
        }
    }
#endif
}

// ---------------------------------------------------------------- walker
XboxModelWalk xboxModelWalkCall(const uint8_t *rdram, uint32_t target, uint32_t callTag, uint32_t asp, bool tie,
                                const uint8_t *&marker)
{
    marker = nullptr;
    if (g_walk.model || !allocate())
        return XboxModelWalkNormal; // nested CALL inside a capture: as usual
    ++g_walkSerial;
    if (g_compactRequested && !g_decode.model && g_walkSerial - g_compactWalk >= kCompactSpacing)
        compact();
#if TS_MODEL_FILES
    fileTick();
#endif
    Model *m = find(target & 0x7FFFFFF0u, true);
    if (!m)
        return XboxModelWalkNormal;
    if (m->state == Ready)
    {
        // The walk must take the capture's course: IRQ tags end it with TIE,
        // and a chain that ends inside the CALL leaves the return stack.
        const bool ends = (m->flags & EndsChain) != 0u;
        if (((m->flags & IrqTags) && tie != ((m->flags & CaptureTie) != 0u)) || (ends && asp != m->callAsp))
            return XboxModelWalkNormal;
        if ((++m->replays % kVerifyEvery) == 0u || !m->verified)
        {
            m->verified = 1u;
            ++g_stats.verifies;
            uint32_t hash = 0, pieces = 0, bytes = 0;
            if (!walkChain(rdram, m->target, asp, tie, hash, nullptr, pieces, bytes) || hash != m->hash)
            {
                ++g_stats.stale;
                // Captured again now, from the guest's current data.
                beginWalkCapture(*m, rdram, asp, tie);
                marker = newMarker(*m, XboxModelBegin, tie, asp);
                return XboxModelWalkCapture;
            }
        }
        m->lastUse = g_walkSerial;
        marker = newMarker(*m, XboxModelReplay, tie, asp);
        ++g_stats.replays;
        if (!ends)
            return XboxModelWalkReplay;
        g_endModel = m;
        g_endReturn = callTag + 16u;
        return XboxModelWalkReplayEnd;
    }
    if (m->state == Failed)
    {
        // Refused for room: tried again once the eviction had its chance.
        if (m->retryAt == 0u || static_cast<int32_t>(g_walkSerial - m->retryAt) < 0)
            return XboxModelWalkNormal;
        m->retryAt = 0u;
    }
    else if (m->state == Capturing && g_walkSerial - m->lastUse < kStaleCaptureWalks)
    {
        // Captured by an earlier walk whose decode has not ended it yet
        // (several instances in one list): those wait for that capture.
        return XboxModelWalkNormal;
    }
    beginWalkCapture(*m, rdram, asp, tie);
    marker = newMarker(*m, XboxModelBegin, tie, asp);
    return XboxModelWalkCapture;
}

void xboxModelWalkReplayEnd(uint32_t &tagAddr, uint32_t &asp, uint32_t &asr0, uint32_t &asr1, uint32_t &lastTagUpper)
{
    const Model *m = g_endModel;
    g_endModel = nullptr;
    if (!m)
        return;
    // The CALL's own slot holds this call's return address; slots the chain
    // filled hold what it put there; the rest are as they were.
    uint32_t asr[2] = {asr0, asr1};
    for (uint32_t k = 0; k < 2u; ++k)
        if (k == m->callAsp)
            asr[k] = g_endReturn;
        else if (m->pushed & (1u << k))
            asr[k] = m->endAsr[k];
    asr0 = asr[0];
    asr1 = asr[1];
    asp = m->endAsp;
    tagAddr = m->endTag;
    lastTagUpper = m->endUpper;
}

void xboxModelWalkPiece(const uint8_t *data, uint32_t bytes)
{
    if (g_walk.model && g_walk.ok && !isMarker(data))
        hashPiece(data, bytes);
}

void xboxModelWalkTag(const uint8_t *tag)
{
    if (!g_walk.model)
        return;
    if (g_walk.ok)
        hashPiece(tag, 16u);
    uint64_t t;
    std::memcpy(&t, tag, 8);
    const uint32_t id = static_cast<uint32_t>((t >> 28) & 7u);
    g_walk.lastId = id;
    g_walk.lastIrq = ((t >> 31) & 1u) != 0u;
    g_walk.irqTags = g_walk.irqTags || g_walk.lastIrq;
    if (id == 5u)
    {
        const uint32_t slot = g_walk.asp + 1u + g_walk.depth; // the return-stack slot it fills
        if (slot < 2u)
            g_walk.pushed |= static_cast<uint8_t>(1u << slot);
        ++g_walk.depth;
    }
    else if (id == 6u && g_walk.depth)
        --g_walk.depth;
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
    m.flags |= static_cast<uint8_t>((g_walk.irqTags ? IrqTags : 0u) | (g_walk.tie ? CaptureTie : 0u));
    const bool tie = g_walk.tie;
    g_walk = {};
    return newMarker(m, XboxModelEnd, tie, m.callAsp);
}

const uint8_t *xboxModelWalkChainEnd(uint32_t tagAddr, uint32_t asp, uint32_t asr0, uint32_t asr1,
                                     uint32_t lastTagUpper)
{
    if (!g_walk.model)
        return nullptr;
    Model &m = *g_walk.model;
    // The chain ended inside the CALL: kept when an END tag or an IRQ tag
    // with TIE ended it (the walk can stop there again), not when the walk
    // gave up (a tag it could not read).
    const bool ended = g_walk.lastId == 0u || g_walk.lastId == 7u || (g_walk.lastIrq && g_walk.tie);
    if (g_walk.ok && ended && asp > m.callAsp)
    {
        m.hash = g_walk.hash;
        m.flags |= static_cast<uint8_t>(EndsChain | (g_walk.irqTags ? IrqTags : 0u) | (g_walk.tie ? CaptureTie : 0u));
        m.endTag = tagAddr;
        m.endAsp = static_cast<uint16_t>(asp);
        m.endAsr[0] = asr0;
        m.endAsr[1] = asr1;
        m.endUpper = lastTagUpper;
        m.pushed = g_walk.pushed;
    }
    else
        m.failures = 1u;
    const bool tie = g_walk.tie;
    g_walk = {};
    return newMarker(m, XboxModelEnd, tie, m.callAsp);
}

// ---------------------------------------------------------------- decoder
void xboxModelCaptureMscal(uint32_t startPC, bool mscnt, const VIFRegisters &regs, const uint8_t *vuData)
{
    if (!xboxModelCapturing())
        return;
    DecodeCapture &c = g_decode;
    resolvePending();
    flushWatched(vuData);
    if (!c.ok)
        return;
    if (c.epoch >= kMaxEpochs)
    {
        failDecode(1u); // too long
        return;
    }
    // (The registers after the MSCAL's steps: TOP is the batch's.)
    const uint32_t top = regs.top & 0x3FFu;
    c.vuData = vuData;
    c.pendingPc = startPC;
    c.pendingTop = top;
    c.pendingMscnt = mscnt;
    c.pendingDrawn = c.pendingCpu = c.pendingRecords = c.pendingKicks = false;
    c.pendingReadCount = c.pendingWriteCount = 0;
    snapReset();
    if (mscnt)
    {
        // The program continues where it stopped: every row the chain wrote.
        snapRange(vuData, 0u, 1024u);
        c.pending = PendingInterpreted;
    }
    else if (xboxNativeEntryRows(startPC, vuData, top, c.pendingReads, c.pendingReadCount, c.pendingWrites,
                                 c.pendingWriteCount, c.pendingKicks))
    {
        for (uint32_t i = 0; i < c.pendingReadCount; ++i)
            snapRange(vuData, c.pendingReads[i][0], c.pendingReads[i][1]);
        c.pending = PendingEntry;
    }
    else
        c.pending = PendingDraw; // a draw entry (xboxModelCaptureDraw follows), or the interpreter's
    ++c.epoch;
    g_epochTops[c.epoch] = static_cast<uint16_t>(regs.tops & 0x3FFu);
}

void xboxModelCaptureInterpreted()
{
    if (!xboxModelCapturing())
        return;
    DecodeCapture &c = g_decode;
    if (c.pending == PendingNone || !c.vuData)
    {
        failDecode(2u); // (the MSCAL's hook comes first)
        return;
    }
    // Any program reads anything: every row the chain wrote (VU memory is
    // still as at the MSCAL: a native entry declines before it writes).
    undoRecords();
    snapReset();
    snapRange(c.vuData, 0u, 1024u);
    c.pending = PendingInterpreted;
}

void xboxModelCaptureUnpack(uint32_t vuAddr, uint32_t writes, uint32_t cl, uint32_t wl, uint32_t opcode,
                            uint32_t imm, const VIFRegisters &regs)
{
    if (!xboxModelCapturing())
        return;
    DecodeCapture &c = g_decode;
    resolvePending();
    if (!c.ok)
        return;
    Model &m = *c.model;
    const VIFRegisters &s0 = c.start;
    // UNPACK registers still as before the chain (or set to the same): the
    // replay needs the same.
    if (regs.cycle == s0.cycle)
        m.deps |= DepCycle;
    if (regs.mode == s0.mode)
        m.deps |= DepMode;
    bool usesRow = (regs.mode & 3u) != 0u, usesCol = false;
    if (opcode & 0x10u)
    {
        if (regs.mask == s0.mask)
            m.deps |= DepMask;
        for (uint32_t f = 0; f < 16u; ++f)
        {
            const uint32_t v = (regs.mask >> (f * 2u)) & 3u;
            if (v == 3u)
            {
                failDecode(4u); // write-protected lanes keep what VU memory held before
                return;
            }
            usesRow = usesRow || v == 1u;
            usesCol = usesCol || v == 2u;
        }
    }
    if (usesRow && std::memcmp(regs.row, s0.row, 16) == 0)
        m.deps |= DepRow;
    if (usesCol && std::memcmp(regs.col, s0.col, 16) == 0)
        m.deps |= DepCol;
    const bool rel = (imm & 0x8000u) != 0u;
    const uint32_t tops = regs.tops & 0x3FFu;
    const uint32_t tag = kRowWritten | (rel ? kRowRel : 0u) | ((c.epoch & 0xFFFFu) << 10);
    uint32_t dest = vuAddr, pos = 0;
    for (uint32_t i = 0; i < writes; ++i)
    {
        // The rows UnpackCursor writes (CL > WL skips between WL-row runs).
        const uint32_t r = dest & 1023u;
        g_rowMap[r] = tag | (rel ? ((r - tops) & 1023u) : r);
        clearBit(g_consumed, r);
        if (watchedRow(r))
            setBit(g_watchedPending, r);
        ++dest;
        if (++pos == wl)
        {
            pos = 0;
            if (cl >= wl)
                dest += cl - wl;
        }
    }
    if (rel && writes)
    {
        const uint32_t lo = imm & 0x3FFu, hi = lo + (dest - vuAddr);
        c.relLo = lo < c.relLo ? lo : c.relLo;
        c.relHi = hi > c.relHi ? hi : c.relHi;
    }
}

void xboxModelCaptureGif(const uint8_t *data, uint32_t bytes, bool directHl)
{
    if (!xboxModelCapturing())
        return;
    resolvePending();
    Step *s = addStep(StepGif);
    if (!s)
        return;
    const uint32_t at = addBlob(bytes);
    if (at == UINT32_MAX)
        return;
    std::memcpy(g_blob + at, data, bytes);
    s->a = bytes;
    s->b = at;
    s->flags = directHl ? StepDirectHl : 0u;
}

void xboxModelCaptureMpg(uint32_t dest, const uint8_t *code, uint32_t bytes)
{
    if (!xboxModelCapturing() || bytes == 0u)
        return;
    DecodeCapture &c = g_decode;
    resolvePending();
    if (!c.ok)
        return;
    // The replay checks VU1 code against each MPG's: they must not overlap
    // (and the code between them stays what the capture ran).
    for (uint32_t i = 0; i < c.mpgs; ++i)
        if (dest < c.mpgAt[i][0] + c.mpgAt[i][1] && c.mpgAt[i][0] < dest + bytes)
        {
            failDecode(4u);
            return;
        }
    if (c.mpgs >= 16u || bytes > 0xFFFFu)
    {
        failDecode(4u);
        return;
    }
    c.mpgAt[c.mpgs][0] = dest;
    c.mpgAt[c.mpgs++][1] = bytes;
    Step *s = addStep(StepMpg);
    if (!s)
        return;
    const uint32_t at = addBlob(bytes);
    if (at == UINT32_MAX)
        return;
    std::memcpy(g_blob + at, code, bytes);
    s->a = dest;
    s->b = at;
    s->count = static_cast<uint16_t>(bytes);
    c.model->flags |= HasMpg;
}

void xboxModelCaptureCommand(uint32_t opcode, uint32_t imm, const VIFRegisters &regs)
{
    if (!xboxModelCapturing())
        return;
    DecodeCapture &c = g_decode;
    resolvePending();
    if (!c.ok)
        return;
    switch (opcode)
    {
    case 0x01u: c.sets |= SetCycle; break; // STCYCL
    case 0x05u: c.sets |= SetMode; break;  // STMOD
    case 0x20u: c.sets |= SetMask; break;  // STMASK
    case 0x30u: c.sets |= SetRow; break;   // STROW
    case 0x31u: c.sets |= SetCol; break;   // STCOL
    case 0x07u: c.marked = true; break;    // MARK
    case kXboxModelIBit: c.interrupted = true; break;
    case 0x06u: // MSKPATH3
        if (Step *s = addStep(StepPath3))
            s->a = imm;
        break;
    case 0x02u: case 0x03u: case 0x04u: // OFFSET, BASE, ITOP
        if (Step *s = addStep(StepReg))
        {
            s->flags = static_cast<uint8_t>(opcode);
            s->a = imm;
        }
        if (opcode == 0x02u)
        {
            if (c.epoch >= kMaxEpochs)
            {
                failDecode(1u);
                return;
            }
            ++c.epoch;
            g_epochTops[c.epoch] = static_cast<uint16_t>(regs.tops & 0x3FFu);
        }
        break;
    default: break;
    }
}

void xboxModelCaptureFail(uint32_t reason) { failDecode(reason); }

void xboxModelCaptureCpuStrip()
{
    if (xboxModelCapturing() && g_decode.pending == PendingDraw)
        g_decode.pendingCpu = true;
}

void xboxModelCaptureDraw(uint32_t kind, const uint8_t *data, uint32_t top, const uint8_t *stateBlock,
                          uint32_t stateBytes, bool material, const uint32_t *strips, uint32_t strideWords,
                          uint32_t count)
{
    (void)material; // (a block the renderer cannot take goes as a packet at the replay, as here)
    if (!xboxModelCapturing())
        return;
    DecodeCapture &c = g_decode;
    if (c.pending != PendingDraw || count == 0u)
    {
        failDecode(2u);
        return;
    }
    Model &m = *c.model;
    c.pendingDrawn = true;
    top &= 0x3FFu;
    // The rows runDraw reads from TOP: the strip headers (and the one after
    // the last, unless EOP or the 64th ended them), the arrays, the state
    // block. If the draw takes the CPU path, those the chain wrote are
    // restored for it at the replay.
    const ts_native_xf::Layout &L = ts_native_xf::kLayouts[kind < 4u ? kind : 0u];
    uint32_t total = 0;
    for (uint32_t i = 0; i < count; ++i)
        total += strips[i * strideWords + 4u];
    uint32_t extent = count + ((strips[(count - 1u) * strideWords] & 0x8000u) == 0u && count < 64u ? 1u : 0u);
    uint32_t lastArray = L.pos > L.rgba ? L.pos : L.rgba;
    if (!L.envMap && L.st > lastArray)
        lastArray = L.st;
    if ((L.lit || L.envMap) && L.normal > lastArray)
        lastArray = L.normal;
    if (L.skinned && L.boneIndex > lastArray)
        lastArray = L.boneIndex;
    extent = extent > L.vertexBase + lastArray + total ? extent : L.vertexBase + lastArray + total;
    extent = extent > 216u + stateBytes / 16u ? extent : 216u + stateBytes / 16u;
    extent = extent < 1024u ? extent : 1024u;
    c.pendingExtent = extent;
    snapReset();
    snapRange(data, top, extent);
    // Strips the renderer cannot take as records (no PRE, or a group with a
    // strip under three vertices) take the CPU path: the whole draw is then
    // run again at the replay instead.
    bool cpu = kind >= 4u;
    for (uint32_t i = 0; i < count && !cpu;)
    {
        const uint32_t *s = strips + i * strideWords;
        if ((s[1] & (1u << 14)) == 0u)
        {
            cpu = true;
            break;
        }
        const uint32_t prim = (s[1] >> 15) & 0x7FFu;
        uint32_t j = i;
        while (j < count)
        {
            const uint32_t *t = strips + j * strideWords;
            if ((t[1] & (1u << 14)) == 0u || ((t[1] >> 15) & 0x7FFu) != prim)
                break;
            cpu = cpu || t[4] < 3u;
            ++j;
        }
        i = j;
    }
    if (cpu)
    {
        c.pendingCpu = true;
        return;
    }
    if (g_usedDraws >= kDraws)
    {
        roomFail();
        return;
    }
    const uint32_t state = internState(stateBlock, stateBytes);
    if (state == UINT32_MAX)
    {
        roomFail();
        return;
    }
    if (m.firstDraw + m.draws != g_usedDraws)
    {
        failDecode(7u); // another capture's draw in between (cannot happen in one decode)
        return;
    }
    saveUndo();
    c.pendingRecords = true;
    Draw &d = g_draws[g_usedDraws];
    d.firstRun = g_usedRuns;
    d.runs = 0;
    d.kind = static_cast<uint8_t>(kind);
    d.pad = 0;
    d.state = state;
    d.stateBytes = static_cast<uint16_t>(stateBytes);
    d.extent = static_cast<uint16_t>(extent);
    // The runs as runDraw forms them: strips of one PRIM, all with PRE and
    // three vertices or more.
    for (uint32_t i = 0; i < count;)
    {
        const uint32_t prim = (strips[i * strideWords + 1u] >> 15) & 0x7FFu;
        uint32_t j = i;
        while (j < count && ((strips[j * strideWords + 1u] >> 15) & 0x7FFu) == prim)
            ++j;
        if (g_usedRuns >= kRuns || g_usedStrips + (j - i) > kStrips)
        {
            roomFail();
            return;
        }
        // Without the renderer's store the replay copies full records into the ring.
        const uint32_t format = formatOf(kind), stride = kStride[format];
        uint32_t records = 0;
        for (uint32_t k = i; k < j; ++k)
            records += strips[k * strideWords + 4u] + (k > i ? 2u : 0u);
        const uint32_t first = allocStore(format, records * stride);
        if (first == UINT32_MAX)
        {
            roomFail();
            return;
        }
        Run &run = g_runs[g_usedRuns++];
        run.firstStrip = g_usedStrips;
        run.strips = static_cast<uint16_t>(j - i);
        run.prim = static_cast<uint16_t>(prim);
        run.first = first;
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
    // The TOPS of each epoch of the replay (row runs written with FLG land past them).
    uint16_t g_replayTops[kMaxEpochs + 1];

    // Row runs from the blob into VU1 memory where the chain writes them
    // (UNPACK's watched-row notes too).
    void restoreRows(uint8_t *vu, uint32_t at, uint32_t runs)
    {
        const uint8_t *p = g_blob + at;
        for (uint32_t i = 0; i < runs; ++i)
        {
            RowRun run;
            std::memcpy(&run, p, sizeof(run));
            p += sizeof(run);
            const uint32_t base = run.rel ? g_replayTops[run.epoch] + run.at : run.at;
            for (uint32_t k = 0; k < run.count; ++k)
                std::memcpy(vu + ((base + k) & 1023u) * 16u, p + k * 16u, 16);
            g_vu1WatchedRows.note(base & 1023u, run.count);
            p += run.count * 16u;
        }
    }

    // Whether the steps reproduce the chain from these live registers and
    // this VU1 code: the UNPACK registers the capture took from before the
    // chain, the code its MPGs leave, and (another starting buffer) no batch
    // that would wrap past the end of VU1 memory and no FLG UNPACK that would
    // land on the transform constants' rows where the capture's did not.
    bool canReplay(const Model &m, const VIFRegisters &regs, PS2Memory *memory)
    {
        if (((m.deps & DepCycle) && regs.cycle != m.startCycle) || ((m.deps & DepMode) && regs.mode != m.startMode) ||
            ((m.deps & DepMask) && regs.mask != m.startMask) ||
            ((m.deps & DepRow) && std::memcmp(regs.row, m.startRow, 16) != 0) ||
            ((m.deps & DepCol) && std::memcmp(regs.col, m.startCol, 16) != 0))
            return false;
        if (m.flags & HasMpg)
        {
            const uint8_t *code = memory->getVU1Code();
            if (!code)
                return false;
            for (uint32_t si = 0; si < m.steps; ++si)
            {
                const Step &s = g_steps[m.firstStep + si];
                if (s.type == StepMpg && std::memcmp(code + s.a, g_blob + s.b, s.count) != 0)
                    return false;
            }
        }
        if ((regs.base & 0x3FFu) == m.startBase && (regs.ofst & 0x3FFu) == m.startOfst &&
            (regs.tops & 0x3FFu) == m.startTops && ((regs.stat & kDbf) ? 1u : 0u) == m.startDbf)
            return true; // the capture's own buffers
        const uint16_t *capTops = reinterpret_cast<const uint16_t *>(g_blob + m.epochBlob);
        VIFRegisters sim = regs;
        uint32_t epoch = 0, draw = 0;
        auto epochOk = [&]() {
            const uint32_t t = sim.tops & 0x3FFu;
            return epoch >= m.epochs || t == capTops[epoch] || m.relHi <= m.relLo ||
                   !rangeWatched(t + m.relLo, m.relHi - m.relLo);
        };
        if (!epochOk())
            return false;
        for (uint32_t si = 0; si < m.steps; ++si)
        {
            const Step &s = g_steps[m.firstStep + si];
            if (s.type == StepDraws)
                for (uint32_t k = 0; k < s.count; ++k)
                {
                    stepMscal(sim);
                    if ((sim.top & 0x3FFu) + g_draws[m.firstDraw + draw++].extent > 1024u)
                        return false;
                    ++epoch;
                    if (!epochOk())
                        return false;
                }
            else if (s.type == StepMscal || (s.type == StepReg && s.flags == 0x02u))
            {
                if (s.type == StepMscal)
                    stepMscal(sim);
                else
                    applyReg(sim, s.flags, s.a);
                ++epoch;
                if (!epochOk())
                    return false;
            }
            else if (s.type == StepReg)
                applyReg(sim, s.flags, s.a);
        }
        return true;
    }

    // One recorded draw: false when the renderer declined its first run and
    // nothing has gone out yet (the caller decodes the chain instead).
    bool replayDraw(const Draw &d, uint8_t *vuData, PS2Memory *memory, GS &gs, bool &committed)
    {
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
                // (The state block applied again by the decode changes nothing.)
                if (!committed)
                    return false;
                ++g_stats.replayDeclined;
                continue;
            }
            committed = true;
            ++g_stats.replayRuns;
            const uint32_t format = formatOf(d.kind);
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
        return true;
    }

    // The model's steps in order, from the live registers. False (nothing
    // sent, the registers as they were) when the chain must be decoded
    // instead.
    bool replay(const Model &m, uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory, GS &gs,
                const XboxModelVif &vif)
    {
        if (!canReplay(m, regs, memory))
            return false;
        const VIFRegisters saved = regs;
        bool committed = false, lastRecorded = false;
        uint32_t epoch = 0, draw = 0, lastTop = 0, lastItop = 0;
        g_replayTops[0] = static_cast<uint16_t>(regs.tops & 0x3FFu);
        for (uint32_t si = 0; si < m.steps; ++si)
        {
            const Step &s = g_steps[m.firstStep + si];
            ++g_stats.replaySteps;
            switch (s.type)
            {
            case StepDraws:
                for (uint32_t k = 0; k < s.count; ++k)
                {
                    stepMscal(regs);
                    if (epoch < kMaxEpochs)
                        g_replayTops[++epoch] = static_cast<uint16_t>(regs.tops & 0x3FFu);
                    if (!replayDraw(g_draws[m.firstDraw + draw++], vuData, memory, gs, committed))
                    {
                        regs = saved;
                        return false;
                    }
                    lastRecorded = true;
                    lastTop = regs.top;
                    lastItop = regs.itop;
                }
                break;
            case StepMscal:
                stepMscal(regs);
                if (epoch < kMaxEpochs)
                    g_replayTops[++epoch] = static_cast<uint16_t>(regs.tops & 0x3FFu);
                restoreRows(vuData, s.b, s.count);
                vif.mscal(memory, s.a, regs.top & 0x3FFu, regs.itop & 0x3FFu, (s.flags & StepMscnt) != 0u);
                committed = committed || (s.flags & StepPure) == 0u;
                lastRecorded = false;
                break;
            case StepRows:
                restoreRows(vuData, s.b, s.count);
                break;
            case StepGif:
                memory->submitGifPacket(GifPathId::Path2, g_blob + s.b, s.a, true, (s.flags & StepDirectHl) != 0u);
                committed = true;
                break;
            case StepReg:
                if (applyReg(regs, s.flags, s.a) && epoch < kMaxEpochs)
                    g_replayTops[++epoch] = static_cast<uint16_t>(regs.tops & 0x3FFu);
                break;
            case StepPath3:
                vif.mskPath3(memory, s.a);
                committed = true;
                break;
            default: break; // StepMpg: checked unchanged (canReplay)
            }
        }
        applyEnd(m, regs);
        // What the fast path leaves in the VU1 state after its last native run.
        if (lastRecorded)
            vif.afterNative(memory, lastTop & 0x3FFu, lastItop & 0x3FFu);
        return true;
    }

    // The chain decoded from guest memory as the walker would have handed it
    // over (the replay cannot reproduce it, or its model is gone).
    bool decodeInline(PS2Memory *memory, uint32_t target, uint32_t callAsp, bool tie)
    {
        if (!memory)
            return false;
        uint32_t hash = 0, count = 0, bytes = 0;
        if (!walkChain(memory->getRDRAM(), target, callAsp, tie, hash, g_pieces, count, bytes))
            return false;
        if (count)
            memory->decodeVIF1Pieces(g_pieces, count, bytes, true);
        ++g_stats.inlined;
        return true;
    }
}

void xboxModelDecodeMarker(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory, GS *gs,
                           bool onWorker, const XboxModelVif &vif)
{
    const uint32_t type = words[0] & 0xFFu, slot = (words[0] >> 8) & 0x1FFFu, target = words[1], gen = words[3];
    const bool tie = ((words[0] >> 21) & 1u) != 0u;
    const uint32_t asp = (words[0] >> 22) & 3u;
    if (words[2] != kXboxModelMagic || !g_models)
        return;
    if (onWorker)
    {
        // The VIF1 worker: no captures, and the table belongs to the EE
        // thread's walks. A replay is the chain from guest memory.
        if (type == XboxModelReplay && !decodeInline(memory, target, asp, tie))
            ++g_stats.replayMissing;
        return;
    }
    // The capture the marker names (it may have moved slots, or be gone).
    Model *m = slot < kSlots ? &g_models[slot] : nullptr;
    if (!m || m->state == Empty || m->target != target)
        m = find(target, false);
    if (m && m->gen != gen)
        m = nullptr;
    if (type == XboxModelBegin)
    {
        if (g_decode.model) // an unfinished capture (its END never came)
            g_decode.model->state = Failed;
        g_decode = {};
        syncOpen();
        if (onWorker || !m || m->state != Capturing)
            return;
        DecodeCapture &c = g_decode;
        c.model = m;
        c.gen = gen;
        c.ok = m->failures == 0u;
        c.start = regs;
        c.vuData = vuData;
        g_epochTops[0] = static_cast<uint16_t>(regs.tops & 0x3FFu);
        std::memset(g_rowMap, 0, sizeof(g_rowMap));
        std::memset(g_consumed, 0, sizeof(g_consumed));
        std::memset(g_watchedPending, 0, sizeof(g_watchedPending));
        m->firstDraw = g_usedDraws;
        m->draws = 0;
        m->firstStep = g_usedSteps;
        m->steps = 0;
        m->firstBlob = g_usedBlob;
        m->blobBytes = 0;
        m->deps = 0;
        m->flags &= static_cast<uint8_t>(~HasMpg);
        m->serial = ++g_allocSerial;
        syncOpen();
        return;
    }
    if (type == XboxModelEnd)
    {
        if (!m)
        {
            if (g_decode.model && g_decode.gen == gen)
            {
                g_decode = {};
                syncOpen();
            }
            return;
        }
        if (m->failures != 0u)
            failDecode(1u);
        if (g_decode.model == m && g_decode.gen == gen)
            finishDecode(*m, regs, vuData);
        return;
    }
    if (type == XboxModelReplay)
    {
        if (g_decode.model)
            failDecode(1u); // (inside a capture: the walker never nests them)
        if (!onWorker && gs && memory && vuData && m && m->state == Ready && replay(*m, vuData, regs, memory, *gs, vif))
            return;
        if (!decodeInline(memory, target, asp, tie))
            ++g_stats.replayMissing;
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
bool g_xboxModelCaptureOpen = false;
void xboxModelGetStats(XboxModelStats &out) { out = {}; }
#endif
