#ifndef PS2_GS_FRONTEND_H
#define PS2_GS_FRONTEND_H

#include <array>
#include <atomic>
#include "runtime/gs/ps2_gif_arbiter.h"
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <vector>

#include "runtime/gs/gs_backend.h"
#if defined(PLATFORM_XBOX)
#include "runtime/gs/gs_material.h"
#include "runtime/ps2_host_lock.h"
#endif

// TS_LEAN_GS_HISTORY 1 (Xbox): GS::m_debugHistory keeps one entry, not 512
// (112 KB). It records only once unpaused, which only the PC debug panel
// does (ps2_debug_panel.cpp is not in the Xbox build). Set for every file
// (the class is in PS2Runtime).
#ifndef TS_LEAN_GS_HISTORY
#define TS_LEAN_GS_HISTORY 1
#endif

struct GSDebugSnapshot
{
    GSContext ctx[2]{};
    GSPrimReg prim{};
    GSTexaReg texa{};
    GSTexClutReg texclut{};
    uint64_t scanmsk = 0;
    uint64_t dimx = 0;
    uint64_t dthe = 0;
    uint64_t colclamp = 0;
    GSBitBltBuf bitbltbuf{};
    GSTrxPos trxpos{};
    GSTrxReg trxreg{};
    uint32_t trxdir = 0;
    uint32_t transferX = 0;
    uint32_t transferY = 0;
    uint32_t transferTotalPixels = 0;
    uint32_t transferCopiedPixels = 0;
    uint32_t lastDisplayBaseBytes = 0;
    GSFrameReg preferredDisplaySourceFrame{};
    uint32_t preferredDisplayDestFbp = 0;
    bool hasPreferredDisplaySource = false;
    uint32_t hostPresentationWidth = 0;
    uint32_t hostPresentationHeight = 0;
    uint32_t hostPresentationDisplayFbp = 0;
    uint32_t hostPresentationSourceFbp = 0;
    bool hostPresentationUsedPreferred = false;
    bool hasHostPresentationFrame = false;
    size_t localToHostPendingBytes = 0;
};

enum class GSDebugEventKind : uint8_t
{
    GifTag = 0,
    Register = 1,
    Draw = 2,
    Transfer = 3,
    Present = 4,
};

struct GSDebugHistoryEntry
{
    uint64_t seq = 0;
    uint64_t vsyncTick = 0;
    uint32_t frameIndex = 0;
    GSDebugEventKind kind = GSDebugEventKind::Register;

    uint8_t reg = 0;
    uint64_t regValue = 0;

    uint32_t gifSizeBytes = 0;
    uint32_t gifNloop = 0;
    uint8_t gifFlg = 0;
    uint8_t gifNreg = 0;

    GSPrimReg prim{};
    GSFrameReg frame{};
    GSZbufReg zbuf{};
    GSTex0Reg tex0{};
    GSScissorReg scissor{};
    uint64_t test = 0;
    uint64_t alpha = 0;

    uint32_t vertexCount = 0;
    float xMin = 0.0f;
    float xMax = 0.0f;
    float yMin = 0.0f;
    float yMax = 0.0f;
    double zMin = 0.0;
    double zMax = 0.0;
    uint8_t aMin = 0;
    uint8_t aMax = 0;

    GSBitBltBuf bitbltbuf{};
    GSTrxPos trxpos{};
    GSTrxReg trxreg{};
    uint32_t trxdir = 0;
    uint32_t transferPixels = 0;

    uint32_t displayFbp = 0;
    uint32_t sourceFbp = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    bool usedPreferred = false;
};

class GS
{
public:
    GS();
    ~GS() = default;

    void init(uint8_t *vram, uint32_t vramSize, struct GSRegisters *privRegs = nullptr);
    void reset();
    void setRasterBackend(std::unique_ptr<GSRasterBackend> backend);

    void processGIFPacket(const uint8_t *data, uint32_t sizeBytes, GifPathId path = GifPathId::Path3);
    // Draws a strip of already-decoded vertices with the current state and
    // the given PRIM register value, as a PACKED GIF packet with PRE set
    // would (used by native vertex pipelines, which skip packet encoding).
    void submitStrip(uint32_t primRegister, const GSVertex *vertices, uint32_t count);
    // A run of strips of raw vertices (one PRIM for all) transformed by the
    // backend, written into its vertex memory strip by strip (see
    // GSRasterBackend::BeginXfRun); begin is false when the backend cannot
    // (nothing drawn, PRIM still set). The GS state stays locked from a
    // successful begin to end: nothing else may touch the GS in between.
    bool beginXfRun(uint32_t primRegister, const GSXfConstants &constants, GSXfCursor &cursor);
    void growXfCursor(GSXfCursor &cursor, uint32_t count) { m_backend->GrowXfCursor(cursor, count); }
    void emitXfStrip(const GSXfVertex *vertices, uint32_t count) { m_backend->EmitXfStrip(vertices, count); }
    void endXfRun(GSXfCursor &cursor);
    // Render-state blocks of native vertex pipelines (project/game/
    // vu1_native_ts.cpp): a PACKED GIF packet of one tag, no PRE, every
    // register A+D, writing drawing-state registers only (no vertex, PRIM,
    // transfer, SIGNAL/FINISH/LABEL or privileged ones). The pipeline decodes
    // a block once and applies it without the GIF stream.
#if defined(PLATFORM_XBOX)
    // (GSStateBlock, runtime/gs/gs_material.h: serial is the material id,
    // equal ids, equal writes; 0: none.)
    using StateBlock = GSStateBlock;
#else
    struct StateBlock
    {
        static constexpr uint32_t kMaxWrites = 8u;
        uint32_t serial = 0;       // the owner's: equal serials, equal writes (0: none)
        uint32_t count = 0;        // A+D writes, in packet order
        uint32_t nloop = 0, nreg = 0;
        bool repeatable = false;   // see applyStateBlock
        bool idempotent = false;   // applying it twice is applying it once (but for TEXFLUSH)
        bool flushes = false;      // writes TEXFLUSH
        uint8_t regs[kMaxWrites] = {};
        uint64_t values[kMaxWrites] = {};
    };
#endif
    static bool decodeStateBlock(const uint8_t *data, uint32_t sizeBytes, StateBlock &out);
    // Applies a decoded block as processGIFPacket would apply its packet on
    // PATH1: the same register writes, in order. Repeated: the block is the
    // one applied last here (same serial) and no texture register (TEX0,
    // TEX1, TEX2, CLAMP, MIPTBP1/2 of either context) was written since, so
    // its values and its CLUT are still in place and writing it again would
    // only flush the texture cache, which is done. Only blocks of texture
    // registers and TEXFLUSH whose CLUT load is conditional (CLD 0, 4, 5)
    // repeat. NotApplied: PATH1 is inside a packet (send the block as one).
    enum class StateBlockResult : uint8_t { NotApplied, Applied, Repeated };
    StateBlockResult applyStateBlock(const StateBlock &block);
    // Development (TS_NATIVE_DRAW_SELFCHECK): processes an idempotent block
    // again as a PATH1 packet; true when that changed no drawing state and no
    // CLUT (the block's effect was already in place).
    bool checkStateBlock(const uint8_t *data, uint32_t sizeBytes);
#if defined(PLATFORM_XBOX)
    // Materials (M4.1 phase 1; gs_material.h): applies the table's entry
    // with this id as applyStateBlock applies its block, with the
    // commit-on-bind rule: the bound id is kept by value, and a block bound
    // last with no texture register written since is Repeated (its values
    // and CLUT are in place; only its TEXFLUSH is done). NotApplied: no such
    // entry, or PATH1 inside a packet. Consumers go through
    // ts_material::applyRunState (project/game/ts_material.h).
    StateBlockResult applyMaterial(uint32_t materialId);

    // ---- Push B/C front-end API (src/xbox/PUSH-BC-PLAN.md section 6, I-5;
    // owned by B-GS). Week 0: each exists with the old path's behaviour so
    // that its consumers (C-EMIT, C-XF) build against it; B-GS replaces the
    // bodies (the cached drawState with its serial, the material table, the
    // GIF bulk path, submitPrimitives' end state).
    // The state a draw would use now (what buildDrawBatch gives a draw),
    // cached: rebuilt only when its serial moved (stateSerial), else the
    // same object again. The reference is good while the GS state is locked
    // and no register is written.
    const GSDrawState &drawState() const;
    // Moves with every write of a drawing-state register whose value
    // changed (writeRegisterUnlocked; the shadow of raw values makes a
    // rewrite of the same value free), at reset, setRasterBackend and
    // restoreCheckState. Never 0. Two states with the same serial are the
    // same state (GSDrawState::serial).
    uint32_t stateSerial() const { return m_stateSerial; }
    // Decoded primitives of one PRIM, as a PACKED packet with PRE set would
    // kick them (the backend's SubmitPrimitives first, else one by one).
    // The vertex queue is left as the last kick leaves it, and the current
    // colour, ST/Q, UV and fog at the last vertex's values.
    void submitPrimitives(uint32_t primRegister, const GSVertex *vertices, uint32_t count);
    // A PACKED vertex register (XYZF2 0x04, XYZ2 0x05, XYZF3 0x0C, XYZ3
    // 0x0D) decoded with the current colour, ST/UV and fog into out, as
    // writeRegisterPacked queues it; true when the register kicks (XYZF2 /
    // XYZ2 without ADC). Other registers: false, out untouched.
    bool decodePackedVertex(uint8_t regDesc, uint64_t lo, uint64_t hi, GSVertex &out) const;
    // Tier 0's front half (section 3.2 item 1): a PATH1 packet from the
    // native VU1 program's kick, with the effect of processGIFPacket on
    // PATH1. With TS_GS_BULK (gs_frontend.cpp) whole tags are read in place
    // while the PATH1 stream is between tags: an A+D block of drawing-state
    // registers is applied as a state block (a texture-only one found in
    // the material table first, TS_GS_MATERIAL_TABLE, so that it repeats
    // as applyMaterial's do); a PACKED vertex tag with PRE whose registers
    // are vertex attributes only has its primitives gathered for the
    // backend's SubmitPrimitives when it takes them (DrawPaths; not for
    // widescreen overlays or display copies), else drawn as the kicks
    // draw them; other PACKED tags are written register by register without
    // the stream's buffering; anything else (IMAGE, REGLIST, a tag cut by
    // the packet's end) goes through the stream from there on. Callers keep
    // the GIF arbiter's order (the packet goes now). Without TS_GS_BULK:
    // processGIFPacket on PATH1.
    void processPath1Bulk(const uint8_t *data, uint32_t sizeBytes);
    // The drawing state a self-check saves before it runs a packet through a
    // recording backend and restores after (TS_NATIVE_EMIT_SELFCHECK).
    struct CheckState;
    void saveCheckState(CheckState &out) const;
    void restoreCheckState(const CheckState &state);
    // Swaps the raster backend for a check and hands the old one back
    // (no flush, sync or memory hand-over: the check restores it at once).
    std::unique_ptr<GSRasterBackend> swapBackendForCheck(std::unique_ptr<GSRasterBackend> backend);
    // An outside self-check (TS_NATIVE_EMIT_SELFCHECK) is running packets
    // into its recording backend: the front end's own sampled checks
    // (TS_GS_BULK_SELFCHECK, TS_GS_STATE_SELFCHECK's commit re-check) stay
    // out of it. They sample by counters the outside check cannot save, and
    // the commit re-check writes its block again (LoadClut, TextureFlush),
    // so one run of the packet would carry calls the other does not.
    void setOuterCheck(bool on);
    // A primitive the native path recognised and drew nothing for (the
    // texture-kick strip): statistics only.
    void notePrimNoDraw(uint32_t prim);
    // Front-end statistics and check counters (cumulative; [TS:gs] on the
    // Xbox through src/xbox/xbox_gs_report.cpp).
    struct Stats
    {
        uint32_t serialBumps = 0;                 // stateSerial moves
        uint32_t drawStateHits = 0, drawStateBuilds = 0;
        uint32_t stateChecks = 0, stateDiffs = 0; // TS_GS_STATE_SELFCHECK: cached state against a fresh build
        uint32_t materialApplied = 0, materialRepeated = 0, materialMissing = 0; // applyMaterial
        uint32_t blockRepeats = 0;                // state blocks repeated (any caller)
        uint32_t materialChecks = 0, materialDiffs = 0; // TS_GS_STATE_SELFCHECK: sampled commits re-checked
        uint32_t bulkPackets = 0, bulkTags = 0, bulkStateTags = 0, bulkVertexTags = 0, bulkFallbackTags = 0;
        uint32_t bulkSubmits = 0, bulkDeclined = 0, bulkVertices = 0, bulkFallbackPackets = 0;
        uint32_t bulkChecks = 0, bulkDiffs = 0;   // TS_GS_BULK_SELFCHECK: bulk against per-register, by packet
        uint32_t primsNoDraw = 0;                 // notePrimNoDraw
        uint32_t submitPrimitives = 0, submitPrimitivesTaken = 0;
    };
    static const Stats &stats();
    // Inside an open xf run: in-place strips to the backend (M8).
    void xfInPlace(GSXfCursor &cursor, const GSXfInPlaceStrip *strips, uint32_t count)
    {
        m_backend->XfInPlace(cursor, strips, count);
    }
    // Single-owner GS locking (B-PLATFORM, TS_GS_LOCK_ELIDE): set by the
    // Xbox start-up through xboxInstallBackend.
    static void setSingleOwner(bool on) { ps2x::OwnedRecursiveMutex::setSingleOwner(on); }

#endif
    enum class HostPresentationMode { VSync, Signal, Finish };
    void setHostPresentationMode(HostPresentationMode mode) { m_hostPresentationMode.store(mode); }
    HostPresentationMode hostPresentationMode() const { return m_hostPresentationMode.load(); }
    uint64_t hostPresentationSequence() const { return m_hostPresentationSequence.load(std::memory_order_acquire); }
    bool processNativePackedGIFPacket(const uint8_t *data, uint32_t sizeBytes);
    void uploadImageNative(uint64_t bitbltbuf,
                           uint64_t trxpos,
                           uint64_t trxreg,
                           uint64_t trxdir,
                           const uint8_t *data,
                           uint32_t sizeBytes);
    void writeRegister(uint8_t regAddr, uint64_t value);

    const uint8_t *lockDisplaySnapshot(uint32_t &outSize);
    void unlockDisplaySnapshot();
    uint32_t getLastDisplayBaseBytes() const;
    const GSFrameReg &getContextFrame(int index) const
    {
        return m_ctx[(index != 0) ? 1 : 0].frame;
    }
    GSDebugSnapshot getDebugSnapshot() const;
    std::vector<GSDebugHistoryEntry> getDebugHistory() const;
    void clearDebugHistory();
    bool isDebugHistoryPaused() const;
    void setDebugHistoryPaused(bool paused);
    bool getPreferredDisplaySource(GSFrameReg &outSource, uint32_t &outDestFbp) const;
    void latchHostPresentationFrame();
    void publishHostPresentationFrame(PresentationFrame &&frame, bool recordDebugEvent);
    bool copyLatchedHostPresentationFrame(std::vector<uint8_t> &outPixels,
                                          uint32_t &outWidth,
                                          uint32_t &outHeight,
                                          uint32_t *outDisplayFbp = nullptr,
                                          uint32_t *outSourceFbp = nullptr,
                                          bool *outUsedPreferred = nullptr) const;
    bool clearFramebufferContext(uint32_t contextIndex, uint32_t rgba);
    bool clearActiveFramebuffer(uint32_t rgba);
    uint64_t nativeImageUploadCount() const { return m_nativeImageUploadCount; }
    uint64_t nativePackedGIFPacketCount() const { return m_nativePackedGIFPacketCount; }

    uint32_t consumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes);

    void refreshDisplaySnapshot();

    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value);
    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const;

private:
    void snapshotVRAM();
    void writeRegisterUnlocked(uint8_t regAddr, uint64_t value);
    void writeRegisterPacked(uint8_t regDesc, uint64_t lo, uint64_t hi);
    void uploadImageNativeUnlocked(uint64_t bitbltbuf,
                                   uint64_t trxpos,
                                   uint64_t trxreg,
                                   uint64_t trxdir,
                                   const uint8_t *data,
                                   uint32_t sizeBytes);
    void vertexKick(bool drawing);

    void recordDebugEventUnlocked(GSDebugHistoryEntry entry);
    GSDebugHistoryEntry makeDebugEventUnlocked(GSDebugEventKind kind) const;
    void recordGifTagDebugEventUnlocked(uint32_t sizeBytes, uint32_t nloop, uint8_t flg, uint32_t nreg);
    void recordRegisterDebugEventUnlocked(uint8_t regAddr, uint64_t value);
    void recordDrawDebugEventUnlocked(int vertexCount);
    void recordTransferDebugEventUnlocked();
    void recordPresentDebugEventUnlocked(uint32_t displayFbp, uint32_t sourceFbp, uint32_t width, uint32_t height, bool usedPreferred);

    void processImageData(const uint8_t *data, uint32_t sizeBytes);
    bool tryProcessNativeImageUploadPacket(const uint8_t *data, uint32_t sizeBytes);
#if defined(PLATFORM_XBOX)
    // processGIFPacket's stream, under the lock (nativeImage: the whole-
    // packet image upload shortcut may be taken; only at a packet's start).
    void processGIFStreamUnlocked(const uint8_t *data, uint32_t sizeBytes, GifPathId path, bool nativeImage);
#endif
    GSPrimitiveBatch buildDrawBatch(int vertexCount) const;
#if defined(PLATFORM_XBOX)
    void buildDrawState(GSDrawState &out) const;
    const GSDrawState &drawStateUnlocked() const; // drawState under the lock
    // A drawing-state register written (writeRegisterUnlocked): the serial
    // moves unless the raw value is the one the shadow holds.
    void noteStateWrite(uint8_t regAddr, uint64_t value);
    void bumpStateSerial();
    // submitPrimitives under the lock (PRIM written first).
    void submitPrimitivesUnlocked(uint32_t primRegister, const GSVertex *vertices, uint32_t count);
#endif
    void adjustWidescreenHud(GSPrimitiveBatch &batch);
#if defined(PLATFORM_XBOX)
    // Widescreen HUD narrowing, as pure tests (the GIF bulk path declines a
    // tag the old path would narrow): whether narrowing is on at all now,
    // and whether a draw of this state is an overlay candidate (its vertices
    // decide the rest).
    bool widescreenActive() const;
    static bool widescreenOverlayState(const GSDrawState &state);
    // A full-screen sprite copying a frame into another (the display-source
    // heuristic), from the two sprite vertices; displayCopyState: the
    // state's half of that test (a sprite of this state may be one).
    static bool displayCopySprite(const GSDrawState &state, const GSVertex &v0, const GSVertex &v1);
    static bool displayCopyState(const GSDrawState &state);
    // applyStateBlock / checkStateBlock under the lock.
    StateBlockResult applyStateBlockUnlocked(const StateBlock &block, bool recordTag);
    bool checkStateBlockUnlocked(const uint8_t *data, uint32_t sizeBytes);
    // Primitives handed to the backend whole (submitPrimitives, the bulk
    // path's vertex tags): the kicks' draws gathered into a run of one PRIM
    // (vertexKickRun moves the vertex queue exactly as vertexKick does),
    // given to SubmitPrimitives, else drawn one by one (flushPrimitiveRun).
    // takeRun: the backend takes runs and no draw of the current state
    // needs the per-primitive path (widescreen narrowing, display copies,
    // a debugger's history).
    struct PrimitiveRun;
    void beginPrimitiveRun(PrimitiveRun &run, uint32_t primRegister) const;
    bool takeRun() const;
    void vertexKickRun(bool drawing, PrimitiveRun &run);
    void flushPrimitiveRun(PrimitiveRun &run);
    // The GIF bulk path's body (processPath1Bulk, under the lock; the PATH1
    // stream is between tags).
    // One whole PACKED tag at data (the tag qword first; payloadBytes
    // after it), by the bulk path's routes; endBulkTag leaves the PATH1
    // stream's fields as the stream leaves them after the tag.
    void endBulkTag(uint64_t hi, uint32_t nreg, bool wroteRegisters);
    struct BulkCheckExtra;
    static bool sameBulkCheckExtra(const BulkCheckExtra &a, const BulkCheckExtra &b);
    void bulkStateTag(const uint8_t *data, uint32_t tagBytes);
    bool bulkVertexTag(uint64_t lo, uint64_t hi, const uint8_t *payload, uint32_t nloop, uint32_t nreg);
    void bulkRegisterTag(uint64_t lo, uint64_t hi, const uint8_t *payload, uint32_t nloop, uint32_t nreg);
    void bulkPath1Unlocked(const uint8_t *data, uint32_t sizeBytes);
    void bulkSelfCheck(const uint8_t *data, uint32_t sizeBytes);
#endif
    uint64_t m_drawCounter = 0, m_lastPerspectiveDraw = 0;
    // Current row of HUD glyphs, moved as one piece so text is not split.
    uint64_t m_hudRunDraw = 0;
    float m_hudRunY0 = 0.0f, m_hudRunY1 = 0.0f, m_hudRunX1 = 0.0f, m_hudRunAnchor = 0.0f;
    void updatePreferredDisplaySourceForDraw(const GSPrimitiveBatch &batch);
    GSPresentationRequest buildPresentationRequestUnlocked() const;


    GSContext &activeContext();

    struct GifStreamState {
        std::array<uint8_t, 16> unit{};
        uint32_t unitBytes = 0;
        uint32_t remaining = 0;
        uint32_t regIndex = 0;
        uint32_t nreg = 1;
        uint32_t padding = 0;
        uint32_t endPadding = 0;
        uint8_t format = 0;
        uint64_t registers = 0;
        float q = 1.0f;
        std::vector<uint8_t> image;
    };
    std::array<GifStreamState, 3> m_gifStreams{};
    // Writes to the texture registers (TEX0, TEX1, TEX2, CLAMP, MIPTBP1/2),
    // and where the count stood after the last state block applied
    // (applyStateBlock's repeats).
    uint32_t m_textureStateWrites = 0;
    uint32_t m_lastStateBlock = 0, m_lastStateBlockWrites = 0;
#if defined(PLATFORM_XBOX)
    // The state serial (stateSerial) and the shadow of the drawing-state
    // registers' raw values it is compared against (m_rawValid: the shadow
    // holds every register written since it was cleared); the cached
    // drawState() and the serial it was built at.
    uint32_t m_stateSerial = 1;
    uint32_t m_stateSerialCounter = 1;
    static constexpr uint32_t kShadowRegs = 0x63u;
    uint64_t m_rawReg[kShadowRegs] = {};
    uint64_t m_rawValid[2] = {}; // bit r: m_rawReg[r] holds register r's last value
    mutable GSDrawState m_drawStateCache{};
    mutable uint32_t m_drawStateCacheSerial = 0;
    bool m_bulkChecking = false; // TS_GS_BULK_SELFCHECK: inside a check (no nested check)
    bool m_outerCheck = false;   // setOuterCheck: no sampled check of the front end's own
#endif
    std::atomic<HostPresentationMode> m_hostPresentationMode{HostPresentationMode::VSync};
    std::atomic<uint64_t> m_hostPresentationSequence{0};
    uint8_t *m_localMemoryStorage = nullptr;
    uint32_t m_localMemorySize = 0u;
    struct GSRegisters *m_privRegs = nullptr;
#if defined(PLATFORM_XBOX)
    mutable ps2x::OwnedRecursiveMutex m_stateMutex;
#else
    mutable std::recursive_mutex m_stateMutex;
#endif
    mutable std::mutex m_backendLifetimeMutex;
    mutable std::mutex m_presentationMutex;

    GSContext m_ctx[2];
    GSPrimReg m_prim{};
    GSPrimReg m_primRegister{};
    GSPrimReg m_prmodeRegister{};

    uint8_t m_curR = 0x80, m_curG = 0x80, m_curB = 0x80, m_curA = 0x80;
    float m_curQ = 1.0f;
    float m_curS = 0.0f, m_curT = 0.0f;
    uint16_t m_curU = 0, m_curV = 0;
    uint8_t m_curFog = 0;
    uint8_t m_fogR = 0, m_fogG = 0, m_fogB = 0;

    bool m_prmodecont = true;
    bool m_pabe = false;
    uint64_t m_scanmsk = 0;
    uint64_t m_dimx = 0;
    uint64_t m_dthe = 0;
    uint64_t m_colclamp = 0;
    GSTexaReg m_texa{0u, false, 0u};
    GSTexClutReg m_texclut{0u, 0u, 0u};

    GSBitBltBuf m_bitbltbuf{};
    GSTrxPos m_trxpos{};
    GSTrxReg m_trxreg{};
    uint32_t m_trxdir = 3;


    static constexpr int kMaxVerts = 6;
    GSVertex m_vtxQueue[kMaxVerts];
    int m_vtxCount = 0;
    int m_vtxIndex = 0;

    std::vector<uint8_t> m_displaySnapshot;
    std::mutex m_snapshotMutex;
    uint32_t m_lastDisplayBaseBytes = 0;
    GSFrameReg m_preferredDisplaySourceFrame{};
    uint32_t m_preferredDisplayDestFbp = 0;
    bool m_hasPreferredDisplaySource = false;
    std::vector<uint8_t> m_hostPresentationFrame;
    uint32_t m_hostPresentationWidth = 0;
    uint32_t m_hostPresentationHeight = 0;
    uint32_t m_hostPresentationDisplayFbp = 0;
    uint32_t m_hostPresentationSourceFbp = 0;
    bool m_hostPresentationUsedPreferred = false;
    bool m_hasHostPresentationFrame = false;
    uint64_t m_nativeImageUploadCount = 0;
    uint64_t m_nativePackedGIFPacketCount = 0;

#if defined(PLATFORM_XBOX) && TS_LEAN_GS_HISTORY
    static constexpr size_t kDebugHistoryCapacity = 1;
#else
    static constexpr size_t kDebugHistoryCapacity = 512;
#endif
    std::array<GSDebugHistoryEntry, kDebugHistoryCapacity> m_debugHistory{};
    size_t m_debugHistoryWrite = 0;
    size_t m_debugHistoryCount = 0;
    uint64_t m_debugNextSeq = 1;
    uint32_t m_debugFrameIndex = 0;
    uint64_t m_debugLastVsyncTick = UINT64_MAX;
    bool m_debugHistoryPaused = true;

    std::unique_ptr<GSRasterBackend> m_backend;
};

#if defined(PLATFORM_XBOX)
// The drawing state saveCheckState copies (everything a PATH1 packet of
// drawing registers and vertices can change, and the state-block repeat
// bookkeeping); not the display, transfer or debug state.
struct GS::CheckState
{
    std::array<GifStreamState, 3> gifStreams{};
    uint32_t textureStateWrites = 0, lastStateBlock = 0, lastStateBlockWrites = 0;
    GSContext ctx[2];
    GSPrimReg prim{}, primRegister{}, prmodeRegister{};
    uint8_t curR = 0x80, curG = 0x80, curB = 0x80, curA = 0x80;
    float curQ = 1.0f, curS = 0.0f, curT = 0.0f;
    uint16_t curU = 0, curV = 0;
    uint8_t curFog = 0, fogR = 0, fogG = 0, fogB = 0;
    bool prmodecont = true, pabe = false;
    uint64_t scanmsk = 0, dimx = 0, dthe = 0, colclamp = 0;
    GSTexaReg texa{0u, false, 0u};
    GSTexClutReg texclut{0u, 0u, 0u};
    GSVertex vtxQueue[kMaxVerts];
    int vtxCount = 0, vtxIndex = 0;
    uint64_t drawCounter = 0, lastPerspectiveDraw = 0;
};

#endif
#endif
