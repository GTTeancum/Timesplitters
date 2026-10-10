#pragma once
// GS renderer for the original Xbox: draws the game's screen on the NV2A.
//
// The display buffers (the frame buffers the game shows) are drawn by the
// GPU straight into pbkit's back buffer, scaled to 640x480, and presenting
// is a buffer flip. Everything else stays on an internal GSCpuBackend, whose
// GS local memory remains authoritative: uploads, CLUT loads, transfers and
// off-screen draws (render-to-texture). GPU-drawn screen pixels are written
// back to local memory only when something reads them (texture decode,
// local->host or local->local transfers), and CPU writes to the screen are
// loaded into the back buffer before the next GPU draw or flip. Textures are
// decoded from local memory; the prebuilt pack's copy (xbox_texture_pack.h)
// is drawn when it has the texture, else the decode is encoded here.
#include "runtime/gs/gs_cpu_backend.h"

#include <iosfwd>
#include <memory>

// Texture cache counters for the status block (xbox_main.cpp).
struct GSNv2aTextureStats
{
    uint32_t fills = 0, fillBytes = 0; // decoded onto the GPU, cumulative
    uint32_t resident = 0, residentBytes = 0;
    // Depth facts of the last screen draw: zbuf psm, TEST register bits
    // 16..19 (ZTE, ZTST), ZMSK, and the z range seen (vertex units).
    uint32_t zpsm = 0, test = 0, zmask = 0;
    uint32_t zmin = 0, zmax = 0;
    // Last frame: textures used (distinct) and their bytes, fills.
    uint32_t frameTextures = 0, frameTextureBytes = 0, frameFills = 0;
    // Misses by cause (cumulative): no texture at that address/size at
    // all, same address but local memory changed since, same contents
    // but a different CLUT/TEXA, or evicted/one-frame last frame.
    uint32_t missNew = 0, missVersion = 0, missClut = 0, missEvicted = 0;
    uint32_t frames = 0; // GPU frames finished (what the screen actually shows)
    // Screen read-backs (GPU pixels copied to local memory) by cause: a
    // texture read of the screen, an off-screen draw reading it, a CLUT
    // load from it, a transfer reading it, a CPU write into it.
    uint32_t wbTexture = 0, wbDraw = 0, wbClut = 0, wbTransfer = 0, wbCpuWrite = 0;
    // Off-screen draws the software renderer did (cumulative) and the last
    // target (FRAME fbp / fbw / psm, primitive type); full GPU waits.
    uint32_t offscreenDraws = 0, offscreenFbp = 0, offscreenFbw = 0, offscreenPsm = 0, offscreenPrim = 0;
    uint32_t gpuWaits = 0;
    // GPU waits by cause (vertex buffer, transform buffer, push buffer,
    // texture retire, read-back), strips and vertices drawn, near-plane
    // strips sent to the CPU clipper, palette loads that really loaded.
    uint32_t waitVb = 0, waitXf = 0, waitPush = 0, waitRetire = 0, waitReadback = 0;
    uint32_t xfStrips = 0, xfVertices = 0, nearFallbacks = 0, clutLoads = 0, screenLoads = 0;
    // CPU cycles (rdtsc, cumulative, in thousands): native VU1 runs (renderer
    // calls included), GPU idle waits, read-backs.
    uint32_t kcycNative = 0, kcycWait = 0, kcycReadback = 0;
    // Frames the game built and drew (first draws only), of them handed to
    // the draw thread without waiting for a vblank; the largest push-buffer
    // use of one frame (KB).
    uint32_t gameFrames = 0, earlyHandouts = 0, pushPeakKB = 0;
    // CLUT loads served by the palette cache.
    uint32_t paletteHits = 0;
    // Push-buffer hand-overs to the GPU (pb_end calls, pbkit's included): in
    // the last finished frame, and in total (its change between two status
    // lines over frames' change is the average per frame).
    uint32_t framePbEnds = 0, pbEnds = 0;
    // Texture pack (D:\textures.xtp, cumulative): cache misses whose key it
    // has (hits) or has not (misses); draws from the runtime path while the
    // entry was on its way from the disc (waits) or for want of pool room;
    // requests turned away by a full loader queue (busy); entries read and
    // evicted, the most evicted for one read; the reads' total and longest
    // time (on the loader thread, not the game's); pool bytes in use now.
    uint32_t packHits = 0, packMisses = 0, packWaits = 0, packNoRoom = 0, packBusy = 0;
    uint32_t packLoads = 0, packEvictions = 0, packMostVictims = 0, packLoadMs = 0, packLongestMs = 0;
    uint32_t packPoolBytes = 0;
    // The runtime path's texture budget now: 1024 KB, or 512 KB while the
    // pack carries the world textures.
    uint32_t textureBudgetKB = 1024;
    // Native draw runs (project/game/vu1_native_ts.cpp): render-state blocks
    // repeated (nothing to apply), found in the material table, decoded
    // afresh; transform-constant rebuilds; texture lookups answered by the
    // recent-texture table. TS_NATIVE_DRAW_SELFCHECK: runs checked against
    // the old path, and the differences found. TS_NATIVE_RING_SELFCHECK:
    // runs whose vertices, written straight into the transform ring, were
    // compared with the pipeline's earlier decode, and the runs that
    // differed (must stay 0).
    uint32_t materialRepeats = 0, materialHits = 0, materialMisses = 0, constRebuilds = 0, textureFast = 0;
    uint32_t drawChecked = 0, drawDiffs = 0;
    char drawDiffLast[24] = ""; // what differed last (status line)
    uint32_t ringChecked = 0, ringDiffs = 0;
};
extern GSNv2aTextureStats g_nv2aTextureStats;

// Texture, CLUT and constant lookups (cumulative), for the [TS:tex] log line.
struct GSNv2aLookupStats
{
    // Texture lookups; those past the recent table and the last texture
    // (the cache index, or the list walk while the index is off or full);
    // index overflows (the walk until the cache shrinks); self-check
    // (TS_NV2A_SELFCHECK): lookups where the index and the walk disagreed.
    uint32_t textures = 0, textureSlow = 0, indexOverflows = 0, indexDiffs = 0;
    // CLUT loads that loaded: full loads answered by the palette table,
    // missed for want of an entry (new: a free one taken; conflict: another
    // palette's pushed out), missed because its GS pages changed since, and
    // the rest (not full loads, or a source at the end of GS memory: the CPU
    // renderer's own load); deferred buffers the CPU renderer filled in;
    // self-check: loads whose result differed from the CPU renderer's.
    uint32_t clutLoads = 0, clutHits = 0, clutNew = 0, clutConflicts = 0, clutVersions = 0, clutOther = 0;
    uint32_t clutFills = 0, clutDiffs = 0;
    // With palette identities (TS_CLUT_IDENTITY): what the 128-slot
    // direct-mapped palette cache they replaced would have done with the
    // same full loads (hit, new, conflict, page versions changed).
    uint32_t oldHits = 0, oldNew = 0, oldConflicts = 0, oldVersions = 0;
    // Transform-constant rows rebuilt with a new value, rows sent to the GPU.
    uint32_t constRows = 0, constUploads = 0;
};
GSNv2aLookupStats nv2aLookupStats();

// The native pipeline's transform constants (project/game/vu1_native_ts.cpp,
// TS_XF_DIRTY_ROWS): the rows (GSXfConstants as 33 rows of four floats: mvp
// 0-11, lightDir 12-23, lightColour 24-27, scale 28, offset 29, model 30-32)
// in which constants serial `serial` may differ from the serial before it
// (serials skip 0). The renderer rebuilds only those when it built that
// serial before; a serial it was not told about changes every row.
void nv2aXfConstantsChanged(uint32_t serial, uint64_t rows);
// One compact line of them (no allocation): look= slow= ovf= idxdiff= clut=
// hit= miss new/conf/ver/other= old hit/new/conf/ver= fill= cdiff= krows= kup=
std::ostream &operator<<(std::ostream &out, const GSNv2aLookupStats &stats);

// Guest RAM (PS2Memory::getRDRAM), read once a frame for the game's local
// player count: split screen lowers the texture budget.
void nv2aSetGuestRam(const uint8_t *rdram);

class GSNv2aBackend final : public GSRasterBackend
{
public:
    // Starts pbkit (after XVideoSetMode). Null when the GPU is unavailable.
    static std::unique_ptr<GSNv2aBackend> Create();
    ~GSNv2aBackend() override;

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;

    void Submit(const GSPrimitiveBatch &batch) override;
    bool SubmitStrip(const GSDrawState &state, const GSVertex *vertices, uint32_t count) override;
    bool BeginXfRun(const GSDrawState &state, const GSXfConstants &constants, GSXfCursor &cursor) override;
    void GrowXfCursor(GSXfCursor &cursor, uint32_t count) override;
    void EmitXfStrip(const GSXfVertex *vertices, uint32_t count) override;
    void EndXfRun(GSXfCursor &cursor) override;
    void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override;
    uint64_t DebugClutState() override;

    void BeginTransfer(const GSTransferCommand &command) override;
    void UploadImage(const uint8_t *data, uint32_t sizeBytes) override;

    void Flush() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest &request) override;

    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;

    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

    struct Impl;

private:
    GSNv2aBackend();
    std::unique_ptr<Impl> m;
};
