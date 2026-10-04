#pragma once

#include "runtime/gs/gs_types.h"

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

class GSRasterBackend
{
public:
    virtual ~GSRasterBackend() = default;

    virtual void Initialize(uint8_t *vram, uint32_t vramSize) = 0;
    virtual void Reset() = 0;

    virtual void Submit(const GSPrimitiveBatch &batch) = 0;
    // A whole triangle strip in one call (the Xbox renderer); false when
    // the backend wants it as individual primitives.
    virtual bool SubmitStrip(const GSDrawState &, const GSVertex *, uint32_t) { return false; }
    // A run of triangle strips of raw vertices for the backend's own
    // transform (the Xbox renderer's vertex programs), written by the caller
    // straight into the backend's vertex memory, so a vertex decoded from
    // the game's data is stored once. BeginXfRun takes the run's state and
    // constants (false: the caller transforms the strips itself; every strip
    // of the run must have three vertices or more). Then, per strip, either
    // BeginXfStrip returns room for `count` vertices in strip order, which
    // the caller fills without reading back (the memory may be
    // write-combined; `first` is the strip's first vertex, which the backend
    // may need before the room exists), and EndXfStrip hands over a cached
    // copy of the strip's last vertex (strips are joined by repeated
    // vertices); or, when `direct` came back false (the backend lays the
    // strip out itself), EmitXfStrip takes the strip from the caller's
    // array. EndXfRun closes the run; nothing else may touch the GS between
    // BeginXfRun and EndXfRun.
    virtual bool BeginXfRun(const GSDrawState &, const GSXfConstants &, bool & /*direct*/) { return false; }
    virtual GSXfVertex *BeginXfStrip(uint32_t /*count*/, const GSXfVertex & /*first*/) { return nullptr; }
    virtual void EndXfStrip(const GSXfVertex & /*last*/) {}
    virtual void EmitXfStrip(const GSXfVertex *, uint32_t /*count*/) {}
    virtual void EndXfRun() {}
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
