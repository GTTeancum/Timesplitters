#pragma once

#include "runtime/gs/gs_types.h"
#include "runtime/gs/gs_xf_inplace.h"

#include <cstdint>
#include <functional>
#include <vector>

// A native vertex pipeline's raw vertex (model space) and the constants a
// GPU vertex program transforms it with (project/game/vu1_native_ts.cpp,
// src/xbox/shaders/gs_xf.vs.cg). Matrices are row vectors as the VU1 keeps
// them: clip = x*row0 + y*row1 + z*row2 + row3.
struct GSXfVertex
{
    float x, y, z;
    float nx, ny, nz;
    uint32_t color; // B, G, R, A bytes (GS values, 0x80 = 1.0)
    float s, t, q;  // texture coordinates; q divides s and t
    float bone4;    // bone index * 4 (skinned)
};
static_assert(sizeof(GSXfVertex) == 44, "GSXfVertex layout");

struct GSXfConstants
{
    enum Variant : uint32_t { Plain = 0, Lit = 1, EnvMap = 2, Skinned = 3 };
    float mvp[3][4][4];        // bones 0..2
    float lightDir[3][4][4];   // normal -> four light intensities (row 3: ambient)
    float lightColour[4][4];   // intensities -> RGB
    float scale[4], offset[4]; // viewport: GS coordinates = ndc * scale + offset
    float model[3][4];         // environment map: the normal's rotation rows
    uint32_t variant;
    uint32_t serial;           // changes whenever the values may have (0: always rebuild)
    // Development (TS_NATIVE_DRAW_SELFCHECK): the backend also takes its full
    // paths (texture lookup, constant rebuild) and reports any difference.
    uint32_t check = 0;
};

// Where a run of joined strips goes in the backend's transform ring
// (GSRasterBackend::BeginXfRun): the caller writes records from next up to
// end and keeps a cached copy of the last one it wrote (the ring is
// write-combined and never read back; the next strip's join repeats it).
// Handed back at EndXfRun, so a strip costs no call into the backend.
struct GSXfCursor
{
    GSXfVertex *next = nullptr, *end = nullptr;
    bool direct = false; // one joined strip into the ring (else EmitXfStrip)
    bool join = false;   // a strip goes before: the next one starts with (last, first)
    uint32_t strips = 0, vertices = 0; // counted by the caller (status block)
    GSXfVertex last{};
    // In-place fetch (XfInPlace, src/xbox/PUSH-BC-PLAN.md M8): the run's
    // prepared in-place strips (null: none) and how many of them the backend
    // took. GS::beginXfRun clears both every time; the runner sets inPlace
    // null when its prepare fails.
    const GSXfInPlaceStrip *inPlace = nullptr;
    uint32_t inPlaceTaken = 0;
};

// A native run with a bound material (BeginNativeRun; B-GS phase 2, gated on
// the post-phase-1 console measurement). B-GS may add fields.
struct GSNativeRun
{
    const GSDrawState *state = nullptr;
    const GSXfConstants *constants = nullptr;
    uint32_t runId = 0;      // the front end's run serial
    uint32_t materialId = 0; // GSMaterialTable id, 0: none
};
enum class GSNativeRunResult : uint8_t
{
    Unsupported = 0, // the backend has no native-run path: BeginXfRun as before
    Begun = 1,       // the run is open (EndXfRun closes it)
    Declined = 2,    // this run cannot take it: BeginXfRun as before
};

// The draw paths a backend implements beyond the old ones (DrawPaths), so
// start-up can say which are active and assert that a switched-on path has a
// backend behind it (xboxInstallBackend).
enum GSBackendDrawPath : uint32_t
{
    kGSDrawPathSubmitPrimitives = 1u, // SubmitPrimitives (Tier 0 bulk, C-EMIT)
    kGSDrawPathXfInPlace = 2u,        // XfInPlace (M8, C-XF)
    kGSDrawPathNativeRun = 4u,        // BeginNativeRun (B-GS phase 2)
};

class GSRasterBackend
{
public:
    virtual ~GSRasterBackend() = default;

    // Which of the paths above this backend implements (0: none). The
    // defaults of those virtuals are the old path either way.
    virtual uint32_t DrawPaths() const { return 0u; }

    virtual void Initialize(uint8_t *vram, uint32_t vramSize) = 0;
    virtual void Reset() = 0;

    virtual void Submit(const GSPrimitiveBatch &batch) = 0;
    // A whole triangle strip in one call (the Xbox renderer); false when
    // the backend wants it as individual primitives.
    virtual bool SubmitStrip(const GSDrawState &, const GSVertex *, uint32_t) { return false; }
    // Decoded primitives of one PRIM (prim: the PRIM register value) in one
    // call, from the GIF bulk path (src/xbox/PUSH-BC-PLAN.md section 3.2,
    // Tier 0): a triangle strip's or fan's vertices in order, sprites as
    // vertex pairs. False (the default, and whenever the backend declines:
    // render-to-texture, widescreen): the front end kicks them one by one as
    // before.
    virtual bool SubmitPrimitives(const GSDrawState &, uint32_t /*prim*/, const GSVertex *, uint32_t /*count*/) { return false; }
    // A run of triangle strips of raw vertices for the backend's own
    // transform (the Xbox renderer's vertex programs), written by the caller
    // straight into the backend's vertex memory, so a vertex decoded from
    // the game's data is stored once. BeginXfRun takes the run's state and
    // constants (false: the caller transforms the strips itself; every strip
    // of the run must have three vertices or more) and hands out a cursor.
    // With cursor.direct the run's strips go into the backend's ring as one
    // joined strip: the caller writes each strip's records at cursor.next
    // (without reading back: the memory may be write-combined), two
    // repeated vertices first when cursor.join is set (the last record
    // written and the strip's first: degenerate triangles draw nothing),
    // moves next on and sets join; a strip that does not fit before
    // cursor.end asks GrowXfCursor for room (it takes the records written
    // so far and starts a fresh batch, join clear). Without direct (the
    // backend lays the strips out itself), EmitXfStrip takes each strip
    // from the caller's array. EndXfRun takes the cursor back and closes
    // the run; nothing else may touch the GS between BeginXfRun and
    // EndXfRun.
    virtual bool BeginXfRun(const GSDrawState &, const GSXfConstants &, GSXfCursor &) { return false; }
    virtual void GrowXfCursor(GSXfCursor &, uint32_t /*count*/) {}
    virtual void EmitXfStrip(const GSXfVertex *, uint32_t /*count*/) {}
    virtual void EndXfRun(GSXfCursor &) {}
    // Inside an open run: strips the GPU fetches from guest RAM in place
    // (M8, C-XF) instead of records written into the ring. The default does
    // nothing: the caller then writes the records as before (it checks
    // cursor.inPlaceTaken).
    virtual void XfInPlace(GSXfCursor &, const GSXfInPlaceStrip *, uint32_t /*count*/) {}
    // A native run with a bound material (B-GS phase 2). Unsupported (the
    // default): the caller uses BeginXfRun.
    virtual GSNativeRunResult BeginNativeRun(const GSNativeRun &, GSXfCursor &) { return GSNativeRunResult::Unsupported; }
    virtual void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) = 0;
    // Development: the CLUT buffer and its CLD address mirror as one value,
    // for self-checks that compare backend state (0: not tracked).
    virtual uint64_t DebugClutState() { return 0; }

    virtual void BeginTransfer(const GSTransferCommand &command) = 0;
    virtual void UploadImage(const uint8_t *data, uint32_t sizeBytes) = 0;

    virtual void Flush() = 0;
    virtual void TextureFlush() = 0;
    virtual void Sync(GSSyncReason reason) = 0;
    virtual PresentationFrame Present(const GSPresentationRequest &request) = 0;
    // Backends that run asynchronously produce the frame later, in command
    // order, and hand it to done (on their own thread). Returns false when
    // unsupported; the caller then uses Present().
    virtual bool PresentAsync(const GSPresentationRequest &, std::function<void(PresentationFrame &&)>) { return false; }

    virtual bool ClearFramebuffer(const GSContext &context, uint32_t rgba) = 0;
    virtual uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) = 0;

    virtual uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const = 0;
    virtual void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) = 0;
    virtual void SnapshotVram(std::vector<uint8_t> &out) const = 0;
    virtual GSTransferSnapshot GetTransferSnapshot() const = 0;
};

// Split screen: the game's overrides say whether it shows two or more views
// (project/game/ts_overrides.cpp, from the number of local players); what
// assumes one full-screen view - the GS front end's widescreen HUD
// narrowing - consults it. Kept in runtime/gs/gs_frontend.cpp; false until
// set.
void gsSetSplitScreen(bool split);
bool gsSplitScreen();
